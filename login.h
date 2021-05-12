#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <home.h>
//**************************************************
//  This class acepts a username and password and  *
//   compares with data stored inside a database   *
//**************************************************
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase loginDB;
};

#endif // LOGIN_H