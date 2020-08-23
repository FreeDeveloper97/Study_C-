//
//  10818.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int min = 0, max = 0, temp = 0;
    cin>>n;
    cin>>min;
    max = min;
    for(int i=1; i<n; i++)
    {
        cin>>temp;
        if(temp<min)
            min = temp;
        if(temp>max)
            max = temp;
    }
    cout<<min<<" "<<max;

    return 0;
}
