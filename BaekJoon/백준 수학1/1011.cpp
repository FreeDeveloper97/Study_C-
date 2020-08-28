//
//  1011.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/27.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    unsigned int x, y, term;
    int afterMath;
    int result = 0;
    int temp;
    cin>>t;
    while(t-- > 0)
    {
        cin>>x>>y;
        term = y-x;
        afterMath = sqrt(term);
        
        if(term == afterMath*afterMath)
        {
            result = 2*afterMath-1;
        }
        else
        {
            temp = afterMath*afterMath + afterMath;
            if(term <= temp)
            {
                result = (2*afterMath-1) + 1;
            }
            else
            {
                result = (2*afterMath-1) + 2;
            }
        }
        cout<<result<<"\n";
    }
    
    return 0;
}
