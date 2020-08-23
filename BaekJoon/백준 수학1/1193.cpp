//
//  1193.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/23.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x;
    int temp = 1;
    int i = 1;
    int n = 1,m = 1;
    
    cin>>x;
    while(x > temp)
    {
        i++;
        temp+=i;
    }
    if(i%2 == 0)
    {
        n = i;
        m = 1;
        n = n - (temp-x);
        m = m + (temp-x);
    }
    else
    {
        n = 1;
        m = i;
        n = n + (temp-x);
        m = m - (temp-x);
    }
    cout<<n<<"/"<<m;
    return 0;
}
