#include<bits/stdc++.h>
using namespace std;
string reset_data(string x)
{
    int len=x.size();
    for(int i=0; i<len; i++)
        x[i]='0';
    return x;
}
string next_data(string x)
{
    int len=x.size();
    for(int i=len-1;i>=0;i--)
    {
        if(x[i]!='z')
        {
            x[i]++;
            return x;
        }
        else
            x[i]='0';
    }
    return x;
}
bool valid_data(string x)
{
    int len=x.size();
    for(int i=0;i<len;i++)
    {
        if(x[i]!='Z')
            return true;
    }
    return false;
}
int main()
{
    //freopen("passwords.txt","w+",stdout);
    string data="00000000";
    data=reset_data(data);
    while(data.size()<16)
    {
        if(valid_data(data)!=true)
        {
            data=data+"a";
            data=reset_data(data);
        }
        cout << data << endl;
        data=next_data(data);
    }
    return 0;
}
