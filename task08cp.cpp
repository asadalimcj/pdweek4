#include<iostream>
#include<windows.h>
using namespace std;
void integers(int num1, int num2);
main()
{
  int number1;
  int number2;
  integers(36, 35);

}
  void integers(int num1, int num2)
  { 
    if(num1 == num2)
    {
      cout<<"true";
    }
      if(num1!=num2)
      {
         cout<<"false";
      }
  }