//
//  Singleton.cpp
//  Singleton-Pattern
//
//  Created by Alexander Soong on 10/24/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//


#include "Singleton.h"
#include <cstddef>


// instance is null at first
CSingleton *CSingleton::DUniqueInstance = nullptr;

// if needed, the singleton class can be instantiated
CSingleton *CSingleton::Operation() {
    if (nullptr == DUniqueInstance) {
        DUniqueInstance = new CSingleton();
    }
    // return singleton instance
    return DUniqueInstance;
}

