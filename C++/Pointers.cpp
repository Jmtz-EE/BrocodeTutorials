#include <iostream> 

int main() 
{

    //pointers = variable that stores a memory address of another variable 
    //sometimes its easier to work with an address

    //& address -of operator 
    // * dereference operator 
    
    //to create a pointer it should be of the same data type that it is pointing to 
    std::string name = "Bro"; 
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3","pizza4", "pizza5"};
    //array is already a memory address 

    std::string *pName = &name;
    int *pAge = &age; 

    std::cout << pName;
    std::cout << pAge;

    
    return 0; 

    
}