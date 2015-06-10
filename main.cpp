#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "cpuinfo.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<CpuInfo>("dk.component", 1, 0, "CpuInfo");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
