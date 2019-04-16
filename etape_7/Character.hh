//
// Created by Nassim EL HORMI on 10/09/2018.
//

#ifndef LA_BAIGNOIRE_CHARACTER_HH
#define LA_BAIGNOIRE_CHARACTER_HH


#include "AbstractEntity.hh"
#include "IObservable.hh"
#include "IObserver.hh"
#include <list>

class Character : public AbstractEntity, public IObservable {
    
private:
    double _x;
    double _y;
    int _life;
    
protected:
    Character();
    
public:
    double GetX() const;
    void SetX(double x);
    double GetY() const;
    void SetY(double y);
    int GetLife() const;
    void SetLife(int life);
    
    virtual void AddObserver(IObserver* observer) override;
    virtual void RemoveObserver(IObserver* observer) override;
    
    virtual void Update() override;
    virtual void Draw() override;
    
    virtual ~Character() = 0;
    
};

#endif //LA_BAIGNOIRE_CHARACTER_HH
