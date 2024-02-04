#include<bits/stdc++.h>
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
