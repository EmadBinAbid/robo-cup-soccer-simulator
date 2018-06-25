# Install script for directory: /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guilayout/guisimplelayout

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/guilayout" TYPE MODULE FILES "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guilayout/guisimplelayout/guisimplelayout.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so"
         OLD_RPATH "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/carbon:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/spark:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/lib/kerosin:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/lib/oxygen:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/utility/rcssnet:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/lib/zeitgeist:/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/lib/salt:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/guilayout/guisimplelayout.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/guilayout/guisimplelayout" TYPE DIRECTORY FILES "/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guilayout/guisimplelayout/./" FILES_MATCHING REGEX "/[^/]*\\.h$" REGEX "/\\.svn$" EXCLUDE)
endif()

