//
// Created by Alexander Soong on 10/30/17.
//

#ifndef ADAPTER_PATTERN_ADAPTER_H
#define ADAPTER_PATTERN_ADAPTER_H


#include "Target.h"
#include "Adaptee.h"
class Adapter : public Target {
protected:
    // the object adapter will adapt to the Target class
    Adaptee *adaptee;
public:

    Adapter();
    // the function call that adapts the SpecificRequest into Request
    void Request();
    int data;
};


#endif //ADAPTER_PATTERN_ADAPTER_H
