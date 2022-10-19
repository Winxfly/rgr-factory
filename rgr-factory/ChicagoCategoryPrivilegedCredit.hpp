#pragma once

#include "CreditHeaders.hpp"

class ChicagoCategoryPrivilegedCredit : public Credit {
public:
	ChicagoCategoryPrivilegedCredit() {
		setNameCredit("Chicago Credit Bank: категория: привилегированная.");
		setPercentCredit(10);
		setSumCredit(900000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 3;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "Возможная сумма кредита: " << getSumCredit() << std::endl;
	}

	void possiblePercentCredit() override {
		std::cout << "Возможный процент кредита: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "Итоговая сумма к выплате за 3 года: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};