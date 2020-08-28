//
//  10250.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/25.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int t;
    int hight, width, n;
    int h = 1,w = 1;
    int temp;
    int term;
    int result;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        cin>>hight>>width>>n;
        h = hight;
        w = n / hight;
        temp = h * w;
        term = n - temp;
        if(term == 0)
        {
            result = h*100 + w;
        }
        else
        {
            w++;
            h = term;
            result = h*100 + w;
        }
        cout<<result<<"\n";
    }
    return 0;
}
