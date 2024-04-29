//4- writr a program to determine the youngest age 
#include <iostream>
using namespace std;
int main()
{
    int Ram;
    int sulabh;
    int Ajay;
    cout << "Enter your age";
    cin>> Ram;
    cin >> sulabh;
    cin >> Ajay;
    if (Ram<sulabh && Ram<Ajay )
    {
        cout << "Ram the youngest age ";
    }
    else if ( sulabh< Ram && sulabh < Ajay)
    {
        cout << "sublabh the youngest age ";
    }
    else {
        cout << "Ajay the youngest age ";
    }
    return 0;
}