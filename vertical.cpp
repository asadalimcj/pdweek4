#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
void move(int x, int y);
main()
{
  system("cls");
  maze();
  int x = 3;
  int y = 2;
  while(true)
  {
    move(x , y);
    if(y<23)
    {
      y = y+1;
    }
     if(y==23)
     {
       gotoxy(x, y-1);
       cout<<" ";
       y=2;
     }
  }


}
  void maze()
  {
   cout<<"########################################################################"<<endl;
   cout<<"||.. .......................................................  ......  ||"<<endl;
   cout<<"||.. %%%%%%%%%%%%%%%%%%                %%%%%%%%%%%%%%  |%|..   %%%%   ||"<<endl;
   cout<<"||..         |%|    |%|     |%|...     |%|        |%|  |%|..    |%|   ||"<<endl;
   cout<<"||..         |%|    |%|     |%|...     |%|        |%|  |%|..    |%|   ||"<<endl;
   cout<<"||..         %%%%%%%%%  ..  |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"<<endl;
   cout<<"||..         |%|        ..  |%|...    ............... |%| ..       .  ||"<<endl;
   cout<<"||..         %%%%%%%%%%%..  |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"<<endl;
   cout<<"||..                 |%|.             |%|......       |%| ..    |%|.  ||"<<endl;
   cout<<"||..      .........  |%|.        p    |%|......|%|        ..    |%|.  ||"<<endl;
   cout<<"||..|%|   |%|%%%|%|. |%|. |%|            ......|%|        ..|%| |%|.  ||"<<endl;
   cout<<"||..|%|   |%|   |%|..     %%%%%%%%%%%%%  ......|%|         .|%|.      ||"<<endl;        
   cout<<"||..|%|   |%|   |%|..            ...|%|    %%%%%%%        . |%|.      ||"<<endl;
   cout<<"||..|%|             .            ...|%|               |%| ..|%|.      ||"<<endl;
   cout<<"||..|%|   %%%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"<<endl;
   cout<<"||.................................................   |%| ..........  ||"<<endl;
   cout<<"||   ..............................................          .......  ||"<<endl;
   cout<<"||..|%|  |%|   |%|..    %%%%%%%%%%%%%%%   ......|%|   |%| ..|%|.      ||"<<endl;
   cout<<"||..|%|  |%|   |%|..             ...|%|      %%%%%%   |%| ..|%|.      ||"<<endl;
   cout<<"||..|%|            .     G       ...|%|               |%| ..|%|.      ||"<<endl;
   cout<<"||..|%|  %%%%%%%%%%%%%%          ...|%|%%%%%%%%%%%    |%| ..|%|%%%%%  ||"<<endl;
   cout<<"||.................................................   |%| ..........  ||"<<endl;
   cout<<"||  ...............................................          .......  ||"<<endl;
   cout<<"########################################################################"<<endl;
  }
   void gotoxy(int x, int y)
   {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

   }
    void move(int x, int y)
    {
      gotoxy(x, y-1);
      cout<<" ";
      gotoxy(x , y);
      cout<<"p";
      Sleep(200);
    }