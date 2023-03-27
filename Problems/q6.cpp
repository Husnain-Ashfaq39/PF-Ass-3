// Husnain Ashfaq (22i-2536)
#include <iostream>
using namespace std;
// Global Vriable
int n;

// function Prototype
void ask();
void strict();
void lenient();

// Function to ask your's choice
void ask()
{
    int i;
    cout << "Increasing and Decresing should be(1,2): \n 1-strict: \n 2-lenient: \n";
    cin >> i;
    if (i == 1)
    {
        strict();
        void exit();
    }
    else if (i == 2)
    {

        lenient();
        void exit();
    }
}

// Function of strict increasing and decreasing
void strict()
{
    int s, v, w;
    s = n % 10;
    n = n / 10;
    v = n % 10;
    n = n / 10;
    w = n % 10;
    if (n != 0)
    {
        if (s == v || v == w)
        {
            cout << "Neither increasing or Decreasing";
            void exit();
        }
        else if (s > v && v > w)
        {
            cout << "increasing";
            void exit();
        }

        else if (s < v && v < w)
        {
            cout << "Decreasing";
            void exit();
        }
    }
}
// Function of lenient increasing and decreasing
void lenient()
{
    int s, v, w;
    s = n % 10;
    n = n / 10;
    v = n % 10;
    n = n / 10;
    w = n % 10;
    if (s == v && v == w)
    {
        cout << "Both increasing and Decreasing";
        void exit();
    }
    if (s > v && v <= w)
    {
        cout << "increasing";
        void exit();
    }
     if (s <= v && v > w)
    {
        cout << "increasing";
        void exit();
    }

    if (s < v && v >= w)
    {
        cout << "Decreasing";
        void exit();
    }
    if (s >= v && v < w)
    {
        cout << "Decreasing";
        void exit();
    }
}

int main()
{

    cout << "Enter three numbers:";
    cin >> n;
    ask();

    return 0;
}