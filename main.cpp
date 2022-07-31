#include "qrcode_app.h"
#include <QSharedMemory>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     //创建运行时只允许存在一个程序
    static QSharedMemory *shareMem = new QSharedMemory("SingleAPP");
    //判断如果存在存直接退出
    if(!shareMem->create(1)){
        qApp->quit();
        return -1;
    }else{
        int result = -1;
        while (result !=0) {
            Create_qrcode w;
            w.setWindowIcon(QIcon("qrcode.ico"));
            w.show();
            result= a.exec();  //!退出时如果为零，正常退出，否则重启程序
        }
        return result;
    }

}
