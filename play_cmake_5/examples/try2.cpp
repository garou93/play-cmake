#include <iostream>
#include <cassert>
#include "seqret.hpp"

int main(int argc, char** argv) {
	std::cout << "m(9.) = " << m(9.) << std::endl;
	assert(m(9.) == 3.);
	return 0;
}