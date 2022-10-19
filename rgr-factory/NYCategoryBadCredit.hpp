#pragma once

#include "CreditHeaders.hpp"

class NYCategoryBadCredit : public Credit {
public:
	NYCategoryBadCredit() {
		setNameCredit("NY Credit Bank: категория: граждане с плохой кредитной историей.");
		setPercentCredit(25);
		setSumCredit(100000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 5;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "Возможная сумма кредита: " << getSumCredit() << std::endl;		
	}

	void possiblePercentCredit() override {
		std::cout << "Возможный процент кредита: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "Итоговая сумма к выплате за 5 лет: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};