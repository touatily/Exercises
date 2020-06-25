#include "source.h"
#include <stdio.h>

int max(int * A, int n){
    int m = 0x80000000;
    int i;
    for(i = 0; i < n; i++){
        if(m < A[i]) m = A[i];
    }
    return m;
}


int secondmax(int *A, int n){
    int a = 0x80000000, b = 0x80000000;
    int cpt = 0, i;
    for(i = 0; i < n; i++){
        if(A[i] == a){
            if(cpt == 0) cpt = 1;
        }
        else if(A[i] > a){
            b = a;
            a = A[i];
            cpt++;
        }
        else if(A[i] == b){
            if(cpt == 1) cpt = 2;
        }
        else if(A[i] > b){
            b = A[i];
            cpt++;
        }
        else{
            cpt++;
        }
    }
    if(cpt >= 2) return b;
    else return a;
}


int thirdmax(int *A, int n){
    int a = 0x80000000, b = 0x80000000, c = 0x80000000;
    int cpt = 0, i;
    for(i = 0; i < n; i++){
        if(A[i] == a){
            if(cpt == 0) cpt = 1;
        }
        else if(A[i] > a){
            c = b;
            b = a;
            a = A[i];
            cpt++;
        }
        else if(A[i] == b){
            if(cpt == 1) cpt = 2;
        }
        else if(A[i] > b){
            c = b;
            b = A[i];
            cpt++;
        }
        else if(A[i] == c){
            if(cpt == 2) cpt=3;
        }
        else if(A[i] > c){
            c = A[i];
            cpt++;
        }
        else{
            cpt++;
        }
    }
    if(cpt >= 3) return c;
    else return a;
}

