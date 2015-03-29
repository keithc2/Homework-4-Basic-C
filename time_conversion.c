{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 /*Created by Keith Crosby*/\
/*Created October 6, 2010*/\
/*This program uses pointers and a function to convert a given amount of seconds to hours, minutes, and seconds*/\
#include<stdio.h>\
\
void conversion(long int time, int *hours, int *mins, int *secs)\
\{\
        int j;\
\
        *secs=time%60;                /*seconds equals the remainder of the time inputed divided by 60*/\
        j=time/60;                    /*new integer to continue the conversion*/\
        *mins=j%60;                   /*minutes equals the remainder of the new integer divided by 60*/\
        *hours=j/60;                  /*hours equals the new integer divided by 60*/\
\
        printf("%d seconds are equal to %d hours, %d minutes, and %d seconds\\n", time, *hours, *mins, *secs);\
\}\
int main (void)\
\{\
        int hours;\
        int mins;\
        int secs;\
        long int t;\
\
        printf("What is the seconds you wish to convert?\\n");\
        scanf("%d", &t);\
        conversion(t, &hours, &mins, &secs);             /*Calling the function 'conversion', hours, mins, and secs are where the pointers point to*/\
        return (0);\
\}}