#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5,average;
    cout << "Enter Marks Obtained In 5 Subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    average=(m1+m2+m3+m4+m5)*5;
    cout<<"\n"<<"Average Marks:"<<average;
    return 0;
}
