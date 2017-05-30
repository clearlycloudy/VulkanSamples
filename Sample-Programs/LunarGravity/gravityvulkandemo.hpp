/*
 * LunarGravity - gravityvulkandemo.hpp
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

#include "gravityvulkanengine.hpp"

class GravityVulkanDemo : public GravityVulkanEngine {
   public:
    // Create a protected constructor
    GravityVulkanDemo();

    // We don't want any copy constructors
    GravityVulkanDemo(const GravityVulkanDemo &gfx_engine) = delete;
    GravityVulkanDemo &operator=(const GravityVulkanDemo &gfx_engine) = delete;

    // Make the destructor public
    virtual ~GravityVulkanDemo();

    virtual bool Init(std::vector<std::string> &arguments);
    virtual void AppendUsageString(std::string &usage);

    virtual bool ProcessEvents();
    virtual bool Update();
    virtual bool BeginDrawFrame();
    virtual bool Draw();
    virtual bool EndDrawFrame();
};
