//
//  2884.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    //45분 전 시간 구하기
    int H,M = 0;
    cin>>H>>M;

    if(M >= 45)
    {
        M = M-45;
        cout<<H<<" "<<M<<endl;
    }
    else if(M < 45)
    {
        if(H>0)
        {
            H = H-1;
            M = M+60-45;
            cout<<H<<" "<<M<<endl;
        }
        else if(H == 0)
        {
            H = 23;
            M = M+60-45;
            cout<<H<<" "<<M<<endl;
        }
    }

    return 0;
}
