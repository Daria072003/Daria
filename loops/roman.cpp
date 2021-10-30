#include <iostream>
int main() {
	int Number, a1, a2, a3, a4, a5;
	std::cin >> Number;
	a1 = Number / 1000;
	Number = Number % 1000; 
	for (int count = 0; count < a1; ++count) {
		std::cout << "M";
	}
	if ((Number/100) == 9) {
		std::cout << "CM";
		Number = Number % 900;
	}
	else {
        a2 = Number / 500;
	    if (a2 == 1) {
			std::cout << "D";
			Number = Number % 500;
	    }
	}
	a3 = Number / 100;
	if (a3 == 4) {
		std::cout << "CD";
	}
	else {
		for (int count = 0; count < a3; ++count) {
			std::cout << "C";
		}
	}
	Number = Number % 100;
	if ((Number / 10) == 9) {
		std::cout << "XC";
		Number = Number % 90;
	}
	else {
		a5 = Number / 50;
		if (a5 == 1) {
			std::cout << "L";
			Number = Number % 50;
		}
	}
	a4 = Number / 10;
	if (a4 == 4) {
		std::cout << "XL";
	}
	else {
		for (int count = 0; count < a4; ++count) {
			std::cout << "X";
		}
	}
	Number = Number % 10;
	if (Number == 9) {
		std::cout << "IX";
		Number = 0;
	}
	else {
		if ((Number / 5) == 1) {
			std::cout << "V";
			Number = Number - 5;
		}
	}
	if (Number == 4) {
		std::cout << "VI";
	}
	else {
		for (int count = 0; count < Number; ++count) {
		   std::cout << "I";
	    }
	}
	return 0;
}
