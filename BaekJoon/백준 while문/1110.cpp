//
//  1110.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/20.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num = 0, temp = 0;
    int a = 0, b = 0, newNum = -1, count = 0;
    cin>>num;
    temp = num;

    while(num != newNum)
    {
        a = temp/10;
        b = temp%10;
        newNum = a+b;
        newNum = newNum%10;
        newNum = b*10 + newNum;
        temp = newNum;
        count++;
    }
    cout<<count;

    return 0;
}
