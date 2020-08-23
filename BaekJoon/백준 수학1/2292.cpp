//
//  2292.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/23.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 0;
    int result = 1;
    int temp = 0;
    cin>>n;
    temp = n-1;
    if(n == 0)
        cout<<1;
    else
    {
        while(temp > 0)
        {
            result++;
            i++;
            temp -= 6*i;
        }
        cout<<result;
    }

    return 0;
}
