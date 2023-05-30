#ifndef QUESTION_H
#define QUESTION_H
#include <vector>
#include <iostream>
class Question {
public:
	virtual void ask() {

	}

	virtual void grade(std::string ans) {

	}

	virtual void print() {

	}
	virtual ~Question() {

	}
	static bool validYesNoAnswer(const std::string& ans) {
		if (ans != YES || ans != NO) {
			return 0;
		}
		return 1;
	}
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes) {
		if ((correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO)) {
			return 1;
		}
		return 0;
	}
protected:
	static const std::string YES;
	static const std::string NO;
	std::string question;
	int points=0;
};

#endif