#include <iostream>

using namespace std;

//int ReadPositiveNumber(string Massage)
//{
//	int Number = 0;
//	do
//	{
//		cout << Massage << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}



void PrinWordFromAAAtoZZZ()
{
	cout << "\n";

	string Word = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{

			for (int k = 65; k <= 90; k++)
			{
				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);

				cout << Word << endl;

				Word = "";
			}
			
		}
		cout << "\n___________________\n";
	}
}
int main()
{
	/*int Number = ReadPositiveNumber("Enter A Posative Number ?");*/
	PrinWordFromAAAtoZZZ();

}