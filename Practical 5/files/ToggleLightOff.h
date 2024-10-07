//
// Created by shnai on 2024/10/06.
//

#ifndef UNTITLED1_TOGGLELIGHTOFF_H
#define UNTITLED1_TOGGLELIGHTOFF_H

#include "Command.h"
#include "Light.h"
class ToggleLightOff: public Command{

private:
    Light *light;
public:
    ToggleLightOff(Light *light);
    void performAction() override;
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
};


#endif //UNTITLED1_TOGGLELIGHTOFF_H
