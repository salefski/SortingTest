//
//  main.cpp
//  SortingTest
//
//  Created by Bill Salefski on 21-Feb-15.
//  Copyright (c) 2015 Bill Salefski. All rights reserved.
//

#include <iostream>
#include <vector>

#define SIZE 10

void printVector (std::vector<int> v) {
    std::vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); ++itr) {
        printf(" %i", *itr);
    }
    printf("\n");
}

void insertionSortVector (std::vector<int>& v) {
    std::vector<int>::iterator itr, jtr, mitr;
    int mx;
    if(v.size()<=1) return; // trivially sorted
    for(itr=v.begin(); itr!=v.end(); ++itr) {
        mitr=itr;
        mx=*itr;
        for(jtr=v.end()-1; jtr!=itr; --jtr) {
            if(mx>*jtr) {
                mitr=jtr;
                mx=*jtr;
            }
        }
        *mitr=*jtr;
        *itr=mx;
        printVector(v);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::vector<int> v;
    for(int i=0; i<SIZE; ++i) {
        v.push_back(SIZE-i);
    }
    printVector(v);
    insertionSortVector(v);
    printVector(v);
        return 0;
}
