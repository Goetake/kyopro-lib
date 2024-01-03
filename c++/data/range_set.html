template <class T = long long int>
struct range_set {
   private:
	const T INF = 1e15;
	T sum;
	set<pair<T, T>> st;
   public:
	range_set() : sum(0) {
		st.emplace(-INF, -INF);
		st.emplace(INF, INF);
	}
	//[l, r) is covered?
	bool covered(const T l, const T r) {
		assert(l <= r);
		if(l == r) return true;
		auto itr = prev(st.upper_bound({l, INF}));
		return itr->first <= l and r <= itr->second;
	}
	//[x, x + 1) is covered?
	bool covered(const T x) { return covered(x, x + 1); }
	// return section which covers[l, r)
	// if not exists, return[-INF, -INF)
	std::pair<T, T> covered_by(const T l, const T r) {
		assert(l <= r);
		if(l == r) return {-INF, -INF};
		auto itr = prev(st.upper_bound({l, INF}));
		if(itr->first <= l and r <= itr->second) return *itr;
		return {-INF, -INF};
	}
	// return section which covers[x, x + 1)
	// if not exists, return[-INF, -INF)
	std::pair<T, T> covered_by(const T x) { return covered_by(x, x + 1); }
	// insert[l, r), and return increment
	T insert(T l, T r) {
		assert(l <= r);
		if(l == r) return T(0);
		auto itr = prev(st.upper_bound({l, INF}));
		if(itr->first <= l and r <= itr->second) return T(0);
		T sum_erased = T(0);
		if(itr->first <= l and l <= itr->second) {
			l = itr->first;
			sum_erased += itr->second - itr->first;
			itr = st.erase(itr);
		} else
			itr = next(itr);
		while(r > itr->second) {
			sum_erased += itr->second - itr->first;
			itr = st.erase(itr);
		}
		if(itr->first <= r) {
			sum_erased += itr->second - itr->first;
			r = itr->second;
			st.erase(itr);
		}
		st.emplace(l, r);
		sum += r - l - sum_erased;
		return r - l - sum_erased;
	}
	// insert[x, x + 1), and return increment
	T insert(const T x) { return insert(x, x + 1); }
	// erase [l, r), and return decrement
	T erase(const T l, const T r) {
		assert(l <= r);
		if(l == r) return T(0);
		auto itr = prev(st.upper_bound({l, INF}));
		if(itr->first <= l and r <= itr->second) {
			if(itr->first < l) st.emplace(itr->first, l);
			if(r < itr->second) st.emplace(r, itr->second);
			st.erase(itr);
			sum -= r - l;
			return r - l;
		}
		T ret = T(0);
		if(itr->first <= l and l < itr->second) {
			ret += itr->second - l;
			if(itr->first < l) st.emplace(itr->first, l);
			itr = st.erase(itr);
		} else
			itr = next(itr);
		while(itr->second <= r) {
			ret += itr->second - itr->first;
			itr = st.erase(itr);
		}
		if(itr->first < r) {
			ret += r - itr->first;
			st.emplace(r, itr->second);
			st.erase(itr);
		}
		sum -= ret;
		return ret;
	}
	// erase [x, x + 1), and return decrement
	T erase(const T x) { return erase(x, x + 1); }
	int size() const { return (int)st.size() - 2; }
	T mex(const T x = 0) const {
		auto itr = prev(st.upper_bound({x, INF}));
		if(itr->first <= x and x < itr->second)
			return itr->second;
		else
			return x;
	}
	T sum_all() const { return sum; }
	std::set<std::pair<T, T>> get() const {
		std::set<std::pair<T, T>> res;
		for(auto &p : st) {
			if(std::abs(p.first) == INF) continue;
			res.emplace(p.first, p.second);
		}
		return res;
	}
	void dump() const {
		std::cout << "range_set:";
		for(auto &p : st) {
			if(std::abs(p.first) == INF) continue;
			std::cout << "[" << p.first << "," << p.second << "),";
		}
		std::cout << '\n';
	}
};
