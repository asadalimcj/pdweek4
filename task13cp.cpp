#include<iostream>
#include<windows.h>
using namespace std;
main()
{
  int holidays;
  int w_days;
  cout<<"enter holidays";
  cin>>holidays;
  w_days = 365-holidays;
  int games_t =w_days*63+holidays*127;
  cout<<"time for games :"<<games_t;
  int difference = 30000-games_t;
  if(difference>0)
  {
    cout<<"tom sleeps well"<<endl;
    cout<<difference<<"minutes less time for play";
    
  }
    if(difference<0)
    {
     cout<<"tom will run away";
     cout<<difference<<" minuts for play";

    }

}