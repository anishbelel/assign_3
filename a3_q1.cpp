#include <iostream>
using namespace std;

int main()
{
int length,breadth;
cout<<"Enter length: ";
cin>>length;
cout<<"Enter breadth: ";
cin>>breadth;

if(length==breadth)
{
cout<<"Yes, it is a square"<<endl;
}
else
{
cout<<"No, it is a rectangle"<<endl;
}

return 0;
}