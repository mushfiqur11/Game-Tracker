#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string>
#include<QApplication>
using namespace std;

class player
{
public:
    int ID;
    QString fName;
    QString lName;
    QString country;
    QString batType;
    QString bowlType;
public:
    player();
    player(int _ID);
    void setValue(QString _fName, QString _lName);
    void setValues(QString _batType,QString _bowlType,QString _country);
    QString getName();
    QString getBatType();
    QString getBowlType();
    QString getCountry();
};

#endif // PLAYER_H
