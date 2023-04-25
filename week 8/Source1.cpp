template <typename T1,typename T2>
class Set {
public:
	Set() {
		size_ = 5;
		elementsInSet_ = 0;
		set_ = nullptr;
	}
    Set(T1 set,int size) {
		set_ = new T1[size];
		int counter=0;
		for (size_t i = 0; i < size; i++)
		{
			set_[i] = set[i];
			counter++;
		}
		size_ = size;
		elementsInSet_ = counter;
	}
	Set(Set const& other) {
		size_ = other.size_;
		elementsInSet_ = other.elementsInSet_;
		delete[] set_;
		set_ = new T1[other.size_];
		for (size_t i = 0; i < other.size_; i++)
		{
			set_[i] = other.set_[i];
		}
	}
	~Set() {
		delete[] set_;
		set_ = nullptr;
		size_ = 0;
		elementsInSet_ = 0;
	}
	Set& operator=(Set const& other) {
		if (this!=const* other)
		{
			size_ = other.size_;
			elementsInSet_ = other.elementsInSet_;
			delete[] set_;
			set_ = new T1[other.size_];
			for (size_t i = 0; i < other.size_; i++)
			{
				set_[i] = other.set_[i];
			}
		}
		return this;
	}
	void add(T2 thing) {
		if (elementsInSet_>=size_)
		{
			
			newSize_ = 2*size_;
			T1 temp = new T1[newSize_];
			for (int i = 0; i < size_; i++)
			{
				temp[i] = set_[i];
			}
			delete[] set_;
			set_ = new T1[newSize_];
			for (int i = 0; i < newSize_; i++)
			{
				set_[i] = temp[i];
			}
			size_ = newSize_;
			delete[] temp;
			temp = nullptr;
		}
		set_[elementsInSet_] = thing;
		elementsInSet_++;
	}
	bool isEmpty() {
		if (set_==nullptr)
		{
			return true;
		}
		return false;
	}
	void print() {
		for (size_t i = 0; i < size_; i++)
		{
			std::cout << size_[i] << '\n';
		}
	}
	bool contains(T2 thing) {
		for (size_t i = 0; i < size_; i++)
		{
			if (set_[i]==T2 thing)
			{
				return true;
			}
		}
		return false;
	}
private:
    T1 set_;
	int size_;
	int elementsInSet_;
};
