#include <QApplication>
#include <QQmlApplicationEngine>
#include "pinchzoomitem.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<PinchZoomItem>("PinchZoomItem", 1, 0, "PinchZoomItem");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
