//
//  ArrownockException.h
//  Arrownock
//
//  Created by Edward Sun on 10/18/13.
//  Copyright (c) 2013 Arrownock. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    PUSH_INVALID_APP_KEY                = 1001,
    PUSH_INVALID_DEVICE_ID              = 1005,
    PUSH_INVALID_CHANNELS               = 1006,
    PUSH_INVALID_TIME_RANGE             = 1007,
    PUSH_INVALID_DEVICE_TOKEN           = 1009,
    PUSH_INVALID_HOST                   = 1010,
    PUSH_INVALID_BADGE                  = 1011,
    
    PUSH_FAILED_INITIALIZE              = 2001,
    PUSH_DEVICE_NOT_REGISTERED          = 2002,
    PUSH_FAILED_REGISTER                = 2003,
    PUSH_FAILED_UNREGISTER              = 2004,
    PUSH_FAILED_UPDATE_REGISTRATION     = 2005,
    PUSH_FAILED_SET_MUTE                = 2006,
    PUSH_FAILED_SET_SILENT              = 2007,
    PUSH_FAILED_CLEAR_MUTE              = 2008,
    PUSH_FAILED_CLEAR_SILENT            = 2009,
    PUSH_FAILED_SET_BADGE               = 2010,
    
    IM_INVALID_APP_KEY                  = 1101,
	IM_INVALID_USER_ID                  = 1103,
	IM_INVALID_MESSAGE_ID               = 1104,
	IM_INVALID_MESSAGE_SIZE             = 1105,
	IM_INVALID_MESSAGE_FORMAT           = 1106,
	IM_INVALID_TOPIC_NAME               = 1107,
	IM_INVALID_TOPIC                    = 1108,
	IM_INVALID_CLIENTS                  = 1109,
	IM_INVALID_ANID                     = 1110,
	IM_INVALID_ANPUSH_KEY               = 1111,
	IM_INVALID_SESSIONID                = 1112,
    IM_INVALID_CLIENT_ID                = 1113,
    IM_INVALID_MESSAGE                  = 1114,
    IM_INVALID_CUSTOM_DATA              = 1115,
    IM_INVALID_FILE_TYPE                = 1116,
    IM_INVALID_TIME_RANGE               = 1117,
    IM_INVALID_TOPIC_OWNER              = 1118,
    IM_INVALID_TOPIC_NAME_OWNER         = 1119,
    
    IM_FAILED_INITIALIZE                = 2101,
	IM_FAILED_GET_CLIENT_ID             = 2103,
	IM_FAILED_CREATE_TOPIC              = 2104,
	IM_FAILED_ADD_CLIENTS               = 2105,
	IM_FAILED_REMOVE_CLIENTS            = 2106,
	IM_FAILED_BIND_SERVICE              = 2107,
	IM_FAILED_SEND_NOTICE               = 2108,
	IM_FAILED_GET_TOPIC_INFO            = 2109,
	IM_FAILED_GET_TOPIC_LOG             = 2110,
	IM_FAILED_GET_CLIENTS_STATUS        = 2111,
    IM_FAILED_GET_SESSION_INFO          = 2113,
	IM_FAILED_GET_TOPIC_LIST            = 2114,
    IM_FAILED_UPDATE_TOPIC              = 2115,
    IM_FAILED_REMOVE_TOPIC              = 2116,

    IM_SERVICE_UNAVAILABLE              = 3101,
	IM_FAILED_CONNECT                   = 3102,
	IM_FAILED_DISCONNECT                = 3103,
	IM_FAILED_SEND                      = 3104,
	IM_FORCE_CLOSED                     = 3105,
    
    // live
    LIVE_INVALID_IM_INSTANCE            = 1301,
    LIVE_INVALID_LISTENER               = 1302,
    LIVE_INVALID_CLIENT_ID              = 1303,
    LIVE_FAILED_CREATE_SESSION          = 2301,
    LIVE_FAILED_VALIDATE_SESSION        = 2302,
    LIVE_FAILED_TERMINATE_SESSION       = 2303,
    LIVE_FAILED_INIT_CAMERA             = 2304,
    LIVE_ALREADY_IN_CALL                = 2305,
    LIVE_FAILED_INIT_MEDIA              = 2306,
    LIVE_FAILED_PREPARE_LOCAL_MEDIA     = 2307,
    LIVE_FAILED_ESTABLISH_CONN          = 2308,
    
    SOCIAL_INVALID_APP_KEY              = -200000,
    SOCIAL_INVALID_CALLBACK             = -200001,
    SOCIAL_INVALID_PATH                 = -200002,
    SOCIAL_INVALID_HOST                 = -200003,
    SOCIAL_INVALID_FILENAME             = -200004,
    SOCIAL_INVALID_PARAMS               = -200005,
    SOCIAL_INVALID_METHOD_TYPE          = -200006,
    SOCIAL_INVALID_PHOTO                = -200007,
    SOCIAL_INVALID_FILE                 = -200008,
    SOCIAL_FAILED_INITIALIZE            = -200009,
    SOCIAL_LOCAL_ERROR                  = -210000
} ArrownockExceptionErrorCode;

@interface ArrownockException : NSException

@property (nonatomic, strong) NSString *message;
@property NSUInteger errorCode;

- (NSString *)getMessage;
- (NSUInteger)getErrorCode;

@end
