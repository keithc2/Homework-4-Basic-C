{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 /*Created by Keith Crosby*/\
/*Created October 7, 2010*/\
/*This program uses functions to calculate addition, subtraction, multiplication, and division as well as finding the conjugate of complex numbers*/\
\
#include<stdio.h>\
\
void read_complex(float *z, float *i)                      /*Two pointers, one for the real integer and one for the imaginary integer*/\
\{\
        printf("Please enter the real part of a number.\\n");\
        scanf("%f", &*z);\
        printf("Please enter the imaginary part of a number.\\n");\
        fflush(stdin);\
        scanf("%f", &*i);\
        printf("%2.1f+%2.1fi\\n", *z, *i);                       /*Prints the numbers together to protray the complex number*/\
\}\
void print_complex(float *z)\
\{\
\
\}\
void add_complex(float *z1, float *z2, float *z3)         /*Function to add the arrays z1 and z2. Places the answer in z3*/\
\{\
\
        z3[1]=z1[1]+z2[1];                                /*Adds the imaginary parts together*/\
        z3[0]=z1[0]+z2[0];\
        printf("%2.1f+%2.1fi\\n", z3[0], z3[1]);\
\}\
void sub_complex(float *z1, float *z2, float *z3)         /*Function to subtract array z2 and array z1, puts answer in z3*/\
\{\
        z3[0]=(z2[0])-(z1[0]);\
        z3[1]=(z2[1])-(z1[1]);\
        printf("%2.1f+%2.1fi\\n", z3[0], z3[1]);\
\}\
void mul_complex(float *z1, float *z2, float *z3)          /*Multiplies the complex number in z1 with z2 and prints the answer*/\
\{\
        float l, m, n, o, p, q;\
        l=z1[0]*z2[0];                                 /*Stages to factor the complex numbers together*/\
        m=z1[0]*z2[1];\
        n=z1[1]*z2[0];\
        o=(-(z1[1]*z2[1]));\
        p=m+n;\
        q=l+o;\
        printf("%2.1f+%2.1fi\\n", q, p);\
\}\
void div_complex(float *z1, float *z2, float *z3)        /*Function to divide z2 from z1*/\
\{\
        float l, m, n;\
        l=((z1[0]*z2[0])+(z1[1]*z2[1]));                    /*Stages of completion*/\
        m=((-z1[0]*z2[1])+(z1[1]*z2[0]));\
        n=((z2[0]*z2[0])+(z2[1]*z2[1]));\
        printf("(%2.1f+%2.1fi)/(%2.1f)\\n", l, m, n);\
\}\
void conj_complex(float *z)                             /*Function to find the conjugate for the complex number*/\
\{\
        int j;\
        for(j=0; j<2; j++) \{                         /*loops so that everything is satisfied*/\
                if (j=0) \{\
                        z[j]=z[j]; \}\
                if (j=1) \{\
                        z[j]=-z[j]; \}\
        \}\
        printf("%2.1f %2.1fi\\n", z[0], z[1]);\
\}\
int main ()\
\{\
        float z1[2], z2[2], z3[2];                          /*Initializing three arrays*/\
        char c;\
 \
        read_complex(&z1[0], &z1[1]);                       /*Calling read_complex function*/\
        read_complex(&z2[0], &z2[1]);\
        printf("If you would like to add, please hit 'a'\\n");             /*Asking the user what they wish to compute*/\
        printf("If you would like to subtract, please hit 'b'\\n");\
        printf("If you would like to multiply, please hit 'c'\\n");\
        printf("If you would like to divide, please hit 'd'\\n");\
        printf("If you would like to find the congugate, please hit 'e'\\n");\
        fflush(stdin);\
        scanf("%c", &c);\
        if (c=='a')                                                    /*if the user hit 'a' call the add function*/\
                add_complex(&z1[0], &z2[0], &z3[0]);\
        else if(c=='b')\
                sub_complex(&z1[0], &z2[0], &z3[0]);\
        else if(c=='c')\
                mul_complex(&z1[0], &z2[0], &z3[0]);\
        else if(c=='d')\
                div_complex(&z1[0], &z2[0], &z3[0]);\
        else if(c=='e')                                           /*If the user hit 'e' find the conjugate of both z1 and z2*/\
                conj_complex(&z1[0]);\
                conj_complex(&z2[0]);\
        return (0);\
\}                                                                 /*END*/}