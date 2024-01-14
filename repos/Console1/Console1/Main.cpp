#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	std::cout << "Введите первое число: ";
	std::cin  >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Ваши числа: " << a << ", " << b;

	return 0;
}
