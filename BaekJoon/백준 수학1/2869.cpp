//
//  2869.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/25.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,v;
    int days = 0;
    int term;
    cin>>a>>b>>v;
    term = a-b;
    if((v-a)%term == 0)
        days = (v-a) / term + 1;
    else
        days = (v-a) / term + 2;
    cout<<days;
    
    return 0;
}
