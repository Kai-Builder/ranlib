//
// Created by seymo on 2/1/2021.
//
#include <random>
#include <utility>
#include <iostream>
#include <functional>
#include <fstream>

#define push(x) std::cout << x << std::endl

#ifndef RANLIB_RANDOMGEN_H
#define RANLIB_RANDOMGEN_H

class Generator {
public:
	virtual void generate(int min, int max) {
		std::random_device device;
		std::mt19937 generator(device());
		std::uniform_int_distribution<int> distribution(min, max);
		push(distribution(generator));
	}
	virtual void AutoArray(int max) {
		std::random_device device;
		std::mt19937 generator(device());
		std::uniform_int_distribution<int> distribution(0, max);
		push(distribution(generator));
	}
	virtual int MaxMem() {
		std::random_device device;
		std::mt19937 generator(device());
		std::uniform_int_distribution<long long int> distribution(0, 102318923);
		return distribution(generator);
	}
};

#endif //RANLIB_RANDOMGEN_H
