#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
       stringstream iss(s);
       string word;
       vector<string>words;
       while(iss>>word)
       {
           words.push_back(word);
       }
       string reversed="";
       for(auto it=words.rbegin();it!=words.rend();it++)
       {
         reversed=reversed+(*it)+" ";
       }
       if(!reversed.empty() && reversed.back()==' ')
       {
           reversed.pop_back();
       }
       return reversed;
    }
};
int main()
{ 
  Solution S;
  string s="Hello Hi ABC";
  cout<<S.reverseWords(s);
  return 0;
}
