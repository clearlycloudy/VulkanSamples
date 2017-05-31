/*
 * LunarGravity - gravityscene.hpp
 *
 * Copyright (C) 2017 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Young <marky@lunarg.com>
 */

#pragma once

#include <string>

#include <json/json.h>

class GravityScene {
   public:
    // Factory Method
    static GravityScene *LoadScene(std::string scene_file);

    // Create a protected constructor
    GravityScene(Json::Value &root) { m_root = root; }

    // We don't want any copy constructors
    GravityScene(const GravityScene &scene) = delete;
    GravityScene &operator=(const GravityScene &scene) = delete;

    // Make the destructor public
    virtual ~GravityScene() { ; }

    virtual bool Start() = 0;
    virtual bool Update(float comp_time, float game_time) = 0;
    virtual bool Draw() = 0;
    virtual bool End() = 0;

   protected:
    // Json Root info
    Json::Value m_root;
};