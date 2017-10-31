//
//  main.cpp
//  Singleton-Pattern
//
//  Created by Alexander Soong on 10/24/17.
//  Copyright © 2017 Alexander Soong. All rights reserved.
//

#include <iostream>
#include "Singleton.cpp"


using namespace std;

// allocate and initialize Singleton static instnace
Singleton* Singleton::singleton_instance;

int main(int argc, const char * argv[]) {
    Singleton* single = Singleton::instnace();
    single->setVal(5);
    
    cout << "single's value is: " << single->getVal() << endl;
    
    return 0;
}
