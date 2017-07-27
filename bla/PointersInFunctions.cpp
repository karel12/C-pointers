//
//  PointersInFunctions.cpp
//  PointersTester
//
//  Created by Karel Kuzmiak on 27/07/2017.
//  Copyright © 2017 Karel Kuzmiak. All rights reserved.
//

#include <stdio.h>
#include <iostream>

    //pass copy basicall
    void passByValue(int value);
    //as actual variable
    void passByReference(int &reference);
    void passByPointer (int *pointer);


int main(){
    int x = 5;
    int y = 3;
    int* pointer = &y;
    std::cout<<"x just declared = "<< x<<std::endl;
    passByValue(5);
    std::cout<<"x after passed by value = "<< x<<std::endl;
    passByReference(x);
    std::cout<<"x after passed by reference = "<< x<<std::endl;
    
    std::cout<<" "<<std::endl;

    std::cout<<"starting y  = "<< y<<std::endl;
    std::cout<<"starting *pointer to y   = "<< *pointer<<std::endl;
    passByPointer(pointer);
    std::cout<<"y after passed by pointer = "<< y<<std::endl;
    std::cout<<"*pointer after passed by pointer = "<< *pointer<<std::endl;



    

    
}

void passByValue(int value){
    value = 10;
    std::cout<<"passed by value = "<< value<<std::endl;
}

void passByReference(int &reference){
    reference = 20;
    std::cout<<"passed by reference = "<< reference<<std::endl;

}

void passByPointer (int *pointer){
    *pointer = 30;
    std::cout<<"passed by pointer "<< *pointer<<std::endl;

}

