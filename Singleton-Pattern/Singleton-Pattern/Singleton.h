//
//  Singleton.h
//  Singleton-Pattern
//
//  Created by Alexander Soong on 10/24/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//

#ifndef Singleton_h
#define Singleton_h

using namespace std;

class CSingleton {
protected:
    CSingleton();
    static CSingleton *DUniqueInstance;
    
public:
    CSingleton *Instance();
    CSingleton *Operation();
};


#endif /* Singleton_h */
