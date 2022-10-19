#pragma once

#include "CreditHeaders.hpp"

class NYCreditBank : public CreditBank {
public:
	std::unique_ptr<Credit> createCredit(std::string type)  const override {
		if (type.compare("обычный") == 0) {
			return std::unique_ptr<Credit>(new NYCategoryRegularCredit());
		}
		else if (type.compare("плохой") == 0) {
			return std::unique_ptr<Credit>(new NYCategoryBadCredit());
		}
		else if (type.compare("привилегированный") == 0) {
			return std::unique_ptr<Credit>(new NYCategoryPrivilegedCredit());
		}
		else if (type.compare("льготный") == 0) {
			return std::unique_ptr<Credit>(new NYCategorySoftCredit());
		}
		else if (type.compare("специальный") == 0) {
			return std::unique_ptr<Credit>(new NYCategorySpecialCredit());
		}
	}
};
