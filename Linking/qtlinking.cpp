#include "qtlinking.h"
#include "ui_qtlinking.h"
#include "ball.h"
#include <QMessageBox>
#include <iostream>
#include <vector>
#include<string>

using namespace std;
vector<Ball>obj;


int G_R=0;
int GLOBAL_WICKET=0;
int G_W=0;
int G_C=0;
int GLOBAL_OVERS=0;
int GLOBAL_BALLS=0;
int G_L=0;
int G_E=0;
int PGB=0;
QTLINKING::QTLINKING(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QTLINKING)
{
    ui->setupUi(this);
    //connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

QTLINKING::~QTLINKING()
{
    delete ui;
}

void QTLINKING::on_LWide_clicked()
{
    ui->R0->setCheckable(true);
    ui->R1->setCheckable(true);
    ui->R2->setCheckable(true);
    ui->R3->setCheckable(true);
    ui->R4->setCheckable(true);
    ui->R5->setCheckable(true);
    ui->EBye->setCheckable(true);
    ui->WRunout->setCheckable(true);
    ui->WStumped->setCheckable(true);
    ui->WHitwicket->setCheckable(true);
    if(ui->WBowled->isChecked()){
        ui->WBowled->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WBowled->setCheckable(false);
    if(ui->WCatch->isChecked()){
        ui->WCatch->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WCatch->setCheckable(false);
    if(ui->WLbw->isChecked()){
        ui->WLbw->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WLbw->setCheckable(false);
    if(ui->R6->isChecked()){
        ui->R6->setChecked(false);
        ui->R0->setChecked(true);
    }
    ui->R6->setCheckable(false);
    if(ui->ELegbye->isChecked()){
        ui->ELegbye->setChecked(false);
        ui->EDefault->setChecked(true);
    }
    ui->ELegbye->setCheckable(false);
}

void QTLINKING::on_LNo_clicked()
{
    ui->R0->setCheckable(true);
    ui->R1->setCheckable(true);
    ui->R2->setCheckable(true);
    ui->R3->setCheckable(true);
    ui->R4->setCheckable(true);
    ui->R5->setCheckable(true);
    ui->R6->setCheckable(true);
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
    ui->R6->setCheckable(true);
    ui->WRunout->setCheckable(true);
    if(ui->WBowled->isChecked()){
        ui->WBowled->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WBowled->setCheckable(false);

    if(ui->WCatch->isChecked()){
        ui->WCatch->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WCatch->setCheckable(false);

    if(ui->WLbw->isChecked()){
        ui->WLbw->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WLbw->setCheckable(false);

    if(ui->WStumped->isChecked()){
        ui->WStumped->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WStumped->setCheckable(false);

    if(ui->WHitwicket->isChecked()){
        ui->WHitwicket->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WHitwicket->setCheckable(false);
}

void QTLINKING::on_LLegal_clicked()
{
    ui->ELegbye->setCheckable(true);
    ui->R6->setCheckable(true);
    ui->WBowled->setCheckable(true);
    ui->WCatch->setCheckable(true);
    ui->WLbw->setCheckable(true);
    ui->WStumped->setCheckable(true);
    ui->WHitwicket->setCheckable(true);
    ui->WRunout->setCheckable(true);
}

void QTLINKING::on_WBowled_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setCheckable(false);
        ui->R2->setCheckable(false);
        ui->R3->setCheckable(false);
        ui->R4->setCheckable(false);
        ui->R5->setCheckable(false);
        ui->R6->setCheckable(false);
        ui->EDefault->setChecked(true);
        ui->EBye->setCheckable(false);
        ui->ELegbye->setCheckable(false);
    }
}

void QTLINKING::on_WCatch_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setCheckable(false);
        ui->R2->setCheckable(false);
        ui->R3->setCheckable(false);
        ui->R4->setCheckable(false);
        ui->R5->setCheckable(false);
        ui->R6->setCheckable(false);
        ui->EDefault->setChecked(true);
        ui->EBye->setCheckable(false);
        ui->ELegbye->setCheckable(false);
    }
}

void QTLINKING::on_WLbw_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setCheckable(false);
        ui->R2->setCheckable(false);
        ui->R3->setCheckable(false);
        ui->R4->setCheckable(false);
        ui->R5->setCheckable(false);
        ui->R6->setCheckable(false);
        ui->EDefault->setChecked(true);
        ui->EBye->setCheckable(false);
        ui->ELegbye->setCheckable(false);
    }
}

void QTLINKING::on_WStumped_clicked()
{
    if(ui->LLegal->isChecked()||ui->LWide->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setCheckable(false);
        ui->R2->setCheckable(false);
        ui->R3->setCheckable(false);
        ui->R4->setCheckable(false);
        ui->R5->setCheckable(false);
        ui->R6->setCheckable(false);
        ui->EDefault->setChecked(true);
        ui->EBye->setCheckable(false);
        ui->ELegbye->setCheckable(false);
    }
}

void QTLINKING::on_WHitwicket_clicked()
{
    ui->R0->setChecked(true);
    ui->R1->setCheckable(false);
    ui->R2->setCheckable(false);
    ui->R3->setCheckable(false);
    ui->R4->setCheckable(false);
    ui->R5->setCheckable(false);
    ui->R6->setCheckable(false);
    ui->EDefault->setChecked(true);
    ui->EBye->setCheckable(false);
    ui->ELegbye->setCheckable(false);
}

void QTLINKING::on_WRunout_clicked()
{
    ui->R0->setCheckable(true);
    ui->R1->setCheckable(true);
    ui->R2->setCheckable(true);
    ui->R3->setCheckable(true);
    ui->R4->setCheckable(true);
    ui->R5->setCheckable(false);
    ui->R6->setCheckable(false);
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_WNotout_clicked()
{
    ui->R0->setCheckable(true);
    ui->R1->setCheckable(true);
    ui->R2->setCheckable(true);
    ui->R3->setCheckable(true);
    ui->R4->setCheckable(true);
    ui->R5->setCheckable(true);
    ui->R6->setCheckable(true);
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_R6_clicked()
{
    ui->EDefault->setChecked(true);
    ui->EBye->setCheckable(false);
    ui->ELegbye->setCheckable(false);
}


void QTLINKING::on_R0_clicked()
{
    ui->EDefault->setChecked(true);
    ui->EBye->setCheckable(false);
    ui->ELegbye->setCheckable(false);
}

void QTLINKING::on_R1_clicked()
{
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_R2_clicked()
{
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_R3_clicked()
{
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_R4_clicked()
{
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_R5_clicked()
{
    ui->EBye->setCheckable(true);
    ui->ELegbye->setCheckable(true);
}

void QTLINKING::on_Next_clicked()
{
    //run
    {
    if(ui->R0->isChecked()){
        G_R=0;
    }
    else if(ui->R1->isChecked()){
        G_R=1;
    }
    else if(ui->R2->isChecked()){
        G_R=2;
    }
    else if(ui->R3->isChecked()){
        G_R=3;
    }
    else if(ui->R4->isChecked()){
        G_R=4;
    }
    else if(ui->R5->isChecked()){
        G_R=5;
    }
    else if(ui->R6->isChecked()){
        G_R=6;
    }
    }
    //legal
    {
    if(ui->LLegal->isChecked()){
        G_L=0;
    }
    else if(ui->LNo->isChecked()){
        G_L=1;
    }
    else if(ui->LWide->isChecked()){
        G_L=2;
    }
    }
    //wicket
    {
    if(ui->WNotout->isChecked()){
        G_W=0;
    }
    else if(ui->WBowled->isChecked()){
        G_W=1;
    }
    else if(ui->WCatch->isChecked()){
        G_W=2;
    }
    else if(ui->WLbw->isChecked()){
        G_W=3;
    }
    else if(ui->WStumped->isChecked()){
        G_W=4;
    }
    else if(ui->WRunout->isChecked()){
        G_W=5;
    }
    else if(ui->WHitwicket->isChecked()){
        G_W=6;
    }
    }
    //extra
    {
    if(ui->EDefault->isChecked()){
        G_E=0;
    }
    else if(ui->EBye->isChecked()){
        G_E=1;
    }
    else if(ui->ELegbye->isChecked()){
        G_E=2;
    }

    }



    /*
    if(ui->LNo->isChecked()){
        G_R++;
    }
    else if(ui->LWide->isChecked()){
        G_R++;
    }
    else if(ui->LLegal->isChecked()){
        GLOBAL_BALLS++;
        if(GLOBAL_BALLS==6){
            GLOBAL_BALLS=0;
            GLOBAL_OVERS++;
        }
    }
    if(!ui->WNotout->isChecked()){
        GLOBAL_WICKET++;
    }
    if(ui->R1->isChecked()){
        G_R++;
    }
    else if(ui->R2->isChecked()){
        G_R+=2;
    }
    else if(ui->R3->isChecked()){
        G_R+=3;
    }
    else if(ui->R4->isChecked()){
        G_R+=4;
    }
    else if(ui->R5->isChecked()){
        G_R+=5;
    }
    else if(ui->R6->isChecked()){
        G_R+=6;
    }
    //std::string s="Team 1: "+G_R+"/"+GLOBAL_WICKET+"    "+GLOBAL_OVERS+"."+GLOBAL_BALLS;
    ui->Runs->setNum(G_R);
    ui->Wickets->setNum(GLOBAL_WICKET);
    ui->Overs->setNum(GLOBAL_OVERS);
    ui->Balls->setNum(GLOBAL_BALLS);

    */


    if(G_L>0)G_C++;
    obj.push_back(Ball(GLOBAL_BALLS,G_C));
    obj[GLOBAL_BALLS].setValue(G_R,G_W,G_L,G_E);

    PGB=GLOBAL_BALLS;
    GLOBAL_BALLS++;

    QString s=ui->Runs->text();


    bool ok;
    int ER=0;
    if(obj[PGB].getLegal()>0){
        ER=1;
    }
    int RR= s.toInt(&ok)+obj[PGB].getRun()+ER;
    ui->Runs->setNum(RR);
    cout<<obj[PGB].getBallNo()<<" "<<obj[PGB].getOverNo()<<endl;

    QString w=ui->Wickets->text();

    int WW=w.toInt(&ok);
    if(obj[PGB].getWicket())
        WW++;
    ui->Wickets->setNum(WW);

    ui->Overs->setNum(obj[PGB].getOverNo());
    ui->Balls->setNum(obj[PGB].getBallNo());
}


