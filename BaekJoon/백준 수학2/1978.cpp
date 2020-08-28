//
//  1978.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/28.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    int array[1001] = {0};
    int input;
    int count = 0;
    
    array[2]=2;
    for(int i=2; i<=1000; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
                break;
            else
            {
                if(j == i-1)
                    array[i] = i;
            }
        }
    }
    
    cin>>n;
    temp = n;
    while(n-- > 0)
    {
        cin>>input;
        if(array[input] != 0)
            count++;
    }
    
    cout<<count;
    
    return 0;
}
