#include <iostream>
using namespace std;
void printHalfDiamond(int n);
void printHalf(int n);
int main(){
int n;
cout<<"Enter the desired rows: "<<endl;
cin>>n;
printHalfDiamond(n);
printHalf(n);
return 0;
}
void printHalfDiamond(int n){
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
}
void printHalf(int n){
for(int i=n-1; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
}


