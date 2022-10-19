#pragma once

#include "CreditHeaders.hpp"

class NYCategoryPrivilegedCredit : public Credit {
public:
	NYCategoryPrivilegedCredit() {
		setNameCredit("NY Credit Bank: ���������: �����������������.");
		setPercentCredit(8);
		setSumCredit(900000);
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