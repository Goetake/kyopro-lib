namespace soshy::cpp::algo {
	template<typename T>
	vector<int> compress_sub(const vector<T> & _vec, int & _n) {
		vector<int> _cp = _vec;
		sort(_cp.begin(), _cp.end());
		_cp.erase(unique(_cp.begin(), _cp.end()), _cp.end());
		_n = _cp.size();
		vector<int> _ret(_vec.size());
		for (int i = 0; i < (int)(_vec.size()); ++i) {
			_ret[i] = lower_bound(_cp.begin(), _cp.end(), _vec[i]) - _cp.begin();
		}
		return _ret;
	}
}
template<typename T>
int No_of_falls(const vector<T> & _vec) {
	int _n;
	vector<int> _f = soshy::cpp::algo::compress_sub(_vec, _n);
	fenwick_tree<int> _bit_fw(_n);
	int _ret = 0;
	for(int i = 0; i < _f.size(); i++) {
		_ret += i - _bit_fw.sum(0, _f[i] + 1);
		_bit_fw.add(_f[i], 1);
	}
	return _ret;
}
