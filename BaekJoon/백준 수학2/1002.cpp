//
//  1002.cpp
//  cpp
//
//  Created by Kang Minsang on 2020/09/01.
//

#include <iostream>
#include <cmath>
using namespace std;
void swap(double *r1, double *r2)
{
    double temp = *r1;
    *r1 = *r2;
    *r2 = temp;
}
int main()
{
    int t;
    int x1,x2,y1,y2;
    double r1,r2;
    double distance;
    cin>>t;
    while(t-- > 0)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        
        if(distance > r1+r2)
            cout<<0;
        else if(distance == r1+r2)
            cout<<1;
        else
        {
            if(r1 < r2)
                swap(&r1,&r2);
            
            if(distance > r1-r2)
                cout<<2;
            else if(distance != 0 && distance == r1-r2)
                cout<<1;
            else if(distance != 0 && distance < r1 - r2)
                cout<<0;
            else if(distance == 0 && r1 != r2)
                cout<<0;
            else
                cout<<-1;
        }
        cout<<"\n";
        
    }
    return 0;
}
