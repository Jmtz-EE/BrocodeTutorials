#include <stdio.h> //is .h always needed when adding header
/*
enum Day //creating constants inside the enum 
{   
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
      we can assign a value to each ie sunday = 1, monday =2 ... 
        but if we dont then the first first constant is 0 and then the value of the next constant is 
        incremented by 1 
    
};*/
typedef enum 
{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day; 

/* an enum can be combined with a typedef keyword */

int main()
{
    //enum = A user-defined data type that consists 
    //of a set of named integer constants 
    //Benefit: Replaces numbers with readable names

   // enum Day today = SUNDAY;

   //using the typedef now dont need to say enum 
    Day today = SUNDAY; 

    printf("%d", today); 

}