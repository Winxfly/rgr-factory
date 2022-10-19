#pragma once

#include "CreditHeaders.hpp"

class NYCategoryBadCredit : public Credit {
public:
	NYCategoryBadCredit() {
		setNameCredit("NY Credit Bank: ���������: �������� � ������ ��������� ��������.");
		setPercentCredit(25);
		setSumCredit(100000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 5;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "��������� ����� �������: " << getSumCredit() << std::endl;		
	}

	void possiblePercentCredit() override {
		std::cout << "��������� ������� �������: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "�������� ����� � ������� �� 5 ���: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};