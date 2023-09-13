#include <iostream>
#include <string>
using namespace std;




int readPositiveNumber(string msg)
{
	int num;
	do
	{
		cout << msg << endl;
		cin >> num;
	}
	while (num <= 0);
	

	return num;
}

int getDigitFrequency(int num, int digit)
{
	int counter = 0;
	
	while (num>0)
	{
		int reminder = num % 10;

		if (reminder == digit)
		{
			counter++;
		}
		num = num / 10;
	}
	return counter;
}

//void AllDigitsFrequencies(int num)
//{
//	int num2 = num;
//	int digit = 0;
//
//	while (num2 > 0)
//	{
//		int reminder = 0;
//		reminder = num2 % 10;
//
//		if (reminder == digit) 
//		{
//			num2 = num2 / 10;
//			continue;
//		}
//		digit = reminder;
//
//		getDigitFrequency(num, digit);
//
//		num2 =num2 / 10;
//	}
//}

void AllDigitsFrequencies(int num)
{
	for (int i = 0; i < 10; i++)
	{
		int digitFreq = getDigitFrequency(num, i);
		
		if (digitFreq > 0)
		{
			cout << "Digit " << i <<" is found "<< digitFreq << endl;
		}
	}
}

int main()
{
	AllDigitsFrequencies(readPositiveNumber("please enter a positive Number?"));

	return main();
}


//int readNumber(string msg)
//{
//	int num;
//	cout << msg << endl;
//	cin >> num;
//	return num;
//}
//
////char readDigit(string msg)
////{
////	char digit;
////	cout << msg << endl;
////	cin >> digit;
////	return digit;
////}
//
//int getLength(string str)
//{
//	int length = 0;
//	int counter = 0;
//
//	while (str[counter])
//	{
//		length++;
//		counter++;
//	}
//	return length;
//}
//
//int getDigitFreq(int num, char digit)
//{
//	int freq = 0;
//	string str = to_string(num);
//	int length = getLength(str);
//
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == digit)
//		{
//			freq++;
//		}
//	}
//	return freq;
//}
//
//void printAllDigitsFreq(int num)
//{
//	string str = to_string(num);
//	int length = getLength(str);
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << "Digit " << str[i] << " Frequency is " << getDigitFreq(num, str[i]) << endl;
//	}
//}
//
//int main()
//{
//	printAllDigitsFreq(readNumber("enter Number?"));
//
//	return 0;
//}

