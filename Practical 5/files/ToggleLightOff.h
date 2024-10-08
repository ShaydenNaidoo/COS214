//
// Created by shnai on 2024/10/06.
//

#ifndef TOGGLELIGHTOFF_H
#define TOGGLELIGHTOFF_H

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


#endif //TOGGLELIGHTOFF_H
