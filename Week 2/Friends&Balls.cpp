#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    int a[n]={0},m,i,j;
    cin>>m;
    
    for(i=0;i<m;i++)
    {
        int b,c;
        cin>>b>>c;
        for(j=b-1;j<=c-1;j++)
            a[j]++;
    }
    int q;
    cin>>q;
    
    while(q--){
        int y=0;
        int x;
        cin>>x;
        for(i=0;i<n;i++){
            if(a[i]>=x)
                y++;
        }
        cout<<y<<endl;
    }
    
    return 0;
}
