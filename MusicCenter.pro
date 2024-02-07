QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    converterbase.cpp \
    converterwavmp3.cpp \
    converterwavogg.cpp \
    main.cpp \
    mainwindow.cpp \
    wsettings.cpp

HEADERS += \
    about.h \
    converterbase.h \
    converterwavmp3.h \
    converterwavogg.h \
    mainwindow.h \
    wsettings.h

FORMS += \
    about.ui \
    converterbase.ui \
    mainwindow.ui \
    wsettings.ui


INCLUDEPATH += $$PWD/lib/include
LIBS += -L$$PWD/lib/lib


TRANSLATIONS += \
    MusicCenter_pl_PL.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    MusicCenter_pl_PL.ts \
    music.ico \
    music.png

win32: LIBS += -luser32 -lkernel32

win32: RC_ICONS += music.ico
