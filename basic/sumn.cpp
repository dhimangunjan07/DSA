#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    cout<<"sum of first"<<n<<"numbers is:"<<sum<<endl;
}