#include <iostream>
#include "Target.h"
#include "Adapter.h"


int main() {
    // this is the target class the new adaptee needs to be adapted to
    // this is the functionality client already has
    Target *target = new Target(5);

    // this is the adapter client create's to call the new functionality
    Adapter *adapter = new Adapter;

    // adapter inherits from Target and calls new class's specificRequest
    adapter->Request();


}