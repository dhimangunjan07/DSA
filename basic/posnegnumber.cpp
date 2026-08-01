#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter any number" ;
    cin >> num;
    if (num>0){
        cout << "the no is positive"<<endl;

    }
    else if (num<0){
        cout << "the no is negative"<<endl;
    }
    else{
        cout << "the no is zero"<<endl;
    }
    return 0;
}