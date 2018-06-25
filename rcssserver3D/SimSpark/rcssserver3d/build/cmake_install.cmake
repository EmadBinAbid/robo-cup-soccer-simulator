# Install script for directory: /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/rcssserver3d" TYPE FILE FILES
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/AUTHORS"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/ChangeLog"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/COPYING"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/NEWS"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/README"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/THANKS"
    "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/TODO"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/rcssserver3d" TYPE FILE FILES "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/rcssserver3d_config.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/data/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/doc/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/plugin/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/rcssagent3d/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/rcssmonitor3d/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/rcssserver3d/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/guiplugin/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/sparkgui/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/rcssserver3d/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
