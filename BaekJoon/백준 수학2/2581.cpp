//
//  2581.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/28.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int m,n;
    int min, sum = 0;
    cin>>m>>n;
    min = n;
    for(int i=m; i<=n; i++)
    {
        for(int j=2; j<=i; j++)
        {
            if(i%j == 0)
            {
                if(i == 2)
                {
                    min = 2;
                    sum += 2;
                }
                break;
            }
            else
            {
                if(j == i-1)
                {
                    if(i < min)
                        min = i;
                    sum+=i;
                }
            }
        }
    }
    if(sum == 0)
        cout<<-1;
    else
        cout<<sum<<"\n"<<min;
    
    return 0;
}
