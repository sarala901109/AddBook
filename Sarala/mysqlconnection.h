#ifndef MYSQLCONNECTION_H
#define MYSQLCONNECTION_H
#include <QtGui>
#include<QtSql>
#include<QTableView>
#include<QTableWidget>
#include<QMessageBox>
#include<QWidget>

class mysqlconnection
{
public:
    QSqlDatabase db;
    QTableWidget* table;
    void test();
};

#endif // MYSQLCONNECTION_H
