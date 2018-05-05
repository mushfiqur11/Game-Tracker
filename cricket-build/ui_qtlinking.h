/********************************************************************************
** Form generated from reading UI file 'qtlinking.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLINKING_H
#define UI_QTLINKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtlinking
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *TextBox;
    QHBoxLayout *horizontalLayout;
    QLabel *TEAM;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Runs;
    QLabel *label;
    QLabel *Wickets;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Overs;
    QLabel *label_2;
    QLabel *Balls;
    QLabel *label_3;
    QGroupBox *Legal;
    QVBoxLayout *verticalLayout_4;
    QPushButton *LLegal;
    QPushButton *LWide;
    QPushButton *LNo;
    QSpacerItem *horizontalSpacer;
    QGroupBox *Wicket;
    QVBoxLayout *verticalLayout_3;
    QPushButton *WNotout;
    QPushButton *WBowled;
    QPushButton *WCatch;
    QPushButton *WLbw;
    QPushButton *WStumped;
    QPushButton *WRunout;
    QPushButton *WHitwicket;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *Run;
    QVBoxLayout *verticalLayout;
    QPushButton *R0;
    QPushButton *R1;
    QPushButton *R2;
    QPushButton *R3;
    QPushButton *R4;
    QPushButton *R5;
    QPushButton *R6;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *Extra;
    QVBoxLayout *verticalLayout_2;
    QPushButton *EDefault;
    QPushButton *ELegbye;
    QPushButton *EBye;
    QGroupBox *Buttons;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Next;
    QPushButton *Reset;
    QPushButton *Previous;
    QLabel *this_over;
    QLabel *over_text;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qtlinking)
    {
        if (qtlinking->objectName().isEmpty())
            qtlinking->setObjectName(QStringLiteral("qtlinking"));
        qtlinking->resize(490, 533);
        qtlinking->setStyleSheet(QLatin1String("QMainWindow{\n"
"	background-color: rgb(48, 48, 48);\n"
"	\n"
"}\n"
"QLabel{\n"
"	font: 75 12pt \"MS Shell Dlg 2\";\n"
"	color: white;\n"
"	\n"
"}\n"
"QGroupBox{\n"
"	font: 75 8pt \"MS Shell Dlg 2\";\n"
"	color: white;\n"
"	border-radius: 10px;\n"
"	border: 2px solid rgb(220, 220, 220);\n"
"\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(qtlinking);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        TextBox = new QGroupBox(centralwidget);
        TextBox->setObjectName(QStringLiteral("TextBox"));
        TextBox->setMinimumSize(QSize(470, 60));
        horizontalLayout = new QHBoxLayout(TextBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        TEAM = new QLabel(TextBox);
        TEAM->setObjectName(QStringLiteral("TEAM"));

        horizontalLayout->addWidget(TEAM);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        Runs = new QLabel(TextBox);
        Runs->setObjectName(QStringLiteral("Runs"));

        horizontalLayout->addWidget(Runs);

        label = new QLabel(TextBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Wickets = new QLabel(TextBox);
        Wickets->setObjectName(QStringLiteral("Wickets"));

        horizontalLayout->addWidget(Wickets);

        horizontalSpacer_5 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        Overs = new QLabel(TextBox);
        Overs->setObjectName(QStringLiteral("Overs"));

        horizontalLayout->addWidget(Overs);

        label_2 = new QLabel(TextBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        Balls = new QLabel(TextBox);
        Balls->setObjectName(QStringLiteral("Balls"));

        horizontalLayout->addWidget(Balls);

        label_3 = new QLabel(TextBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        TEAM->raise();
        Runs->raise();
        Wickets->raise();
        Overs->raise();
        Balls->raise();
        label->raise();
        label_2->raise();
        label_3->raise();

        gridLayout->addWidget(TextBox, 0, 0, 1, 7);

        Legal = new QGroupBox(centralwidget);
        Legal->setObjectName(QStringLiteral("Legal"));
        Legal->setMinimumSize(QSize(95, 258));
        verticalLayout_4 = new QVBoxLayout(Legal);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        LLegal = new QPushButton(Legal);
        LLegal->setObjectName(QStringLiteral("LLegal"));
        LLegal->setMinimumSize(QSize(75, 23));
        LLegal->setAutoFillBackground(true);
        LLegal->setCheckable(true);
        LLegal->setChecked(true);
        LLegal->setAutoExclusive(true);
        LLegal->setAutoDefault(true);

        verticalLayout_4->addWidget(LLegal);

        LWide = new QPushButton(Legal);
        LWide->setObjectName(QStringLiteral("LWide"));
        LWide->setMinimumSize(QSize(75, 23));
        LWide->setCheckable(true);
        LWide->setAutoExclusive(true);

        verticalLayout_4->addWidget(LWide);

        LNo = new QPushButton(Legal);
        LNo->setObjectName(QStringLiteral("LNo"));
        LNo->setCheckable(true);
        LNo->setAutoExclusive(true);

        verticalLayout_4->addWidget(LNo);


        gridLayout->addWidget(Legal, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(15, 255, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        Wicket = new QGroupBox(centralwidget);
        Wicket->setObjectName(QStringLiteral("Wicket"));
        Wicket->setMinimumSize(QSize(95, 258));
        verticalLayout_3 = new QVBoxLayout(Wicket);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        WNotout = new QPushButton(Wicket);
        WNotout->setObjectName(QStringLiteral("WNotout"));
        WNotout->setMinimumSize(QSize(75, 23));
        WNotout->setAutoFillBackground(true);
        WNotout->setCheckable(true);
        WNotout->setChecked(true);
        WNotout->setAutoExclusive(true);
        WNotout->setAutoDefault(true);

        verticalLayout_3->addWidget(WNotout);

        WBowled = new QPushButton(Wicket);
        WBowled->setObjectName(QStringLiteral("WBowled"));
        WBowled->setMinimumSize(QSize(75, 23));
        WBowled->setAutoFillBackground(true);
        WBowled->setCheckable(true);
        WBowled->setAutoExclusive(true);

        verticalLayout_3->addWidget(WBowled);

        WCatch = new QPushButton(Wicket);
        WCatch->setObjectName(QStringLiteral("WCatch"));
        WCatch->setMinimumSize(QSize(75, 23));
        WCatch->setAutoFillBackground(true);
        WCatch->setCheckable(true);
        WCatch->setAutoExclusive(true);
        WCatch->setAutoDefault(true);

        verticalLayout_3->addWidget(WCatch);

        WLbw = new QPushButton(Wicket);
        WLbw->setObjectName(QStringLiteral("WLbw"));
        WLbw->setMinimumSize(QSize(75, 23));
        WLbw->setAutoFillBackground(true);
        WLbw->setCheckable(true);
        WLbw->setAutoExclusive(true);
        WLbw->setAutoDefault(true);

        verticalLayout_3->addWidget(WLbw);

        WStumped = new QPushButton(Wicket);
        WStumped->setObjectName(QStringLiteral("WStumped"));
        WStumped->setMinimumSize(QSize(75, 23));
        WStumped->setAutoFillBackground(true);
        WStumped->setCheckable(true);
        WStumped->setAutoExclusive(true);

        verticalLayout_3->addWidget(WStumped);

        WRunout = new QPushButton(Wicket);
        WRunout->setObjectName(QStringLiteral("WRunout"));
        WRunout->setMinimumSize(QSize(75, 23));
        WRunout->setAutoFillBackground(true);
        WRunout->setCheckable(true);
        WRunout->setAutoExclusive(true);

        verticalLayout_3->addWidget(WRunout);

        WHitwicket = new QPushButton(Wicket);
        WHitwicket->setObjectName(QStringLiteral("WHitwicket"));
        WHitwicket->setAutoFillBackground(true);
        WHitwicket->setCheckable(true);
        WHitwicket->setChecked(false);
        WHitwicket->setAutoExclusive(true);

        verticalLayout_3->addWidget(WHitwicket);


        gridLayout->addWidget(Wicket, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(15, 255, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        Run = new QGroupBox(centralwidget);
        Run->setObjectName(QStringLiteral("Run"));
        Run->setMinimumSize(QSize(95, 258));
        verticalLayout = new QVBoxLayout(Run);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        R0 = new QPushButton(Run);
        R0->setObjectName(QStringLiteral("R0"));
        R0->setMinimumSize(QSize(75, 23));
        R0->setAutoFillBackground(true);
        R0->setCheckable(true);
        R0->setChecked(true);
        R0->setAutoExclusive(true);
        R0->setAutoDefault(true);

        verticalLayout->addWidget(R0);

        R1 = new QPushButton(Run);
        R1->setObjectName(QStringLiteral("R1"));
        R1->setMinimumSize(QSize(75, 23));
        R1->setAutoFillBackground(true);
        R1->setCheckable(true);
        R1->setAutoExclusive(true);
        R1->setAutoDefault(true);

        verticalLayout->addWidget(R1);

        R2 = new QPushButton(Run);
        R2->setObjectName(QStringLiteral("R2"));
        R2->setMinimumSize(QSize(75, 23));
        R2->setAutoFillBackground(true);
        R2->setCheckable(true);
        R2->setAutoExclusive(true);
        R2->setAutoDefault(true);

        verticalLayout->addWidget(R2);

        R3 = new QPushButton(Run);
        R3->setObjectName(QStringLiteral("R3"));
        R3->setMinimumSize(QSize(75, 23));
        R3->setAutoFillBackground(true);
        R3->setCheckable(true);
        R3->setAutoExclusive(true);
        R3->setAutoDefault(true);

        verticalLayout->addWidget(R3);

        R4 = new QPushButton(Run);
        R4->setObjectName(QStringLiteral("R4"));
        R4->setMinimumSize(QSize(75, 23));
        R4->setAutoFillBackground(true);
        R4->setCheckable(true);
        R4->setAutoExclusive(true);
        R4->setAutoDefault(true);

        verticalLayout->addWidget(R4);

        R5 = new QPushButton(Run);
        R5->setObjectName(QStringLiteral("R5"));
        R5->setMinimumSize(QSize(75, 23));
        R5->setAutoFillBackground(true);
        R5->setCheckable(true);
        R5->setAutoExclusive(true);
        R5->setAutoDefault(true);

        verticalLayout->addWidget(R5);

        R6 = new QPushButton(Run);
        R6->setObjectName(QStringLiteral("R6"));
        R6->setAutoFillBackground(true);
        R6->setCheckable(true);
        R6->setAutoExclusive(true);
        R6->setAutoDefault(true);

        verticalLayout->addWidget(R6);


        gridLayout->addWidget(Run, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(15, 255, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        Extra = new QGroupBox(centralwidget);
        Extra->setObjectName(QStringLiteral("Extra"));
        Extra->setMinimumSize(QSize(95, 258));
        Extra->setStyleSheet(QLatin1String("QTLINKING{\n"
"background: black;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Extra);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        EDefault = new QPushButton(Extra);
        EDefault->setObjectName(QStringLiteral("EDefault"));
        EDefault->setMinimumSize(QSize(75, 23));
        EDefault->setAutoFillBackground(true);
        EDefault->setCheckable(true);
        EDefault->setChecked(true);
        EDefault->setAutoExclusive(true);
        EDefault->setAutoDefault(true);

        verticalLayout_2->addWidget(EDefault);

        ELegbye = new QPushButton(Extra);
        ELegbye->setObjectName(QStringLiteral("ELegbye"));
        ELegbye->setEnabled(false);
        ELegbye->setMinimumSize(QSize(75, 23));
        ELegbye->setAutoFillBackground(true);
        ELegbye->setCheckable(true);
        ELegbye->setAutoExclusive(true);
        ELegbye->setAutoDefault(true);

        verticalLayout_2->addWidget(ELegbye);

        EBye = new QPushButton(Extra);
        EBye->setObjectName(QStringLiteral("EBye"));
        EBye->setEnabled(false);
        EBye->setAutoFillBackground(true);
        EBye->setCheckable(true);
        EBye->setAutoExclusive(true);
        EBye->setAutoDefault(true);

        verticalLayout_2->addWidget(EBye);


        gridLayout->addWidget(Extra, 2, 6, 1, 1);

        Buttons = new QGroupBox(centralwidget);
        Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(Buttons);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Next = new QPushButton(Buttons);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setCheckable(false);

        verticalLayout_5->addWidget(Next);

        Reset = new QPushButton(Buttons);
        Reset->setObjectName(QStringLiteral("Reset"));

        verticalLayout_5->addWidget(Reset);

        Previous = new QPushButton(Buttons);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setEnabled(false);

        verticalLayout_5->addWidget(Previous);


        gridLayout->addWidget(Buttons, 3, 0, 1, 7);

        this_over = new QLabel(centralwidget);
        this_over->setObjectName(QStringLiteral("this_over"));
        this_over->setMaximumSize(QSize(472, 35));
        this_over->setStyleSheet(QLatin1String("QLabel{\n"
"	text-align: right;\n"
"}"));

        gridLayout->addWidget(this_over, 1, 1, 1, 6);

        over_text = new QLabel(centralwidget);
        over_text->setObjectName(QStringLiteral("over_text"));

        gridLayout->addWidget(over_text, 1, 0, 1, 1);

        qtlinking->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qtlinking);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 21));
        qtlinking->setMenuBar(menubar);
        statusbar = new QStatusBar(qtlinking);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        qtlinking->setStatusBar(statusbar);

        retranslateUi(qtlinking);

        Next->setDefault(true);


        QMetaObject::connectSlotsByName(qtlinking);
    } // setupUi

    void retranslateUi(QMainWindow *qtlinking)
    {
        qtlinking->setWindowTitle(QApplication::translate("qtlinking", "MainWindow", Q_NULLPTR));
        TextBox->setTitle(QString());
        TEAM->setText(QApplication::translate("qtlinking", "Team 1", Q_NULLPTR));
        Runs->setText(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        label->setText(QApplication::translate("qtlinking", "/", Q_NULLPTR));
        Wickets->setText(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        Overs->setText(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("qtlinking", ".", Q_NULLPTR));
        Balls->setText(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("qtlinking", "overs", Q_NULLPTR));
        Legal->setTitle(QApplication::translate("qtlinking", "Legal", Q_NULLPTR));
        LLegal->setText(QApplication::translate("qtlinking", "Legal", Q_NULLPTR));
        LWide->setText(QApplication::translate("qtlinking", "Wide", Q_NULLPTR));
        LWide->setShortcut(QApplication::translate("qtlinking", "W", Q_NULLPTR));
        LNo->setText(QApplication::translate("qtlinking", "No", Q_NULLPTR));
        LNo->setShortcut(QApplication::translate("qtlinking", "N", Q_NULLPTR));
        Wicket->setTitle(QApplication::translate("qtlinking", "Wicket", Q_NULLPTR));
        WNotout->setText(QApplication::translate("qtlinking", "Not out", Q_NULLPTR));
        WBowled->setText(QApplication::translate("qtlinking", "Bowled", Q_NULLPTR));
        WBowled->setShortcut(QApplication::translate("qtlinking", "W", Q_NULLPTR));
        WCatch->setText(QApplication::translate("qtlinking", "Catch", Q_NULLPTR));
        WLbw->setText(QApplication::translate("qtlinking", "LBW", Q_NULLPTR));
        WStumped->setText(QApplication::translate("qtlinking", "Stumped", Q_NULLPTR));
        WRunout->setText(QApplication::translate("qtlinking", "Run out", Q_NULLPTR));
        WHitwicket->setText(QApplication::translate("qtlinking", "Hit wicket", Q_NULLPTR));
        Run->setTitle(QApplication::translate("qtlinking", "Run", Q_NULLPTR));
        R0->setText(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        R0->setShortcut(QApplication::translate("qtlinking", "0", Q_NULLPTR));
        R1->setText(QApplication::translate("qtlinking", "1", Q_NULLPTR));
        R1->setShortcut(QApplication::translate("qtlinking", "1", Q_NULLPTR));
        R2->setText(QApplication::translate("qtlinking", "2", Q_NULLPTR));
        R2->setShortcut(QApplication::translate("qtlinking", "2", Q_NULLPTR));
        R3->setText(QApplication::translate("qtlinking", "3", Q_NULLPTR));
        R3->setShortcut(QApplication::translate("qtlinking", "3", Q_NULLPTR));
        R4->setText(QApplication::translate("qtlinking", "4", Q_NULLPTR));
        R4->setShortcut(QApplication::translate("qtlinking", "4", Q_NULLPTR));
        R5->setText(QApplication::translate("qtlinking", "5", Q_NULLPTR));
        R5->setShortcut(QApplication::translate("qtlinking", "5", Q_NULLPTR));
        R6->setText(QApplication::translate("qtlinking", "6", Q_NULLPTR));
        R6->setShortcut(QApplication::translate("qtlinking", "6", Q_NULLPTR));
        Extra->setTitle(QApplication::translate("qtlinking", "Extra", Q_NULLPTR));
        EDefault->setText(QApplication::translate("qtlinking", "Default", Q_NULLPTR));
        ELegbye->setText(QApplication::translate("qtlinking", "Leg bye", Q_NULLPTR));
        ELegbye->setShortcut(QApplication::translate("qtlinking", "L", Q_NULLPTR));
        EBye->setText(QApplication::translate("qtlinking", "Bye", Q_NULLPTR));
        EBye->setShortcut(QApplication::translate("qtlinking", "B", Q_NULLPTR));
        Buttons->setTitle(QString());
        Next->setText(QApplication::translate("qtlinking", "Next Ball", Q_NULLPTR));
        Next->setShortcut(QApplication::translate("qtlinking", "Enter", Q_NULLPTR));
        Reset->setText(QApplication::translate("qtlinking", "Reset", Q_NULLPTR));
        Reset->setShortcut(QApplication::translate("qtlinking", "R", Q_NULLPTR));
        Previous->setText(QApplication::translate("qtlinking", "Previous Ball", Q_NULLPTR));
        Previous->setShortcut(QApplication::translate("qtlinking", "P", Q_NULLPTR));
        this_over->setText(QString());
        over_text->setText(QApplication::translate("qtlinking", "This over:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtlinking: public Ui_qtlinking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLINKING_H
