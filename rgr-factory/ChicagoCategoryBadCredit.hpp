#pragma once

#include "CreditHeaders.hpp"

class ChicagoCategoryBadCredit : public Credit {
public:
	ChicagoCategoryBadCredit() {
		setNameCredit("Chicago Credit Bank: ���������: �������� � ������ ��������� ��������.");
		setPercentCredit(23);
		setSumCredit(225000);
	}

	float demonstrativeCalc(float _sumCredit, float _percentCredit) override {
		int years = 7;
		return _sumCredit + (_sumCredit / 100) * _percentCredit * years;
	}

	void possibleSumCredit() override {
		std::cout << "��������� ����� �������: " << getSumCredit() << std::endl;
	}

	void possiblePercentCredit() override {
		std::cout << "��������� ������� �������: " << getPercentCredit() << std::endl;
	}

	void showDemoCalc() override {
		std::cout << "�������� ����� � ������� �� 7 ���: " << demonstrativeCalc(getSumCredit(),
			getPercentCredit()) << std::endl;
	}
};