# -*- coding: utf-8 -*-
"""
Created on Fri Apr 19 18:00:43 2019

@author: John
"""

import numpy as np
import cv2
cap = cv2.VideoCapture(1)
print(cap.get(cv2.CAP_PROP_EXPOSURE))
print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
print(cap.get(cv2.CAP_PROP_FRAME_COUNT))
print(cap.get(cv2.CAP_PROP_AUTO_EXPOSURE))


while(True):
    ret, frame = cap.read()
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    cv2.imshow('Video', frame)
    cv2.imshow('Frame', gray)
    print(cap.get(cv2.CAP_PROP_EXPOSURE))
#    print(frame)
    #print(gray)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
cap.release()
cv2.destroyAllWindows()