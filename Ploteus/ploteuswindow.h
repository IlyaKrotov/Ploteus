#ifndef PLOTEUSWINDOW_H
#define PLOTEUSWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QSplashScreen>
#include <iostream>
#include <QPixmap>
<<<<<<< HEAD
#include <QPalette>
=======
#include "qcustomplot.h"
>>>>>>> 56688ec91d93762841a103273c3f8fe27f69c582

/*namespace Ui {
class welcome_page;
}*/

class PloteusWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PloteusWindow(QWidget& tbl_page, QWidget *parent = 0);
    ~PloteusWindow();

    void setupPlot();

  private slots:
    void horzScrollBarChanged(int value);
    void vertScrollBarChanged(int value);
    void xAxisChanged(QCPRange range);
    void yAxisChanged(QCPRange range);

private:
    //Ui::PloteusWindow *ui;
    QWidget &tbl_shc_pg;
public slots:
    turn_strtpage_to_tbl_chs_pg();
};


void loadModules(QSplashScreen* psplash);

#endif // PLOTEUSWINDOW_H
