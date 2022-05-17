#ifndef NumericArray_HPP
#define NumericArray_HPP
#include <iostream>
#include <string>
#include "ArrayException.hpp"
#include "Array.hpp"
using namespace std;

namespace PAULLOPEZ {
	namespace CONTAINERS {
		using namespace CAD;
		template <typename T>
		class NumericArray :public Array<T> {
		public:
			NumericArray(); //constructor that creates array with 10 points in it
			NumericArray(const int n); //initialization with dynamic variable
			NumericArray(const NumericArray<T>& arr); //Copy constructor
			~NumericArray(); //destructor

			NumericArray<T>& operator = (const NumericArray<T>& source); // Assignment operator.
			NumericArray<T> operator * (double factor);
			NumericArray<T> operator + (const NumericArray<T>& source);
			double DotProduct(const NumericArray<T>& arr1);
		};
	}
}
#endif