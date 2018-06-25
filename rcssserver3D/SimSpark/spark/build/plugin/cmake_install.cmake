# Install script for directory: /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/accelerometer/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/agentsynceffector/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/collisionperceptor/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/filesystemstd/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/filesystemzip/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/forceeffector/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/gyrorateperceptor/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/inputsdl/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/inputqt/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/inputwx/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/objimporter/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/odeimps/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/openglsyssdl/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/openglsysqt/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/openglsyswx/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/perfectvisionperceptor/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/rosimporter/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/rubysceneimporter/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/sexpparser/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/sparkmonitor/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/sparkagent/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/sceneeffector/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/soundsystemfmod/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemboost/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl/cmake_install.cmake")
  include("/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/imageperceptor/cmake_install.cmake")

endif()

