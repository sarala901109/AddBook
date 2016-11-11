#include<mysqlconnection.h>
#include <QtGui>
#include <QtSql>
#include <QTableView>
#include <QApplication>
#include<QTableWidget>
#include<QMessageBox>
#include<QWidget>


void mysqlconnection::test()
{

    table = new QTableWidget();
    table->setWindowTitle("Connect with Mysql Database");

    db= QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("Sample");
    db.setUserName("root");
    db.setPassword("root");


if (!db.open())
{
QMessageBox::critical(0, QObject::tr("Database Error"),
db.lastError().text());
}
QSqlQuery query("SELECT * FROM contacts");
table->setColumnCount(query.record().count());
table->setRowCount(query.size());
int index=0;
while (query.next())
{
table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
table->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));
table->setItem(index,3,new QTableWidgetItem(query.value(3).toString()));
table->setItem(index,4,new QTableWidgetItem(query.value(4).toString()));
table->setItem(index,5,new QTableWidgetItem(query.value(5).toString()));


index++;
}
table->show();
db.close();

}
