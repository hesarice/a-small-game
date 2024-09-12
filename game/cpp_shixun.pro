QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += multimedia

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogaccounts.cpp \
    dialoglevel.cpp \
    dialoglogin.cpp \
    dialogmenu.cpp \
    dialogranking.cpp \
    dialogrule.cpp \
    dialogwin.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    dialogaccounts.h \
    dialoglevel.h \
    dialoglogin.h \
    dialogmenu.h \
    dialogranking.h \
    dialogrule.h \
    dialogwin.h \
    widget.h

FORMS += \
    dialogaccounts.ui \
    dialoglevel.ui \
    dialoglogin.ui \
    dialogmenu.ui \
    dialogranking.ui \
    dialogrule.ui \
    dialogwin.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
