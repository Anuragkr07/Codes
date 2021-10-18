# Codes

Write a program to convert a Decimal to Binary

#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>s;
   int n;
   cout<<"Enter a decimal Number :"<<endl;
   cin>>n;
   while(n>0){
       int r=n%2;
       s.push(r);
       n=n/2;
   }
   
   while(!s.empty()){
       cout<<s.top();
       s.pop();
   }
   return 0; 
}
