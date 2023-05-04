#include<iostream>
using namespace std;


void print_triangle(int row){
    for(int n=1;n<=row;n++){
        for(int r=1;r<row-n+1;r++){
            cout<<" ";
        }
        int value;
        for(int r=1;r<=n;r++){
            cout<<"*"<<" ";

            value=value*(n-r)/r;
        }
        cout<<endl;


    }
}

int main(){
    int row=4;
    print_triangle(row);
    return 1;
}