#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May 19 21:00:13 2022

@author: nik
"""

"""
time complexity:
    the worst time : O(n^2)
    average time : O(n^2)
    the best time : O(n)
"""


def ShakerSort(data_):
    if len(data_)==0:
        return 
    left = 0
    right = len(data_) - 1
    
    while left <= right:
        for i in range(right, left, -1):
            if data_[i-1] > data_[i]:
                data_[i-1],data_[i] = data_[i],data_[i-1]
                
        left += 1
        
        for i in range(left,right,+1):
            if data_[i] > data_[i+1]:
                data_[i],data_[i+1] = data_[i+1],data_[i]
                
        right -= 1
    
    return data_





data =[1,213,34,324,3,4,3412,3,123,123,2,32,1,2,3,4,45,6,67,8,765,533,99,23,2,3,2,3,4,56,6,68]

#print(data)
print(ShakerSort(data))
