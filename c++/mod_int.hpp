struct mod_int {
	private:
		int val;
		static int mod;
	public:
		operator int () { return val; }
		template<typename T>
		mod_int(T input) {
			int tmp = static_cast<int>(input) % mod;
			val = (tmp >= mod ? tmp - mod : tmp);
		}
		mod_int() {}
		static int set_mod(int MOD) { return mod = MOD; }
		int get_mod() { return mod; }
		template<typename T>
		mod_int inv(T a) {
			int b = mod, u = 1, v = 0, A = static_cast<int>(a);
			while (b) {
				int t = A / b;
				A -= t * b; swap(A, b);
				u -= t * v; swap(u, v);
			}
			return (mod_int)(u);
		}
		//operator達
		template<typename T>
		mod_int operator+(T a) {
			return (mod_int)(this->val + static_cast<int>(a));
		}
		template<typename T>
		mod_int operator-(T a) {
			return (mod_int)(this->val - static_cast<int>(a));
		}
		template<typename T>
		mod_int operator*(T a) {
			return (mod_int)(this->val * static_cast<int>(a));
		}
		template<typename T>
		mod_int operator/(T a) {
			return (*this) * inv(a);
		}
		//複合演算子
		template<typename T>
		mod_int & operator+=(T a) {
			return *this = (*this) + a;
		}
		template<typename T>
		mod_int & operator-=(T a) {
			return *this = (*this) - a;
		}
		template<typename T>
		mod_int & operator*=(T a) {
			return *this = (*this) * a;
		}
		template<typename T>
		mod_int & operator/=(T a) {
			return *this = (*this) / a;
		}
		// 前置インクリメント
		mod_int& operator++() {
			val = (val == mod - 1 ? 0 : val + 1);
			return *this;
		}
		// 後置インクリメント
		mod_int operator++(signed) {
			mod_int tmp = *this;
			++(*this);
			return tmp;
		}
		// 前置デクリメント
		mod_int& operator--() {
			val = (val == 0 ? mod - 1 : val - 1);
			return *this;
		}
		// 後置デクリメント
		mod_int operator--(signed) {
			mod_int tmp = *this;
			--(*this);
			return tmp;
		}
		// 代入演算子
		template<typename T>
		mod_int& operator=(T a) {
			int tmp = (static_cast<int>(a) % mod + mod);
			val = (tmp >= mod ? tmp - mod : tmp);
			return *this;
		}
		//比較演算子
		template<typename T>
		bool operator==(T a) const {
			return val == static_cast<int>(a);
		}
		template<typename T>
		bool operator!=(T a) const {
			return val != static_cast<int>(a);
		}
		template<typename T>
		bool operator<(T a) const {
			return val < static_cast<int>(a);
		}
		template<typename T>
		bool operator<=(T a) const {
			return val <= static_cast<int>(a);
		}
		template<typename T>
		bool operator>(T a) const {
			return val > static_cast<int>(a);
		}
		template<typename T>
		bool operator>=(T a) const {
			return val >= static_cast<int>(a);
		}
		template<typename T>
		mod_int pow(T index) {
			return (mod_int)(atcoder::pow_mod(val, static_cast<int>(index), mod));
		}
		//入出力関係
		friend std::ostream& operator<<(std::ostream& os, const mod_int& x) {
			return os << x.val;
		}
		friend std::istream& operator>>(std::istream& is, mod_int& x) {
			int tmp;
			is >> tmp;
			x = mod_int(tmp);
			return is;
		}
};
int mod_int::mod = 998244353;
