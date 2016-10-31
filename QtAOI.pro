#-------------------------------------------------
#
# Project created by QtCreator 2016-03-05T22:45:31
#
#-------------------------------------------------

QT       += core gui
QT       += designer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtAOI
TEMPLATE = app

INCLUDEPATH += D:/Downloads/OpenCV/build/include

#LIBS += -LD:/Downloads/OpenCV/build/2013/lib/Debug \
#    opencv_core300d.lib \
#    opencv_highgui300d.lib \
#    opencv_imgproc300d.lib \
#    opencv_features2d300d.lib \
#    opencv_calib3d300d.lib \
#    opencv_videoio300d.lib \
#    opencv_video300d.lib \
#    opencv_imgcodecs300d.lib \

CONFIG(debug,debug|release) {
    LIBS += -LD:/Downloads/OpenCV/build/2013/lib/Debug \
        opencv_core300d.lib \
        opencv_highgui300d.lib \
        opencv_imgproc300d.lib \
        opencv_features2d300d.lib \
        opencv_calib3d300d.lib \
        opencv_videoio300d.lib \
        opencv_video300d.lib \
        opencv_imgcodecs300d.lib \
　　# debug
#　　QMAKE_LIBDIR += "D:/Downloads/OpenCV/build/2013/lib/Debug"
#　　LIBS += opencv_core300d.lib \
#        　　opencv_highgui300d.lib \
#        　　opencv_imgproc300d.lib \
#        　　opencv_features2d300d.lib \
#        　　opencv_calib3d300d.lib \
#        　　opencv_videoio300d.lib \
#        　　opencv_video300d.lib \
#        　　opencv_imgcodecs300d.lib \
} else {
　　# release
　　QMAKE_LIBDIR += "D:/Downloads/OpenCV/build/2013/lib/Release"
　　LIBS += opencv_core300.lib \
        　　opencv_highgui300.lib \
        　　opencv_imgproc300.lib \
        　　opencv_features2d300.lib \
        　　opencv_calib3d300.lib \
        　　opencv_videoio300.lib \
        　　opencv_video300.lib \
        　　opencv_imgcodecs300.lib \
}

SOURCES += main.cpp\
        mainwindow.cpp \
    visionview.cpp \
    webcameramanager.cpp \
    timelogger.cpp \
    dialogeditmask.cpp \
    dialogvisiontoolbox.cpp \
    moduleselectform.cpp \
    MenuTreeWidget.cpp \
    AutoOperationForm.cpp \
    VisionViewToolBox.cpp \
    SystemConfig.cpp \
    programmainform.cpp \
    programmanagementform.cpp

HEADERS  += mainwindow.h \
    constants.h \
    visionview.h \
    webcameramanager.h \
    timelogger.h \
    dialogeditmask.h \
    dialogvisiontoolbox.h \
    moduleselectform.h \
    MenuTreeWidget.h \
    AutoOperationForm.h \
    VisionViewToolBox.h \
    SystemConfig.h \
    programmainform.h \
    programmanagementform.h

FORMS    += \
    MainWindow.ui \
    moduleselectform.ui \
    visionviewtoolbox.ui \
    dialogvisiontoolbox.ui \
    dialogeditmask.ui \
    autooperationform.ui \
    programmainform.ui \
    programmanagementform.ui

RESOURCES += \
    resource.qrc
