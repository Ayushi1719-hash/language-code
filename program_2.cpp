#include <iostream>
using namespace std;

typedef struct complex {
    float real;
    float imag;
} ComplexStruct;

ComplexStruct addComplexNumbers(ComplexStruct, ComplexStruct);
void displayResult(ComplexStruct);

int main() {
    ComplexStruct num1, num2, complexSum;
    char signOfImag;

    cout << "For 1st complex number,\nEnter real and imaginary parts:\n";
    cin >> num1.real >> num1.imag;

    cout << "\nFor 2nd complex number,\nEnter real and imaginary parts:\n";
    cin >> num2.real >> num2.imag;

    complexSum = addComplexNumbers(num1, num2);

    displayResult(complexSum);

    return 0;
}

ComplexStruct addComplexNumbers(ComplexStruct num1, ComplexStruct num2) {
    ComplexStruct temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return temp;
}

void displayResult(ComplexStruct sum) {
    char sign = (sum.imag >= 0) ? '+' : '-';
    float absImag = (sum.imag >= 0) ? sum.imag : -sum.imag;
    cout << "Sum = " << sum.real << sign << absImag << "i";
}
