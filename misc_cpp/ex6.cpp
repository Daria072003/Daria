#include<cmath>
#include<iostream>
int main() {
	setlocale(LC_ALL, "russian");
	const double height = 21., width = 41.;
	for (double y = -1.5; y <= 1.5; y += 3. / height) {
		for (double x = -1.5; x <= 1.5; x += 3. / width) {
			double f = pow(x * x + y * y - 1, 3) - x * x * y * y * y;
			if (f <= 0) {
				std::cout << "*";
			}
			else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
