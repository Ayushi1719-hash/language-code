#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) { }
    Complex(float r, float i) : real(r), imag(i) { }

    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real >> imag;
    }

    // Operator overloading
    Complex operator - (Complex c2)
    {
        Complex temp;
        cout << "Subtracting: (" << real << "+" << imag << "i) - ("
             << c2.real << "+" << c2.imag << "i)\n";
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;

        return temp;
    }

    void display()
    {
        if (imag < 0)
            cout << "Result: " << real << imag << "i";
        else
            cout << "Result: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    result = c1 - c2;
    result.display();

    return 0;
}
