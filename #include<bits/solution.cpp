#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int a = 0; a<t; a++){
        int n;
        cin>>n;
        int in, fine;
        cin>>in;
        for(int i = 1; i<n; i++){
            int tmp;
            if(i == n-1){
                cin>>fine;
            }else{
                cin>>tmp;
            }
        }
        if(fine > in){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
