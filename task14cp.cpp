#include<iostream>
#include<windows.h>
using namespace std;
void aggregate(float matric_marks, float inter_marks, float ecat_marks);
void aggregate1(float matric_marks, float inter_marks, float ecat_marks);
void comparison(string name, float ecat1, string name2, float ecat2);
void menu();
main()
{
  string name1, name2;
  float matric_marks1, inter_marks1, ecat_marks1;
  float matric_marks2, inter_marks2, ecat_marks2;
  while(true)
  {
   menu();
  int choice;
  cout<<"press no 1 to 5"<<endl;
  cin>>choice;
  if(choice==1)
  {
     cout<<"enter your name";
     cin>>name1;
     cout<<"enter matrics marks :";
     cin>>matric_marks1;
     cout<<"enter inter marks";    
     cin>>inter_marks1;
     cout<<"enter ecat marks";
     cin>>ecat_marks1;

    }
     
     if(choice==2)
    {
     cout<<"enter your name";
     cin>>name2;
     cout<<"enter matrics marks :";
     cin>>matric_marks2;
     cout<<"enter inter marks";    
     cin>>inter_marks2;
     cout<<"enter ecat marks";
     cin>>ecat_marks2;

    }
      
      if(choice==3)
     {
       aggregate(matric_marks1, inter_marks1, ecat_marks1);
     }
      
      if(choice==4)
     {
       aggregate1(matric_marks2, inter_marks2, ecat_marks2);
     }
      if(choice==5)
      {
        comparison(name1, ecat_marks1, name2, ecat_marks2);
      }
    }
}
  void menu()
  {
     cout<<"******************************************"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*         UNIVERSITY ADMISSION           *"<<endl;
     cout<<"*               SYSTEM                   *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl;
     cout<<"*                                        *"<<endl; 
     cout<<"******************************************"<<endl;
     cout<<endl<<endl;
     cout<<"enter detais of student1"<<endl;
     cout<<"enter details of second student"<<endl;
     cout<<"aggregate of first dtudent"<<endl;
     cout<<"aggregate of second student"<<endl;
     cout<<"display roll number"<<endl;
     cout<<endl;
     }
       void aggregate(float matric_marks, float inter_marks, float ecat_marks)
       {
         float aggre;
         aggre = 0.3*((matric_marks/1100)*100)+0.3*((inter_marks/550)*100)+0.4*((ecat_marks/400)*100);
         cout<<"aggregate of student one is :"<<aggre<<endl<<endl;
       }
         void aggregate1(float matric_marks, float inter_marks, float ecat_marks)
         {
           float aggre1;
           aggre1 = 0.3*((matric_marks/1100)*100)+0.3*((inter_marks/550)*100)+0.4*((ecat_marks/400)*100);
           cout<<"aggregate of second student is :"<<aggre1<<endl<<endl;
         }
           void comparison(string name, float ecat1, string name2, float ecat2)
           {
             if(ecat1>ecat2)
              {
                 cout<<"student with roll no one is :"<<name<<endl;
              }
                if(ecat1<ecat2)
                {
                  cout<<"student with roll no one is"<<name2<<endl;

                }
 
           }