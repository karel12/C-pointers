//
//  PointerArray.cpp
//  PointersTester
//
//  Created by Karel Kuzmiak on 27/07/2017.
//  Copyright © 2017 Karel Kuzmiak. All rights reserved.
//

#include <iostream>

int main() {
    int a[] = {1,2,3};
    //create a pointer to the address of the first element of the array
    int* pointer = &a[0];
    //print the value at the address pointed to
    std::cout << *pointer<<std::endl;
    //[0] works the same as *
    std::cout << pointer[0]<<std::endl;
    std::cout << pointer<<std::endl;
    //by adding one we move by one IN MEMORY SLOTS
    std::cout << pointer +1<<std::endl;
    std::cout << "ARRAY"<<std::endl;

        //pointer array
    int a1 = 5;
    int a2 = 7;
    int a3 = 10;
    
    int* p1 = &a1;
    int* p2 = &a2;
    int* p3 = &a3;
    
    int* array[] = {p1,p2,p3};
    std::cout <<"just the array "<< array<<std::endl;
    std::cout <<"*the array "<< *array<<std::endl;
    std::cout <<"**the array "<< **array<<std::endl;


    

    


    return 0;

}
