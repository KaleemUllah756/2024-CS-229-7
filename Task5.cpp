#include <iostream>
using namespace std;
bool isPrime(int number);
int main(){
int number;
cout<<"Enter the number: "<<endl;
cin>>number;
bool result=isPrime( number);
cout<<result;

}
bool isPrime(int number){
for(int i=2; i< number; i++){
if(number % i==0)
return false;
}
return true;
}