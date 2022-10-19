#pragma once

#include "CreditHeaders.hpp"

class Credit {
private:
	std::string nameCredit;
	float percentCredit;
	float sumCredit;
	

public:
	Credit() {}

	virtual ~Credit() = 0 {}

	virtual void possibleSumCredit() {
		std::cout << "Возможная сумма кредита" << std::endl;
	}

	virtual void possiblePercentCredit() {
		std::cout << "Возможный процент кредита" << std::endl;
	}

	virtual float demonstrativeCalc(float _sumCredit, float _percentCredit) {
		int years = 2;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	virtual void showDemoCalc() {
		std::cout << "Итоговая сумма к выплате за 2 года: xxx\n";
	}

	std::string getNameCredit() const {
		return nameCredit;
	}

	float getSumCredit() const {
		return sumCredit;
	}

	float getPercentCredit() const {
		return percentCredit;
	}

	void setNameCredit(std::string name) {
		nameCredit = name;
	}

	void setSumCredit(float sum) {
		sumCredit = sum;
	}

	void setPercentCredit(float percent) {
		percentCredit = percent;
	}
};