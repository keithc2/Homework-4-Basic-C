{\rtf1\ansi\ansicpg1252\cocoartf1038\cocoasubrtf320
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww25100\viewh15040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\ql\qnatural\pardirnatural

\f0\fs24 \cf0 /*Created by Keith Crosby*/
/*Created October 6, 2010*/
/*This program opens or closes doors within an array according to multiples of students 1-100 (individually)*/

#include<stdio.h>\

#define CL 0                   /*Defined constant variable 'CL'*/
#define OPEN 1                 /*Defined constant variable 'OPEN'*/

int main ()
{
        int i, doors[101], x;       /*initializing two normal integers and an array*/
        int j=1;

        for(i=0; i<101; ++i)        /*loop closes all the doors in the array*/
        {
                doors[i]=CL;
        }
        while(j<101)                /*While j(door number) is less then 101 continue*/
        {
                x=1;                /*Initializing x so that it starts over after each door*/
                while(x<=101)       /*While x(student) is less then or equal to 101*/
                {
                if(j%x==0) {          /*If the remainder of the door divided by the student is 0*/
                        if(doors[j]==CL) {                /*If door is closed then open*/
                                doors[j]=OPEN; }
                        else {                            /*Else close the door*/
                                doors[j]=CL; }
                        }
                        x++;                             /*add one the the student variable*/
                }
                if(doors[j]==OPEN)                       /*If the door is still open, print the door number*/
                        printf("%d\\n", j);
        j++;                                            /*add one to the door number*/
        }
        return (0);
}}