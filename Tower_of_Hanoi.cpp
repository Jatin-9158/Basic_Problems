#include<iostream>
#include<windows.h>
void TOH(int,char,char,char);
int main()
{   system("cls");
    int Num_of_Disks;
    std::cout<<"Enter the Number of Disks:";
    std::cin>>Num_of_Disks;
    std::cout<<"You can Reach Source to Destination By Following these much Steps:"<<std::endl;
    TOH(Num_of_Disks,'A','B','C');
}
void TOH(int Num,char A,char B,char C)
{   
    if(Num>0)
    {
        
        TOH(Num-1,A,C,B);
        std::cout<<"( "<<A<<" to "<<C<<")"<<std::endl;
        TOH(Num-1,B,C,A);
    }
    
}