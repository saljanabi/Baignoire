
#ifndef LA_BAIGNOIRE_ABSTRACTENTITY_HH
#define LA_BAIGNOIRE_ABSTRACTENTITY_HH


class AbstractEntity {

public:
    virtual void Update() = 0;
    virtual void Draw() = 0;

    virtual ~AbstractEntity();
};


#endif //LA_BAIGNOIRE_ABSTRACTENTITY_H