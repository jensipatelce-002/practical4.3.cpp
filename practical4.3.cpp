#include<iostream>
#include<string>
using namespace std;

int main()
{
    int choice;
    string en,sn,branch;
    int semester,marks;
    long long mn;

    do
    {

    cout<< "**************************************************"<<endl;
    cout<< "    STUDENT RECORD MANAGEMENT SYSTEM              "<<endl;
    cout<< "**************************************************"<<endl<<endl;


    cout<< "----------------MAIN MENU-------------------------"<<endl<<endl;

    cout<< "1.Register New Student"<<endl;
    cout<< "2.Display Student Record"<<endl;
    cout<< "3.Enter Student Marks"<<endl;
    cout<< "4.Display Academic Result"<<endl;
    cout<< "5.Exit"<<endl;

    cout<<"Enter Your choice : ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<< "\n---------------------------------\n";
        cout<< "      Student Registration          "<<endl;
        cout<< "------------------------------------"<<endl<<endl;

        cout<< "Enrollment Number : ";
        cin>>en;

        cout<< "Student Name : ";
        cin>>sn;

        cout<< "Branch : ";
        cin>>branch;

        cout<< "Semester : ";
        cin>>semester;

        cout<< "Mobile Number : ";
        cin>>mn;

        cout<< "\n-------------Student Record---------------\n";
        break;

    case 2:
        cout<< "\n------------Student Record----------------\n";
        cout<< "Enrollment Number :"<<en<<endl;
        cout<< "Student Name :"<<sn<<endl;
        cout<< "Branch :"<<branch<<endl;
        cout<< "Semester :"<<semester<<endl;
        cout<< "Mobile Number :"<<mn<<endl<<endl;
        break;

    case 3 :
        cout<<"\n Enter Student Marks :"<<endl;
        cin>>marks;

        cout<< "Marks Entered Successfully !\n";
        break;

    case 4:
        cout<< "\n---------Academic Result-----------\n";
        cout<< "Marks :"<<marks<<endl;

        if(marks>=40)
        {
            cout<< "Result : pass\n";
        }
        else
        {
            cout<< "Result = Fail\n";

        }
        break;
    case 5:
        cout<< "\n Thank you!\n";
        break;
