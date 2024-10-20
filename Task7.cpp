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