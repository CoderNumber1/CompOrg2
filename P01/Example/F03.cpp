//______________________________________________________________________
//File F03.cpp contains the implementations for the functions whose 
//prototypes are defined in file F03.h. File F03.cpp can contain 
//functions to support computations performed by the analytical
//and empirical functions contianed in the file
//______________________________________________________________________
//Author:       Susan Hanks
//Student ID:   *20326578
//Email:        shanks3@uco.edu
//Course:       CS2613, Programming II
//CRN:          21641, Spring, 2012
//Project:      p09
//Due:          April 13, 2012
//Account:      tt027
//_____________________________________________________________________
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits.h>
#include <math.h>
#include <cmath>
#include "F03.h"
//_______________________________________________________________________
using namespace std;
//_______________________________________________________________________
    int log2 (int n){
        if(abs(n) < 1e-4) return 0;
        return log(n)/ log(2.0);
    }
    int summation(int n){
        int sum = 0;
        for(int a = 1; a <=n; a++){
           sum = sum + pow(n-1,2)+1;
        }
        return sum;
    }
    int linearSum(int n){
        return (n*(n+1))/2;
    }
    int sumOfSquare(int n){
        return (n*(n+1)*(2*n+1))/6;
    }
    int sum4(int n){
        int sum = 0;
        for(int a = 1; a <=n; a++){
            sum = sum + pow(a,4);
        }
        return sum;
    }
    int sum2(int n){
        int sum = 0;
        for(int a = 1; a <= n; a++){
            sum = sum + pow(a,2);
        }
        return sum;
    }
    int sum (int n){
        int sum = 0;
        for(int a = 0; a < n; a++){
            sum += a;
        }
        return sum;
    }
    void Title(ostream& o){
        o << endl;
        o << setw(5) << "N";
        o << setw(20) << "Analytical";
        o << setw(20) << "Empirical";
        o << endl;
    }
    
    int af01(int n){
        return 4*n + 2*pow(2,n) + 4;
    }

    int af02(int n){
        return 4 * n + 2 + 3 * n *log2(n);
    }
    
    int af03(int n){
        return 3 + 4*n + 3 * sum(n);
    }

    int ef01(int n){
        int c = 0;
        int a = 0;         c++;
        int sum = 1;       c++;
        while(a<n){        c++;
            sum = sum*2;   c++; c++;
            a++;           c++;
        }                  c++;
        while(sum > 0){    c++;
            sum--;         c++;
        }                  c++;
    return c;
    }
    
    int ef02(int n){
        int c = 0;
        int i = 0;        c++;
        while(i<n){       c++;
            int m = n;    c++;
            while(m>1){   c++;
                m = m/2;  c++; c++;
            }             c++;
            i++;          c++;
        }                 c++;
        return c;
    }
    
    int ef03(int n){
        int c = 0;
        int sum = 0;        c++;
        int i = 0;          c++;
        while( i<n){         c++;
            int j = 0;       c++;
            while(j < i){     c++; 
                sum++;       c++;
                j++;        c++;
            }              c++;
            i++;           c++;
       }                   c++;
       return c;
    }

    void Print(ostream& o, int n, int a, int e){
        o << right << setw(5) << n;
        o << right << setw(20) << a;
        o << right << setw(20) << e;
        o << endl;
    }
