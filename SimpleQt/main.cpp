#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(300,200);
    QPushButton *welcomeButton = new QPushButton("Welcome to Qt", &window);
    welcomeButton->setToolTip("Welcome Button");
    welcomeButton->setGeometry(10,20,100,50);
    window.show();
    return app.exec();
}
