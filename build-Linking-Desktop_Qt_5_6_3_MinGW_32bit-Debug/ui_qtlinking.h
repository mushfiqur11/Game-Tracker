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

class Ui_QTLINKING
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *Run;
    QVBoxLayout *verticalLayout_3;
    QPushButton *R0;
    QPushButton *R1;
    QPushButton *R2;
    QPushButton *R3;
    QPushButton *R4;
    QPushButton *R5;
    QPushButton *R6;
    QGroupBox *Extra;
    QVBoxLayout *verticalLayout_4;
    QPushButton *EDefault;
    QPushButton *ELegbye;
    QPushButton *EBye;
    QGroupBox *Buttons;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Next;
    QPushButton *Reset;
    QPushButton *Previous;
    QGroupBox *Wicket;
    QVBoxLayout *verticalLayout_2;
    QPushButton *WNotout;
    QPushButton *WBowled;
    QPushButton *WCatch;
    QPushButton *WLbw;
    QPushButton *WStumped;
    QPushButton *WRunout;
    QPushButton *WHitwicket;
    QGroupBox *Legal;
    QVBoxLayout *verticalLayout;
    QPushButton *LLegal;
    QPushButton *LWide;
    QPushButton *LNo;
    QGroupBox *TextBox;
    QLabel *Runs;
    QLabel *TEAM;
    QLabel *Wickets;
    QLabel *Overs;
    QLabel *Balls;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTLINKING)
    {
        if (QTLINKING->objectName().isEmpty())
            QTLINKING->setObjectName(QStringLiteral("QTLINKING"));
        QTLINKING->resize(509, 490);
        QTLINKING->setCursor(QCursor(Qt::ArrowCursor));
        QTLINKING->setAcceptDrops(false);
        QTLINKING->setWindowTitle(QStringLiteral("Game Tracker"));
        QIcon icon;
        icon.addFile(QStringLiteral("ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("ico.ico"), QSize(), QIcon::Normal, QIcon::On);
        QTLINKING->setWindowIcon(icon);
        QTLINKING->setWindowOpacity(0.96);
        QTLINKING->setAutoFillBackground(false);
        QTLINKING->setStyleSheet(QLatin1String("QMainWindow{\n"
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
        QTLINKING->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        centralWidget = new QWidget(QTLINKING);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Run = new QGroupBox(centralWidget);
        Run->setObjectName(QStringLiteral("Run"));
        verticalLayout_3 = new QVBoxLayout(Run);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        R0 = new QPushButton(Run);
        R0->setObjectName(QStringLiteral("R0"));
        R0->setAutoFillBackground(true);
        R0->setCheckable(true);
        R0->setChecked(true);
        R0->setAutoExclusive(true);
        R0->setAutoDefault(true);

        verticalLayout_3->addWidget(R0);

        R1 = new QPushButton(Run);
        R1->setObjectName(QStringLiteral("R1"));
        R1->setAutoFillBackground(true);
        R1->setCheckable(true);
        R1->setAutoExclusive(true);
        R1->setAutoDefault(true);

        verticalLayout_3->addWidget(R1);

        R2 = new QPushButton(Run);
        R2->setObjectName(QStringLiteral("R2"));
        R2->setAutoFillBackground(true);
        R2->setCheckable(true);
        R2->setAutoExclusive(true);
        R2->setAutoDefault(true);

        verticalLayout_3->addWidget(R2);

        R3 = new QPushButton(Run);
        R3->setObjectName(QStringLiteral("R3"));
        R3->setAutoFillBackground(true);
        R3->setCheckable(true);
        R3->setAutoExclusive(true);
        R3->setAutoDefault(true);

        verticalLayout_3->addWidget(R3);

        R4 = new QPushButton(Run);
        R4->setObjectName(QStringLiteral("R4"));
        R4->setAutoFillBackground(true);
        R4->setCheckable(true);
        R4->setAutoExclusive(true);
        R4->setAutoDefault(true);

        verticalLayout_3->addWidget(R4);

        R5 = new QPushButton(Run);
        R5->setObjectName(QStringLiteral("R5"));
        R5->setAutoFillBackground(true);
        R5->setCheckable(true);
        R5->setAutoExclusive(true);
        R5->setAutoDefault(true);

        verticalLayout_3->addWidget(R5);

        R6 = new QPushButton(Run);
        R6->setObjectName(QStringLiteral("R6"));
        R6->setAutoFillBackground(true);
        R6->setCheckable(true);
        R6->setAutoExclusive(true);
        R6->setAutoDefault(true);

        verticalLayout_3->addWidget(R6);


        gridLayout->addWidget(Run, 1, 5, 1, 1);

        Extra = new QGroupBox(centralWidget);
        Extra->setObjectName(QStringLiteral("Extra"));
        Extra->setStyleSheet(QLatin1String("QTLINKING{\n"
"background: black;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(Extra);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        EDefault = new QPushButton(Extra);
        EDefault->setObjectName(QStringLiteral("EDefault"));
        EDefault->setAutoFillBackground(true);
        EDefault->setCheckable(true);
        EDefault->setChecked(true);
        EDefault->setAutoExclusive(true);
        EDefault->setAutoDefault(true);

        verticalLayout_4->addWidget(EDefault);

        ELegbye = new QPushButton(Extra);
        ELegbye->setObjectName(QStringLiteral("ELegbye"));
        ELegbye->setAutoFillBackground(true);
        ELegbye->setCheckable(false);
        ELegbye->setAutoExclusive(true);
        ELegbye->setAutoDefault(true);

        verticalLayout_4->addWidget(ELegbye);

        EBye = new QPushButton(Extra);
        EBye->setObjectName(QStringLiteral("EBye"));
        EBye->setAutoFillBackground(true);
        EBye->setCheckable(false);
        EBye->setAutoExclusive(true);
        EBye->setAutoDefault(true);

        verticalLayout_4->addWidget(EBye);


        gridLayout->addWidget(Extra, 1, 7, 1, 1);

        Buttons = new QGroupBox(centralWidget);
        Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(Buttons);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Next = new QPushButton(Buttons);
        Next->setObjectName(QStringLiteral("Next"));

        verticalLayout_5->addWidget(Next);

        Reset = new QPushButton(Buttons);
        Reset->setObjectName(QStringLiteral("Reset"));

        verticalLayout_5->addWidget(Reset);

        Previous = new QPushButton(Buttons);
        Previous->setObjectName(QStringLiteral("Previous"));

        verticalLayout_5->addWidget(Previous);


        gridLayout->addWidget(Buttons, 2, 0, 2, 8);

        Wicket = new QGroupBox(centralWidget);
        Wicket->setObjectName(QStringLiteral("Wicket"));
        verticalLayout_2 = new QVBoxLayout(Wicket);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        WNotout = new QPushButton(Wicket);
        WNotout->setObjectName(QStringLiteral("WNotout"));
        WNotout->setAutoFillBackground(true);
        WNotout->setCheckable(true);
        WNotout->setChecked(true);
        WNotout->setAutoExclusive(true);
        WNotout->setAutoDefault(true);

        verticalLayout_2->addWidget(WNotout);

        WBowled = new QPushButton(Wicket);
        WBowled->setObjectName(QStringLiteral("WBowled"));
        WBowled->setAutoFillBackground(true);
        WBowled->setCheckable(true);
        WBowled->setAutoExclusive(true);

        verticalLayout_2->addWidget(WBowled);

        WCatch = new QPushButton(Wicket);
        WCatch->setObjectName(QStringLiteral("WCatch"));
        WCatch->setAutoFillBackground(true);
        WCatch->setCheckable(true);
        WCatch->setAutoExclusive(true);
        WCatch->setAutoDefault(true);

        verticalLayout_2->addWidget(WCatch);

        WLbw = new QPushButton(Wicket);
        WLbw->setObjectName(QStringLiteral("WLbw"));
        WLbw->setAutoFillBackground(true);
        WLbw->setCheckable(true);
        WLbw->setAutoExclusive(true);
        WLbw->setAutoDefault(true);

        verticalLayout_2->addWidget(WLbw);

        WStumped = new QPushButton(Wicket);
        WStumped->setObjectName(QStringLiteral("WStumped"));
        WStumped->setAutoFillBackground(true);
        WStumped->setCheckable(true);
        WStumped->setAutoExclusive(true);

        verticalLayout_2->addWidget(WStumped);

        WRunout = new QPushButton(Wicket);
        WRunout->setObjectName(QStringLiteral("WRunout"));
        WRunout->setAutoFillBackground(true);
        WRunout->setCheckable(true);
        WRunout->setAutoExclusive(true);

        verticalLayout_2->addWidget(WRunout);

        WHitwicket = new QPushButton(Wicket);
        WHitwicket->setObjectName(QStringLiteral("WHitwicket"));
        WHitwicket->setAutoFillBackground(true);
        WHitwicket->setCheckable(true);
        WHitwicket->setChecked(false);
        WHitwicket->setAutoExclusive(true);

        verticalLayout_2->addWidget(WHitwicket);


        gridLayout->addWidget(Wicket, 1, 3, 1, 1);

        Legal = new QGroupBox(centralWidget);
        Legal->setObjectName(QStringLiteral("Legal"));
        verticalLayout = new QVBoxLayout(Legal);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LLegal = new QPushButton(Legal);
        LLegal->setObjectName(QStringLiteral("LLegal"));
        LLegal->setAutoFillBackground(true);
        LLegal->setCheckable(true);
        LLegal->setChecked(true);
        LLegal->setAutoExclusive(true);
        LLegal->setAutoDefault(true);

        verticalLayout->addWidget(LLegal);

        LWide = new QPushButton(Legal);
        LWide->setObjectName(QStringLiteral("LWide"));
        LWide->setCheckable(true);
        LWide->setAutoExclusive(true);

        verticalLayout->addWidget(LWide);

        LNo = new QPushButton(Legal);
        LNo->setObjectName(QStringLiteral("LNo"));
        LNo->setCheckable(true);
        LNo->setAutoExclusive(true);

        verticalLayout->addWidget(LNo);


        gridLayout->addWidget(Legal, 1, 0, 1, 1);

        TextBox = new QGroupBox(centralWidget);
        TextBox->setObjectName(QStringLiteral("TextBox"));
        Runs = new QLabel(TextBox);
        Runs->setObjectName(QStringLiteral("Runs"));
        Runs->setGeometry(QRect(90, 0, 31, 41));
        TEAM = new QLabel(TextBox);
        TEAM->setObjectName(QStringLiteral("TEAM"));
        TEAM->setGeometry(QRect(20, 0, 491, 41));
        Wickets = new QLabel(TextBox);
        Wickets->setObjectName(QStringLiteral("Wickets"));
        Wickets->setGeometry(QRect(130, 0, 31, 41));
        Overs = new QLabel(TextBox);
        Overs->setObjectName(QStringLiteral("Overs"));
        Overs->setGeometry(QRect(340, 0, 20, 41));
        Balls = new QLabel(TextBox);
        Balls->setObjectName(QStringLiteral("Balls"));
        Balls->setGeometry(QRect(370, 0, 16, 41));
        TEAM->raise();
        Runs->raise();
        Wickets->raise();
        Overs->raise();
        Balls->raise();

        gridLayout->addWidget(TextBox, 0, 0, 1, 8);

        horizontalSpacer_2 = new QSpacerItem(53, 258, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(54, 258, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(54, 258, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 6, 1, 1);

        QTLINKING->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTLINKING);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 21));
        QTLINKING->setMenuBar(menuBar);
        statusBar = new QStatusBar(QTLINKING);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTLINKING->setStatusBar(statusBar);
        QWidget::setTabOrder(LLegal, LWide);
        QWidget::setTabOrder(LWide, LNo);
        QWidget::setTabOrder(LNo, WNotout);
        QWidget::setTabOrder(WNotout, WBowled);
        QWidget::setTabOrder(WBowled, WCatch);
        QWidget::setTabOrder(WCatch, WLbw);
        QWidget::setTabOrder(WLbw, WStumped);
        QWidget::setTabOrder(WStumped, WRunout);
        QWidget::setTabOrder(WRunout, WHitwicket);
        QWidget::setTabOrder(WHitwicket, R0);
        QWidget::setTabOrder(R0, R1);
        QWidget::setTabOrder(R1, R2);
        QWidget::setTabOrder(R2, R3);
        QWidget::setTabOrder(R3, R4);
        QWidget::setTabOrder(R4, R5);
        QWidget::setTabOrder(R5, R6);
        QWidget::setTabOrder(R6, EDefault);
        QWidget::setTabOrder(EDefault, ELegbye);
        QWidget::setTabOrder(ELegbye, EBye);
        QWidget::setTabOrder(EBye, Next);
        QWidget::setTabOrder(Next, Previous);
        QWidget::setTabOrder(Previous, Reset);

        retranslateUi(QTLINKING);
        QObject::connect(Reset, SIGNAL(clicked()), LLegal, SLOT(click()));
        QObject::connect(Reset, SIGNAL(clicked()), WNotout, SLOT(click()));
        QObject::connect(Reset, SIGNAL(clicked()), R0, SLOT(click()));
        QObject::connect(Reset, SIGNAL(clicked()), EDefault, SLOT(click()));

        Next->setDefault(true);


        QMetaObject::connectSlotsByName(QTLINKING);
    } // setupUi

    void retranslateUi(QMainWindow *QTLINKING)
    {
        Run->setTitle(QApplication::translate("QTLINKING", "Run", Q_NULLPTR));
        R0->setText(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        R0->setShortcut(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        R1->setText(QApplication::translate("QTLINKING", "1", Q_NULLPTR));
        R1->setShortcut(QApplication::translate("QTLINKING", "1", Q_NULLPTR));
        R2->setText(QApplication::translate("QTLINKING", "2", Q_NULLPTR));
        R2->setShortcut(QApplication::translate("QTLINKING", "2", Q_NULLPTR));
        R3->setText(QApplication::translate("QTLINKING", "3", Q_NULLPTR));
        R3->setShortcut(QApplication::translate("QTLINKING", "3", Q_NULLPTR));
        R4->setText(QApplication::translate("QTLINKING", "4", Q_NULLPTR));
        R4->setShortcut(QApplication::translate("QTLINKING", "4", Q_NULLPTR));
        R5->setText(QApplication::translate("QTLINKING", "5", Q_NULLPTR));
        R5->setShortcut(QApplication::translate("QTLINKING", "5", Q_NULLPTR));
        R6->setText(QApplication::translate("QTLINKING", "6", Q_NULLPTR));
        R6->setShortcut(QApplication::translate("QTLINKING", "6", Q_NULLPTR));
        Extra->setTitle(QApplication::translate("QTLINKING", "Extra", Q_NULLPTR));
        EDefault->setText(QApplication::translate("QTLINKING", "Default", Q_NULLPTR));
        ELegbye->setText(QApplication::translate("QTLINKING", "Leg bye", Q_NULLPTR));
        ELegbye->setShortcut(QApplication::translate("QTLINKING", "L", Q_NULLPTR));
        EBye->setText(QApplication::translate("QTLINKING", "Bye", Q_NULLPTR));
        EBye->setShortcut(QApplication::translate("QTLINKING", "B", Q_NULLPTR));
        Buttons->setTitle(QString());
        Next->setText(QApplication::translate("QTLINKING", "Next Ball", Q_NULLPTR));
        Next->setShortcut(QApplication::translate("QTLINKING", "Enter", Q_NULLPTR));
        Reset->setText(QApplication::translate("QTLINKING", "Reset", Q_NULLPTR));
        Reset->setShortcut(QApplication::translate("QTLINKING", "R", Q_NULLPTR));
        Previous->setText(QApplication::translate("QTLINKING", "Previous Ball", Q_NULLPTR));
        Previous->setShortcut(QApplication::translate("QTLINKING", "P", Q_NULLPTR));
        Wicket->setTitle(QApplication::translate("QTLINKING", "Wicket", Q_NULLPTR));
        WNotout->setText(QApplication::translate("QTLINKING", "Not out", Q_NULLPTR));
        WBowled->setText(QApplication::translate("QTLINKING", "Bowled", Q_NULLPTR));
        WBowled->setShortcut(QApplication::translate("QTLINKING", "W", Q_NULLPTR));
        WCatch->setText(QApplication::translate("QTLINKING", "Catch", Q_NULLPTR));
        WLbw->setText(QApplication::translate("QTLINKING", "LBW", Q_NULLPTR));
        WStumped->setText(QApplication::translate("QTLINKING", "Stumped", Q_NULLPTR));
        WRunout->setText(QApplication::translate("QTLINKING", "Run out", Q_NULLPTR));
        WHitwicket->setText(QApplication::translate("QTLINKING", "Hit wicket", Q_NULLPTR));
        Legal->setTitle(QApplication::translate("QTLINKING", "Legal", Q_NULLPTR));
        LLegal->setText(QApplication::translate("QTLINKING", "Legal", Q_NULLPTR));
        LWide->setText(QApplication::translate("QTLINKING", "Wide", Q_NULLPTR));
        LWide->setShortcut(QApplication::translate("QTLINKING", "W", Q_NULLPTR));
        LNo->setText(QApplication::translate("QTLINKING", "No", Q_NULLPTR));
        LNo->setShortcut(QApplication::translate("QTLINKING", "N", Q_NULLPTR));
        TextBox->setTitle(QString());
        Runs->setText(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        TEAM->setText(QApplication::translate("QTLINKING", "Team 1:        /                                              .      overs", Q_NULLPTR));
        Wickets->setText(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        Overs->setText(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        Balls->setText(QApplication::translate("QTLINKING", "0", Q_NULLPTR));
        Q_UNUSED(QTLINKING);
    } // retranslateUi

};

namespace Ui {
    class QTLINKING: public Ui_QTLINKING {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLINKING_H
