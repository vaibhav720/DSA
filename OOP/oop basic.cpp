#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Employee{
    string Name;
    string Company;
    int Age;
    public:
    void IntroduceYourself(){
        
        cout<<"Name - "<<Name<<"\n";
        cout<<"Company - "<<Company<<"\n";
        cout<<"Age - "<<Age<<"\n";
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company= company;
        Age=age;
    }

};


int main()
{
    Employee employee1;


   return 0;
}