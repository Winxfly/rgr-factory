#pragma once

#include "CreditHeaders.hpp"

class NYCategorySpecialCredit : public Credit {
public:
	NYCategorySpecialCredit() {
		setNameCredit("NY Credit Bank: ���������: ���������� ������.");
		setPercentCredit(9);
		setSumCredit(750000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 3;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "��������� ����� �������: " << getSumCredit() << std::endl;
	}

	void possiblePercentCredit() override {
		std::cout << "��������� ������� �������: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "�������� ����� � ������� �� 3 ����: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};