//
//  9020.cpp
//  cpp
//
//  Created by Kang Minsang on 2020/08/30.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, input;
//    int temp;
//    int array[10001] = {0};
//    int result1, result2;
//    int term;
//    array[1] = -1;
//    cin>>n;
//    while(n-- > 0)
//    {
//        cin>>input;
//        temp = input/2;
//        for(int i=2; i<=input; i++)
//        {
//            for(int j=2; j*i<=input; j++)
//            {
//                array[i*j] = -1;
//            }
//        }
//        for(int i=temp; i>=2; i--)
//        {
//            //소수를 찾은 경우
//            if(array[i] == 0)
//            {
//                term = temp-i;
//                if(array[i+2*term] == 0)
//                {
//                    result1 = i;
//                    result2 = i+2*term;
//                    break;
//                }
//                else
//                {
//                    continue;
//                }
//            }
//        }
//        cout<<result1<<" "<<result2<<"\n";
//        for(int i=2; i<=temp; i++)
//            array[i] = 0;
//    }
//    return 0;
//}
