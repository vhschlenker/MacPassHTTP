//
//  KCASettingsViewController.h
//  KeyChainAgent
//
//  Created by Michael Starke on 11/11/15.
//  Modified by Veit-Hendrik Schlenker on 24/03/18
//  Copyright © 2015 HicknHack Software GmbH. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class KCAKeyChainAgent;

@interface KCASettingsViewController : NSViewController

@property (weak) KCAKeyChainAgent *plugin;

@end
