#pragma once

typedef struct
{
    double x;
    double y;
    double z;
} S_Pos3D;

class POS
{
private:
    double x;
    double y;

public:
    POS();
    POS(const POS& pos);              // コピーコンストラクタ
    POS(double tmpx, double tmpy);    // 関数のオーバーロード
    ~POS();

    int getX() const;                      // const付きメンバ関数
    int getY() const;
    int setPos(double tmpx, double tmpy);
    int setPos(S_Pos3D pos3d);
    void print();
    POS operator+(POS rhs);
};
