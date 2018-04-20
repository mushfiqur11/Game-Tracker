#include "ball.h"

Ball::Ball(int BallNo){
    ballNo=BallNo%30;
    overNo=BallNo/30;
}

void Ball::setValues(int Run,int Wicket,int Legal,int Extra,int Batsman,int NBatsman,int Bowler){
    run = Run;
    wicket=Wicket;
    legal=Legal;
    extra=Extra;
    batsman=Batsman;
    Nbatsman=NBatsman;
    bowler=Bowler;
}

void Ball::setValue(int Run,int Wicket,int Legal,int Extra){
    run = Run;
    wicket=Wicket;
    legal=Legal;
    extra=Extra;
}

int Ball::getRun(){
    return run;
}

int Ball::getWicket(){
    return wicket;
}
int Ball::getLegal(){
    return legal;
}
int Ball::getExtra(){
    return extra;
}
int Ball::getBatsman(){
    return batsman;
}
int Ball::getNBatsman(){
    return Nbatsman;
}
int Ball::getBowler(){
    return bowler;
}
