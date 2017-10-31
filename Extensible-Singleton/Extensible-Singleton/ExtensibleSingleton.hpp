//
//  ExtensibleSingleton.hpp
//  Extensible-Singleton
//
//  Created by Alexander Soong on 10/30/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//

#ifndef ExtensibleSingleton_hpp
#define ExtensibleSingleton_hpp

#include <stdio.h>
#include <map>
#include <string>

using namespace std;

class CExtensibleSingleton;
typedef CExtensibleSingleton *(*foo)();

class CExtensibleSingleton {
protected:
    CExtensibleSingleton();
    static void Register(const string &instancetype, foo func);
    static map<string, foo> &Registry;
    static CExtensibleSingleton *DUniqueInstance;
    
public:
    static CExtensibleSingleton *Instance(string &instancetype);
    virtual void Operation(); 
};
#endif /* ExtensibleSingleton_hpp */
