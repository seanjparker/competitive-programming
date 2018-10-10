#! /usr/bin/python3
import sys

def sumcards(n):
    return (3*(n**2)+n)//2

a=int(input())
while(sumcards(a)%4!=0):
    a+=1
print(a)
    


