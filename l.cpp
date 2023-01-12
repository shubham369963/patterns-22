#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5;

    for(int i = 1; i<=n; i++){
            for(int j1 = 1; j1<=i; j1++){
                cout<<j1<<" ";
            } 
            
            for(int s = 1; s<= ((2*n) - (2*i)); s++){
                cout<<"  ";
            } 
            
            for(int j2 = i; j2>=1; j2--){
                cout<<j2<<" ";
            } 
            
            cout<<endl;
        }

    return 0;
}