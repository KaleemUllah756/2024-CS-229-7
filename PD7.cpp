//Task 1
#include <iostream>
using namespace std;
void printStars(int rowsize);
int main(){
int rowsize;
cout<<"Enter the rowsize: "<<endl;
cin>>rowsize;
printStars(rowsize);

}
void printStars(int rowsize){
for(int row=1; row<=rowsize; row++){
    for(int col=1; col<=row; col++)
    cout<<"*";
}
cout<<endl;
}

//Task 2
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

//Task 3
#include <iostream>
using namespace std;
void amplify(int num);
int main(){
int num;
cout<<"Enter the number to amplify: "<<endl;
cin>>num;

amplify(num);
}
void amplify(int  num){
for(int i=1; i<=num; i++){
    if(i%4==0){
        cout<<i*10;
    }else{
        cout<<i;
    }if(i<num){
        cout<<", ";
    }
    
}
cout<<endl;
}
//Task 4
#include <iostream>
using namespace std;
int main(){
int num, dots;
cout<<"Enter the number of triangle: "<<endl;
cin>>num;
dots=(num*(num+1))/2;
cout<<"Dots in the triangle: "<<dots;

}

//Task 5
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

//Task 6
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

//Task 7
#include <iostream>
using namespace std;

int main(){
int period;
cout<<"Enter the number of days you visited hospital: "<<endl;
cin>>period;
int treatedpatients=0;
int untreatedpatients=0;
int currentdoctors=7;

for(int day=0; day<period; day++){
    int patientstoday;
    cout<<"Enter number of patients visited today "<<(day+1)<<": "<<endl;
    cin>>patientstoday;

if(patientstoday <= currentdoctors){
    treatedpatients= treatedpatients + patientstoday;
}else{
    treatedpatients=treatedpatients + currentdoctors;
    untreatedpatients=untreatedpatients+ (patientstoday - currentdoctors);
}
if((day+1)%3==0 && untreatedpatients>treatedpatients){
    currentdoctors++;
}


}

cout<<"Treated Patients: "<<treatedpatients<<endl;
cout<<"Untreated Patients: "<<untreatedpatients<<endl;



}

//Task 8
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int count;
cout<<"Enter the count of cargo for transportaion: "<<endl;
cin>>count;

double totalcost=0.0;
double totalweight=0.0;
double minibus=0.0;
double truck=0.0;
double train=0.0;

for(int i=0; i< count; i++){
    int weight;
    cout<<"Enter the weight of cargo: "<<(i+1)<<": "<<endl;
    cin>>weight;
totalweight=totalweight+weight;
if(weight<=3){
    totalcost=totalcost+ (weight*200);
    minibus=minibus+weight;
}else if(weight>3 && weight <=11){
    totalcost=totalcost+(weight*175);
    truck=truck+weight;
}else{
    totalcost=totalcost+(weight*120);
    train=train+weight;
}

}
double averageprice=totalcost/totalweight;

double minibuspercentage=(minibus/totalweight)*100;
double truckpercentage=(truck/totalweight)*100;
double trainpercentage=(train/totalweight)*100;

cout<<fixed<<setprecision(2);
cout<<"Average price per ton: "<<averageprice<<endl;
cout<<"Percentage of carge by minibus: "<<minibuspercentage<<"%"<<endl;
cout<<"Percentage of carge by truck: "<<truckpercentage<<"%"<<endl;
cout<<"Percentage of carge by train: "<<trainpercentage<<"%"<<endl;




}

