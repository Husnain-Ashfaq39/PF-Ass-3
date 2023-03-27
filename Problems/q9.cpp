// Husnian Ashfaq (22i-2536)
#include <iostream>
using namespace std;

// Global Variable
bool wifi = false;
float bandwidth = 0;
string returnmessage="Sent the file earlier" ,filename;

// Function Prototype
bool IsConnected();
float availableBandwidth();
void networkStartValidator();
void startApplication();
void error();
void startApplication();
void getfiletype();
string filesaver(string filename ,string filetype);
void networkSend(string msg,string name);

// Function to check wheither wifi is connected or not
bool IsConnected()
{
    bool n;
    cout << "Wifi is connected or not: \n 0-Flase \n 1-True \n ";
    cin >> n;
    if (n == 1)
        availableBandwidth();

    return n;
}

// Function check the Bandwidth of Connected wifi
float availableBandwidth()
{
    cout << "Enter Bandwidth of Connected Network:";
    cin >> bandwidth;

    return bandwidth;
}
void networkStartValidator()
{
    if (wifi = true && bandwidth > 20)
    {
        startApplication();
    }
    else
    {

        error();
    }
}

void error()
{

    cout << "Invalid Conditions";
}

void startApplication()
{

    getfiletype();
}
void getfiletype()
{
    string filetype;
    cout << "Enter the name of the file:";
    cin >> filename;
    cout << "Enter the type of file(txt,mp4,mp3):";
    cin >> filetype;
    filesaver(filename,filetype);
}
string filesaver(string filename ,string filetype)
{
    string textfiles,videofiles,soundfiles;

    if (filetype == "txt")
    {

        textfiles = filename;
        networkSend(returnmessage,filename);
    
    }
    else if (filetype == "mp4")
    {

        videofiles = filename;
        networkSend(returnmessage,filename);
    }
    else if (filetype == "mp3")
    {

        soundfiles = filename;
        networkSend(returnmessage,filename);

    }
    else
    {
        error();
    }
    return filetype;
}

void networkSend(string msg,string name)
{

    cout<<msg<<" with filename "<<"'"<<name<<"'";
}
int main()
{
    wifi = IsConnected();
    networkStartValidator();
    return 0;
}