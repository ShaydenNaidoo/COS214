//
// Created by shnai on 2024/10/05.
//

#ifndef UNTITLED1_DOORLOCK_H
#define UNTITLED1_DOORLOCK_H

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
};


#endif //UNTITLED1_DOORLOCK_H
