#include<iostream>
#include<string>
using namespace std;

struct Doctor {
    string name;
    string availableDay;
};

Doctor doctors[] = {
    {"Dr. Smith", "Monday"},
    {"Dr. Johnson", "Wednesday"},
    {"Dr. Lee", "Friday"}
};

void display() {
    cout << "============================" << endl;
    cout << " WELCOME TO CMH HOSPITAL" << endl;
    cout << "===========================" << endl;
    cout << " 1:  Add patient " << endl;
    cout << " 2:  View patient " << endl;
    cout << " 3:  Check appointment " << endl;
    cout << " 4:  Book appointment " << endl;
    cout << " 5:  Cancel appointment " << endl;
    cout << " 6:  View doctor availability " << endl;
    cout << " 7:  Exit program " << endl;
    cout << "===========================" << endl;
}

void addpatient() {
    int age, id;
    long long int contact;
    string name, gender;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the contact: ";
    cin >> contact;
    cout << "Enter the id: ";
    cin >> id;
    cout << "Enter the gender: ";
    cin >> gender;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Patient added successfully!" << endl;
}

void viewpatient() {
    int age, id;
    long long int contact;
    string name, gender;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the contact: ";
    cin >> contact;
    cout << "Enter the id: ";
    cin >> id;
    cout << "Enter the gender: ";
    cin >> gender;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Patient viewed successfully!" << endl;
}

void bookappointment() {
    long long int date;
    string name, gender, doctorName;
    int id, age;
    long long int contact;
    
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the gender: ";
    cin >> gender;
    cout << "Enter the id: ";
    cin >> id;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the contact: ";
    cin >> contact;
    
    cin.ignore(); 
    cout << "Enter doctor name: ";
    getline(cin, doctorName); 
    
    bool found = false;
    string availableDay;
    for (int i = 0; i < 3; i++) {
        if (doctors[i].name == doctorName) {
            found = true;
            availableDay = doctors[i].availableDay;
            break;
        }
    }
    
    if (found) {
        cout << doctorName << " is available on " << availableDay << "." << endl;
        cout << "Enter the appointment date (day of the week): ";
        string appointmentDay;
        cin >> appointmentDay;
        
        if (appointmentDay == availableDay) {
            cout << "Your appointment has been booked successfully with " << doctorName << " on " << appointmentDay << "!" << endl;
        } else {
            cout << doctorName << " is not available on " << appointmentDay << ". Please choose " << availableDay << "." << endl;
        }
    } else {
        cout << "Doctor not found!" << endl;
    }
}

void cancelappointment() {
    int id;
    cout << "Enter the patient ID to cancel appointment: ";
    cin >> id;
    cout << "Your appointment has been cancelled successfully!" << endl;
}

void checkappointment() {
    long long int date;
    string name, gender, doctorName;
    int id, age;
    long long int contact;
    cout << "Enter the name ";
    cin >> name;
    cout << "Enter the gender ";
    cin >> gender;
    cout << "Enter the age ";
    cin >> age;
    cout << "Enter the doctor name ";
    cin >> doctorName;
    cout << "Enter the date ";
    cin >> date;
    cout << "Enter the patient ID to check appointment: ";
    cin >> id;
    cout << "Checking appointment details successfully!" << endl;
}

void viewDoctorAvailability() {
    cout << "Doctor Availability Schedule:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << doctors[i].name << " is available on " << doctors[i].availableDay << endl;
    }
}

void exitprogram() {
    cout << "Thank you for using the hospital management system!" << endl;
}

void menu() {
    int choice;
    while (true) {
        display();
        cout << "What would you like to do? ";
        cin >> choice;
        switch (choice) {
        case 1:
            addpatient();
            break;
        case 2:
            viewpatient();
            break;
        case 3:
            checkappointment();
            break;
        case 4:
            bookappointment();
            break;
        case 5:
            cancelappointment();
            break;
        case 6:
            viewDoctorAvailability();
            break;
        case 7:
            exitprogram();
            return;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
        cout << endl;
    }
}

int main() {
    menu();
    return 0;
}

