#ifndef PLAYER_H
#define PLAYER_H

#include <Godot.hpp>
#include <MeshInstance.hpp>
#include <Position3D.hpp>
#include "Shield.h"
#include "Attack.h"
#include "GameManager.h"
#include <Node.hpp>
#include <Spatial.hpp>
#include <Input.hpp>
#include <Position3D.hpp>

namespace godot
{

class Shield;
class Attack;
    class Player : public MeshInstance
    {
    GODOT_CLASS(Player,MeshInstance);

    public:
        Player();
        ~Player();
        void _init();
        void _ready();
        void _process(float delta);
        static void _register_methods();

        //rotate the mesh
        void _rotate(float degrees);
        void _attack(bool active);
        void _defend(bool active);
        void _on_Player_body_entered(PhysicsBody* body);
        Attack* attack;
        Shield* shield;
        private:
            float speed;
            bool shieldActive;
            bool swordActive;
            float hp = 3;
            bool initializeSpawnPositions = false;
    };
}
#endif /*PLAYER_H*/