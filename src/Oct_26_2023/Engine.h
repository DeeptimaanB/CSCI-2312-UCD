#ifndef ENGINE_H
#define ENGINE_H

#include <string>
    using std::string;

class Engine
{

public:

    Engine();
    explicit Engine(string );
    ~Engine();

    void setModel(string);
    void setBigBlock(bool);

    string getModel() const;
    bool getBigBlock() const;


private:
   string model;
   bool bigBlock;
   string engineCyl;

};



#endif