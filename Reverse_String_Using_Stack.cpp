// Reverse a String Using Stack
#include<iostream>
using namespace std;
template<class T>
class Stack
{
    private:
        int size;
        int top;
        T *arr;
    public:
        Stack(int size)
        {
          this->size=size;
          top=-1;
          arr=new T[size];
        }
        void push(T data)
        {
            if(top<(size-1))
            {
               top++;
               arr[top]=data;
            }
            else 
            {
                cout<<"Overflow";
            }
        }
        T pop()
        {
           if(top>=0)
           {
            char ans=arr[top];
            top--;
            return ans;
           }
           else
           {
             cout<<"Underflow";
           }
        }
};

string reverse(string String_Name)
{
  Stack<char>Ans1(String_Name.length());
  for(int i=0;i<(String_Name.length());i++)
  {
        Ans1.push(String_Name[i]);
  }
  string Ans2="";
  for(int i=(String_Name.length()-1);i>-1;i--)
  {
     char Ans3=Ans1.pop();
     Ans2=Ans2+Ans3;
  }
  return Ans2;
}
int main()
{
   string str;
   cout<<"Enter the String:";
   cin>>str;
   string str1=reverse(str);
   cout<<str1;
   return 0;
}
