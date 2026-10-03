#include <iostream>
#include <queue> 
using namespace std;
//queue using the stl

//when new elements are pushed onto the queue they become the back of the queue 

//removing element -popping/dequeue
//adding element - push/enqueue

int main()
{
    //fifo structure 
    //in C++ queue data structure is a container - an adapter container

    //an adaptive container means the elements of the queue are stored in a different data strucutre
    //the queue is just designed to behave like a queue 

    queue<int> numbers; 
    
    cout << "size: " << numbers.size() <<endl;
    
    if(numbers.empty())
        cout << "Queue is empty" << endl; 
    
    numbers.push(8);

    if (!numbers.empty())
        cout << "Queue is not empty" << endl;

    cout << "front: " << numbers.front() <<endl;
    cout << "back:" << numbers.back() << endl; 
    
    numbers.push(9);
    numbers.push(5);

    cout<< endl; 
    cout << "front: " << numbers.front() <<endl; 
    cout << "back: " << numbers.back() <<endl;
    cout << "size: " << numbers.size() << endl;

    int poppedValue = numbers.front();

    numbers.pop();

    cout << "front: " << numbers.front() <<endl; 
    cout << "back: " << numbers.back() <<endl;
    cout << "size: " << numbers.size() << endl;

    queue<int> other_queue ;

    other_queue.push(4) ;

    //.swap swaps the content of the two queues

    other_queue.swap(numbers);

    
  
    return 0;

}
