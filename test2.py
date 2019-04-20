# -*- coding: utf-8 -*-
"""
Created on Sat Apr 20 20:46:19 2019

@author: John
"""

#from pyueye import ueye
#
#h_cam = ueye.HIDS(1)
#ret = ueye.is_InitCamera(h_cam, None) 
#
#
#if ret != ueye.IS_SUCCESS:
#    pass

from pyueye import ueye
import ctypes

hcam = ueye.HIDS(1)
pccmem = ueye.c_mem_p()
memID = ueye.c_int()
hWnd = ctypes.c_voidp()
ueye.is_InitCamera(hcam, hWnd)
ueye.is_SetDisplayMode(hcam, 0)
sensorinfo = ueye.SENSORINFO()
ueye.is_GetSensorInfo(hcam, sensorinfo)
ueye.is_AllocImageMem(hcam, sensorinfo.nMaxWidth, sensorinfo.nMaxHeight,24, pccmem, memID)
ueye.is_SetImageMem(hcam, pccmem, memID)
ueye.is_SetDisplayPos(hcam, 100, 100)

nret = ueye.is_FreezeVideo(hcam, ueye.IS_WAIT)
print(nret)
FileParams = ueye.IMAGE_FILE_PARAMS()
FileParams.pwchFileName = "D:\docs\Documents\GitHub\ids_ocv\python-test-image.bmp"
FileParams.nFileType = ueye.IS_IMG_BMP
FileParams.ppcImageMem = None
FileParams.pnImageID = None


nret = ueye.is_ImageFile(hcam, ueye.IS_IMAGE_FILE_CMD_SAVE, FileParams, ueye.sizeof(FileParams))
print(nret)
ueye.is_FreeImageMem(hcam, pccmem, memID)
ueye.is_ExitCamera(hcam)