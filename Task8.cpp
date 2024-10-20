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