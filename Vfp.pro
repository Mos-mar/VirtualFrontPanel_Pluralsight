QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Model/instrument.cpp \
    Model/instsocket.cpp \
    Model/provider.cpp \
    Model/settings.cpp \
    View/aboutbox.cpp \
    View/controltab.cpp \
    View/setuptab.cpp \
    ViewMgr/controltabviewmanager.cpp \
    ViewMgr/setupviewmanager.cpp \
    main.cpp \
    View/mainview.cpp \
    startup.cpp \
    utils.cpp

HEADERS += \
    Model/instrument.h \
    Model/instsocket.h \
    Model/provider.h \
    Model/settings.h \
    View/aboutbox.h \
    View/controltab.h \
    View/mainview.h \
    View/setuptab.h \
    ViewMgr/controltabviewmanager.h \
    ViewMgr/setupviewmanager.h \
    startup.h \
    utils.h

FORMS += \
    View/aboutbox.ui \
    View/controltab.ui \
    View/mainview.ui \
    View/setuptab.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    VfpRessources.qrc

DISTFILES +=
