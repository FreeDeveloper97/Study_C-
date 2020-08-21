//
//  10817.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;
int main() {
    int array[3] = {0};

    cin>>array[0]>>array[1]>>array[2];

    sort(array,array+3);
    cout<<array[1]<<"\n";

    return 0;
}
