//
//  Sales_data.h
//  C++ test
//
//  Created by 刘楠 on 16/4/30.
//  Copyright © 2016年 刘楠. All rights reserved.
//

#ifndef Sales_data_h
#define Sales_data_h
#include <string>

struct Sales_data{
    std::string bookNO;
    unsigned units_sold = 0;
    double revenu = 0.0;
};

#endif /* Sales_data_h */

