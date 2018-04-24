#include "qtlinking.h"
#include "ui_qtlinking.h"
#include "ball.h"
#include <QMessageBox>
#include <iostream>
#include <vector>

using namespace std;
vector<Ball>obj;


int G_R=0;
int GLOBAL_WICKET=0;
int G_W=0;
int GLOBAL_OVERS=0;
int GLOBAL_BALLS=0;
int G_L=0;
int G_E=0;
int PGB=0;
int G_C=0;
int Prev=0;
qtlinking::qtlinking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qtlinking)
{
    ui->setupUi(this);
    //connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

qtlinking::~qtlinking()
{
    delete ui;
}

void qtlinking::on_LWide_clicked()
{
    ui->R0->setEnabled(true);
    ui->R1->setEnabled(true);
    ui->R2->setEnabled(true);
    ui->R3->setEnabled(true);
    ui->R4->setEnabled(true);
    ui->R5->setEnabled(true);
    ui->EBye->setEnabled(true);
    ui->WRunout->setEnabled(true);
    ui->WStumped->setEnabled(true);
    ui->WHitwicket->setEnabled(true);
    if(ui->WBowled->isChecked()){
        ui->WBowled->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WBowled->setDisabled(true);
    if(ui->WCatch->isChecked()){
        ui->WCatch->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WCatch->setDisabled(true);
    if(ui->WLbw->isChecked()){
        ui->WLbw->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WLbw->setDisabled(true);
    if(ui->R6->isChecked()){
        ui->R6->setChecked(false);
        ui->R0->setChecked(true);
    }
    ui->R6->setDisabled(true);
    if(ui->ELegbye->isChecked()){
        ui->ELegbye->setChecked(false);
        ui->EDefault->setChecked(true);
    }
    ui->ELegbye->setDisabled(true);
}

void qtlinking::on_LNo_clicked()
{
    ui->R0->setEnabled(true);
    ui->R1->setEnabled(true);
    ui->R2->setEnabled(true);
    ui->R3->setEnabled(true);
    ui->R4->setEnabled(true);
    ui->R5->setEnabled(true);
    ui->R6->setEnabled(true);
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
    ui->R6->setEnabled(true);
    ui->WRunout->setEnabled(true);
    if(ui->WBowled->isChecked()){
        ui->WBowled->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WBowled->setDisabled(true);

    if(ui->WCatch->isChecked()){
        ui->WCatch->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WCatch->setDisabled(true);

    if(ui->WLbw->isChecked()){
        ui->WLbw->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WLbw->setDisabled(true);

    if(ui->WStumped->isChecked()){
        ui->WStumped->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WStumped->setDisabled(true);

    if(ui->WHitwicket->isChecked()){
        ui->WHitwicket->setChecked(false);
        ui->WNotout->setChecked(true);
    }
    ui->WHitwicket->setDisabled(true);
}

void qtlinking::on_LLegal_clicked()
{
    ui->ELegbye->setEnabled(true);
    ui->R6->setEnabled(true);
    ui->WBowled->setEnabled(true);
    ui->WCatch->setEnabled(true);
    ui->WLbw->setEnabled(true);
    ui->WStumped->setEnabled(true);
    ui->WHitwicket->setEnabled(true);
    ui->WRunout->setEnabled(true);
}

void qtlinking::on_WBowled_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setDisabled(true);
        ui->R2->setDisabled(true);
        ui->R3->setDisabled(true);
        ui->R4->setDisabled(true);
        ui->R5->setDisabled(true);
        ui->R6->setDisabled(true);
        ui->EDefault->setChecked(true);
        ui->EBye->setDisabled(true);
        ui->ELegbye->setDisabled(true);
    }
}

void qtlinking::on_WCatch_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setDisabled(true);
        ui->R2->setDisabled(true);
        ui->R3->setDisabled(true);
        ui->R4->setDisabled(true);
        ui->R5->setDisabled(true);
        ui->R6->setDisabled(true);
        ui->EDefault->setChecked(true);
        ui->EBye->setDisabled(true);
        ui->ELegbye->setDisabled(true);
    }
}

void qtlinking::on_WLbw_clicked()
{
    if(ui->LLegal->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setDisabled(true);
        ui->R2->setDisabled(true);
        ui->R3->setDisabled(true);
        ui->R4->setDisabled(true);
        ui->R5->setDisabled(true);
        ui->R6->setDisabled(true);
        ui->EDefault->setChecked(true);
        ui->EBye->setDisabled(true);
        ui->ELegbye->setDisabled(true);
    }
}

void qtlinking::on_WStumped_clicked()
{
    if(ui->LLegal->isChecked()||ui->LWide->isChecked()){
        ui->R0->setChecked(true);
        ui->R1->setDisabled(true);
        ui->R2->setDisabled(true);
        ui->R3->setDisabled(true);
        ui->R4->setDisabled(true);
        ui->R5->setDisabled(true);
        ui->R6->setDisabled(true);
        ui->EDefault->setChecked(true);
        ui->EBye->setDisabled(true);
        ui->ELegbye->setDisabled(true);
    }
}

void qtlinking::on_WHitwicket_clicked()
{
    ui->R0->setChecked(true);
    ui->R1->setDisabled(true);
    ui->R2->setDisabled(true);
    ui->R3->setDisabled(true);
    ui->R4->setDisabled(true);
    ui->R5->setDisabled(true);
    ui->R6->setDisabled(true);
    ui->EDefault->setChecked(true);
    ui->EBye->setDisabled(true);
    ui->ELegbye->setDisabled(true);
}

void qtlinking::on_WRunout_clicked()
{
    ui->R0->setEnabled(true);
    ui->R1->setEnabled(true);
    ui->R2->setEnabled(true);
    ui->R3->setEnabled(true);
    ui->R4->setEnabled(true);
    ui->R5->setDisabled(true);
    ui->R6->setDisabled(true);
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_WNotout_clicked()
{
    ui->R0->setEnabled(true);
    ui->R1->setEnabled(true);
    ui->R2->setEnabled(true);
    ui->R3->setEnabled(true);
    ui->R4->setEnabled(true);
    ui->R5->setEnabled(true);
    ui->R6->setEnabled(true);
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_R6_clicked()
{
    ui->EDefault->setChecked(true);
    ui->EBye->setDisabled(true);
    ui->ELegbye->setDisabled(true);
}


void qtlinking::on_R0_clicked()
{
    ui->EDefault->setChecked(true);
    ui->EBye->setDisabled(true);
    ui->ELegbye->setDisabled(true);
}

void qtlinking::on_R1_clicked()
{
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_R2_clicked()
{
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_R3_clicked()
{
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_R4_clicked()
{
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_R5_clicked()
{
    ui->EBye->setEnabled(true);
    ui->ELegbye->setEnabled(true);
}

void qtlinking::on_Next_clicked()
{

    if(GLOBAL_BALLS>=1)
        ui->Previous->setEnabled(true);


    //run
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

    //legal
    if(ui->LLegal->isChecked()){
        G_L=0;
    }
    else if(ui->LWide->isChecked()){
        G_L=1;
    }
    else if(ui->LNo->isChecked()){
        G_L=2;
    }

    //wicket
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

    //extra
    if(ui->EDefault->isChecked()){
        G_E=0;
    }
    else if(ui->EBye->isChecked()){
        G_E=1;
    }
    else if(ui->ELegbye->isChecked()){
        G_E=2;
    }


    if(Prev==0){
        if(G_L!=0){
            G_C++;
        }
        obj.push_back(Ball(GLOBAL_BALLS,G_C));
        PGB=GLOBAL_BALLS;
        GLOBAL_BALLS++;
    }
    else if(Prev==1){
        if(obj[PGB].getLegal()==0&&G_L!=0){
            G_C++;
            obj[PGB].setBall(GLOBAL_BALLS,G_C);
        }
        else if(obj[PGB].getLegal()>0&&G_L==0){
            G_C--;
            obj[PGB].setBall(GLOBAL_BALLS,G_C);
        }
    }


    obj[PGB].setValue(G_R,G_W,G_L,G_E);



    if(obj[PGB].getLegal()>0){
        G_L=1;
    }
    else
        G_L=0;


    QString s = ui->Runs->text();
    bool ok;
    int RR=s.toInt(&ok);
    ui->Runs->setNum(RR+obj[PGB].getRun()+G_L);

    if(obj[PGB].getBall()==5){
        ui->Overs->setNum(obj[PGB].getOver()+1);
        ui->Balls->setNum(0);
    }
    else{
        ui->Overs->setNum(obj[PGB].getOver());
        ui->Balls->setNum(obj[PGB].getBall()+1);
    }


    //this over
    int i=PGB;
    ui->this_over->setText("");
    while(1){
        QString ll="";
        if(obj[i].getLegal()==1)
            ll="wd";
        else if(obj[i].getLegal()==2)
            ll="no";
        QString ee="";
        if(obj[i].getExtra()==1)
            ee="b";
        else if(obj[i].getExtra()==2)
            ee="lb";


        QString ww="";
        if(obj[i].getWicket()>0){
            ww="Wkt";
            if(obj[i].getRun()==0&&obj[i].getLegal()==0)
                ui->this_over->setText(ui->this_over->text()+ww+"  ");
            else
                ui->this_over->setText(ui->this_over->text()+QVariant(obj[i].getRun()).toString()+ee+ll+"+"+ww+"  ");

        }
        else{
            ll=ll+"  ";
            ui->this_over->setText(ui->this_over->text()+QVariant(obj[i].getRun()).toString()+ee+ll);
        }
        /*
        QString b=ui->Balls->text();
        int B=b.toInt(&ok);
        QString o=ui->Overs->text();
        int O=o.toInt(&ok);
        if(B==0&&O!=0){
            ui->this_over->setText(" | "+ ui->this_over->text());
        }
        */
        if(obj[i].getBall()==0)
            break;
        else
            i--;
    }

    /*
    int i=PGB;
    ui->this_over->setText("");
    while(1){
        QString ll="";
        QString ww="";
        QString ee="";
        QString rr="";
        if(rr[0]!='0')
            rr=QVariant(obj[i].getRun()).toString();

        //ll def
        if(obj[i].getLegal()==1)
            ll="wd";
        else if(obj[i].getLegal()==2)
            ll="no";

        //ww def
        if(obj[i].getWicket()>0){
            ww="Wkt";

        //ee def
        if(obj[i].getExtra()==1)
            ee="b";
        else if(obj[i].getExtra()==2)
            ee="lb";

        ui->this_over->setText("");
    }
    */
    Prev=0;
}



void qtlinking::on_Previous_clicked()
{
    //int Rp,Lp,Wp,Ep;
    Prev=1;
    ui->Previous->setDisabled(true);
    switch(obj[PGB].getRun()){
        case(0):
        ui->R0->setChecked(true);
        break;
        case(1):
        ui->R1->setChecked(true);
        break;
        case(2):
        ui->R2->setChecked(true);
        break;
        case(3):
        ui->R3->setChecked(true);
        break;
        case(4):
        ui->R4->setChecked(true);
            break;
        case(5):
        ui->R5->setChecked(true);
        break;
        case(6):
        ui->R6->setChecked(true);
        break;
    }
    switch(obj[PGB].getWicket()){
        case(0):
        ui->WNotout->setChecked(true);
        break;
        case(1):
        ui->WBowled->setChecked(true);
        break;
        case(2):
        ui->WCatch->setChecked(true);
        break;
        case(3):
        ui->WLbw->setChecked(true);
        break;
        case(4):
        ui->WStumped->setChecked(true);
            break;
        case(5):
        ui->WRunout->setChecked(true);
        break;
        case(6):
        ui->WHitwicket->setChecked(true);
        break;
    }
    switch(obj[PGB].getLegal()){
        case(0):
        ui->LLegal->setChecked(true);
        break;
        case(1):
        ui->LWide->setChecked(true);
        break;
        case(2):
        ui->LNo->setChecked(true);
        break;
    }
    switch(obj[PGB].getExtra()){
        case(0):
        ui->EDefault->setChecked(true);
        break;
        case(1):
        ui->EBye->setChecked(true);
        break;
        case(2):
        ui->ELegbye->setChecked(true);
        break;
    }

    if(obj[PGB].getLegal()>0){
        G_L=1;
    }
    else
        G_L=0;

    QString s = ui->Runs->text();
    bool ok;
    int RR=s.toInt(&ok);
    ui->Runs->setNum(RR-obj[PGB].getRun()-G_L);


    if(obj[PGB-1].getBall()==5){
        ui->Overs->setNum(obj[PGB-1].getOver()+1);
        ui->Balls->setNum(0);
    }
    else{
        ui->Overs->setNum(obj[PGB-1].getOver());
        ui->Balls->setNum(obj[PGB-1].getBall()+1);
    }



}

void qtlinking::on_Reset_clicked()
{
    ui->LLegal->setEnabled(true);
    ui->LLegal->setChecked(true);
    ui->R0->setEnabled(true);
    ui->R0->setChecked(true);
    ui->WNotout->setEnabled(true);
    ui->WNotout->setChecked(true);
    ui->EDefault->setEnabled(true);
    ui->EDefault->setChecked(true);
}
