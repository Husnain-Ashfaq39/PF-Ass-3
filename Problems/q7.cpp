// Husnain Ashfaq( 22i-2536)
#include <iostream>
#include <iomanip>
using namespace std;

//Funtion to validate the input
void inputvalidate(int n)
{
if(n==1 || n==2 || n==3);
else{
    cout<<"Invalid Input";
}

}

//Function to convert from GBs to MBs
float conversion(float d)
{
    d = d * 1024;
    return d;
}

//Funtion to calculate the due amount
void amount(float data, int pakage)

{
    float additional, total, save;
    switch (pakage)
    {
    case 1:
        total = 100;
        if (data >= 2048)
        {
            data = data - 2048;
            additional = data * 0.3;
            total = 100 + additional;
        }
        cout << "Total due Amount is = " << total;
        if (total > 250 && data < 5600)
        {

            save = total - 250;
            cout << endl
                 << "if you choice pakage B. You would have saved RS " << save;
        }
        else if (total >= 1000)
        {
            save = total - 1000;
            cout << endl
                 << "if you choice pakage . You would have saved RS " << save;
        }
        break;

    case 2:
        total = 250;
        if (data >= 5632)
        {
            data = data - 5632;
            additional = data * 0.2;
            total = 200 + additional;
        }
        cout << "Total due Amount is = " << total;
        if (total < 250 && data < 2048)
        {
            save = total - 100;
            cout << endl
                 << "if you choice pakage A. You would have saved RS " << save;
        }
        else if (total >= 1000)
        {
            save = total - 1000;
            cout << endl
                 << "if you choice pakage C. You would have saved RS " << save;
        }

        break;

    case 3:

        total = 1000;
        cout << "Total due Amount is = " << total;
        if (data < 2048)
        {
            save = total - 100;
            cout << endl
                 << "if you choice pakage A. You would have saved RS " << save;
        }
        else if (data > 2048 && data < 5632)
        {
            save = total - 250;
            cout << endl
                 << "if you choice pakage B. You would have saved RS " << save;
        }
        data = data - 5632;
        additional = data * 0.2;
        total = 200 + additional;
        if (total < 1000)
        {
            save = 1000 - total;
            cout << endl
                 << "if you choice pakage B. You would have saved RS " << save;
        }
        break;
    }
}

int main()
{
    float data;
    int pakage;
    cout << "How many GBs you have used(GB): ";
    cin >> data;
    cout << "which package you has subscribed for: \n 1-Pakage A \n 2 - Pakage B \n 3 - Pakage C \n";
    cin >> pakage;
    inputvalidate(pakage);
    data = conversion(data);
    amount(data, pakage);
}