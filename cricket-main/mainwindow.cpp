#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MainWindow.h"
#include<QDebug>
#include "ball.h"
#include "player.h"
#include <QMessageBox>
#include <iostream>
#include <QtGui>
#include <vector>
#include "team.h"
using namespace std;
vector<Ball>ball_list;
vector<player>player_list;
vector<team>team_list;
int gg=0;
int T1=0;
int T2=0;
int G_TM=0;
int G_TMs=0;
int G_PL=0;
int G_PLs=0;
int G_R_2=0;
int GLOBAL_Wicket_2=0;
int G_W_2=0;
int GLOBAL_Overs_2=0;
int GLOBAL_Ball_2=1;
int G_L_2=0;
int G_E_2=0;
int PGB_2=1;
int G_C_2=1;
int Prev_2=0;
int OL=0;
int setMat=0;
int inn2=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    ball_list.push_back(Ball(-1,-1));
    ball_list[0].setValue(0,0,0,0);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_LWide_2_clicked()
{
    ui->R0_2->setEnabled(true);
    ui->R1_2->setEnabled(true);
    ui->R2_2->setEnabled(true);
    ui->R3_2->setEnabled(true);
    ui->R4_2->setEnabled(true);
    ui->R5_2->setEnabled(true);
    ui->EBye_2->setEnabled(true);
    ui->WRunout_2->setEnabled(true);
    ui->WStumped_2->setEnabled(true);
    ui->WHitwicket_2->setEnabled(true);
    if(ui->WBowled_2->isChecked()){
        ui->WBowled_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WBowled_2->setDisabled(true);
    if(ui->WCatch_2->isChecked()){
        ui->WCatch_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WCatch_2->setDisabled(true);
    if(ui->WLbw_2->isChecked()){
        ui->WLbw_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WLbw_2->setDisabled(true);
    if(ui->R6_2->isChecked()){
        ui->R6_2->setChecked(false);
        ui->R0_2->setChecked(true);
    }
    ui->R6_2->setDisabled(true);
    if(ui->ELegbye_2->isChecked()){
        ui->ELegbye_2->setChecked(false);
        ui->EDefault_2->setChecked(true);
    }
    ui->ELegbye_2->setDisabled(true);
}

void MainWindow::on_LNo_2_clicked()
{
    ui->R0_2->setEnabled(true);
    ui->R1_2->setEnabled(true);
    ui->R2_2->setEnabled(true);
    ui->R3_2->setEnabled(true);
    ui->R4_2->setEnabled(true);
    ui->R5_2->setEnabled(true);
    ui->R6_2->setEnabled(true);
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
    ui->R6_2->setEnabled(true);
    ui->WRunout_2->setEnabled(true);
    if(ui->WBowled_2->isChecked()){
        ui->WBowled_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WBowled_2->setDisabled(true);

    if(ui->WCatch_2->isChecked()){
        ui->WCatch_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WCatch_2->setDisabled(true);

    if(ui->WLbw_2->isChecked()){
        ui->WLbw_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WLbw_2->setDisabled(true);

    if(ui->WStumped_2->isChecked()){
        ui->WStumped_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WStumped_2->setDisabled(true);

    if(ui->WHitwicket_2->isChecked()){
        ui->WHitwicket_2->setChecked(false);
        ui->WNotout_2->setChecked(true);
    }
    ui->WHitwicket_2->setDisabled(true);
}

void MainWindow::on_LLegal_2_clicked()
{
    ui->ELegbye_2->setEnabled(true);
    ui->R6_2->setEnabled(true);
    ui->WBowled_2->setEnabled(true);
    ui->WCatch_2->setEnabled(true);
    ui->WLbw_2->setEnabled(true);
    ui->WStumped_2->setEnabled(true);
    ui->WHitwicket_2->setEnabled(true);
    ui->WRunout_2->setEnabled(true);
}

void MainWindow::on_WBowled_2_clicked()
{
    if(ui->LLegal_2->isChecked()){
        ui->R0_2->setChecked(true);
        ui->R1_2->setDisabled(true);
        ui->R2_2->setDisabled(true);
        ui->R3_2->setDisabled(true);
        ui->R4_2->setDisabled(true);
        ui->R5_2->setDisabled(true);
        ui->R6_2->setDisabled(true);
        ui->EDefault_2->setChecked(true);
        ui->EBye_2->setDisabled(true);
        ui->ELegbye_2->setDisabled(true);
    }
}

void MainWindow::on_WCatch_2_clicked()
{
    if(ui->LLegal_2->isChecked()){
        ui->R0_2->setChecked(true);
        ui->R1_2->setDisabled(true);
        ui->R2_2->setDisabled(true);
        ui->R3_2->setDisabled(true);
        ui->R4_2->setDisabled(true);
        ui->R5_2->setDisabled(true);
        ui->R6_2->setDisabled(true);
        ui->EDefault_2->setChecked(true);
        ui->EBye_2->setDisabled(true);
        ui->ELegbye_2->setDisabled(true);
    }
}

void MainWindow::on_WLbw_2_clicked()
{
    if(ui->LLegal_2->isChecked()){
        ui->R0_2->setChecked(true);
        ui->R1_2->setDisabled(true);
        ui->R2_2->setDisabled(true);
        ui->R3_2->setDisabled(true);
        ui->R4_2->setDisabled(true);
        ui->R5_2->setDisabled(true);
        ui->R6_2->setDisabled(true);
        ui->EDefault_2->setChecked(true);
        ui->EBye_2->setDisabled(true);
        ui->ELegbye_2->setDisabled(true);
    }
}

void MainWindow::on_WStumped_2_clicked()
{
    if(ui->LLegal_2->isChecked()||ui->LWide_2->isChecked()){
        ui->R0_2->setChecked(true);
        ui->R1_2->setDisabled(true);
        ui->R2_2->setDisabled(true);
        ui->R3_2->setDisabled(true);
        ui->R4_2->setDisabled(true);
        ui->R5_2->setDisabled(true);
        ui->R6_2->setDisabled(true);
        ui->EDefault_2->setChecked(true);
        ui->EBye_2->setDisabled(true);
        ui->ELegbye_2->setDisabled(true);
    }
}

void MainWindow::on_WHitwicket_2_clicked()
{
    ui->R0_2->setChecked(true);
    ui->R1_2->setDisabled(true);
    ui->R2_2->setDisabled(true);
    ui->R3_2->setDisabled(true);
    ui->R4_2->setDisabled(true);
    ui->R5_2->setDisabled(true);
    ui->R6_2->setDisabled(true);
    ui->EDefault_2->setChecked(true);
    ui->EBye_2->setDisabled(true);
    ui->ELegbye_2->setDisabled(true);
}

void MainWindow::on_WRunout_2_clicked()
{
    ui->R0_2->setEnabled(true);
    ui->R1_2->setEnabled(true);
    ui->R2_2->setEnabled(true);
    ui->R3_2->setEnabled(true);
    ui->R4_2->setEnabled(true);
    ui->R5_2->setDisabled(true);
    ui->R6_2->setDisabled(true);
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_WNotout_2_clicked()
{
    ui->R0_2->setEnabled(true);
    ui->R1_2->setEnabled(true);
    ui->R2_2->setEnabled(true);
    ui->R3_2->setEnabled(true);
    ui->R4_2->setEnabled(true);
    ui->R5_2->setEnabled(true);
    ui->R6_2->setEnabled(true);
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_R6_2_clicked()
{
    ui->EDefault_2->setChecked(true);
    ui->EBye_2->setDisabled(true);
    ui->ELegbye_2->setDisabled(true);
}


void MainWindow::on_R0_2_clicked()
{
    ui->EDefault_2->setChecked(true);
    ui->EBye_2->setDisabled(true);
    ui->ELegbye_2->setDisabled(true);
}

void MainWindow::on_R1_2_clicked()
{
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_R2_2_clicked()
{
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_R3_2_clicked()
{
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_R4_2_clicked()
{
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_R5_2_clicked()
{
    ui->EBye_2->setEnabled(true);
    ui->ELegbye_2->setEnabled(true);
}

void MainWindow::on_Next_2_clicked()
{
    if(GLOBAL_Ball_2>=2)
        ui->Previous_2->setEnabled(true);

    {
    //run
    if(ui->R0_2->isChecked()){
        G_R_2=0;
    }
    else if(ui->R1_2->isChecked()){
        G_R_2=1;
    }
    else if(ui->R2_2->isChecked()){
        G_R_2=2;
    }
    else if(ui->R3_2->isChecked()){
        G_R_2=3;
    }
    else if(ui->R4_2->isChecked()){
        G_R_2=4;
    }
    else if(ui->R5_2->isChecked()){
        G_R_2=5;
    }
    else if(ui->R6_2->isChecked()){
        G_R_2=6;
    }

    //legal
    if(ui->LLegal_2->isChecked()){
        G_L_2=0;
    }
    else if(ui->LWide_2->isChecked()){
        G_L_2=1;
    }
    else if(ui->LNo_2->isChecked()){
        G_L_2=2;
    }

    //Wicket_2
    if(ui->WNotout_2->isChecked()){
        G_W_2=0;
    }
    else if(ui->WBowled_2->isChecked()){
        G_W_2=1;
    }
    else if(ui->WCatch_2->isChecked()){
        G_W_2=2;
    }
    else if(ui->WLbw_2->isChecked()){
        G_W_2=3;
    }
    else if(ui->WStumped_2->isChecked()){
        G_W_2=4;
    }
    else if(ui->WRunout_2->isChecked()){
        G_W_2=5;
    }
    else if(ui->WHitwicket_2->isChecked()){
        G_W_2=6;
    }

    //extra
    if(ui->EDefault_2->isChecked()){
        G_E_2=0;
    }
    else if(ui->EBye_2->isChecked()){
        G_E_2=1;
    }
    else if(ui->ELegbye_2->isChecked()){
        G_E_2=2;
    }
    }
    //cout<<G_R_2<<" "<<G_W_2<<" "<<G_L_2<<" "<<G_E_2<<endl;
    if(Prev_2==0){
        if(G_L_2!=0){
            G_C_2++;
        }

        //cout<<"GB="<<GLOBAL_Ball_2<<"  GC="<<G_C_2<<endl;
        ball_list.push_back(Ball(GLOBAL_Ball_2-1,G_C_2-1));
        PGB_2=GLOBAL_Ball_2;
        GLOBAL_Ball_2++;
        //cout<<ball_list[PGB_2].getBall()<<" "<<ball_list[PGB_2].getOver()<<endl;
    }
    else if(Prev_2==1){
        if(ball_list[PGB_2].getLegal()==0&&G_L_2!=0){
            G_C_2++;
            ball_list[PGB_2].setBall(GLOBAL_Ball_2-1,G_C_2-1);
        }
        else if(ball_list[PGB_2].getLegal()>0&&G_L_2==0){
            G_C_2--;
            ball_list[PGB_2].setBall(GLOBAL_Ball_2-1,G_C_2-1);
        }
    }


    ball_list[PGB_2].setValue(G_R_2,G_W_2,G_L_2,G_E_2);



    if(ball_list[PGB_2].getLegal()>0){
        G_L_2=1;
    }
    else
        G_L_2=0;

    //run update
    QString s = ui->Runs_2->text();
    bool ok;
    int RR=s.toInt(&ok);
    ui->Runs_2->setNum(RR+ball_list[PGB_2].getRun()+G_L_2);

    //wicket update
    if(ball_list[PGB_2].getWicket()>0){
        QString s2 = ui->Wickets_2->text();
        int WW=s2.toInt(&ok);
        ui->Wickets_2->setNum(WW+1);
    }

    //ball and over update
    if(ball_list[PGB_2].getBall()==6){
        ui->Overs_2->setNum(ball_list[PGB_2].getOver()+1-OL);
        ui->Balls_2->setNum(0);
    }
    else{
        ui->Overs_2->setNum(ball_list[PGB_2].getOver()-OL);
        ui->Balls_2->setNum(ball_list[PGB_2].getBall());
    }


    //this over
    int i=PGB_2;
    ui->this_over->setText("");
    while(1){
        //cout<<i<<" S "<<ball_list[i].getBall()<<" "<<ball_list[i-1].getBall()<<endl;
        QString ll="";
        if(ball_list[i].getLegal()==1)
            ll="wd";
        else if(ball_list[i].getLegal()==2)
            ll="no";
        QString ee="";
        if(ball_list[i].getExtra()==1)
            ee="b";
        else if(ball_list[i].getExtra()==2)
            ee="lb";

        QString ww="";

        if(ball_list[i].getWicket()>0){
            ww="Wkt";
            if(ball_list[i].getRun()==0&&ball_list[i].getLegal()==0)
                ui->this_over->setText(ui->this_over->text()+ww+"  ");
            else
                ui->this_over->setText(ui->this_over->text()+QVariant(ball_list[i].getRun()).toString()+ee+ll+"+"+ww+"  ");

        }
        else{

            ll=ll+"  ";
            ui->this_over->setText(ui->this_over->text()+QVariant(ball_list[i].getRun()).toString()+ee+ll);
        }
        if(ball_list[i-1].getLegal()!=0){
            i--;
            continue;
        }
        else if((ball_list[i].getBall()==1 && ball_list[i-1].getBall()!=ball_list[i].getBall())||(ball_list[i-1].getBall()==6 && (ball_list[i-1].getLegal()==0))||i==1)
            break;
        else
            i--;
    }
    QString ss2=ui->Wickets_2->text();
    int WW2=ss2.toInt(&ok);

    if(ball_list[PGB_2].getBall()==6 && ball_list[PGB_2].getOver()==(ui->overLimit->value()-1) && ball_list[PGB_2].getLegal()==0 && inn2==0){
        inn2=1;
        ui->Target->setText("Target: ");
        QString sss = ui->Runs_2->text();
        bool ok;
        int RRR=sss.toInt(&ok);
        ui->targetScore->setNum(RRR+1);
        ui->Overs_2->setNum(0);
        ui->Balls_2->setNum(0);
        ui->Runs_2->setNum(0);
        ui->Wickets_2->setNum(0);
        ui->this_over->setText("");
        OL=ui->overLimit->value();
        if(ui->toss->currentIndex()==1){
            ui->TEAM_2->setText(team_list[ui->team_1->currentIndex()].getAName());
        }
        else{
            ui->TEAM_2->setText(team_list[ui->team_2->currentIndex()].getAName());
        }
    }
    if(WW2>=10 && inn2==0){
        ui->Target->setText("Target: ");
        QString sss = ui->Runs_2->text();
        bool ok;
        int RRR=sss.toInt(&ok);
        ui->targetScore->setNum(RRR+1);
        ui->Overs_2->setNum(0);
        ui->Balls_2->setNum(0);
        ui->Runs_2->setNum(0);
        ui->Wickets_2->setNum(0);
        ui->this_over->setText("");
        OL=ui->overLimit->value();
        if(ui->toss->currentIndex()==1 && setMat==1){
            ui->TEAM_2->setText(team_list[ui->team_1->currentIndex()].getAName());
        }
        else if(setMat==1){
            ui->TEAM_2->setText(team_list[ui->team_2->currentIndex()].getAName());
        }
        else{
            ui->TEAM_2->setText("Team 2");
        }
    }
    if(gg==0 && inn2==1){
        QString scores = ui->Runs_2->text();
        int RRnow=scores.toInt(&ok);
        QString targets = ui->targetScore->text();
        int TT=targets.toInt(&ok);
        if(RRnow>=TT){
            gg=1;
            QMessageBox qBox2;
            qBox2.setText("THE MATCH IS OVER");
            qBox2.setInformativeText(team_list[T2].getName()+" has won the match");
            qBox2.exec();
        }
    }
    if(ball_list[PGB_2].getBall()==6 && ball_list[PGB_2].getOver()==(ui->overLimit->value()-1) && ball_list[PGB_2].getLegal()==0 && inn2==1 && gg==0){
        QMessageBox qBox2;
        qBox2.setText("THE MATCH IS OVER");
        qBox2.setInformativeText(team_list[T1].getName()+" has won the match");
        qBox2.exec();
        gg=1;
    }


    if(WW2>=10 && inn2==1){
        gg=1;
        QMessageBox qBox2;
        qBox2.setText("THE MATCH IS OVER");
        qBox2.setInformativeText(team_list[T1].getName()+" has won the match");
        qBox2.exec();
        gg=1;
    }
    Prev_2=0;
}



void MainWindow::on_Previous_2_clicked()
{
    Prev_2=1;
    ui->Previous_2->setDisabled(true);
    switch(ball_list[PGB_2].getRun()){
        case(0):
        ui->R0_2->setChecked(true);
        break;
        case(1):
        ui->R1_2->setChecked(true);
        break;
        case(2):
        ui->R2_2->setChecked(true);
        break;
        case(3):
        ui->R3_2->setChecked(true);
        break;
        case(4):
        ui->R4_2->setChecked(true);
            break;
        case(5):
        ui->R5_2->setChecked(true);
        break;
        case(6):
        ui->R6_2->setChecked(true);
        break;
    }
    switch(ball_list[PGB_2].getWicket()){
        case(0):
        ui->WNotout_2->setChecked(true);
        break;
        case(1):
        ui->WBowled_2->setChecked(true);
        break;
        case(2):
        ui->WCatch_2->setChecked(true);
        break;
        case(3):
        ui->WLbw_2->setChecked(true);
        break;
        case(4):
        ui->WStumped_2->setChecked(true);
            break;
        case(5):
        ui->WRunout_2->setChecked(true);
        break;
        case(6):
        ui->WHitwicket_2->setChecked(true);
        break;
    }
    switch(ball_list[PGB_2].getLegal()){
        case(0):
        ui->LLegal_2->setChecked(true);
        break;
        case(1):
        ui->LWide_2->setChecked(true);
        break;
        case(2):
        ui->LNo_2->setChecked(true);
        break;
    }
    switch(ball_list[PGB_2].getExtra()){
        case(0):
        ui->EDefault_2->setChecked(true);
        break;
        case(1):
        ui->EBye_2->setChecked(true);
        break;
        case(2):
        ui->ELegbye_2->setChecked(true);
        break;
    }

    if(ball_list[PGB_2].getLegal()>0){
        G_L_2=1;
    }
    else
        G_L_2=0;

    QString s = ui->Runs_2->text();
    bool ok;
    int RR=s.toInt(&ok);
    ui->Runs_2->setNum(RR-ball_list[PGB_2].getRun()-G_L_2);


    if(ball_list[PGB_2].getBall()==6){
        ui->Overs_2->setNum(ball_list[PGB_2].getOver()+1-OL);
        ui->Balls_2->setNum(0);
    }
    else{
        ui->Overs_2->setNum(ball_list[PGB_2].getOver()-OL);
        ui->Balls_2->setNum(ball_list[PGB_2].getBall());
    }
    if(ball_list[PGB_2].getWicket()>0){
        QString s2 = ui->Wickets_2->text();
        int WW=s2.toInt(&ok);
        ui->Wickets_2->setNum(WW-1);
    }


}

void MainWindow::on_Reset_2_clicked()
{
    ui->LLegal_2->setEnabled(true);
    ui->LLegal_2->setChecked(true);
    ui->R0_2->setEnabled(true);
    ui->R0_2->setChecked(true);
    ui->WNotout_2->setEnabled(true);
    ui->WNotout_2->setChecked(true);
    ui->EDefault_2->setEnabled(true);
    ui->EDefault_2->setChecked(true);
}
//one unresolved bug. illegal>Prev_2ious>legal. ball count wrong.

void MainWindow::on_Match2_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_createPlayers_clicked()
{
    player_list.push_back(player(G_PL));
    QString fN=ui->firstName->text();
    QString lN=ui->lastName->text();
    player_list[G_PL].setValue(fN,lN);
    player_list[G_PL].setValues(ui->battingType->currentText(),ui->bowlingType->currentText(),ui->country->currentText());
    QMessageBox qBox;
    qBox.setText("Player created successfully");
    QString qN="Name: "+player_list[G_PL].getName()+"\n";
    QString qT=player_list[G_PL].getBatType()+"\n";
    QString qT2=player_list[G_PL].getBowlType()+"\n";
    QString qC=player_list[G_PL].getCountry();
    qBox.setInformativeText(qN+qT+qT2+qC);
    qBox.exec();
    //DOB input not considered
    //qDebug()<<player_list[G_PL].getName()<<player_list[G_PL].getBatType()<<player_list[G_PL].getBowlType()<<player_list[G_PL].getCountry()<<endl;
    G_PL++;
}

void MainWindow::on_Player_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_Team_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    for(int i=0;i<G_PL;i++){
        if(i==G_PLs){
            G_PLs++;
            ui->comboBox->addItem(player_list[i].getName());
            ui->comboBox_2->addItem(player_list[i].getName());
            ui->comboBox_3->addItem(player_list[i].getName());
            ui->comboBox_4->addItem(player_list[i].getName());
            ui->comboBox_5->addItem(player_list[i].getName());
            ui->comboBox_6->addItem(player_list[i].getName());
            ui->comboBox_7->addItem(player_list[i].getName());
            ui->comboBox_8->addItem(player_list[i].getName());
            ui->comboBox_9->addItem(player_list[i].getName());
            ui->comboBox_10->addItem(player_list[i].getName());
            ui->comboBox_11->addItem(player_list[i].getName());
            ui->comboBox_12->addItem(player_list[i].getName());
            ui->comboBox_13->addItem(player_list[i].getName());
        }
    }
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index==3){
        ui->tabWidget->setCurrentIndex(3);
        for(int i=0;i<G_PL;i++){
            if(i==G_PLs){
                G_PLs++;
                ui->comboBox->addItem(player_list[i].getName());
                ui->comboBox_2->addItem(player_list[i].getName());
                ui->comboBox_3->addItem(player_list[i].getName());
                ui->comboBox_4->addItem(player_list[i].getName());
                ui->comboBox_5->addItem(player_list[i].getName());
                ui->comboBox_6->addItem(player_list[i].getName());
                ui->comboBox_7->addItem(player_list[i].getName());
                ui->comboBox_8->addItem(player_list[i].getName());
                ui->comboBox_9->addItem(player_list[i].getName());
                ui->comboBox_10->addItem(player_list[i].getName());
                ui->comboBox_11->addItem(player_list[i].getName());
                ui->comboBox_12->addItem(player_list[i].getName());
                ui->comboBox_13->addItem(player_list[i].getName());
            }
        }
    }
}

void MainWindow::on_createTEAMS_clicked()
{
    if(G_PL>=1){
        team_list.push_back(team(G_TM));
        team_list[G_TM].setName(ui->teamName->text());
        team_list[G_TM].setAName(ui->alternateName->text());
        {
            int temp=ui->comboBox->currentIndex();
            team_list[G_TM].setPlayer(temp,0);
        }
        {
            int temp=ui->comboBox_2->currentIndex();
            team_list[G_TM].setPlayer(temp,1);
        }
        {
            int temp=ui->comboBox_3->currentIndex();
            team_list[G_TM].setPlayer(temp,2);
        }
        {
            int temp=ui->comboBox_4->currentIndex();
            team_list[G_TM].setPlayer(temp,3);
        }
        {
            int temp=ui->comboBox_5->currentIndex();
            team_list[G_TM].setPlayer(temp,4);
        }
        {
            int temp=ui->comboBox_6->currentIndex();
            team_list[G_TM].setPlayer(temp,5);
        }
        {
            int temp=ui->comboBox_7->currentIndex();
            team_list[G_TM].setPlayer(temp,6);
        }
        {
            int temp=ui->comboBox_8->currentIndex();
            team_list[G_TM].setPlayer(temp,7);
        }
        {
            int temp=ui->comboBox_9->currentIndex();
            team_list[G_TM].setPlayer(temp,8);
        }
        {
            int temp=ui->comboBox_10->currentIndex();
            team_list[G_TM].setPlayer(temp,9);
        }
        {
            int temp=ui->comboBox_11->currentIndex();
            team_list[G_TM].setPlayer(temp,10);
        }
        {
            int temp=ui->comboBox_12->currentIndex();
            team_list[G_TM].setPlayer(temp,11);
        }
        {
            int temp=ui->comboBox_13->currentIndex();
            team_list[G_TM].setPlayer(temp,12);
        }
        QMessageBox qBox2;
        qBox2.setText("Team created successfully");
        qBox2.setInformativeText("Your team "+team_list[G_TM].getName()+" ("+team_list[G_TM].getAName()+") was created successfully");
        //qDebug()<<"player 1: "<<player_list[team_list[G_TM].getPlayer(0)].getName()<<endl;
        qBox2.exec();
        ui->team_1->addItem(team_list[G_TM].getName());
        ui->team_2->addItem(team_list[G_TM].getName());
        G_TM++;
    }
    else{
        QMessageBox qBox2;
        qBox2.setText("Not enough players");
        qBox2.setInformativeText("You need at least 1 player to create a team");
        qBox2.exec();
    }


}

void MainWindow::on_Match3_clicked()
{
    ui->tabWidget->setCurrentIndex(4);
}

void MainWindow::on_setUpMatch_clicked()
{
    setMat=1;
    if(G_TM>=1){
        if(ui->toss->currentIndex()==0){
            ui->TEAM_2->setText(team_list[ui->team_1->currentIndex()].getAName());
            T1=ui->team_1->currentIndex();
            T2=ui->team_2->currentIndex();
        }
        else{
            ui->TEAM_2->setText(team_list[ui->team_2->currentIndex()].getAName());
            T1=ui->team_2->currentIndex();
            T2=ui->team_1->currentIndex();
        }

        ui->tabWidget->setCurrentIndex(1);
    }
    else{
        QMessageBox qBox2;
        qBox2.setText("Please create a team first");
        qBox2.setInformativeText("You need at least 1 team to set up a match");
        qBox2.exec();
    }
}
