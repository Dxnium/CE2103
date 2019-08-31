#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void MainWindow::mousePressEvent(QMouseEvent *e)
    {MainWindow::paintEvent(QPaintEvent *e){

        }
        point=e->pos();
        update();
    }
    void MainWindow::paintEvent(QPaintEvent *e)
    {
        setAttribute(Qt::WA_OpaquePaintEvent);
        QPainter painter(this);
        QPen linepen(Qt::red);
        linepen.setCapStyle(Qt::RoundCap);
        linepen.setWidth(30);
        painter.setRenderHint(QPainter::Antialiasing,true);
        painter.setPen(linepen);
        painter.drawPoint(point);
    }

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
