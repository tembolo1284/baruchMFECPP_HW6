#ifndef NumericArray_CPP
#define NumericArray_CPP
#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "NumericArray.hpp"
#include "ArrayException.hpp"
#include "Array.hpp"
#include <cmath>
#include <sstream>

namespace PAULLOPEZ {
	namespace CONTAINERS {
		template <typename T>
		NumericArray<T>::NumericArray() : Array<T>() {
			//cout << "Default POINT constructor says hello to you." << endl;
		}
		template <typename T>
		NumericArray<T>::NumericArray(const int n) : Array<T>(n) {
			//cout << "This is another ARRAY constructor." << endl;
		}
		template <typename T>
		NumericArray<T>::NumericArray(const NumericArray<T>& arr) : Array<T>(arr) {
			//cout << "Copy POINT constructor says Hello to you." << endl;
		}
		template <typename T>
		NumericArray<T>::~NumericArray() {
			cout << "Bye bye NumericARRAY..." << endl;
		}

		template <typename T>
		double NumericArray<T>::DotProduct(const NumericArray<T>& arr1) {
			double result{};
			int thisSize = this->Size();
			if (thisSize != arr1.Size()) {
				throw ArraySizeException(-1);
			}
			else {
				for (int i = 0; i < thisSize; i++) {
					result += this->GetElement(i) * arr1.GetElement(i);
				}
			}
			return result;
		}

		template <typename T>
		NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source) { // Assignment operator.
			if (this == &source) {
				return *this;
			}
			//delete[] this->Array<T>::table;
			this->Array<T>::operator = (source);
			return *this;
		}
		
		template <typename T>
		NumericArray<T> NumericArray<T>::operator * (double factor) { // scalar mult
			int j = this->Size();
			for (int i = 0; i < j; i++) {
				this->SetElement(this->GetElement(i) * factor, i);
			}
			return *this;
		}

		template <typename T>
		NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& source) {
			int thisSize = this->Size();
			if (thisSize != source.Size()) {
				throw ArraySizeException(-1);
			}
			else {
				for (int i = 0; i < thisSize; i++) {
					this->SetElement(this->GetElement(i) + source.GetElement(i),i);
				}
			}
			return *this;
		}
	}
}

#endif