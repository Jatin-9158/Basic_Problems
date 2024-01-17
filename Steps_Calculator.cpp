#include<iostream>
#include<windows.h>
using namespace std;
int Count_1=0,Count_2=0;
int count_steps(int Number_of_Steps,int Step_Size)
{   
   if(Step_Size==1)
   {
      if(Number_of_Steps==0)
      {
          return 0;
      }
      else
      {
        Count_1++;
        count_steps(Number_of_Steps-1,Step_Size); 
      }
      return Count_1;
   }
   else if(Step_Size==2)
   {
      if(Number_of_Steps==0)
      {
          return 0;
      }
      else
      { 
        Count_2++;
        count_steps(Number_of_Steps-2,Step_Size);
      }
      return Count_2;
   }
}

int main()
{
 bool exit=true;
 while(exit)
{
  system("cls");
  int Number_of_Steps,Step_Size,Choice;
  cout<<"Welcome to Step Calculator"<<endl;
  cout<<"**************************"<<endl;
  cout<<"Enter the No of Stairs:";
  cin>>Number_of_Steps;
  cout<<"**************************"<<endl;
  cout<<"\t  MENU \t \t"<<endl;
  cout<<"**************************"<<endl;
  cout<<"Press 1 for Step Size(1)"<<endl;
  cout<<"Press 2 for Step Size(2)"<<endl; 
  cout<<"Press 3 for Exit"<<endl;
  cin>>Choice;
  system("cls");
  switch(Choice)
  {
  case 1:
    cout<<"Steps Used:"<<count_steps(Number_of_Steps,Choice);
    Sleep(1000);
    break;
  case 2:
    cout<<"Steps Used:"<<count_steps(Number_of_Steps,Choice);
    Sleep(1000);
    break;
  case 3:
    exit=false;
    break;
  default:
    break;
  }
}
 return 0;
}