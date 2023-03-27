// Husnain Ashfaq (22i-2536)
#include <iostream>
using namespace std;

// Global Variable
bool dswitchleft, dswitchright, child, master, il, ol, ir, Or;
char gear;

// Function Prototype
void validate();
bool getswitchstatuse();
void gethandle();
bool getgearshift();

int main()
{
    validate();
}

// Function to check the gearshift
bool getgearshift()
{
    bool allset;
    cout << "Is Master unlock is on,Press 1 for on and 0 for off: ";
    cin >> master;
    switch (master)
    {
    case 1:
        cout << "Enter the switch statuse:Enter (P N D 1 2 3 R): ";
        cin >> gear;
        switch (gear)
        {
        case 'P':
            allset = 1;
            break;
        case 'p':
            allset = 1;
            break;
        default:
            cout << "Invalid Input." << endl;
            break;
        }
        break;
    case 0:
        allset = 0;
        break;
    default:
        cout << "Invalid Input." << endl;
        break;
    }

    return allset;
}

// Function to check the inner and outer handles
void gethandle()
{
    cout << "Is the left door outer handle is on.Press 1 for on for 0 for off: ";
    cin >> ol;
    cout << "Is the right door outer handle is on.Press 1 for on for 0 for off: ";
    cin >> Or;
    cout << "Is child lock is on,Press 1 for on and 0 for off: ";
    cin >> child;
    switch (child)
    {
    case 1:
        cout << "Is the left door inner handle is on.Press 1 for on for 0 for off: ";
        cin >> il;
        cout << "Is the right door inner handle is on.Press 1 for on for 0 for off: ";
        cin >> ir;
        il = 0;
        ir = 0;
        break;
    case 0:
        cout << "Is the left door inner handle is on.Press 1 for on for 0 for off: ";
        cin >> il;
        cout << "Is the right door inner handle is on.Press 1 for on for 0 for off: ";
        cin >> ir;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
}

// funtion to check the Dashboard switch
bool getswitchstatuse()
{
    cout << "Is the dashboard switch of left door is on,Press 1 for on and 0 for off: ";
    cin >> dswitchleft;
    cout << "Is the dashboard switch of right door is on,Press 1 for on and 0 for off: ";
    cin >> dswitchright;
}

// function of validation
void validate()
{
    bool y = getgearshift();
    switch (y)
    {
    case 1:
        gethandle();
        getswitchstatuse();
        if (ol == 1 || il == 1 || dswitchleft == 1)
        {
            cout << "Left door is open" << endl;
        }
        if (ir == 1 || Or == 1 || dswitchright == 1)
        {
            cout << "Right door is open" << endl;
        }
        if (ol == 0 && il == 0 && dswitchleft == 0 && ir == 0 && Or == 0 && dswitchright == 0)
            cout << "Both doors are closed" << endl;

        break;

    case 0:
        cout << "Both doors are closed.Van is not in park mode or master unlock is not on." << endl;
        break;
    }
}