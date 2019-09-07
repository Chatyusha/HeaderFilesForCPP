//
//  main.cpp
//  HeaderFilesC++
//
//  Created by hiroaki on 2019/09/07.
//  Copyright © 2019 hiroaki. All rights reserved.
//

#include <iostream>
#include "Files/Vector2.hpp"
#include "Files/Mathf.hpp"
using namespace std;
using namespace Mathf;

int main() {
    Vector2 a(1,2),b(2,1),c(2,4),d;
    d=c*2;
    cout<<c.ToString()<<endl;
    return 0;
}
