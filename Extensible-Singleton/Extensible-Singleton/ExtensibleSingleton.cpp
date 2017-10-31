//
//  ExtensibleSingleton.cpp
//  Extensible-Singleton
//
//  Created by Alexander Soong on 10/30/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//

#include "ExtensibleSingleton.hpp"
#include <stdio.h>

CExtensibleSingleton *CExtensibleSingleton::DUniqueInstance = nullptr;
CExtensibleSingleton::CExtensibleSingleton() {}

//map<string, foo> Registry() {
//    static map<string, foo> StaticRegistry;
//    return StaticRegistry;
//}

//void Register(const string &instancetype, foo func) {
//    Registry()[instancetype] = func;
//}

map<string, foo> &CExtensibleSingleton::Registry() {
    return map<string, foo>();
}


void Register(const string &instancetype, foo func) {
    Registry()[instancetype] = func;
}

CExtensibleSingleton *Instnace(const string &instancetype) {
    if (nullptr == CExtensibleSingleton::DUniqueInstance)
}
