#pragma once

#include "CreditHeaders.hpp"

class ChicagoCategoryBadCredit : public Credit {
public:
	ChicagoCategoryBadCredit() {
		setNameCredit("Chicago Credit Bank: категория: граждане с плохой кредитной историей.");
		setPercentCredit(23);
		setSumCredit(225000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 7;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "Возможная сумма кредита: " << getSumCredit() << std::endl;
	}

	void possiblePercentCredit() override {
		std::cout << "Возможный процент кредита: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "Итоговая сумма к выплате за 7 лет: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};