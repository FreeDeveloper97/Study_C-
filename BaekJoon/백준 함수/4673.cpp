//
//  4673.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;

int d(int n)
{
    int result = n;
    while(n != 0)
    {
        result += n%10;
        n = n/10;
    }
    return result;
}
int main() {
    bool boolArray[10001] = {false};
    int inx;

    for(int i=1; i<=10000; i++)
    {
        inx = d(i);
        if(inx <= 10000)
            boolArray[inx] = true;
    }

    for(int i=1; i<=10000; i++)
    {
        if(!boolArray[i])
            cout<<i<<"\n";
    }

    return 0;
}
