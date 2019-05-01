TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

unix|win32: LIBS += -L'C:/Program Files/IDS/uEye/Develop/Lib/' -luEye_api
unix|win32: LIBS += -L'C:/Program Files/IDS/uEye/Develop/Lib/' -luEye_api_64
INCLUDEPATH += 'C:/Program Files/IDS/uEye/Develop/include'
DEPENDPATH += 'C:/Program Files/IDS/uEye/Develop/include'
