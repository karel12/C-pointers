//
//  main.cpp
//  PointersTester
//
//  Created by Karel Kuzmiak on 27/07/2017.
//  Copyright © 2017 Karel Kuzmiak. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a = 5;
    //the value of a
    std::cout << a<<std::endl;
    //the address of a
    std::cout << &a<<std::endl;
    //get the address of a (&) and then the value at the address (*) -> full circle
    std::cout << *&a<<std::endl;
    /*
     POINTER
     */
    //create a pointer to integer,can only contain an address !!!
    int* pointer1;
    //point it towards the address of a
    pointer1 = &a;
    int* pointer2 = pointer1;
    std::cout <<"just pointer name "<< pointer1<<std::endl;
    std::cout <<"*pointer name " <<*pointer1<<std::endl;
    std::cout <<"pointer equal to a pointer " <<pointer2<<std::endl;

    
    


    

    
    /*
     REFERENCE
     */
    //creating a reference variable, the & can be put anywhere between data type and name
    int& referenceToA = a;
    //value of reference
    std::cout << referenceToA<<std::endl;
    //the address of reference
    std::cout << &referenceToA<<std::endl;

    return 0;
}
