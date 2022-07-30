#include "qrcode_app.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qrcode_app w;
    w.show();
    return a.exec();
}
