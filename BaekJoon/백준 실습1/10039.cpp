//
//  10039.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/18.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    //40점 이상으로 조정
    int score, result = 0;
    for(int i=0; i<5; i++)
    {
        cin>>score;
        if(score < 40)
            score = 40;
        result = result + score;
    }
    result = result/5;
    cout<<result<<"\n";

    return 0;
}
