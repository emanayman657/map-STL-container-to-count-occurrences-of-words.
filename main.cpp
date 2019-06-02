#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    int x=0;
    map<string, int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        getline(cin,str);
        s.insert(pair<string, int>(str,s[str]++));
        if(str=="done"){
            break;
        }
        cout<<i<<"=";

    }
    /*if(str[0]=='a'){
    for(map<string, int>::iterator it=s.begin();it!=s.end();it++)
    {
        s.erase(it)
        cout<<it->first<<":"<<it->second<<endl;
    }

    }*/
    //else{
    for(map<string, int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
   // }




    //cout<<s.size()<<endl;

    return 0;
}
