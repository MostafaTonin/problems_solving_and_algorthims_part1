#include <iostream>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}



void PrintInvertedNumber(int Number)
{
	for (int i = 65 ; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter A Posative Number ?");
	PrintInvertedNumber(Number);

}