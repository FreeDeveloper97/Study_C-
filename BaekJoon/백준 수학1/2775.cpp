//
//  2775.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/27.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int t,k,n;
    int array[15][15] = {0};
    for(int i=1; i<15; i++)
    {
        array[0][i] = i;
    }
    for(int i=1; i<15; i++)
    {
        array[i][1] = 1;
    }
    for(int i=1; i<15; i++)
    {
        for(int j=2; j<15; j++)
        {
            array[i][j] = array[i][j-1] + array[i-1][j];
        }
    }

    cin>>t;
    while(t-->0)
    {
        cin>>k>>n;
        cout<<array[k][n]<<"\n";
    }

    return 0;
}
