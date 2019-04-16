//
// Created by Nassim EL HORMI on 10/09/2018.
//

#ifndef LA_BAIGNOIRE_CHARACTER_HH
#define LA_BAIGNOIRE_CHARACTER_HH


#include "AbstractEntity.hh"

class Character : public AbstractEntity {

private:
    double _x;
    double _y;
    int _life;
    
public:
    double GetX() const;
    void SetX(double x);
    double GetY() const;
    void SetY(double y);
    int GetLife() const;
    void SetLife(int life);
    virtual void Update() override;
    virtual void Draw() override;
    virtual ~Character() = 0;
};


#endif //LA_BAIGNOIRE_CHARACTER_HH
