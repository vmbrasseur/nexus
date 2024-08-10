// Copyright 2023 Johnson & Johnson
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NEXUS_GAZEBO__COMPONENTS_HH_
#define NEXUS_GAZEBO__COMPONENTS_HH_

#include <string>
#include <ignition/gazebo/components/Component.hh>
#include <ignition/gazebo/components/Factory.hh>
#include <ignition/gazebo/components/Serialization.hh>
#include <ignition/gazebo/config.hh>

namespace nexus_gazebo::components {
using MotionCaptureRigidBody = ignition::gazebo::components::Component<
  std::string,
  class MotionCaptureRigidBodyTag,
    ignition::gazebo::serializers::StringSerializer>;

IGN_GAZEBO_REGISTER_COMPONENT(
  "nexus_gazebo.components.MotionCaptureRigidBody",
  MotionCaptureRigidBody)

}  // namespace nexus_gazebo::components

#endif  // NEXUS_GAZEBO__COMPONENTS_HH_