#include<iostream>
#include<windows.h>
using namespace std;
void change(string name);
main()
{
  while(true)
  {
  string name;
  cout<<"enter name :";
  cin>>name;
  change(name);
  }

}
  void change(string name)
  {
    if (name =="asad")
    {
      cout<<"false"<<endl;
    }
      if(name!= "asad")
      {
         cout<<"true"<<endl;
      }


  }