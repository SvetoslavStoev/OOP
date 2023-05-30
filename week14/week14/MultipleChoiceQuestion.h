#ifndef MULTIPLECHOICEQUESTION.h
#define MULTIPLECHOICEQUESTION.h
#include "Question.h"
#include<iostream>
#include<vector>
class MultipleChoiceQuestion:public Question {
public:
	MultipleChoiceQuestion(std::vector <bool> answers_, std::vector<std::pair <int, std::string>>statement_,int maxPoints_,int points_) {
		for (size_t i = 0; i < answers_.max_size(); i++)
		{
			answers[i] = answers_[i];
		}
		for (size_t i = 0; i < statement_.max_size(); i++)
		{
			statement[i].first = statement_[i].first;
			statement[i].second = statement_[i].second;
		}
		maxPoitns = maxPoints_;
		points = points_;
	}
	void resize() {
		if (answers.max_size() > statement.max_size()) {
			answers.resize(statement.max_size());
		}
		else if (answers.max_size() < statement.max_size()) {
			statement.resize(answers.max_size());
		}
	}
	void ask()override {
		std::string ans;
		print();
		resize();
		for (size_t i = 0; i < statement.max_size(); i++)
		{
			std::cout << statement[i].first << " " << statement[i].second << '\n';
			std::cout << "Answer:" << ' ';
			std::cin >> ans;
			grade(ans);
		}
		this->i = 0;
	}
	void print()override {
		std::cout << question;
	}
	void grade(std::string ans)override {
		int trueAnsCount = 0;
		for (size_t i = 0; i < answers.max_size(); i++)
		{
			if (answers[i]==1)
			{
				trueAnsCount++;
			}
		}
		if ((ans=="Yes"&&answers[i]==1)||(ans=="No"&&answers[i]==0))
		{
			points += maxPoitns / trueAnsCount;
		}
		else
		{
			points -= maxPoitns / trueAnsCount;
		}
		if (points < 0) {
			points == 0;
		}
	}
private:
	std::vector <bool> answers;
	std::vector<std::pair <int,std::string>>statement;
	int i=0;
	int maxPoitns;
};

#endif
