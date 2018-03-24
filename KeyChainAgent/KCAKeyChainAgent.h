//
//  KCAKeyChainAgent.h
//  KCAKeyChainAgent
//
//  Created by Michael Starke on 11/11/15.
//  Modified by Veit-Hendrik Schlenker on 24/03/18
//  Copyright © 2015 HicknHack Software GmbH. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MPPlugin.h"


FOUNDATION_EXPORT NSUInteger const kKeePassHTTPDefaultPort;

FOUNDATION_EXPORT NSString *const kMPHSettingsKeyShowMenuItem;
FOUNDATION_EXPORT NSString *const kMPHSettingsKeyHttpPort;
FOUNDATION_EXPORT NSString *const kMPHSettingsKeyAllowRemoteConnections;
FOUNDATION_EXPORT NSString *const kMPHSettingsKeyShowNotifications;
FOUNDATION_EXPORT NSString *const kMPHSettingsKeyIncludeKPHStringFields;

@interface KCAKeyChainAgent : MPPlugin <MPPluginSettings>

@end
