#include <iostream>
using namespace std;
int main()
{
int cost,sell, amount; 
cout<<"Enter cost price: ";
cin>>cost;
cout<<"Enter selling price: ";
cin>>sell;
if(sell > cost)
{
amount = sell - cost; 
cout<<"Profit = "<<amount;
}
else if(cost > sell)
{
amount = cost - sell; 
cout<<"Loss = "<<amount;
}
else
{
cout<<"No Profit No Loss."; 
}
return 0;
}