//Husnain Ashfaq (22i-2536)
#include <iostream>
using namespace std;

// Global Variable
int num;

// Funtion Prototype
void inputvalidate();
void decimaltoRoman();

// Funtion to check the Correct Input...
void inputvalidate()
{
    if (num <= 0 || num > 3999)
    {
        cout << "Invalid input";
    }
    else
        decimaltoRoman();
}
//Funtion to convert Decimal to Roman
void decimaltoRoman()
{
    int s;

    string roman;
    while (num != 0)
    {
        if (num >= 1000)
        {
            s = num / 1000;
            num = num - 1000;
            roman = 'M';
            cout << roman;
        }

        else if (num >= 900 && num < 1000)
        {
            num = num % 1000;
            s = num / 500;
            num = num - 900;
            roman = "CM";
            cout << roman;
        }
        else if (num >= 500 && num < 1000)
        {

            s = num / 500;
            num = num - 500;
            roman = 'D';
            cout << roman;
        }
        else if (num >= 400 && num < 500)
        {

            s = num / 500;
            num = num - 400;
            roman = "CD";
            cout << roman;
        }
        else if (num >= 100 && num < 400)
        {

            s = num / 500;
            num = num - 100;
            roman = "C";
            cout << roman;
        }
        else if (num >= 90 && num < 100)
        {

            s = num / 500;
            num = num - 90;
            roman = "XC";
            cout << roman;
        }
        else if (num >= 50 && num < 90)
        {

            s = num / 500;
            num = num - 50;
            roman = "L";
            cout << roman;
        }
        else if (num >= 40 && num < 50)
        {

            s = num / 500;
            num = num - 40;
            roman = "XL";
            cout << roman;
        }
        else if (num >= 10 && num < 40)
        {

            s = num / 500;
            num = num - 10;
            roman = "X";
            cout << roman;
        }
        else if (num == 9)
        {

            s = num / 500;
            num = num - 9;
            roman = "IX";
            cout << roman;
        }
        else if (num == 8)
        {

            s = num / 500;
            num = num - 8;
            roman = "VIII";
            cout << roman;
        }
        else if (num == 7)
        {

            s = num / 500;
            num = num - 7;
            roman = "VII";
            cout << roman;
        }
        else if (num == 6)
        {

            s = num / 500;
            num = num - 6;
            roman = "VI";
            cout << roman;
        }
        else if (num == 5)
        {

            s = num / 500;
            num = num - 5;
            roman = "V";
            cout << roman;
        }
        else if (num == 4)
        {

            s = num / 500;
            num = num - 4;
            roman = "IV";
            cout << roman;
        }
        else if (num == 3)
        {

            s = num / 500;
            num = num - 3;
            roman = "III";
            cout << roman;
        }
        else if (num == 2)
        {

            s = num / 500;
            num = num - 2;
            roman = "II";
            cout << roman;
        }

        else if (num == 1)
        {

            s = num / 500;
            num = num - 1;
            roman = "I";
            cout << roman;
        }
    }
}

int main()
{

    cout << "Enter Any number(1-3999)";
    cin >> num;
    inputvalidate();

    return 0;
}