//
//  q41.cpp
//  cpp_200_q
//
//  Created by Boseong on 9/2/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int first_num = 0;
    int second_num = 0;
    int third_num = 0;
    
    for (int i = 1; i < 10; i++)
    {
        first_num = 0;
        second_num = 1;
        
        for(int j = 1; j <= i; j++)
        {
            cout << second_num << ", ";
            
            third_num = second_num;
            second_num = second_num + first_num;
            first_num = third_num;
        }
        cout << endl;
    }
    
}
