#include <iostream>
using namespace std;

int main(void)
{
	int T = 0, O = 0, G = 0, D = 0, i = 1;

	for (i; i <= 9999; i++)
	{
		for (D; D <= 10; D++)
		{
			if (4 * (100 * T + 11 * O) == 1000 * G + 110 * O + D)
			{
				if (T != O && T != G && T != D && O != G && O != D && G != D)
				{
					cout << "T = " << T << ", " << " O = " << O << ", " << " G = " << G << ", " << " D = " << D << "\n\n";

					D++;
					break;
				}
				else if (T == 0 && G == 0 && O == 0 && D == 0)
				{
					D++;
					break;
				}
				else
				{
					D++;
					break;
				}
			}
			else if (T == 9 && O == 9 && G == 9 && D == 9)
			{
				break;
			}
			else if (D == 10)
			{
				if (T != 9 || G != 9 || D != 9)
				{
					G++;
					D = 0;
				}
			}
			else if (G == 10)
			{
				if (T != 9 || G != 9)
				{
					O++;
					G = 0;
				}
			}
			else if (O == 10)
			{
				if (T != 9)
				{
					T++;
					O = 0;
				}
			}
			i++;
		}
	}

	system("pause");
	return 0;
}