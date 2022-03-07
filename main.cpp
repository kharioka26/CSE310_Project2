/*
Name: Kevin Harioka
Class: T/Th 7:30-8:45
Date: 3/6/22
Description: Answering queries by looking at data from .csv files
*/

#include "max-heap.cpp"
#include <iostream>
#include <String>

int main(int argc, char** argv){
    
//if printed query is query 1

    //builds a max heap for total workers
    if(argv[2] == "total")
    {
        buildMaxHeapTotal(H, n);
    }

    //builds a max heap for total female workers
    if(argv[2] == "female")
    {   
        buildMaxHeapFemale(H, n);
    }

    //builds a max heap for total male workers
    if(argv[2] == "male")
    {
        buildMaxHeapMale(H, n);
    }


    return 0;

}