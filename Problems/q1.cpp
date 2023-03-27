// Husnian Ashfaq(22i-2536)
#include <iostream>
using namespace std;
// Global Variable
int time_start1, time_start2, time_end1, time_end2, year1, month1, day1, year2, month2, day2, s, e, valid_date = 1;
// Function Prototype
void gettime();
void getdate();
void validate();
int main()
{

  cout << "Appointment 01: " << endl;
  gettime();
  getdate();
  if (valid_date != 0)
    validate();
  else
    cout << "Date is not valid." << endl;

  return 0;
}
// Function to get time of both appointments
void gettime()
{
  cout << "Enter the start time for 1st  appointment: ";
  cin >> time_start1;
  cout << "Enter the end time for 1st appointment: ";
  cin >> time_end1;
  cout << "Enter the start time for 2nd appointment: ";
  cin >> time_start2;
  cout << "Enter the end time for 2nd appointment: ";
  cin >> time_end2;
}
// Function to get date for both appointment p
void getdate()
{
  cout << "Enter the date for 1st appointment in day/month/year patteren:\n";
  cin >> day1 >> month1 >> year1;
  if (month1 <= 12 && month1 > 0)
  {
    if (day1 <= 31 && day1 > 0)
    {
      if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
      {
        if (day1 > 30)
          valid_date = 0;
      }
      if (month1 == 2)
      {
        if (year1 % 4 == 0 || year1 % 100 == 0 && year1 % 400 == 0)
        {
          if (day1 > 29)
            valid_date == 0;
        }
        else if (day1 > 28)
          valid_date == 0;
      }
    }
    else
      valid_date = 0;
  }
  else
    valid_date = 0;
  if (valid_date != 0)
  {
    cout << "Enter the date for 2st appointment in day/month/year patteren:\n";
    cin >> day2 >> month2 >> year2;
    if (month2 <= 12 && month2 > 0)
    {
      if (day2 <= 31 && day2 > 0)
      {
        if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)
        {
          if (day2 > 30)
            valid_date = 0;
        }
        if (month2 == 2)
        {
          if (year2 % 4 == 0 || year2 % 100 == 0 && year2 % 400 == 0)
          {
            if (day2 > 29)
              valid_date == 0;
          }
          else if (day2 > 28)
            valid_date == 0;
        }
      }
      else
        valid_date = 0;
    }
    else
      valid_date = 0;
  }
}
// Function to check the overlap
void validate()
{
  if (time_start1 > time_start2)
    s = time_start1;
  else
    s = time_start2;
  if (time_end1 < time_end2)
    e = time_end1;
  else
    e = time_end2;
  if (s < e)
    cout << "Appointments are overlapping.Sorry!" << endl;
  else
    cout << "Appointments are all set.Thank you!" << endl;
}
