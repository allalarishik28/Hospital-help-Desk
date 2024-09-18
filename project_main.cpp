#include<bits/stdc++.h>
using namespace std;
#include"human.cpp"
#include"doctor.cpp"
#include"patient.cpp"
#include"doctor_directory.cpp"
#include"patient_directory.cpp"
doc_directory d1;
pat_directory d2;
#include"feedback.cpp"
feedback_functions feed;
#include"appointment_management.cpp"
appointment_mngmt m;



int main(){
while(true){
    cout<<"enter 1 for addmision, 2 for new_doctor, 3 for appointment, 4 for exit ";
    int i;
    cin>>i;
    
    if(i==1){
        d2.admission();
    }
    if(i==2){
        d1.new_appointment();
    }
    if(i==3){
       string x,y;
       cout<<"enter patient name: ";
       cin>>x;
       cout<<"enter doctor name: ";
       cin>>y;
       m.appoint_doctor(x,y);
    }
    if(i==4) break;
    }
    // d1.new_appointment();
    
    // m.appoint_doctor("Rishik","Asif")
    // m.print_all_past_appointments();
    return 0;
}