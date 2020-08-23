//
//  4344.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/21.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int c = 0, n = 0;
    int score[1000] = {0};
    int sum = 0;
    double average = 0;
    double result = 0;
    int count = 0;

    cin>>c;
    for(int i=0; i<c; i++)
    {
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>score[j];
            sum += score[j];
        }
        average = double(sum)/double(n);
        for(int j=0; j<n; j++)
        {
            if(score[j] > int(average))
                count++;
        }

        result = double(count)/double(n)*100;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout<<result<<"%\n";

        sum = 0;
        count = 0;
    }

    return 0;
}
