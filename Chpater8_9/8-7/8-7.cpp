#include <iostream>
#include <ostream>
using namespace std;

class PrimeNumber 
{
public:
	PrimeNumber() { prime = 1; }
	void setPrime(int);
	int getPrime() { return prime; }
	PrimeNumber& operator ++();
	PrimeNumber& operator --();
	PrimeNumber operator ++(int);
	PrimeNumber operator --(int);
	friend ostream& operator <<(ostream&, const PrimeNumber&);
private:
	int prime;
};

int main(void) 
{
	PrimeNumber user, prefixLarge, postfixLarge, prefixSmall, postfixSmall;
	int primeInput;

	cout << "Enter a prime to get the largest one or smallest one: ";
	cin >> primeInput;
	if (primeInput < 1) 
	{
		do 
		{
			cout << "Invalid! Please enter again: ";
			cin >> primeInput;
			cout << "\n";
		} while (primeInput < 1);
	}

	user.setPrime(primeInput);
	prefixLarge = ++user;
	postfixLarge = user++;
	prefixSmall = --user;
	postfixSmall = user--;

	cout << "a++, which means using " << user.getPrime() << " to do\nThe next largest prime is : " << postfixLarge << "\n\n";
	if (postfixSmall.getPrime() < 2)
	{
		cout << "a--, which means using " << user.getPrime() << " to do\nCan't find any smaller prime.\n\n";
	}
	else
	{
		cout << "a--, which means using " << user.getPrime() << " to do\nThe next smallest prime is: " << postfixSmall << "\n\n";
	}

	cout << "++a, which means using " << user.getPrime() + 1 << " to do\nThe next largest prime is: " << prefixLarge << "\n\n";
	if(prefixSmall.getPrime() < 2)
	{
		cout << "--a, which means using " << user.getPrime() + 1 << " to do\nCan't find any smaller prime.\n\n";
	}
	else 
	{
		cout << "--a, which means using " << user.getPrime() - 1 << " to do\nThe next smallest prime is: " << prefixSmall << "\n\n";
	}

	system("pause");
	return 0;
}

void PrimeNumber::setPrime(int input) 
{
	prime = input;
}

PrimeNumber& PrimeNumber::operator ++() 
{
	PrimeNumber result;
	int large, check = 0, i;

	large = getPrime() + 2;

	while (check == 0) 
	{
		if (large == 2)
		{
			break;
		}
		else
		{
			for (i = 2; i < large; i++)
			{
				if ((large % i) == 0) 
				{
					large++;
					check = 0;
					break;
				}
				else 
				{
					check = 1;
				}
			}
		}
	}

	result.setPrime(large);
	return result;
}

PrimeNumber& PrimeNumber::operator --() 
{
	PrimeNumber result;
	int small, check = 0, i;

	small = getPrime() - 2;

	while (check == 0)
	{
		if (small < 2)
		{
			small = 0;
			break;
		}
		else if (small == 2) 
		{
			small = 2;
			break;
		}
		else
		{
			for (i = 2; i < small; i++)
			{
				if ((small % i) == 0)
				{
					small--;
					check = 0;
					break;
				}
				else 
				{
					check = 1;
				}
			}
		}
	}

	result.setPrime(small);
	return result;
}

PrimeNumber PrimeNumber::operator ++(int i)
{
	PrimeNumber back;
	int j, check = 0, prime;

	prime = getPrime();

	while (check == 0) 
	{
		for (j = 2; j < prime; j++)
		{
			if (prime % j == 0)
			{
				prime++;
				check = 0;
				break;
			}
			else 
			{
				check = 1;
			}
		}
	}

	back.setPrime(prime);
	return back;
}

PrimeNumber PrimeNumber::operator --(int i)
{
	PrimeNumber back;
	int j, check = 0, prime;

	prime = getPrime();

	while (check == 0)
	{
		for (j = 2; j < prime; j++)
		{
			if (prime % j == 0)
			{
				prime--;
				check = 0;
				break;
			}
			else
			{
				check = 1;
			}
		}
	}

	back.setPrime(prime);
	return back;
}

ostream& operator <<(ostream& output, const PrimeNumber& input)
{
	output << input.prime;

	return output;
}