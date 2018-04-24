#include "ball.h"
Ball::Ball(){
    ballNo=0;
    overNo=0;
}

Ball::Ball(int TBall,int TI){
    ballNo=((TBall-TI)%6)+1;
    overNo=(TBall-TI)/6;
}

void Ball::setValues(int Batsman,int NBatsman,int Bowler){
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

void Ball::setBall(int BallNo,int OverNo){
    //ball
}

int Ball::getOverNo(){
    return overNo;
}

int Ball::getBallNo(){
    return ballNo;
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
