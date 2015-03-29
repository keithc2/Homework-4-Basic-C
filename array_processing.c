{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 /*Created by Keith Crosby*/\
/*Created October 6, 2010*/\
//This program calculates the minimum, maximum, and the mean of the array 'data_ar' by using a function.\
\
#include<stdio.h>\
\
void array_processing(int x[], int size, int *min, int *max, float *mean)         /*This function is looking for an array, a normal int, and pointers to min, max, and mean*/\
\{\
        int i;\
        float sum=0;\
        for(i=0; i<size; ++i)             /*If i is less then the size of the array, continue the loop*/\
        \{\
                sum=sum+x[i];             /*sum equals the previous value in the array plus the next*/\
                if(x[i]<=*min)            /*If the value in the array is less than or equal to the min*/\
                        *min=x[i];\
                if(x[i]>=*max)\
                        *max=x[i];\
        \}\
        *mean=sum/size;                  /*The mean pointer equals the sum divided by the size of the array*/\
        printf("Within this array the minimum is: %d\\n", *min);\
        printf("Within this array the maximum is: %d\\n", *max);\
        printf("Within this array the mean is: %3.2f\\n", *mean);\
\}\
int main (void)\
\{\
        int data_ar[]=\{3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100, 3, 4, 2, 9, 43, 32, 45, 32, 2, 3, 2, 1\};     /*initializing the array 'data_ar'*/\
        int min=data_ar[0];                                            /*min equals the first value in the array*/\
        int max=data_ar[0];\
        float mean;\
\
        array_processing(&data_ar[0], 23.0, &min, &max, &mean);        /*Calling the function*/\
        return (0);\
\}}