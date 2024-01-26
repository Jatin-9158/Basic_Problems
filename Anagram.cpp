#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
{
 string n1,n2;
 cin>>n1;
 cin>>n2;
 transform(n1.begin(),n1.end(),n1.begin(), ::tolower);
 transform(n1.begin(),n1.end(),n2.begin(), ::tolower);
 sort(n1.begin(),n1.end());
 sort(n2.begin(),n2.end());
 if(n1==n2)
        cout<<"True";
 else
  cout<<"False";
return 0;
}
