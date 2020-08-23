//
//  11720.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    char input;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        sum += (int)input-48;
    }
    cout<<sum<<"\n";

    return 0;
}
