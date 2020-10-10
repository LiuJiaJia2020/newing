#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  
using namespace std;
int main()
{
    const char*c;
    string s ="1234";

    char*p = new char[20];
    
    strcpy(p, s.c_str());
    int k = atoi(p);
    cout << k << endl;
    
 } 
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> sta;
        int sum = 0;
        for(int i = 0 ; i < ops.size() ; i ++)
        {
            if(ops[i] == "+")
            {
                int a = sta.top();
                sta.pop();
                int b = sta.top();
                sta.pop();
                sta.push(b);
                sta.push(a);
                sta.push(a+b);
            }
            
            else if(ops[i] == "D"){
                int c = sta.top();
                sta.push(c*2);
            }
            
            else if(ops[i] == "C"){
                sta.pop();
            } 
            
            else{
                char k[20];
                strcpy(k,ops[i].c_str());
                int kk = atoi(k);
                cout << k << endl;
                 sta.push(kk);
            } 
        }
        
        while(!sta.empty())
        {
            sum+=sta.top();
            sta.pop();
        }
        return sum;
    }
};