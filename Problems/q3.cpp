//Husnain Ashfaq (22i-2536)
#include<iostream>

#include<string>

using namespace std;

//Function Prototype
double siConverter(string, double);

int main() {
  string unit1, unit2;
  double value, ans, si;
  cout << "Choose the convert From unit(fl.oz,gal, oz, lb, in, ft, mi)?";
  cin >> unit1;
  cout << "Choose the convert to unit(ml, l, g, kg, mm, cm, m, km).?";
  cin >> unit2;
  cout << "Enter the value: ";
  cin >> value;
  si = siConverter(unit1, value);
  if (((unit1 == "fl.oz" || unit1 == "gal") && (unit2 == "ml" || unit2 == "l")) || ((unit1 == "oz" ||
      unit1 == "lb") && (unit2 == "g" || unit2 == "kg")) || ((unit1 == "in" || unit1 == "ft" || unit1 == "mi") &&
      (unit2 == "mm" || unit2 == "cm" || unit2 == "m" || unit2 == "km"))) {
    if (unit2 == "ml")
      ans = si * 1000.0;
    else if (unit2 == "l")
      ans = si;
    else if (unit2 == "g")
      ans = si;
    else if (unit2 == "kg")
      ans = si / 1000.0;
    else if (unit2 == "mm")
      ans = si * 1000.0;
    else if (unit2 == "cm")
      ans = si * 100.0;
    else if (unit2 == "m")
      ans = si;
    else if (unit2 == "km")
      ans = si / 1000.0;
    cout << value << " " << unit1 << " = " << ans << " " << unit2 << endl;
  } else
    cout << "Invalid Input.\"" << unit1 << "\" could not be converted into \"" << unit2 << "\"." << endl;

  return 0;
}

//function for unit conversion
double siConverter(string unit, double value) {
  double si;
  if (unit == "fl.oz")
    si = value * 0.0295735;
  else if (unit == "gal")
    si = value * 3.78541;
  else if (unit == "oz")
    si = value * 28.3495;
  else if (unit == "lb")
    si = value * 453.592;
  else if (unit == "in")
    si = value * 0.0254;
  else if (unit == "ft")
    si = value * 0.3048;
  else if (unit == "mi")
    si = value * 1609.34;
  return si;
}