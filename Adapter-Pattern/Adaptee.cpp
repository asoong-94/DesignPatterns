//
// Created by Alexander Soong on 10/31/17.
//

#include "Adaptee.h"
Adaptee::Adaptee() {
    newData = NULL;
}
Adaptee::Adaptee(int x) {
    newData = x;
}
void Adaptee::specificRequest() {
    std::cout << "I am the class being adapted to the target" << std::endl;
}