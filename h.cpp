#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){

        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int k=i; k<n;k++){
            cout<<"*";
        }
        for(int k=i; k<n-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}