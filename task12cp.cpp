#include<iostream>
#include<windows.h>
using namespace std;
main()
{
  float red;
  float white;
  float tulips;
  float red_p = 2.00;
  float white_p = 4.10;
  float tulips_p = 2.50;
  cout<<"enter number of red rose :";
  cin>>red;
  cout<<"enter number of white rose :";
  cin>>white;
  cout<<"enter number of tulips rose :";
  cin>>tulips;
  float price1, price2, price3, price;
  price1 = red*red_p;
  price2 = white*white_p;
  price3 = tulips*tulips_p;
  price = price1+price2+price3;
  cout<<"actual price is :"<<price;
  if(price>200)
   {
     price = price-price*0.2;
     cout<<"price after discount :"<<price;
   }
}