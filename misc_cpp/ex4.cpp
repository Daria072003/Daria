#include<cmath>
#include<iostream>
int main() {
	setlocale(LC_ALL, "russian");
	float x, eps;
	std::cin >> x >> eps;
	float sum = 0, n = 1;
	while (abs(n) >= eps){
		sum += n;
		n *= x;
	}
	std::cout << sum << "  " << 1 / (1 - x);
}
