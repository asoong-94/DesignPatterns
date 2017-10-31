//
// Created by Alexander Soong on 10/31/17.
//

#ifndef ADAPTER_PATTERN_ADAPTEE_H
#define ADAPTER_PATTERN_ADAPTEE_H
#include <iostream>

class Adaptee {
public:
    Adaptee();
    Adaptee(int x);
    void specificRequest();
    int newData;
};


#endif //ADAPTER_PATTERN_ADAPTEE_H
