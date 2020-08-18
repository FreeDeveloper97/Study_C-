//
//  2588.cpp
//  temp
//
//  Created by Min_MacbookPro on 2020/08/17.
//  Copyright © 2020 Min_MacbookPro. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num_a, num_b = 0;
    int n_1, n_2, n_3 = 0;
    int result_3, result_4, result_5, result_6 = 0;

    cin>>num_a>>num_b;

    //n_1은 num_b의 1의자리수
    n_1 = num_b%10;
    //n_2는 num_b의 10의자리수
    n_2 = num_b/10%10;
    //n_3는 num_b의 100의자리수
    n_3 = num_b/100;

    //(3) : num_a * n_1
    result_3 = num_a*n_1;
    cout<<result_3<<endl;
    //(4) : num_a * n_2
    result_4 = num_a*n_2;
    cout<<result_4<<endl;
    //(5) : num_a * n_3
    result_5 = num_a*n_3;
    cout<<result_5<<endl;
    //(6) : (3) + [(4)*10] + [(5)*100]
    result_6 = result_3 + (result_4*10) + (result_5*100);
    cout<<result_6<<endl;

    return 0;
}
