#include "team.h"

team::team(int _id)
{
    id=_id;
}
void team::setName(QString _name){
    name=_name;
}
void team::setAName(QString _aName){
    aName=_aName;
}
void team::setPlayer(int ob, int x){
    p[x]=ob;
}
int team::getPlayer(int i){
    return p[i];
}
QString team::getName(){
    return name;
}
QString team::getAName(){
    return aName;
}
