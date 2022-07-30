#ifndef QRCODE_APP_H
#define QRCODE_APP_H

#include <QMainWindow>
//#include <climits>
//#include <cstdint>
//#include <cstdlib>
#include <cstring>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
#include "qrcodegen.h"
#include <QImage>
#include <QClipboard>
#include <QFileDialog>
//#include <QDebug>

using std::uint8_t;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;


QT_BEGIN_NAMESPACE
namespace Ui { class Qrcode_app; }
QT_END_NAMESPACE

class Qrcode_app : public QMainWindow
{
    Q_OBJECT

public:
    Qrcode_app(QWidget *parent = nullptr);
    ~Qrcode_app();


private slots:
    //点击生成二维码槽函数
    void on_generator_qrcode_pbtn_clicked();
    //点击复制二维码
    void on_copy_pic_pbtn_clicked();
    //点击选择二维码扫码
    void on_qrcode_scan_pbtn_clicked();

private:
    Ui::Qrcode_app *ui;
//    QString toSvgString(const QrCode &qr, int border);
//    void printQr(const QrCode &qr);

    //生成二维码和复制二维码功能函数
    void doBasicDemo(bool is_copy=false);
//    void doVarietyDemo();
//    void doSegmentDemo();
//    void doMaskDemo();
};
#endif // QRCODE_APP_H
