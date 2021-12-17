#include <iostream>
int main() {
	setlocale(LC_ALL, "russian");
	double x,y,R,r;
	std::cout << "Введите х,у,R,r";
	std::cin >> x >> y >> R >> r;
	int a = x*x + y*y;
	if ((a < R*R) && (a > r*r))
	{
		std::cout << "in";
	}
	else {
		std::cout << "out";
	}
	return 0;
}
