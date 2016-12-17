# Install script for directory: /home/aleshin8sergey/Workspace/Coursework/My_Alg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/aleshin8sergey/Workspace/Coursework/My_Alg/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/aleshin8sergey/Workspace/Coursework/My_Alg/install" TYPE EXECUTABLE FILES "/home/aleshin8sergey/Workspace/Coursework/My_Alg/My_VJ_alg")
  if(EXISTS "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg"
         OLD_RPATH "/OpenCV/opencv/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/aleshin8sergey/Workspace/Coursework/My_Alg/install/My_VJ_alg")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/aleshin8sergey/Workspace/Coursework/My_Alg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
