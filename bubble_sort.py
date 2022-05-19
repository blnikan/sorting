#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May 19 20:50:50 2022

@author: nik
"""


"""
time complexity:
    the worst time : O(n^2)
    average time : O(n^2)
    the best time : O(n^2)
"""


def buble_sirt(data_):
    SIZE = len(data_)
    
    for i in range(SIZE-1):
        for j in range(SIZE-i-1):
            if data_[j+1] < data_[j]:
                data_[j],data_[j+1] = data_[j+1],data_[j]
    return data_



data = [2,4,63,12,5,3,2,3,45,3,2,4,5245,435,35,1,3,2,34,34,2,2,1,0]

print(buble_sirt(data))
