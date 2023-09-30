#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans=1;
    if(n<=1)
        return ans;
    while(n>1){
        ans*=n;
        n--;
    }
    
    return ans;
}

int ncr(int n, int r)
{
    int ans=fact(n)/(fact(r)*fact(n-r));
    if(n==0 || r==0)
        ans=1;
    return ans;
}

void pascal(int n)
{
    vector<vector<int>> matrix(n,vector<int>(n));
    int jmax=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            matrix[i][j]=ncr(i,j);
            cout<<matrix[i][j];
        }
        cout<<endl;
        jmax++;
    }
    
}

int main()
{
    int n=4;
    // cout<<fact(n);
    pascal(n);
    return 0;
}