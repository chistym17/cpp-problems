#include<bits/stdc++.h>
using namespace std;

bool check_if_they_have_same_characters(string s,string t)
{
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t)return true;
else return false;
}

bool check_positions_where_characters_are_different(string s,string t)
{
int i=0,j=0,count=0;
int n=s.size();

for(int i=0;i<n;i++)
{
if(s[i]!=t[i])count++;

}
if(count==2)return true;
else return false;

}

int main()
{
string s,t;
cin>>s>>t;

if(s.size()==1){
   cout<<"false"<<endl;

}
else
{
if(check_if_they_have_same_characters(s,t) && check_positions_where_characters_are_different(s,t))
{
    cout<<"true"<<endl;

}
else
{
    cout<<"false"<<endl;
    
}

}

    return 0;
}