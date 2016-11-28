/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tom
 *
 * Created on November 27, 2016, 4:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<"Enter a number"<<endl;
    int i;
    cin>>i;
    if(i<0) cout<<"negative";
    else if(i==0) cout<<"zero";
    else cout<<"positive";
    
    cout<<endl;
    
    switch(i){
        case 0 : cout<<"0";break;
        case -1 : cout<<"-1";break;
        case 1 : cout<<"1";break;
        default : cout<<"something else";
    }
    
    cout<<endl;
    
    cout<<&i;

    return 0;
}

