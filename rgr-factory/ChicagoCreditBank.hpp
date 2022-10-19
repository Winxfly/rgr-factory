#pragma once

#include "CreditHeaders.hpp"

class ChicagoCreditBank : public CreditBank {
public:
	std::unique_ptr<Credit> createCredit(std::string type)  const override {
		if (type.compare("обычный") == 0) {
			return std::unique_ptr<Credit>(new ChicagoCategoryRegularCredit());
		}
		else if (type.compare("плохой") == 0) {
			return std::unique_ptr<Credit>(new ChicagoCategoryBadCredit());
		}
		else if (type.compare("привилегированный") == 0) {
			return std::unique_ptr<Credit>(new ChicagoCategoryPrivilegedCredit());
		}
		else if (type.compare("льготный") == 0) {
			return std::unique_ptr<Credit>(new ChicagoCategorySoftCredit());
		}
		else if (type.compare("специальный") == 0) {
			return std::unique_ptr<Credit>(new ChicagoCategorySpecialCredit());
		}
	}
};