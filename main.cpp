#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int p, item=0;
        cin>>p;
        
        while(p>0){
            int value=0, j=0;
            while(p>=value){
                value=pow(2,j);
                if(value>2048){
                    break;
                }
                j++;
            }
            value/=2;
            item++;
            p-=value;
        }
        
        cout<<item<<endl;
    }
    return 0;
}
