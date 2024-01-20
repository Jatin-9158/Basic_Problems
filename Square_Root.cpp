#include<iostream>
#include<windows.h>
double Square_Root_Unprecised(int x)
{
  int mid,sqrt_1;
  if(x==0 || x==1)
            return x;
  else if(x>0)
  {
    int low=0;
    int high=x;
    while(low<=high)
    {
       mid=(low+high)/2;
       if(mid*mid==x)
              return mid;
       else if(mid*mid<x)
       {
            sqrt_1=mid;
            low=low+1;
       }
       else
       {
         high=high-1;
       }
    }
  }
    return sqrt_1;
}
double Square_Root(int x)
{
    double n=Square_Root_Unprecised(x);
    double step=0.001;
    while(n*n<=x)
    {
       n=n+step;
       
    }
    return n;
}
int main()
{
 std::cout<<Square_Root(15);
 return 0;
}
int main()
{
 system("cls");
 int Number;
 std::cout<<"Enter the Number to Find Square Root:";
 std::cin>>Number;
 system("cls");
 std::cout<<"Square Root of Number:"<<Square_Root(Number);
 Sleep(2000);

 return 0;
}
