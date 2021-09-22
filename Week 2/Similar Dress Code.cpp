#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--){
        char a[101];
        cin>>a;
        int b=0,c=0,i=0;
        while(a[i]!='\0'){
            if(a[i]=='0')
                b++;
            else
                c++;
            i++;
        }
        if(b<c)
            cout<<b<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
