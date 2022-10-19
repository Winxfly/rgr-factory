#pragma once

#include "CreditHeaders.hpp"

class ChicagoCategorySoftCredit : public Credit {
public:
	ChicagoCategorySoftCredit() {
		setNameCredit("Chicago Credit Bank: категория: льготная.");
		setPercentCredit(4);
		setSumCredit(750000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 2;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "Возможная сумма кредита: " << getSumCredit() << std::endl;
	}

	void possiblePercentCredit() override {
		std::cout << "Возможный процент кредита: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "Итоговая сумма к выплате за 2 года: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};