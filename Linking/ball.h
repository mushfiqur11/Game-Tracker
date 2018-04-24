#ifndef BALL_H
#define BALL_H


class Ball
{
    int ballNo,overNo,run,wicket,legal,extra,batsman,Nbatsman,bowler,gBallNo;
public:
    Ball();
    Ball(int TBall,int TI);
    void setBall(int BallNo,int OverNo);
    void setValues(int Batsman,int NBatsman,int Bowler);
    void setValue(int Run,int Wicket,int Legal,int Extra);
    int getBallNo();
    int getOverNo();
    int getRun();
    int getWicket();
    int getLegal();
    int getExtra();
    int getBatsman();
    int getBowler();
    int getNBatsman();
};

#endif // BALL_H
