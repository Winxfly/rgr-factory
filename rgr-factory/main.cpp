#include "CreditHeaders.hpp"

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");

	std::unique_ptr<CreditBank> nyBank(new NYCreditBank());
	std::unique_ptr<CreditBank> chicagoBank(new ChicagoCreditBank());

	std::unique_ptr<Credit> credit;

	credit = nyBank->creditInformation("обычный");
	credit = nyBank->creditInformation("плохой");
	credit = nyBank->creditInformation("привилегированный");
	credit = nyBank->creditInformation("льготный");
	credit = nyBank->creditInformation("специальный");

	credit = chicagoBank->creditInformation("обычный");
	credit = chicagoBank->creditInformation("плохой");
	credit = chicagoBank->creditInformation("привилегированный");
	credit = chicagoBank->creditInformation("льготный");
	credit = chicagoBank->creditInformation("специальный");

	return 0;
}