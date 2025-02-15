QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/include

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    src/Tutorials.cpp \
    src/User.cpp \
    src/Nutrition.cpp \
    src/Food.cpp \
    src/Exercise.cpp \
    src/LogManager.cpp

HEADERS += \
    include/Records.h \
    include/Tutorials.h \
    mainwindow.h \
    include/User.h \
    include/Nutrition.h \
    include/Food.h \
    include/Exercise.h \
    include/LogManager.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
