#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	std::cout << "������� ������ �����: ";
	std::cin  >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "���� �����: " << a << ", " << b;

	return 0;
}
