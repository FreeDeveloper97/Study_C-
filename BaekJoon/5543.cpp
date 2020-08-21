//
//  5543.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int burger = 0, drink = 0;
    int temp = 0, result = 0;

    cin>>burger;
    for(int i=0; i<2; i++)
    {
        cin>>temp;
        if(temp < burger)
            burger = temp;
    }
    cin>>drink>>temp;
    if(temp < drink)
        drink = temp;

    result = burger + drink - 50;
    cout<<result<<"\n";
    return 0;
}
