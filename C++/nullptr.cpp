#include <iostream>

int main()
{
    /*
     Null value = a special value that meansomething has no vlaue 
     When a pointer is holding a null value that pointer 
     is not pointing to anythin(null pointer)

     nullptrs are helpful when determining if an address 
     was succesfully assigned to a pointer 

    */

    int *pointer = nullptr; 
    int x =123;

    pointer = &x;

    if(pointer == nullptr)
    {
        std::cout << "address was not assigned";
    }
    else
        std::cout << "adress was assigned";
    //dereferencing a nullptr can lead to undefined behavior

    return 0;
}