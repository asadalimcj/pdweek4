#include<iostream>
#include<windows.h>
using namespace std;
main()
{
  while(true)
 {
  int speed;
  cout<<"enter speed of car :";
  cin>>speed;
  if(speed> 100)
  {
    cout<<"halt...YOU WILL BE CHALLANED"<<endl;
  }
   if(speed<=100)
   {
     cout<<"perfect! you are going good"<<endl;
   }
  }
  

}