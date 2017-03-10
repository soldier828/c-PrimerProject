//
//  main.cpp
//  C++ test
//
//  Created by 刘楠 on 16/3/1.
//  Copyright © 2016年 刘楠. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sales_data.h"

int main(int argc, const char * argv[]) {
    Sales_data data1, data2;
    double price = 0;
    
    std::cin >> data1.bookNO >> data1.units_sold >> price;
    data1.revenu = data1.units_sold * price;
    
    std::cin >> data2.bookNO >> data2.units_sold >> price;
    data2.revenu = data2.units_sold * price;

    if(data1.bookNO == data2.bookNO){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenu + data2.revenu;
        std::cout << data1.bookNO << " " << totalCnt << " " << totalRevenue <<std::endl;
        if (totalCnt != 0)
            std::cout << totalRevenue / totalCnt <<std::endl;
        else
            std::cout << "NO SALE" <<std::endl;
        return 0;
    }
    else{
        std::cerr << "Data must refer to the same ISBN" <<std::endl;
        return -1;
    }
}

