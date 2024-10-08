//
// Created by shnai on 2024/10/05.
//

#ifndef COMMAND_H
#define COMMAND_H


class Command {
public:
virtual void addProcedure(Command* command)=0;
virtual void removeProcedure(Command* command)=0;
virtual void performAction()=0;

};


#endif //COMMAND_H
