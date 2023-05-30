#ifndef YESNOQUESTION_H
#define YESNOQUESTION_H
#include <vector>
#include <iostream>
#include "Question.h"
class YesNoQuestion:public Question {
public:
	YesNoQuestion(const std::string& trueAns_,int points_, const std::string& question_) {
		trueAns = trueAns_;
		points = points_;
		question = question_;
	}
	void ask() override{
		print();
		std::cout << "Answer:";
		std::string ans;
		std::cin >> ans;
		grade(ans);
}
	void grade(std::string ans) override {
		if (ans != trueAns) {
			std::cout << "0 points.";
		}
		else {
			std::cout << points << "points.";
		}
	}
	void print() override {
		std::cout << question<<'\n';
	}
private:
	std::string trueAns;
};

#endif // YESNOQUESTION_H
