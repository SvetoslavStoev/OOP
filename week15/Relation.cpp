#include <iostream>
#include <string>
template<typename T>
class RelationElement {
public:
	RelationElement(T subject_, T object_, std::string relation_) {
		subject = subject_;
		object = object_;
		relation = relation_;
	}
	void print() {
		std::cout << subject << ' ' << relation << ' ' << object;
	}

private:
	T subject;
	T object;
	std::string relation;
};

template<>
class RelationElement<int> {
public:
	RelationElement(int subject_,  int object_, std::string relation_) {
		object = object_;
		subject = subject_;
		relation = relation_;
	}
	void print() {
		
			std::cout << composition;
	
	}
	void operator*(const RelationElement& r2) {
		
		if (this->object == r2.subject) {
			composition = std::to_string(this->subject) + " " + this->relation + " " + std::to_string(r2.subject) + " which " + r2.relation;
			
		}
		else{ 
			composition = std::to_string(this->subject) + " " + this->relation + " " + std::to_string(r2.subject); 
		}
	}

private:
	int subject;
	int object;
	std::string relation;
	std::string composition;
};


int main() {
	RelationElement<int> r1(2, 6, "is smaller than"), r2(6, 3, "is divisible by");
	r1 * r2;
	r1.print();
}

