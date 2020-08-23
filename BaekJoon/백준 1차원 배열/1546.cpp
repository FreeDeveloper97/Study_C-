//
//  1546.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int before[1000] = {0};
    double after[1000] = {0};
    int n, max = 0;
    double result = 0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>before[i];
        if(before[i]>max)
            max = before[i];
    }
    for(int i=0; i<n; i++)
    {
        after[i] = (double)before[i]/(double)max*100;
        result += after[i];
    }
    cout<<result/(double)n;
    
    return 0;
}
