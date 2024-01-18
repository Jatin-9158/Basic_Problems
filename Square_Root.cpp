#include<iostream>
#include<windows.h>
int Square_Root(int Number)
{
    if(Number==0)
            return 0;
    else if (Number==1)
            return 1;
    else
    {
        int low,mid,high,sqrt;
        low=0;
        high=Number;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid*mid==Number)
            {
                sqrt=mid;
                return sqrt;
            }
            else if(mid*mid<Number)
            {
                low=mid+1;
                sqrt=mid;
            }
            else 
            {
                high=mid-1;
            }

        }
        return sqrt;
    }
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