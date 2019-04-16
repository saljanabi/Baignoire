//
// Created by Nassim EL HORMI on 10/09/2018.
//

#ifndef LA_BAIGNOIRE_TIMEMANAGER_HH
#define LA_BAIGNOIRE_TIMEMANAGER_HH

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&) = delete;      \
  void operator=(const TypeName&) = delete

class TimeManager {

private:
    static TimeManager* instance;
    DISALLOW_COPY_AND_ASSIGN(TimeManager);
    TimeManager() = default;
    ~TimeManager();


public:
    static TimeManager& GetInstance() {
        if (!instance){
            instance = new TimeManager();
        }
        return (*instance);
    }


    unsigned int update = 0;
    unsigned int start = 0;
    void Start();
    void Update();
    unsigned int GetElapsedTime() const;
    unsigned int GetStartedTime() const;
};




#endif //LA_BAIGNOIRE_TIMEMANAGER_H
