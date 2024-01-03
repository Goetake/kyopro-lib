template<typename ELEMENT_TYPE>
struct matrix {
	private:
		vector<vector<ELEMENT_TYPE>> vec;
	public:
		using normal = matrix<ELEMENT_TYPE>;
		matrix() {}
		matrix(size_t H, size_t W) { vec.resize(H, vector<ELEMENT_TYPE>(W)); }
		matrix(size_t H, size_t W, ELEMENT_TYPE e) { vec.resize(H, vector<ELEMENT_TYPE>(W, e)); }
		matrix(vector<vector<ELEMENT_TYPE>> Input) {
			for(size_t i = 0; i != Input.size(); i++) {
				vector<ELEMENT_TYPE> tmp;
				for(size_t j = 0; j != Input[0].size(); j++) tmp.push_back(Input[i][j]);
				vec.push_back(tmp);
			}
		}
		//行サイズ
		size_t row_size() { return vec.size(); }
		//列サイズ
		size_t column_size() { return vec[0].size(); }


		normal operator=(normal T) {
			for(size_t i = 0; i != this -> row_size(); i++)
				for(size_t j = 0; j != this -> column_size(); j++)
					this->vec[i][j] = T[i][j];
			return (*this);
		}
		//二つ目のoperator[]はvectorに任す
		vector<ELEMENT_TYPE> & operator[](size_t index) { return vec[index]; }
		//+
		normal operator+(normal T) {
			normal ret(this->row_size(), this->column_size());
			//+計算
			for(size_t i = 0; i != this->row_size(); i++)
				for(size_t j = 0; j != this->column_size(); j++)
					ret[i][j] = vec[i][j] + T[i][j];
			//+計算終了
			return ret;
		}
		//-
		normal operator-(normal T) {
			normal ret(this->row_size(), this->column_size());
			//-計算
			for(size_t i = 0; i != this->row_size(); i++)
				for(size_t j = 0; j != this->column_size(); j++)
					ret[i][j] = vec[i][j] - T[i][j];
			//-計算終了
			return ret;
		}
		//*
		normal operator*(normal T) {
			normal ret(this->row_size(), T.column_size());
			//*計算
			for(size_t i = 0; i != this->row_size(); i++) {
				for(size_t j = 0; j != T.column_size(); j++) {
					ELEMENT_TYPE element_ret = 0;
					for(size_t k = 0; k != this->column_size(); k++) 
						element_ret += vec[i][k] * T[k][j];
					ret[i][j] = element_ret;
				}
			}
			//*計算終了
			return ret;
		}
		template<typename REMAINDER_ELEMENT>
		//%
		normal operator%(REMAINDER_ELEMENT T) {
			normal ret(this->row_size(), this->column_size());
			//%計算
			for(size_t i = 0; i != this->row_size(); i++)
				for(size_t j = 0; j != this->column_size(); j++)
					ret[i][j] = vec[i][j] % T;
			//%計算終了
			return ret;
		}
		//+=
		normal operator+=(normal T) {
			(*this) = (*this) + T;
			return (*this);
		}
		//-=
		normal operator-=(normal T) {
			(*this) = (*this) - T;
			return (*this);
		}
		//*=
		normal operator*=(normal T) {
			(*this) = (*this) * T;
			return (*this);
		}
		template<typename REMAINDER_ELEMENT>
		//%=
		normal operator%=(REMAINDER_ELEMENT T) {
			(*this) = (*this) * T;
			return (*this);
		}
};
