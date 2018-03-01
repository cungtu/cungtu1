#include "iostream"
using namespace;
int last_day(int month, int year)
{
	switch (month)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		return 31;
	case 4: case 6:case 9:case 11:
		return 30;
	case 2:
		return (isLeapYear(year)) ? 29 : 28;
	default:
		return -1;
	}
}
int sai(int &day, int &month, int &year)
int NoDayOfMonth = last_day(month, year);
	if (a > 12 & a < 1)
		cout << "Invalid month\n";
	if (day>NoDayOfMonth)
	{
		cout << "Invalid month" << endl;
		return;
	}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	sai(int &day, int &month, int &year)
	else if ((a == 3 & b >= 21) or (a == 4 & b <= 19))
		cout << "Aries\n";
	else if ((a == 4 & b >= 20) or (a == 5 & b <= 20))
		cout << "Taurus\n";
	else if ((a == 5 & b >= 21) or (a == 6 & b <= 20))
		cout << "Gemeni\n";
	else if ((a == 6 & b >= 21) or (a == 7 & b <= 22))
		cout << "Cancer\n";
	else if ((a == 7 & b >= 23) or (a == 8 & b <= 22))
		cout << "Leo\n"
	else if ((a == 8 & b >= 23) or (a == 9 & b <= 22))
		cout << "Virgo\n";
	else if ((a == 9 & b >= 23) or (a == 10 & b <= 22))
		cout << "Libra\n";
	else if ((a == 10 & b >= 23) or (a == 11 & b <= 21))
		cout << "Scorpio\n";
	else if ((a == 11 & b >= 22) or (a == 12 & b <= 21))
		cout << "Sagittarius\n";
	else if ((a == 12 & b >= 22) or (a == 1 & b <= 19))
		cout << "Capricorn\n";
	else if ((a == 1 & b >= 20) or (a == 2 & b <= 18))
		cout << "Aquarius\n";
	else if ((a == 2 & b >= 19) or (a == 3 & b <= 20))
		cout << "Pisces\n";
    return 0;
}
