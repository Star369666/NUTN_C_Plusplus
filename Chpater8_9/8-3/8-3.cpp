#include <iostream>
#include <ostream>
#include <istream>
using namespace std;

class Complex
{
public:
	Complex() {}
	Complex(double, double);
	Complex(double);
	void setReal(double);
	void setImaginary(double);
	double getReal() { return real; }
	double getImaginary() { return imaginary; }
	friend bool operator ==(const Complex&, const Complex&);
	friend const Complex operator +(const Complex&, const Complex&);
	friend const Complex operator -(const Complex&, const Complex&);
	friend const Complex operator *(const Complex&, const Complex&);
	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);
private:
	double real;
	double imaginary;
};

int main(void) 
{
	Complex first, second(1, 1), third(2), sum, different, product;

	cout << "Enter the values to define a complex number(ex. 1 2 means 1 + 2i): ";
	cin >> first;
	cout << "\n";

	sum = first + second;
	different = first - second;
	product = first * second;
	if (first == second) 
	{
		cout << "The first (" << first << ") and second (" << second << ") is equal.\n";
	}
	else 
	{
		cout << "The first (" << first << ") and second (" << second << ") is not equal.\n";
	}
	cout << "The sum of first (" << first << ") and second (" << second << ") is " << sum << "." << endl;
	cout << "The different of first (" << first << ") and second (" << second << ") is " << different << "." << endl;
	cout << "The product of first (" << first << ") and second (" << second << ") is " << product << "." << "\n\n";

	sum = first + third;
	different = first - third;
	product = first * third;
	if (first == third)
	{
		cout << "The first (" << first << ") and third (" << third << ") is equal.\n";
	}
	else
	{
		cout << "The first (" << first << ") and third (" << third << ") is not equal.\n";
	}
	cout << "The sum of first (" << first << ") and third (" << third << ") is " << sum << "." << endl;
	cout << "The different of first (" << first << ") and third (" << third << ") is " << different << "." << endl;
	cout << "The product of first (" << first << ") and third (" << third << ") is " << product << "." << "\n\n";

	sum = second + third;
	different = second - third;
	product = second * third;
	if (second == third)
	{
		cout << "The second (" << second << ") and second (" << third << ") is equal.\n";
	}
	else
	{
		cout << "The second (" << second << ") and second (" << third << ") is not equal.\n";
	}
	cout << "The sum of first (" << second << ") and second (" << third << ") is " << sum << endl;
	cout << "The different of first (" << second << ") and second (" << third << ") is " << different << endl;
	cout << "The product of first (" << second << ") and second (" << third << ") is " << product << endl;

	cout << endl;
	system("pause");
	return 0;
}

Complex::Complex(double inp1, double inp2)
	:real(inp1), imaginary(inp2)
{
	
}

Complex::Complex(double realPartand)
	:real(realPartand), imaginary(0)
{
	
}

void Complex::setReal(double inp)
{
	real = inp;
}

void Complex::setImaginary(double inp) 
{
	imaginary = inp;
}

bool operator ==(const Complex& input1, const Complex& input2) 
{
	return ((input1.real == input2.real && input1.imaginary == input2.imaginary));
}

const Complex operator +(const Complex& input1, const Complex& input2) 
{
	double Real, Imaginary;

	Real = input1.real + input2.real;
	Imaginary = input1.imaginary + input2.imaginary;

	return (Complex(Real, Imaginary));
}

const Complex operator -(const Complex& input1, const Complex& input2) 
{
	double Real, Imaginary;

	Real = input1.real - input2.real;
	Imaginary = input1.imaginary - input2.imaginary;

	return (Complex(Real, Imaginary));
}

const Complex operator *(const Complex& input1, const Complex& input2) 
{
	const Complex i(0, 1);

	if (input2 == i)
	{
		Complex iReturn;
		iReturn.setReal(-input1.imaginary);
		iReturn.setImaginary(input1.real);

		return(iReturn);
	}

	Complex product(0, 0);
	double Real;

	Real = (input1.real * input2.real) - (input1.imaginary * input2.imaginary);
	product.setReal(Real);

	return (product + ((input1.real * input2.imaginary) + (input1.imaginary * input2.real)) * i);
}

ostream& operator <<(ostream& output, const Complex& input)
{
	output << input.real << " + " << input.imaginary << "i";

	return output;
}

istream& operator >>(istream& output, Complex& input) 
{
	double Real, Imaginary;

	output >> Real >> Imaginary;

	input.real = Real;
	input.imaginary = Imaginary;

	return output;
}