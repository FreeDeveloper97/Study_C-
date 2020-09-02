//
//  4948.cpp
//  cpp
//
//  Created by Kang Minsang on 2020/08/29.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    int count = 0;
//    int array[246913];
//    array[1] = -1;
//
//    cin>>n;
//    while(n != 0)
//    {
//        for(int i=2; i<=2*n; i++)
//        {
//            for(int j=2; i*j<=2*n; j++)
//                array[i*j] = -1;
//        }
//        for(int i=n+1; i<=2*n; i++)
//        {
//            if(array[i] != -1)
//                count++;
//            array[i] = 0;
//        }
//        cout<<count<<"\n";
//        count = 0;
//
//        cin>>n;
//    }
//    return 0;
//}
