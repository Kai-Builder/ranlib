//
// Created by seymo on 2/1/2021.
//
#include <vector>
#define vec(x, name, contents) std::vector<x> name{contents}
#ifndef RANLIB_RANDOMNAMESPACE_H
#define RANLIB_RANDOMNAMESPACE_H

namespace Random {
	class OldEngine {
	public:
		virtual void old_engine(int max) {
			push(rand() % max);
		}
	};
	namespace VStream {
		void VecCalculateINT (int pos1 , int pos2 , const std::vector < int >&x ) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
		void VecCalculateBOOL(int pos1, int pos2, const std::vector <bool>&x) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
		void VecCalculateLINT(int pos1, int pos2, const std::vector <long int>&x) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
		void VecCalculate(int pos1, int pos2, const std::vector <long long int>&x) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
		void VecCalculateLDOUBLE(int pos1, int pos2, const std::vector <long double>&x) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
		void VecCalculateDOUBLE(int pos1, int pos2, const std::vector <double>&x) {
			std::random_device device;
			std::mt19937 generator(device());
			std::uniform_int_distribution<int> distribution(pos1, pos2);
			
			push(x[distribution(generator)]);
		}
	}
}
namespace rtd {
	namespace debug { int test() { return 109283710; } }
	namespace engine { }
	namespace v1 { }
}
#endif //RANLIB_RANDOMNAMESPACE_H
