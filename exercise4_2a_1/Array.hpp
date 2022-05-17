#ifndef Array_HPP
#define Array_HPP
#include <iostream>
#include <string>
#include "ArrayException.hpp"
using namespace std;

namespace PAULLOPEZ {
	namespace CONTAINERS {
		using namespace CAD;

		template <typename T> 
		class Array {
		private:
			int size;
			T* table; //used to be CAD::Point*

		public:
			Array(); //constructor that creates array with 10 points in it
			Array(const int n); //initialization with dynamic variable
			Array(const Array<T>& arr); //Copy constructor
			~Array(); //destructor
			

			//operator time
			Array<T>& operator = (const Array<T>& source); // Assignment operator.
			T& operator [] (int index); // read and write version
			const T& operator [] (const int index) const; //read only version


			int Size() const; //Size function
			void SetElement(const T& pt, const int n); //Setter
			T GetElement(const int n) const; //Getter
			

		};

	}
}


#ifndef Array_cpp // Must be the same name as in source file #define
#include "Array.cpp"
#endif


#endif