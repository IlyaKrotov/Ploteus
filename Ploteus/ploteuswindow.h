#ifndef PLOTEUSWINDOW_H
#define PLOTEUSWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QSplashScreen>
#include <iostream>
#include <QPixmap>
#include <QPalette>

/*namespace Ui {
class welcome_page;
}*/

class PloteusWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PloteusWindow(QWidget& tbl_page, QWidget *parent = 0);
    ~PloteusWindow();

private:
    //Ui::PloteusWindow *ui;
    QWidget &tbl_shc_pg;
public slots:
    turn_strtpage_to_tbl_chs_pg();
};


void loadModules(QSplashScreen* psplash);

#endif // PLOTEUSWINDOW_H
