#include <iostream>
int add2(int i) {
	int J = i + 5;
	return J;
}
int multiply(int a = 8, int b = 7) {
	return a * b;
}
int  main() {
	std::cout << add2(10) << std::endl;
	std::cout << multiply(10) << std::endl;
	return 0;
}
