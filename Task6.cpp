#include <iostream>
using namespace std;
bool isPrime(int num);
unsigned long primorial(int n);
int main(){
int n;
cout<<"Enter a number to find its primorial: ";
cin>>n;
unsigned long result=primorial(n);
cout<<result;



}
bool isPrime(int num){
if(num<=1)
return false;
for(int i=2; i*i<=num; i++){
    if (num%i==0)
    return false;
}
return true;

}
unsigned long primorial(int n){
unsigned long product=1;
int count=0;
int candidate=2;
while(count <n){
if(isPrime(candidate)){
    product=product*candidate;
    count++;
}
candidate++;

}
return product;


}