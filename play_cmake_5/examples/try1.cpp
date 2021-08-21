#include <iostream>
#include <cassert>
#include "fonct_exp.hpp"

int main(int argc, char** argv) {
	std::cout << "f(3) = " << f(3) << std::endl;
	assert(f(3) == 9);
	return 0;
}