//
//  Singleton.cpp
//  Singleton-Pattern
//
//  Created by Alexander Soong on 10/24/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//


#include <cstddef>

class Singleton {
    int DValue;
    static Singleton *singleton_instance;
    Singleton(int v = 0) {
        DValue = v;
    }
public:
    void setVal(int x) {
        DValue = x;
        return;
    }
    int getVal() {
        return DValue;
    }
    static Singleton *instnace() {
        if (!singleton_instance) {
            singleton_instance = new Singleton;
        }
        return singleton_instance;
    }
};
