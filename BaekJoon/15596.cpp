//
//  15596.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
    long long sum = 0;
    for(int i=0; i<a.size(); i++)
    {
        sum += a[i];
    }
    return sum;
}
