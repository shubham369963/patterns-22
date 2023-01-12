#include<bits/stdc++.h>
using namespace std;

int main(){

    int row=5,col=5;

    for(int i=0; i<row; i++){
        int cnt=1;
        for(int j=i; j<col;j++){
            cout<<cnt;
            cnt++;
        }
        cout<<endl;
    }




    return 0;
}