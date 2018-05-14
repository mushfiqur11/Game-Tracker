#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_LLegal_2_clicked();

    void on_LWide_2_clicked();

    void on_LNo_2_clicked();

    void on_WBowled_2_clicked();

    void on_WCatch_2_clicked();

    void on_WLbw_2_clicked();

    void on_WStumped_2_clicked();

    void on_WHitwicket_2_clicked();

    void on_WRunout_2_clicked();

    void on_WNotout_2_clicked();

    void on_R6_2_clicked();

    void on_R0_2_clicked();

    void on_R1_2_clicked();

    void on_R2_2_clicked();

    void on_R3_2_clicked();

    void on_R4_2_clicked();

    void on_R5_2_clicked();

    void on_Next_2_clicked();

    void on_Previous_2_clicked();

    void on_Reset_2_clicked();

    void on_Match2_clicked();

    void on_createPlayers_clicked();

    void on_Player_clicked();

    void on_Team_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_createTEAMS_clicked();

    void on_Match3_clicked();

    void on_setUpMatch_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
