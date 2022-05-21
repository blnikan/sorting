#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May 19 21:55:56 2022

@author: nik

"""




def CombSort(data_):
    factor = 1.247
    step = len(data_) - 1
    
    while step >= 1:
        i = 0
        while i+step<len(data_):
            if data_[i] > data_[i + int(step)]:
                data_[i] , data_[i + int(step)] = data_[i +int(step)] , data_[i]
            i += 1
        step //= factor
        print(step)
    
    i = 0
    j = 0
    while i + 1 < len(data_):
        while j + 1 < len(data_) - i:
            if data_[j + 1] < data_[j]:
                data_[j],data_[j+1] = data_[j+1],data_[j]
            j += 1
        i += 1
                
    return data_
        
    
    
            

























data = [2,4,63,12,5,3,2,3,45,3,2,4,5245,435,35,1,3,2,34,34,2,2,1,0]
print(CombSort(data))