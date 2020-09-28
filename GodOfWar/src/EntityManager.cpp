#include <EntityManager.h>

using namespace godot;

EntityManager::EntityManager() {}
EntityManager::~EntityManager() {}

void EntityManager::_init()
{
    GameManager::entitymanager = this;
}

void EntityManager::_ready()
{
    Godot::print("Ready");
}

void EntityManager::_progress() {}

void EntityManager::_register_methods()
{
    //register_property<EntityManager, Ref<PackedScene>>("EntityScene", &EntityManager::EnemyScene,nullptr);
}

void EntityManager::_add_entity()
{
}

void EntityManager::_remove_entity()
{
}

void EntityManager::_search_spawn_positions()
{
    Godot::print("search new spawn points");
    Spatial *spatial = static_cast<Spatial *>(get_node(NodePath("spawn0")));

    for (int i = 0; i < 4; i++)
    {

        godot::String spawn = "spawn";
        godot::String nodeString = spawn + godot::String(std::to_string(i).c_str());
        Spatial *spatial = static_cast<Spatial *>(get_node(NodePath(nodeString)));

        if (spatial != NULL)
        {
            EntityManager::spawnPositions.push_back(spatial);
        }
    }
    Godot::print("all the SpawnPositions");
}