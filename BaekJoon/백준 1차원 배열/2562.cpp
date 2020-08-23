//
//  2562.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int array[9] = {0};
    int max = 0;
    for(int i=0; i<9; i++)
    {
        cin>>array[i];
    }
    max = array[0];
    for(int i=1; i<9; i++)
    {
        if(array[i]>max)
            max = array[i];
    }

    for(int i=0; i<9; i++)
    {
        if(array[i] == max)
        {
            cout<<array[i]<<"\n"<<i+1;
        }
    }

    return 0;
}
