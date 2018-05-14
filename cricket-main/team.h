#ifndef TEAM_H
#define TEAM_H
#include<iostream>
#include<string>
#include<QApplication>
#include "player.h"
using namespace std;

class team
{
    int id;
    QString name,aName;
    int p[13];
public:
    team(int _id);
    void setName(QString _name);
    void setAName(QString _aName);
    void setPlayer(int ob,int x);
    int getPlayer(int i);
    QString getName();
    QString getAName();

};

#endif // TEAM_H
