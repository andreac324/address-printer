//
//  main.cpp
//  ca6
//
//  Created by Andrea d Cazares on 9/14/24.
//

#include <iostream>
using namespace std;
int main (){
    string streetName;
    string city,state;
    int zipcode;
    
    cout << "enter your street: \n";
    getline(cin,streetName);
    
    cout<< "enter your city: \n";
    getline(cin,city);

    cout<< "enter your state: \n";
    getline(cin,state);

    cout <<"enter your zipcode: \n";
    cin>>zipcode;
    
    cout<< streetName<< " " << city<< " "<< state<<" "<< zipcode<< " "<<endl;
    //as 6
return 0;
    
}
