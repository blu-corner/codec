#
# Copyright 2014-2018 Neueda Ltd.
#
# Include Java
find_package(Java REQUIRED COMPONENTS Runtime Development)
find_package(JNI REQUIRED)
include(UseJava)

include_directories(${JNI_INCLUDE_DIRS})

# set the flags for swig
set(CMAKE_SWIG_FLAGS -package com.neueda.codec)
set_source_files_properties(../codec.java.i PROPERTIES CPLUSPLUS ON)

# Add swig module
add_compile_options(-fno-strict-aliasing)
swig_add_module(Codec java ../codec.java.i)
swig_link_libraries(Codec
  codec fields
  lsecodec oslocodec turquoisecodec jsecodec borsacodec
  swxcodec
  ${JNI_LIBRARIES})

set(CMAKE_JAR_CLASSES_PREFIX com/neueda/codec)
set(CMAKE_JAVA_INCLUDE_PATH ${CMAKE_INSTALL_PREFIX}/lib/java/CdrJNI.jar)
set(JNI_SOURCES
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaBusinessReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaCancelReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaCrossOrderCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaHeartbeat.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaLogon.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaLogonResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaLogout.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaMassCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaMissedMessageRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaMissedMessageRequestAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaNewOrder.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaNewOrderCrossMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaNewQuote.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaOrderMassCancelReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaOrderModificationRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaQuoteAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaQuoteRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaQuoteRequestReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaQuoteResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaQuoteStatusReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaRFQExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaRFQQuote.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaSystemStatus.java
    ${CMAKE_CURRENT_BINARY_DIR}/BorsaItalianaTransmissionComplete.java
    ${CMAKE_CURRENT_BINARY_DIR}/Buffer.java
    ${CMAKE_CURRENT_BINARY_DIR}/codecBinding.java
    ${CMAKE_CURRENT_BINARY_DIR}/codecBindingJNI.java
    ${CMAKE_CURRENT_BINARY_DIR}/DecodeResults.java
    ${CMAKE_CURRENT_BINARY_DIR}/FieldUtils.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseBusinessReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseHeartbeat.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseLogon.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseLogonResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseLogout.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseMissedMessageRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseMissedMessageRequestAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseNewOrder.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseNewOrderCross.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseNews.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderCancelReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderCancelReplaceRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderMassCancelReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderMassCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseOrderStatusReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseQuote.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseQuoteAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseQuoteRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseQuoteRequestReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseQuoteResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseRFQExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseRFQQuote.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseSecurityDefinitionRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseSecurityDefinitionResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseSystemStatus.java
    ${CMAKE_CURRENT_BINARY_DIR}/JseTransmissionComplete.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseBusinessReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseCrossOrderCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseHeartbeat.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseLogon.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseLogonReply.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseLogout.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseMissedMessageReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseMissedMessageRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseMissedMessageRequestAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseNewOrder.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseNewOrderCross.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseOrderCancelReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseOrderCancelReplaceRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseOrderCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseOrderMassCancelReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseOrderMassCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/LseSystemStatus.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloBusinessReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloCancelReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloHeartbeat.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloLogon.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloLogonResponse.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloLogout.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloMassCancelReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloMassCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloMissedMessageRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloMissedMessageRequestAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloNewOrder.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloOrderModificationRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloSystemStatus.java
    ${CMAKE_CURRENT_BINARY_DIR}/OsloTransmissionComplete.java
    #${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_SWIGCDATA.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_BorsaItalianaHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_JseHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_LseHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_OsloHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_swxHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_TurquoiseHeader.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_bool.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_fixMsg.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_mapT_int_std__string_t.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_size_t.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_std__pairT_int_std__string_t.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_std__string.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_std__vectorT_std__pairT_int_std__string_t_t.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_std__vectorT_std__string_t.java
    # ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_unsigned_char.java
    ${CMAKE_CURRENT_BINARY_DIR}/SWIGTYPE_p_void.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxAcceptedMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxBrokenTradeMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxCancelOrderMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxCancelledMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxClientHeartbeatMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxDebugMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxEndofSessionMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxEnterOrderMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxExecutedOrderMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxLoginAcceptedMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxLoginRejectedMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxLoginRequestMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxLogoutRequestMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxOrderPriorityUpdateChangeMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxRejectedOrderMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxReplaceOrderMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxReplacedMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxServerHeartbeatMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxSystemEventMessage.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseBusinessReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseExecutionReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseHeader.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseHeartbeat.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseLogon.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseLogonReply.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseLogout.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseMissedMessageReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseMissedMessageRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseMissedMessageRequestAck.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseNewOrder.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseOrderCancelReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseOrderCancelReplaceRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseOrderCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseOrderMassCancelReport.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseOrderMassCancelRequest.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseReject.java
    ${CMAKE_CURRENT_BINARY_DIR}/TurquoiseSystemStatus.java
    ${CMAKE_CURRENT_BINARY_DIR}/borsaitalianaCodec.java
    ${CMAKE_CURRENT_BINARY_DIR}/Codec.java
    ${CMAKE_CURRENT_BINARY_DIR}/CodecFactory.java
    ${CMAKE_CURRENT_BINARY_DIR}/codecBindingConstants.java
    ${CMAKE_CURRENT_BINARY_DIR}/codecState.java
    # ${CMAKE_CURRENT_BINARY_DIR}/fixCodec.java
    # ${CMAKE_CURRENT_BINARY_DIR}/fixMsg.java
    ${CMAKE_CURRENT_BINARY_DIR}/jseCodec.java
    ${CMAKE_CURRENT_BINARY_DIR}/lseCodec.java
    ${CMAKE_CURRENT_BINARY_DIR}/osloCodec.java
    ${CMAKE_CURRENT_BINARY_DIR}/swxCodec.java
    ${CMAKE_CURRENT_BINARY_DIR}/turquoiseCodec.java
    ${CMAKE_CURRENT_SOURCE_DIR}/Fields.java
)
add_jar(CodecJNI
  SOURCES ${JNI_SOURCES}
  )

if(TARGET _Codec)
  add_dependencies(CodecJNI _Codec)
else()
  add_dependencies(CodecJNI Codec)
endif()

# Files to install with Java
if(APPLE)
  set(JAVA_DYLIB_SUFFIX ".jnilib")
else()
  set(JAVA_DYLIB_SUFFIX ".so")
endif()

# cmake 2.8 swig has issues on figuring out naming libs
if(TARGET _Codec)
  set_target_properties(_Codec PROPERTIES OUTPUT_NAME "Codec")
  set_target_properties(_Codec PROPERTIES SUFFIX ${JAVA_DYLIB_SUFFIX})
endif()

set(JAVA_INSTALL_FILES
  # ${CMAKE_CURRENT_SOURCE_DIR}/run.sh
  # ${CMAKE_CURRENT_SOURCE_DIR}/build.sh
  # ${CMAKE_CURRENT_SOURCE_DIR}/example.java
  ${CMAKE_CURRENT_BINARY_DIR}/CodecJNI.jar)

# Declare install target for java
install(FILES ${JAVA_INSTALL_FILES}
  DESTINATION lib/java)

if(TARGET _Codec)
  install(TARGETS _Codec
    DESTINATION lib/java)
else()
  install(TARGETS Codec
    DESTINATION lib/java)
endif()
