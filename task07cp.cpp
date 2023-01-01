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
  int x = 1;
  int y = 1;
  while(true)
  {
    mov( x, y);
    if(y<13)
    {
       y = y+1; 
    }
    if(y==13)
    {
      gotoxy(x, y-1);
      cout<<" ";
      y = 1;
    }
  }
}
   void maze()
   {
    cout<<"################################"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"################################"<<endl;

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
        gotoxy(x, y-1);
        cout<<" ";
        gotoxy(x , y);
        cout<<"p";
        Sleep(200);
      }