//
// Created by Alexander Soong on 10/30/17.
//

#ifndef ADAPTER_PATTERN_TARGET_H
#define ADAPTER_PATTERN_TARGET_H

#include <iostream>
using namespace std;


class Target {
public:
    Target();
    Target(int data);
    virtual void Request();
    int data;
};


#endif //ADAPTER_PATTERN_TARGET_H
