#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();
void mov(int x, int y);
main()
{
  system("cls");
  maze();
  int x = 3;
  int y = 3;
  while(true)
  {
    mov( x, y);
    if(x<10)
    {
       x = x+1; 
    }
    if(x==10)
    {
      gotoxy(x-1, y);
      cout<<" ";
      x = 3;
    }
  }
}
   void maze()
   {
    cout<<"#########################"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#                       #"<<endl;
    cout<<"#########################"<<endl;

   }
    void gotoxy(int x, int y)
    { 
      COORD coordinates;
      coordinates.X = x;
      coordinates.Y = y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
    }
      void mov(int x, int y)
      {
        gotoxy(x-1, y);
        cout<<" ";
        gotoxy(x , y);
        cout<<"p";
        Sleep(200);
      }