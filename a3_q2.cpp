#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter the number ";
cin>>x;
if(x<0)
{
x = -x;
}
cout<<"Absolute value is "<<x<<endl;
return 0;
}