#include<iostream>

#include<string>

using namespace std;
int feature();
int main() {
  long budget, type, bill = 0, feat;
  int tax;
  cout << "Enter your budget: ";
  cin >> budget;
  cout << "Enter your statuse:\n1-Taxfiler\n2-Non-Taxfiler\nChoose: ";
  cin >> tax;
  cout << "Select the Car type: \n1-Manual\n2-Automatic\nChoose: ";
  cin >> type;
  feat = feature();
  cout << "Your Budget is: " << budget << endl;
  if (type == 1) {
    cout << "You selected Manual" << endl;
    bill = 3769000 + feat;
  } else if (type == 2) {
    cout << "You selected Automatic" << endl;
    bill = 3899000 + feat;
  } else
    cout << "Invalid input." << endl;
  if (tax == 1) {
    cout << "You are taxfiler" << endl;
    bill = 25000 + bill;
  } else if (tax == 2) {
    cout << "You are non-taxfiler" << endl;
    bill = bill + 75000;
  } else
    cout << "Invalid input." << endl;
  if (bill < budget)
    cout << "You have a good taste,go for it!" << endl;
  else
    cout << "Sorry! You don't afford it." << endl;

  return 0;
}
int feature() {
  int total = 0, nav, light, interior, mats, door, trunk;
  cout << "Select the features:\n1-Infotainment System(With navigation)\n2-Infotainment System(Without navigation)\n0-None\nChoose: ";
  cin >> nav;
  cout << "\nFor Lights:\n1-Halogen\n2-LED\n0-None\nChoose: ";
  cin >> light;
  cout << "\nHigh Grade Interior:\n1-Leather Seats\n2-Sofa Seats\nChoose: ";
  cin >> interior;
  cout << "\n1-Floor Mats\n0-None\nChoose: ";
  cin >> mats;
  cout << "\n1-Door visors\n0-None\nChoose: ";
  cin >> door;
  cout << "\n1-Trunk Tray\n0-None\nChoose: ";
  cin >> trunk;
  (nav == 1) ? cout << "You Selected: Infotainment System(With navigation)\n", total += 59500: total += 0;
  (nav == 2) ? cout << "You Selected: Infotainment System(Without navigation)\n", total += 8000: total += 0;
  (light == 1) ? cout << "You Selected: Halogen Light\n", total += 2000: total += 0;
  (light == 2) ? cout << "You Selected: LED Light\n", total += 5000: total += 0;
  (interior == 1) ? cout << "You Selected: Leather Seats\n", total += 45000: total += 0;
  (interior == 2) ? cout << "You Selected: Sofa Seats\n", total += 25000: total += 0;
  (mats == 1) ? cout << "You Selected: Floor Mats\n", total += 60000: total += 0;
  (door == 1) ? cout << "You Selected: Door Visors\n", total += 60000: total += 0;
  (trunk == 1) ? cout << "You Selected: Trunk Tray\n", total += 8500: total += 0;
  return total;

}