#ifndef BASEPERSON_H
#define BASEPERSON_H

class BasePerson {
public:
	virtual ~BasePerson() = default;
	virtual void display()=0 {}
	virtual BasePerson& clone()const =0{}
};

#endif