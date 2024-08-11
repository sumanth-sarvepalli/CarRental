#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <DB/CustomerDatabase.h>

QObject *getCustomerDatabaseObj(QQmlEngine *qmlEngine, QJSEngine *jsEngine)
{
    Q_UNUSED(qmlEngine);
    Q_UNUSED(jsEngine);

    return CustomerDatabase::getInstance();
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterSingletonType<CustomerDatabase>("CustomerDatabase", 1, 0, "CustomerDatabase", &getCustomerDatabaseObj);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("CustomerDatabase", CustomerDatabase::getInstance());
//    engine.rootContext()->setContextProperty("CustomerDatabase", CustomerDatabase::getInstance());

    const QUrl url(u"qrc:/CarRental/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
