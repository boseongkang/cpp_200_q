//
//  q40.cpp
//  cpp_200_q
//
//  Created by Boseong on 9/2/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//    int offset = 0;
//
//    for (int i = 1; i <= 15; i+= offset)
//    {
//        for(int j = 1; j <= 9; j++)
//        {
//            cout << i << " * " << j << " = " << i * j;
//
//            for (int k = 0; k < offset; k++)
//            {
//                cout << "\t";
//                cout << (i + k + 1) << "*" << j << " = " << (i + k + 1) * j;
//            }
//            cout << endl;
//        }
//        cout << endl;
//        offset++;
//
//        return 0;
//    }
//

int main()
{
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
