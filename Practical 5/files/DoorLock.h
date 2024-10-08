//
// Created by shnai on 2024/10/05.
//

#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "SmartDevice.h"
class DoorLock: public SmartDevice {
private:
    bool isLocked;
public:
    DoorLock();
    std::string getStatus() override;
    void Lock();
    void Unlock();
    
    std::string getDeviceType() override;
    void update() override;
};


#endif //DOORLOCK_H
