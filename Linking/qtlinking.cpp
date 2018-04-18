#include "qtlinking.h"
#include "ui_qtlinking.h"
#include "ball.h"
#include <QMessageBox>
#include <iostream>

int GLOBAL_RUN=0;
int GLOBAL_WICKET=0;
int GLOBAL_OVERS=0;
int GLOBAL_BALLS=0;
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
    if(ui->LNo->isChecked()){
        GLOBAL_RUN++;
    }
    else if(ui->LWide->isChecked()){
        GLOBAL_RUN++;
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
        GLOBAL_RUN++;
    }
    else if(ui->R2->isChecked()){
        GLOBAL_RUN+=2;
    }
    else if(ui->R3->isChecked()){
        GLOBAL_RUN+=3;
    }
    else if(ui->R4->isChecked()){
        GLOBAL_RUN+=4;
    }
    else if(ui->R5->isChecked()){
        GLOBAL_RUN+=5;
    }
    else if(ui->R6->isChecked()){
        GLOBAL_RUN+=6;
    }
    //std::string s="Team 1: "+GLOBAL_RUN+"/"+GLOBAL_WICKET+"    "+GLOBAL_OVERS+"."+GLOBAL_BALLS;
    ui->Runs->setNum(GLOBAL_RUN);
    ui->Wickets->setNum(GLOBAL_WICKET);
    ui->Overs->setNum(GLOBAL_OVERS);
    ui->Balls->setNum(GLOBAL_BALLS);

}
