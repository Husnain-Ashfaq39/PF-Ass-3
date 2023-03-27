//Husnain Ashfaq (22i-2536)
#include<iostream>

#include<string>

using namespace std;

//Function Prototype
int validateDate(int, int, int);

int main() {
  string name;
  int year, month, day, income, postal, city = 0, q, total = 0, validage = 0, postalt;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your date of birth in day/month/year patteren: " << endl;
  cin >> day >> month >> year;
  cout << "Enter your income: ";
  cin >> income;
  cout << "Enter the postal code of your city: ";
  cin >> postal;
  //Age validatetion function call
  validage = validateDate(day, month, year);
  // To check number of digits in postal code
  postalt = postal;
  while (postalt != 0) {
    total++;
    postalt /= 10;
  }
  //checking postal code criteria for discount
  int count = 1;
  while (postal != 0) {
    q = postal % 10;
    if (total == 4) {
      if (q == 3 && count == 2) {
        city += 1;
      }
      if (q == 4 && count == 4) {
        city += 1;
      }
    }
    if (total == 5) {
      if ((q == 5 || q == 3) && count == 3) {
        city += 1;
      }
      if (q == 5 && count == 5) {
        city += 1;
      }
    }
    count++;
    postal = postal / 10;

  }

  if (income < 10000) {
    cout << "Congratulations " << name << "!\nYou are eligible for discount of 90%" << endl;
  } else if (validage == 1)
    cout << "Congratulations " << name << "!\nYou are eligible for discount of 50%" << endl;
  else if (city == 2)
    cout << "Congratulations " << name << "!\nYou are eligible for discount of 20%" << endl;
  else
    cout << "Unfortunaltely " << name << "!\nYou are not eligible for any discount" << endl;

  return 0;
}

//Function to validate the date
int validateDate(int bd, int bm, int by) {
  int d, m, y;
  int md[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  y = 2022 - by;
  if (10 < bm) {
    y--;
    m = 12 - (bm - 10);
  } else {
    m = 10 - bm;
  }
  if (21 < bd) {
    m--;
    d = md[10 - 1] - (bd - 21);
  } else {
    d = 21 - bd;
  }
  if (y < 22)
    return 1;
}