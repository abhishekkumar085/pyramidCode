#include<iostream>
using namespace std;
int main(){
   int rows;
   cin>>rows;
   for(int i=1; i<=rows; ++i){
    for(int space=1;space<=rows-i;++space){
        cout<<" ";

    }

    for(int k=0;k!=2*i-1;++k){
        cout<<"*";
    }
    cout<<endl;

   }
  

}