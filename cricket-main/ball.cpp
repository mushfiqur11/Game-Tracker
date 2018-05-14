#include "ball.h"

Ball::Ball(int BallG,int BallC){
    ballNo=((BallG-BallC)%6);
    overNo=(BallG-BallC)/6;
}

void Ball::setBall(int BallG,int BallC){
        ballNo=(BallG-BallC)%6;
        overNo=(BallG-BallC)/6;
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

int Ball::getBall(){
    return ballNo+1;
}

int Ball::getOver(){
    return overNo;
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
