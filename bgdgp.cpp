#include<bits/stdc++.h>
using namespace std;
string next(string x)
{
    int len=x.size();
    while(x[--len]=='9')
        x[len]='0';
    x[len]++;
    return x;
}
int main()
{
    freopen("bgdgp.txt","w+",stdout);
    string a="00000000";
    printf("017"),cout << a << endl;
    for(long long i=0;i<1000000000;i++)
        printf("017"),cout  << next(a) << endl , a=next(a);
    return 0;
}
