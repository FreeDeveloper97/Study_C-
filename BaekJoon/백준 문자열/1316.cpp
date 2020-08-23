//
//  1316.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/23.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    int count[26] = {0};
    string input;
    int index;
    bool result = true;
    int countResult = 0;

    cin>>n;
    for(int j=0; j<n; j++)
    {
        cin>>input;
        for(int i=0; i<input.size(); i++)
        {
            index = (int)input.at(i)-97;
            if(count[index] == 0)
                count[index]++;
            else
            {
                if(index == (int)input.at(i-1)-97)
                    count[index]++; //그냥 개수 남기는 느낌으로, 의미없는 문장
                else
                {
                    result = false;
                    break;
                }
            }
        }

        if(result)
            countResult++;
        for(int i=0; i<26; i++)
            count[i] = 0;
        result = true;
    }
    cout<<countResult;

    return 0;
}
