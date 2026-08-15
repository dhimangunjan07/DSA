#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"sum of even numbers is:"<<sum<<endl;
    return 0;
    
    }
