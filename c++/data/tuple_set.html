//NILは番兵
template<typename T, int NIL>
struct tuple_set {
	private:
		map<T, int> _tet;
		int _n;
	public:
		//何も受け取らない O(1)
		tuple_set() : _n(0) {}
		//有効値の個数を返す O(1)
		int types() const { return _tet.size(); }
		//全要素数を返す O(1)
		int size() const { return _n; }
		//指定された値を任意の個数挿入する O(log types())
		void insert(T key, int no) {
			if(_tet.count(key)) _tet[key] += no;
			else  _tet[key] = no;
			_n += no;
			return;
		}
		//指定された値を挿入する O(log types())
		void insert(T key) { return insert(key, 1); }
		//指定された値の一斉削除を行う O(log types())
		void destroy(T key) {
			if(!_tet.count(key)) return;
			_n -= _tet[key];
			_tet.erase(key);
			return;
		}
		//値の単一削除を行う O(1)
		void erase(T key) {
			if(!_tet.count(key)) return;
			if(_tet[key] == 1) return destroy(key);
			_tet[key]--;
			_n--;
			return;
		}
		//lower_bound, 戻り値はT, 発見できない場合NILを返す O(logN)
		T lower_key(T key) {
			auto iter = _tet.lower_bound(key);
			if(iter == _tet.end()) return NIL;
			return (*iter).first;
		}
		//upper_bound, 戻り値はT, 発見できない場合NILを返す O(logN)
		T upper_key(T key) {
			auto iter = _tet.upper_bound(key);
			if(iter == _tet.end()) return NIL;
			return (*iter).first;
		}
		//値の存在判定 O(logN)
		void clear() {
			_tet.clear();
			_n = 0;
		}
		//特になし O(1)
		~tuple_set() {}
};
