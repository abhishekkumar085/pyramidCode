#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int n=1;n<=row;n++){
        for(int r=1;r<row-n+1;r++){
            cout<<" ";
        }
        int x;
        for(int r=1;r<=n;r++){

            x=x*(n-r)/r;
           cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}