# Install script for directory: /home/colinp/dev/cpp/codec/src/millennium/lse/packets

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/colinp/dev/cpp/codec/build/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/lse/packets" TYPE FILE FILES
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseBusinessRejectPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseCrossOrderCancelRequestPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseExecutionReportPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseHeartbeatPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseLogonPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseLogonReplyPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseLogoutPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseMissedMessageReportPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseMissedMessageRequestAckPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseMissedMessageRequestPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseNewOrderCrossPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseNewOrderPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseOrderCancelRejectPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseOrderCancelReplaceRequestPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseOrderCancelRequestPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseOrderMassCancelReportPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseOrderMassCancelRequestPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LsePackets.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LsePacketUtils.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseRejectPacket.h"
    "/home/colinp/dev/cpp/codec/src/millennium/lse/packets/LseSystemStatusPacket.h"
    )
endif()

