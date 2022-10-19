#pragma once

#include "CreditHeaders.hpp"

class CreditBank {
protected:
	CreditBank() {}

public:
	virtual ~CreditBank() = 0 {}
	
	virtual std::unique_ptr<Credit> createCredit(std::string type) const = 0;
	std::unique_ptr<Credit> creditInformation(std::string type) const {
		std::unique_ptr<Credit> credit(createCredit(type));
		std::cout << "\n--- Условия от " << credit->getNameCredit() << " ---" << std::endl;
		credit->possiblePercentCredit();
		credit->possibleSumCredit();
		credit->showDemoCalc();
		return credit;
	}
};