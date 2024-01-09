struct BIT {
	private:
		vector<int> vec;
	public:
		//indexは0始まり O(logN)
		void add(int index, int d) {
			assert(0 <= index && index < vec.size());
			index++;
			for(; index < (int)(vec.size()); index += (index & -index)) vec[index] += d;
		}
		//[0, index)の和を取得 O(logN) [但し[0, 0) = 0]]
		int sum(int index) {
			if(index == 0) return 0;
			assert(0 < index && index <= vec.size());
			int ret = 0;
			for(; index > 0; index -= index & -index) ret += vec[index];
			return ret;
		}
		//[l, r)の和を取得 O(logN)
		int get(int l, int r) { return sum(r) - sum(l); }
		BIT() {} //O(1)
		BIT(const int & N) { vec.resize(N + 1, 0); } //O(1)?
		BIT(const vector<int> & Input) { //O(logN)
			vec = vector<int>(Input.size() + 1, 0);
			for(int i = 0; i < (int)(Input.size()); i++) add(i + 1, Input[i]);
		}
};
