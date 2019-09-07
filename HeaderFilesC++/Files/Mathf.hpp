//
//  Mathf.h
//  HeaderFilesC++
//
//  Created by hiroaki on 2019/09/07.
//  Copyright © 2019 hiroaki. All rights reserved.
//

#ifndef Mathf_hpp
#define Mathf_hpp
#include <cmath>
namespace Mathf {
    const double PI = 3.14159274f;
    const double Deg2Rad = 0.0174532924;
    const double Rad2Deg = 57.29578;
    double deg_cos(double x){
        return cos(x*Deg2Rad);
    }
    double deg_sin(double x){
        return sin(x*Deg2Rad);
    }
    double deg_tan(double x){
        return tan(x*Deg2Rad);
    }
}
#endif /* Mathf_hpp */
