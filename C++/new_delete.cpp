#include <iostream>
//new and delete operators for Dynamic memory allocation 
using namespace std;

class student 
{
public : 
    string name;
    void print()
    {
        cout << name << endl;

    }
    student(string name) : name(name) {}//causes the new operator to call this new constructor
};

//stack works when we know how much data needs to be stored at compile time
//heap for dynamic memory allocation
int main()
{
    int x = 4; //memory located at the stack 
    //* means its a pointer
    int * pInt = new int; //int means it will store the memory address of a pointer 
    //int * pInt = new int(5); will assing the value 5 to the allocated memory
    //new int - will alocate space for an int on the heap 

    // pInt pointer will store the memory location set aside on the heap by new int 
    *pInt = 5; //assigning value to heap using dereference

    cout << "pointer to int: " << pInt << endl;
    cout << "dereference of pointer to int: " << *pInt << endl;

    //example memory leak
    pInt = new int(10); 
    //pInt stores new heap memory address but now there is nothing pointing to 5 
    //so the memory address of 5 is lost and cannot be deleted 

    //memory leak - cant delete the memory anymore
    //a memory leak can occur if the pointer that points to heap memory is overwritten
    
    //data at the heap must be deleted
    //delete operator calls the destructor for an object
    delete pInt;

    //pointer arrays

    double *array = new double[4]; //creates heap contigous memory

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

    for (int i = 0; i < 4; i++)
        cout << "array[" << i << "] = " << array[i] << endl;
        
    delete[] array; 

    //using heap with objects

    //student *Student = new student;
    student *Student = new student("Jesus"); 
    (*Student).name = "Jesus"; //setting member variable name to Jesus
    (*Student).print();//calling member function
    //the * is dereferencing the pointer and we are accessig the object on the heap 
    delete Student;

    //another operator we can use to acess the member variables and member functions of the object on the heap
    Student -> name = "Mary"; 
    Student -> print();

    //malloc() calloc() free() - can still be used in C++
    //new vs malloc and calloc
    //new calls the constructor of an object when memory is dynamically allocated for that object

    //what happens if we define our own cosntructor that accepts an argument


    /*
    STACK 

    Variable      Memory Address      Value
    x             0x0001              4
    pInt          0x0002              0x9901
                  ...
                  ...
                  ...
                  ...
    HEAP
                  0x9901               5
                  0x9902               10
                  0x9903
    */
    return 0;
}