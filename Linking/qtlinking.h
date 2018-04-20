#ifndef QTLINKING_H
#define QTLINKING_H

#include <QMainWindow>

namespace Ui {
class QTLINKING;
}

class QTLINKING : public QMainWindow
{
    Q_OBJECT

public:
    explicit QTLINKING(QWidget *parent = 0);
    ~QTLINKING();

private slots:
    void on_LLegal_clicked();

    void on_LWide_clicked();

    void on_LNo_clicked();

    void on_WBowled_clicked();

    void on_WCatch_clicked();

    void on_WLbw_clicked();

    void on_WStumped_clicked();

    void on_WHitwicket_clicked();

    void on_WRunout_clicked();

    void on_WNotout_clicked();

    void on_R6_clicked();

    void on_R0_clicked();

    void on_R1_clicked();

    void on_R2_clicked();

    void on_R3_clicked();

    void on_R4_clicked();

    void on_R5_clicked();

    void on_Next_clicked();

    void on_Previous_clicked();

private:
    Ui::QTLINKING *ui;
};

#endif // QTLINKING_H
