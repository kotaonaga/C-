//
//  main.cpp
//  cppStudy
//
//  Created by kota on 2020/06/09.
//  Copyright © 2020 kota. All rights reserved.
//

#include <iostream>
using namespace std;

//返り値のint&はアドレスを返すわけじゃ無い。参照を返す。
int& test(int& o){
    o = 122;
    return o;
}

int main(int argc, const char * argv[]) {
    //参照を作る。同じものとして扱われる。
    int a = 19;
    int& y = a;
    y = 100;
    
    cout << a << endl;
    cout << y << endl;
    
    //アドレスも同じ
    cout << &a << endl;
    cout << &y << endl;
    
    test(a);
    cout << a << endl;
}
