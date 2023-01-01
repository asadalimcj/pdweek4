#include<iostream>
#include<windows.h>
using namespace std;
void A();
void L();
void I();
void gotoxy(int x,int y);
main()
{
  
  A();
  L();
  I();
 
}
  void A()
  { 
    gotoxy(20, 5);
    cout<<"         ****     ";
    gotoxy(20, 6);
    cout<<"        ******    ";
    gotoxy(20, 7);
    cout<<"       **    **   ";
    gotoxy(20, 8);
    cout<<"      **      **  ";
    gotoxy(20, 9);
    cout<<"     ************ ";
    gotoxy(20, 10);
    cout<<"     ************ ";
    gotoxy(20, 11);
    cout<<"     **        ** ";
    gotoxy(20, 12);
    cout<<"     **        ** ";
    gotoxy(20, 13);
    cout<<"     **        ** ";
  }
    void L()
    { 
     gotoxy(40, 5);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 6);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 7);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 8);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 9);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 10);
     cout<<"      ***                 "<<endl;
     gotoxy(40, 11);
     cout<<"      ***************     "<<endl;
     gotoxy(40, 12);
     cout<<"      ***************     "<<endl;
    }
     void I()
     {
       gotoxy(60, 5);
       cout<<"     @   "<<endl;
       gotoxy(60, 6);
       cout<<"    ***  "<<endl;
       gotoxy(60, 7);
       cout<<"    ***  "<<endl;
       gotoxy(60, 8);
       cout<<"    ***  "<<endl;
       gotoxy(60, 9);
       cout<<"    ***  "<<endl;
       gotoxy(60, 10);
       cout<<"    ***  "<<endl;
       gotoxy(60, 11);
       cout<<"    ***  "<<endl;
       gotoxy(60, 12);
       cout<<"    ***  "<<endl;
    }
      void gotoxy(int x,int y)
      {
       COORD coordinates;
       coordinates.X = x;
       coordinates.Y = y;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
      } 