//PATIENTS MANAGEMENT SYSTEM 2022
//NATALIE MAKANDA R201554A
#include <iostream>// Input/output stream
#include <string>//strings library
#include <fstream> //file librayr

using namespace std;

class Patient // patient entity


{    public:
     int index;
     string firstname,lastname,condition,treatment,attendant; // to contain fields of patient




}; //class ends here
class Management{
    public:

    Patient patients[8]; // array to store 8 patients //our hospital capacity


  void createPatients(){
      remove("patients.txt");
      ofstream PatientFile("patients.txt",std::ios_base::app); // create new  file

       int count = 1; // to count the students
    for(Patient patient :patients){


        patient.index = count;
 //firstname
        cout<<"\nENTER FIRSTNAME OF PATIENT : "<<patient.index<<"\n";
        cin>>patient.firstname;
        PatientFile<<"\n********************************\n\n\n FIRSTNAME OF PATIENT :"<<patient.firstname; //write in append mode
//last name

        cout<<"\nENTER LASTNAME OF PATIENT "<<patient.index<<"\n";
        cin>>patient.lastname;
        PatientFile<<"\n LASTNAME :"<<patient.lastname; //write in append mode

//condition
       cout<<"\nENTER CONDITON OF PATIENT : "<<patient.index<<"\n";
        cin>>patient.condition;
        PatientFile<<"\n CONDITON OF PATIENT :"<<patient.condition; //write in append mode
//treatment
cout<<"\nENTER TREATMENT OF PATIENT : "<<patient.index<<"\n";
        cin>>patient.treatment;
        PatientFile<<"\n TREATMENT   OF PATIENT :"<<patient.treatment; //write in append mode
//attendant
cout<<"\nENTER ATTENDANT OF PATIENT : "<<patient.index<<"\n";
        cin>>patient.attendant;
        PatientFile<<"\n ATTENDANT   OF PATIENT :"<<patient.attendant; //write in append mode

        count++;

        }//end loop

//write to file of students then loop

PatientFile.close();
    }//end function


  void viewPatients(){
      string patients;
     ifstream PatientFile("patients.txt");
     while(getline(PatientFile,patients)){
        cout <<patients<<"\n";
     }
  }//endof viewReport
  void DeletePatients(){
      int choice;
      cout<<"Are you sure you want to delete all patients record \nenter 1 for yes \nenter 0 for no";
      while(!(cin>>choice)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Please enter a valid option";
      }
      if(choice==1){
        remove("patients.txt");
        cout<<"Patients record database completely deleted";
      }
      else{
        //no deletion occurs
      }

  }//endof Delete

}; //endof admin class

void menu (){
     //VARIABLES
    Patient patients[8];
    Management manager;
    int action;
    cout<<"\n******************************************************************************\n\t\t\t***WELCOME TO PATIENTS  MANAGEMENT SYSTEM***\n\n";
    cout<<"\n\t\tCHOOSE ACTION\n\n";
    cout<<"1 : CREATE PATIENTS RECORDS\n";
    cout<<"2 : VIEW PATIENTS RECORDS\n";
    cout<<"3 : UPDATE PATIENTS RECORDS\n";
    cout<<"4 : DELETE PATIENTS RECORDS\n";
     while(!(cin>>action)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Enter a valid option";
     }
    if(action==1){
       manager.createPatients();
    }
else if(action==2){
      manager.viewPatients();
}
else if(action==3){
        manager.createPatients();
}

else if(action==4){
  manager.DeletePatients();
}
else{
    cout<<"Enter a number please";
}


menu(); //recursive

}//end of menu function

int main(){

menu();


}//endof main
