//
//  main.cpp
//  callingStudy
//
//  Created by kota on 2020/06/10.
//  Copyright © 2020 kota. All rights reserved.
//

#include <iostream>

using namespace std;

//値渡し。int,float、bool等の組み込み型を使う際に用いる。
//渡す型のサイズが小さいものであれば問題ないが、サイズの大きな型である場合は、
//オブジェクトを構築するのに処理時間がかかるので、非推奨。積極的にconstを使う。
int twice(int const a){
    return a * 2;
}

//ポインタ渡し。メモリ上のアドレスを渡す記法。
//渡されたアドレスを間接参照して、関数の呼び出し元の変数を書き換えることができる。
//ただしこのplusOneは問題がある。ポインタ渡しを行う際は必ずnullチェックを行う必要がある。
void plusOne(int* a){
    *a += 1;
}

//関数の成功、失敗をboolの戻り値で表す。
bool plusTwo(int* a){
    if(a == nullptr){
        cout << "null!" << endl;
        return true;
    }
    *a += 2;
    return false;
}

//参照渡し。より安全で、制約の厳しいポインタ
void minusOne(int& a){
    a -= 1;
}

int main() {
    int v = 3;
    cout << v << endl;
    twice(v);
    cout << v << endl;
    
    plusOne(&v);
    cout << v << endl;
    
    plusTwo(&v);
    cout << v << endl;
    
    minusOne(v);
    cout << v << endl;
}
