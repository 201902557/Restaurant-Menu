#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int i,order,n,access;
double change,customerR,itemsR;
double cash,cost,vat;
void getData()
{
cost=0;
vat=0;
do
{
cout<<"enter order no. /or [press 0 to quit]"<<endl;
cin>>order;
switch(order)
{
case 1:
    cout<<"How many R6 Chips do you want?"<<endl;
    cin>>n;
    cost=cost+6*n;
    vat=vat+cost*0.15;
    system("PAUSE");
    break;
case 2:
    cout<<"How many R10 Chips do you want?"<<endl;
    cin>>n;
    cost=cost+10*n;
    vat=vat+cost*0.15;
    system("PAUSE");
    break;
case 3:
    cout<<"How many R10 Kota do you want?"<<endl;
    cin>>n;
    cost=cost+10*n;
    vat=vat+cost*0.15;
    system("PAUSE");
    break;
case 4:
    cout<<"How many R12 Hotdogs do you want?"<<endl;
    cin>>n;
    cost=cost+12*n;
    vat=vat+cost*0.15;
    system("PAUSE");
    break;
default:
    if(order==0)
    {
    cout<<"Loading please wait..."<<endl;
    system("CLS");
    }
    else
    {
    cout<<"Invalid order!!!"<<endl;
    }
    break;
}
}
while(order!=0 || cost==0);
system("CLS");
system("PAUSE");
}
void computeData()
{
do
{
cout<<"deposit Cash"<<endl;
cin>>cash;
if(cash>=cost)
change=cash-cost;
else
cout<<"Insufficient Funds!!!"<<endl;
}
while(cash<cost);
system("CLS");
}
void displayData()
{
cout<<"Your Order is being processed..."<<endl;
customerR=customerR+cash;
itemsR=itemsR+cost;
cout<<""<<endl;
cout<<"Full Amount:R"<<cash<<"          Cost:R"<<cost<<endl;
cout<<""<<endl;
cout<<"VAT:R"<<vat<<endl;
cout<<""<<endl;
cout<<"Change:R"<<change<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"         Thank you for your support"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"press 0 to quit"<<endl;
cin>>access;
system("CLS");
system("PAUSE");
}
void welcomeMessage()
{
cout<<"                                 Ratshi's Restuaraunt"<<endl;
cout<<""<<endl;
cout<<"       order 1:"<<" R6 Chips"<<" (spice & sauce)"<<endl;
cout<<"        order 2:"<<" R10 Chips"<<" (spice & sauce)"<<endl;
cout<<"         order 3:"<<" R10 KOTA"<<" (spice & sauce)"<<endl;
cout<<"          order 4:"<<" R12 HOTDOG"<<" (spice & sauce)"<<endl;
cout<<""<<endl;
cout<<""<<endl;
}
void getAdmin()
{
string username,password;
cout<<""<<endl;
cout<<""<<endl;
do
{
cout<<"enter Admin Username"<<endl;
cin>>username;
system("CLS");
}
while(username!="tendani003");
do
{
cout<<"enter Admin Password"<<endl;
cin>>password;
system("CLS");
}
while(password!="OHLord.01");
}
void displayAdmin()
{
do
{
cout<<""<<endl;
cout<<"                 Welcome to the Administration"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"View Total Income for the DAY in detail..."<<endl;
cout<<""<<endl;
cout<<"Total Amount recieved in the day:R"<<customerR<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"Total Profit recieved in the day:R"<<itemsR<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"Enter Unique Code to Exit..."<<endl;
cin>>access;
system("CLS");
system("PAUSE");
}
while(access!=911);
}
int main()
{
do
{
    do
    {
        do
        {
         welcomeMessage();
         getData();
         computeData();
        }
        while(cash<cost);
    displayData();
    }
    while(access!=911);
getAdmin();
displayAdmin();
}
while(1);
return 0;
}






