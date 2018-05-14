#include "player.h"

player::player()
{

}
player::player(int _ID)
{
    ID=_ID;
}
void player::setValue(QString _fName,QString _lName){
    fName=_fName;
    lName=_lName;

}

void player::setValues(QString _batType, QString _bowlType, QString _country){
    batType=_batType;
    bowlType=_bowlType;
    country=_country;
}
QString player::getName(){
    QString name=fName+" "+lName;
    return name;
}
QString player::getBatType(){
    QString type=batType+" handed batsman";
    return type;
}
QString player::getBowlType(){
    QString type=bowlType;
    return type;
}
QString player::getCountry(){
    return country;
}
