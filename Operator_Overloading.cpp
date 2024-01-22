#include<iostream>
using namespace std;
class Complex
{
    private:
         int real;
         int imaginary;
    public:
         Complex(int real=0,int imaginary=0)
         {
            this->real=real;
            this->imaginary=imaginary;
         }
         void display()
         {
            cout<<real<<"+i"<<imaginary<<endl;
         }
         Complex operator+(Complex C)
         {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
        }
};
int main()
{
  Complex C1(10,5),C2(4,5),C3;
  C3=C1+C2;
  C3.display();
}