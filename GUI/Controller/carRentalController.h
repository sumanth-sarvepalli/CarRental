#ifndef CARRENTALCONTROLLER_H
#define CARRENTALCONTROLLER_H

#include <QObject>

class CarRentalController : public QObject
{
    Q_OBJECT
public:
    explicit CarRentalController(QObject *parent = nullptr);
    QString name;


signals:

};

#endif // CARRENTALCONTROLLER_H
