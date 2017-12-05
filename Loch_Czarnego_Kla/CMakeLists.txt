cmake_minimum_required(VERSION 3.8)
project(Loch_Czarnego_Kla)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Character.cpp Character.h Cleric.cpp Cleric.h Race.h Alignment.h Item.cpp Item.h Weapon.cpp Weapon.h ItemType.h Armor.cpp Armor.h Gods.h Tests.cpp Tests.h)
add_executable(Loch_Czarnego_Kla ${SOURCE_FILES})