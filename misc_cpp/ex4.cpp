#include<cmath>
#include<iostream>
int main() {
	setlocale(LC_ALL, "russian");
	double x, eps;
	std::cin >> x >> eps;
	double sum = 0, n = 1;
	while (abs(n) >= eps){
		sum += n;
		n *= x;
	}
	std::cout << sum << "  " << 1 / (1 - x);
	return 0;
}
