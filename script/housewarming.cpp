/// @file hello.cpp

/// @details requires gazebo installed

#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
      {
        printf("Welcome to my world!\nSee inside the building for a small, wheeled robot named:\n\tOscar!");
      }
      
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
