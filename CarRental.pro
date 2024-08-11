QT += quick sql

resources.files = main.qml GUI/View/CarRental.qml GUI/View/CarList.qml
resources.prefix = /$${TARGET}
RESOURCES += resources

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SOURCES += \
        DB/CustomerDatabase.cpp \
        GUI/Controller/carRentalController.cpp \
        GUI/Model/CarRentalModel.cpp \
        main.cpp

HEADERS += \
    DB/CustomerDatabase.h \
    GUI/Controller/carRentalController.h \
    GUI/Model/CarRentalModel.h

DISTFILES += \
    GUI/View/CarList.qml


