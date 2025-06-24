#include<iostream>
#include<string>
using namespace std;
int main()
{
    string username;
    int age;
    double discount,price,totalbill;
      string blue = "\033[1;34m";
      
    
    cout << "enter the username : "<<endl;
    cin >> username;
    cout << "enter the age" <<endl;
    cin >> age;
    
    if(age <18 ){
        price = 60;
        discount = price*0.06;
        totalbill= price -discount;
        cout << "your total bill is " << totalbill <<endl;
        cout << "the discount is " << discount <<endl;
    }
    else if(age ==18){
        price = 80;
        discount = price*0.04;
        totalbill= price -discount;

         cout << "your total bill is " << totalbill <<endl;
          cout << "the discount is " << discount <<endl;
    }
    else if(age >18){
         price = 90;
        discount = price*0.09;
        totalbill= price -discount;

         cout << "your total bill is " << totalbill <<endl;
          cout << "the discount is " << discount <<endl;
    }
    else {
        cout << "Error !";
    }
    return 0;
}