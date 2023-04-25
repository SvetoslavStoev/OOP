#include <iostream>

template<typename T>
T swap(T a,T b){
	T temp = a;
	a = b;
	b = temp;
}
