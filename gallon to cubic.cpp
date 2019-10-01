#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int gallon,cubic;
    cout << "Enter the number of gallons:" ;
    cin>>gallon;
    cubic=gallon/7.481;
    cout<<"\n"<<"Cubic Foot:"<<cubic;
    return 0;
}
