#include<iostream>
using namespace std;
typedef struct
{
    int A[10];
    int length;
    int size;
}Array;
void Display(Array *Arr)
{
    cout<<"Elements are:";
    for(int i=0;i<Arr->length;i++)
    {
        cout<<Arr->A[i]<<" ";
    }
    cout<<endl;
}
void Append(Array *Arr,int data)
{
    if(Arr->length<Arr->size)
            Arr->A[Arr->length++]=data;
}
void Insert(Array *Arr,int index,int data)
{
    if(index>=0 && index<=Arr->length)
    {
        for(int i=Arr->length;i>index;i--)
                          Arr->A[i]=Arr->A[i-1];
        Arr->A[index]=data;
        Arr->length++;
    }
}
int main()
{
    Array arr={{1,4},2,10};
    Display(&arr);
    Insert(&arr,2,3);
    Append(&arr,4);
    Display(&arr);

}