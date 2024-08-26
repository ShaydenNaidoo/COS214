#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

// Include any necessary headers here

class UnitComponent {
public:
        virtual void move() = 0;
    virtual void attack() = 0;
    virtual void add(UnitComponent* component) = 0;
    virtual void remove(UnitComponent* component) = 0;
    virtual ~UnitComponent() {}
private:
};

#endif // UNITCOMPONENT_H