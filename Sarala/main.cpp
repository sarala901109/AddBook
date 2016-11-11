#include<QApplication>
#include<QtSql>
#include<QtGui>
#include<QTableView>
#include<QWidget>
#include<QTableWidget>
#include<QMessageBox>
#include "mysqlconnection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysqlconnection* con = new mysqlconnection();
    con->test();
    return a.exec();
}
