#include <iostream>
#include <stack>
using namespace std;
void Removed_at_Middle(stack<int>&s,int count)
{
    if(count==((s.size())/2))
    {
        s.pop();
        return;
    }
    else
    {
       int num=s.top();
       s.pop();
       Removed_at_Middle(s,count+1);
       s.push(num);   
    }
}
int main() {
    std::stack<int> myStack;


    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);


    std::cout << "Original stack: ";
    std::stack<int> originalStack = myStack;
    while (!originalStack.empty()) {
        std::cout << originalStack.top() << " ";
        originalStack.pop();
    }
    std::cout << std::endl;
    int count=0;

    Removed_at_Middle(myStack,count);


    std::cout << "New stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
