#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5,average;
    cout << "Enter Marks Obtained In 1st Subject:";
    cin>>m1;
    cout << "Enter Marks Obtained In 2nd Subject:";
      cin>>m2;
    cout << "Enter Marks Obtained In 3rd Subject:";
      cin>>m3;
    cout << "Enter Marks Obtained In 4th Subject:";
      cin>>m4;
    cout << "Enter Marks Obtained In 5th Subject:";
    cin>>m5;
    average=(m1+m2+m3+m4+m5)/5;
    cout<<"\n"<<"Average Marks:"<<average;
    return 0;
}
