################################################################################
#
#  Library:   CTK
#
#  Copyright (c) Kitware Inc.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0.txt
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
################################################################################

cmake_minimum_required(VERSION 2.8)

# Search and include CTK
find_package(CTK)
if (NOT CTK_FOUND)
  message(FATAL_ERROR "CTK not found, set CTK_DIR to the CTK superbuild directory.")
endif()
include(${CTK_USE_FILE})

# Include CTK's Qt directories
find_package(Qt4)
include(${QT_USE_FILE})

add_subdirectory(Example1)