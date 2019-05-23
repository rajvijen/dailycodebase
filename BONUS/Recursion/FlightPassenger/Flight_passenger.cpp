/**
 * Flight Passanger Problem
 * @author rajvijen
 * @date 23/05/2019
 */

#include <bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    return n<=0?1:n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n-1)-fact(n-2)<<"/"<<fact(n)-fact(n-1)<<endl;
    return 0;
}
