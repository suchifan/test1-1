//
//  main.cpp
//  test1-1
//
//  Created by suchao on 4/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int findRoot(int m){
    for(int i=0; i<m; i++){
        if(i*i > m)
            return i-1;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
start:
    std::cout << "Input n:\n";
    int n;
    cin >> n;
    if(n == 0){
        return 0;
    }
    
    for(int i=0; i<=findRoot(n); i++){
        for(int j=0; j<=findRoot(n-i*i); j++){
            for(int p=0; p<=findRoot(n-i*i-j*j); p++){
                for(int q=0; q<=findRoot(n-i*i-j*j-p*p); q++){
                    if((i*i+j*j+p*p+q*q) == n){
                        cout << n << " = " << i << "^2 + " << j << "^2 + " << p << "^2 + " << q << "^2" <<endl;
                        goto start;
                    }
                }
            }
        }
        
    }
    return 0;
}
