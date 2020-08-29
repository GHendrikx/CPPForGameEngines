#ifndef PLAYER_H
#define PLAYER_H

#include <Godot.hpp>
#include <Node.hpp>
#include <Position3D.hpp>

#include <MeshInstance.hpp>
#include "Shield.h"
#include "Attack.h"
#include "GameManager.h"

namespace godot{
class Shield;
class Attack;
class Player : public MeshInstance{
GODOT_CLASS(Player,Node);

public:
    Player();
    ~Player();
    void _init();
    void _ready();
    void _process(float delta);
    static void _register_methods();
    //rotate the mesh
    void _rotate(float axis);
    void _attack();
    void _defend();
    static Shield* shield;
    static Attack* attack;

    private:
        float speed;

    };
}
#endif