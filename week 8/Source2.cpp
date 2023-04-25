template <typename T1, typename T2,typename T3, typename T4>
class Dictionary {
public:
	Dictionary() {
		size_ = 5;
		key_ = nullptr;
		value_ = nullptr;
	}
	~Dictionary() {
		delete[] key_;
		key_ = nullptr;
		size_ = 0;
		numPairs_ = 0;
	}
	void add(T3 thing1,T4 thing2) {
		if (numPairs_ >= size_)
		{

			newSize_ = 2 * size_;
			if (newSize_>maxSize_)
			{
				if (size=>maxSize_)
				{
					throw std::exception("Dictionary size cannot exceed 100 pages.")
				}
				else
				{
					newSize_ == maxSize_;
				}
			}
			T1 temp1 = new T1[newSize_];
			T2 temp2 = new T2[newSize_];
			for (int i = 0; i < size_; i++)
			{
				temp1[i] = key_[i];
				temp2[i] = value_[i];
			}
			delete[] key_;
			delete[] value_;
			key_ = new T1[newSize_];
			value_ = new T2[newSize_];
			for (int i = 0; i < newSize_; i++)
			{
				key_[i] = temp1[i]  ;
				value_[i] = temp2[i] ;
			}
			size_ = newSize_;
			delete[] temp1;
			temp1 = nullptr;
			delete[] temp2;
			temp2 = nullptr;
		}
		key[numPairs_] = thing1;
		value_[numPairs_] = thing;
		numPairs_++;
	}
	void remove(T3 thing) {
		for (size_t i = 0; i < size_; i++)
		{
			if (key_[i]==thing)
			{
				delete key_[i];
				delete value_[i];
			}
		}
	}
	T2 operator[](T3 thing) {
		for (size_t i = 0; i < size_; i++)
		{
			if (key[i] == thing)
			{
				return value[i];
			}
		}
		throw std::exception("There is no value that is conected to this key.");
	}
	bool contains(T3 thing) {
		for (size_t i = 0; i < size_; i++)
		{
			if (key_[i] == T3 thing)
			{
				return true;
			}
		}
		return false;
	}
	int size()const {
		return numPairs_;
	}
private:
	T1 key_;
	T2 value_;
	int maxSize_ = 100;
	int numPairs_ = 0;
	int size_;
};