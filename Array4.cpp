#include <iostream>

using namespace std;

int main() {
    int a[5]={1,4,45,23,23};
    int n,b=0;
    cout<< "Enter a number to find"<<endl;
    cin>>n;
    for(int i=0;i<=4;i=i+1){
        if(a[i]==n){
            b=1;
            
        }
        
    }
    if(b==1){
        cout<<"Matched";
    }
    else{
        cout<<"Not Matched";
    }


}