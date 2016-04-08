//
//  main.c
//  tempC
//
//  Created by work on 2016/4/8.
//  Copyright © 2016年 work. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define PI 3.141592653

void GetSinCos(int d, double * dSin, double * dCos){
    
    *dSin = sin(d * PI / 180);
    *dCos = cos(d * PI / 180);
}

int main(int argc, const char * argv[]) {

    double dSin ;
    double dCos;
    int degree;
    
    scanf("%d", &degree);
    
    GetSinCos(degree, &dSin, &dCos);
    
    printf( "The sin is %g \n",dSin );
    printf( "The cos is %g \n",dCos );
    
    return 0;
}

