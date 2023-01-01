#include<iostream>
#include<windows.h>
using namespace std;
void pakistan(float price, float discount);
void ireland(float price, float discount);
void india(float price, float discount);
void england(float price, float discount);
void canada(float price, float discount);
main()
{ 
  while(true)
  {
  float discount;
  float price;
  string country;
  cout<<"enter your country :";
  cin>>country;
  cout<<"enter your ticket price :";
  cin>>price; 
  if(country=="pakistan")
  {
    pakistan(price, discount); 
  }
    if(country=="ireland")
    {
      ireland(price, discount);
    }
      if(country=="india")
      {
        india(price, discount);
      }
        if( country=="england")
        {
          england(price, discount);
        }
         if(country=="canada")
         {
           canada(price , discount);
         }
    }
}
  void pakistan(float price, float discount)
  {
    
    
    float actual_p;
    discount = price*0.05;
    actual_p = price - discount;
    cout<<"price after discount"<<actual_p<<endl;

  }
    void ireland(float price, float discount)
    {
     
    float actual_p;
    discount = price*0.1;
    actual_p = price - discount;
    cout<<"price after discount"<<actual_p<<endl;
    }
      void india(float price, float discount)
    {
     
    float actual_p;
    discount = price*0.2;
    actual_p = price - discount;
    cout<<"price after discount"<<actual_p<<endl;
    }
       void england(float price, float discount)
    {
     
    float actual_p;
    discount = price*0.3;
    actual_p = price - discount;
    cout<<"price after discount"<<actual_p<<endl;
    }
       void canada(float price, float discount)
    {
     
    float actual_p;
    discount = price*0.45;
    actual_p = price - discount;
    cout<<"price after discount"<<actual_p<<endl;
    }
      
    
  
      
    
      
    
  