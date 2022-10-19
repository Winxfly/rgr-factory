#include "CreditHeaders.hpp"

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");

	std::unique_ptr<CreditBank> nyBank(new NYCreditBank());
	std::unique_ptr<CreditBank> chicagoBank(new ChicagoCreditBank());

	std::unique_ptr<Credit> credit;

	credit = nyBank->creditInformation("�������");
	credit = nyBank->creditInformation("������");
	credit = nyBank->creditInformation("�����������������");
	credit = nyBank->creditInformation("��������");
	credit = nyBank->creditInformation("�����������");

	credit = chicagoBank->creditInformation("�������");
	credit = chicagoBank->creditInformation("������");
	credit = chicagoBank->creditInformation("�����������������");
	credit = chicagoBank->creditInformation("��������");
	credit = chicagoBank->creditInformation("�����������");

	return 0;
}