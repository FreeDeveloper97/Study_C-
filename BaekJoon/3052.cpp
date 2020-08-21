//
//  3052.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int array[10] = {0};
    int count = 1;
    for(int i=0; i<10; i++)
    {
        cin>>array[i];
        array[i] = array[i]%42;
    }

    sort(array,array+10);
    for(int i=1; i<10; i++)
    {
        if(array[i-1] != array[i])
            count++;
    }
    cout<<count;
    return 0;
}
