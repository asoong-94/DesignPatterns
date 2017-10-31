//
// Created by Alexander Soong on 10/30/17.
//

#include "Adapter.h"

Adapter::Adapter() {
    adaptee = new Adaptee();
}

void Adapter::Request() {
    adaptee->specificRequest();
}