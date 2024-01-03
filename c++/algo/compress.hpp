template<typename T>
vector<int> compress(const vector<T> & _vec) {
    vector<int> _cp = _vec;
    sort(_cp.begin(), _cp.end());
    _cp.erase(unique(_cp.begin(), _cp.end()), _cp.end());
    vector<int> _ret(_vec.size());
    for (int i = 0; i < (int)(_vec.size()); ++i) {
        _ret[i] = lower_bound(_cp.begin(), _cp.end(), _vec[i]) - _cp.begin();
    }
	return _ret;
}
