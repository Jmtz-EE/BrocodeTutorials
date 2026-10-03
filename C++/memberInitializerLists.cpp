#include <iostream> 
using namespace std; 

class Student 
{
public: 
    string name;
    int start_year; 
    int grad_year; 
/*
    Student(string set_name, int set_start_year)
    {
        name = set_name;
        start_year = set_start_year;
    }*/

    //cant just use Student(string name, int start_year)
    /* it causes incorrect results why I am unsure
        one solution is to use this-> 
    */
   /*Student(string name, int start_year)
    {   
        //using this makes it so 
        //this -> name //uses the member variable name 
        
        this -> name = name; //name uses the parameter name now since we have this-> name included 
        this -> start_year = start_year;
    }*/

    //can use member initializer list instead 
    //Student(string name, int start_year) : name(name) , start_year(start_year) {}

    //can also write it in different lines
    //when using the memnber initializer list it is important that we follow the same order when initializing the member variables
    //as the member variables were declared in the class itself 
    
    Student(string name, int start_year) :
        name(name),
        start_year(start_year), 
        grad_year(start_year + 4)
    {
        cout << "Student Object Constructed!" << endl; 
    }
    
    

};




int main()
{
    Student s1("John", 2041);
    cout <<  "Name: " << s1.name << endl 
         << "Start Year: " << s1.start_year << endl
         << "Graduation Year: " << s1.grad_year; 

    return 0; 
}