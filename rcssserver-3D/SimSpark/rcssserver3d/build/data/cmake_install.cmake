# Install script for directory: /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rcssserver3d" TYPE DIRECTORY FILES
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data/models"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data/scripts"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data/materials"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data/rsg"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/data/textures"
    REGEX "/\\.svn$" EXCLUDE)
endif()

