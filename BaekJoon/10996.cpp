//
//  10996.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0, count = 1;
    string printOdd = "", printEven = "";
    cin>>n;

    if(n == 1)
        cout<<"*";
    else
    {
        //1부터 2n까지 몇번째인지 계산
        for(int i=1; i<=2*n; i++)
        {
            //홀수번째줄
            if(i%2 == 1)
            {
                while(count<=n)
                {
                    //한줄에서 홀수번째
                    if(count%2 == 1)
                        cout<<"*";
                    //한줄에서 짝수번째
                    else
                        cout<<" ";
                    count++;
                }
            }
            //싹수번째줄
            else
            {
                while(count<=n)
                {
                    //한줄에서 홀수번째
                    if(count%2 == 1)
                        cout<<" ";
                    //한줄에서 짝수번째
                    else
                        cout<<"*";
                    count++;
                }
            }
            count = 1;
            cout<<"\n";
        }
    }
    return 0;
}
