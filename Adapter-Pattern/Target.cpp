//
// Created by Alexander Soong on 10/30/17.
//

#include "Target.h"

Target::Target() {
    data = NULL;
}

Target::Target(int d) {
    data = d;
}

void Target::Request() {
    cout << "I'm the target class" << endl;
}