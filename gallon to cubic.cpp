#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int gallon,cubic;
    int choice;
    cout << "Gallon - Cubic Converter:"<<endl ;
    cout << "1: Gallon To Cubic" <<endl;
    cout << "2: Cubic To Gallon" <<endl;
    cout << "Choose 1 or 2: " ;
    cin>>choice;
    switch(choice){
            Case 1: {
                cout << "Enter the number of gallons:" ;
                cin>>gallon;
                cubic=gallon/7.481;
                cout<<"\n"<<"Cubic Foot:"<<cubic<<endl;
            }
            Case 2: {
                cout << "Enter the number of cubic foot:" ;
                cin>>cubic;
                gallon=cubic*7.481;
                cout<<"\n"<<"Gallon:"<<gallon<<endl;
            }
    }
    
    return 0;
}
