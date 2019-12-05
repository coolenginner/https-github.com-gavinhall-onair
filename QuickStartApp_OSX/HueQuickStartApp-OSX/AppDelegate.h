/*******************************************************************************
 Copyright (c) 2013 Koninklijke Philips N.V.
 All Rights Reserved.
 ********************************************************************************/

#import <Cocoa/Cocoa.h>
#import <HueSDK_OSX/HueSDK.h>
#include "PHBridgePushLinkViewController.h"
#include "PHBridgeSelectionViewController.h"
#import "UIImage+AddtionalFunctionalities.h"

#define NSAppDelegate  ((AppDelegate *)[[NSApplication sharedApplication] delegate])

@class PHHueSDK;

@interface AppDelegate : NSObject <NSApplicationDelegate,PHBridgePushLinkViewControllerDelegate,PHBridgeSelectionViewControllerDelegate>
{
    BOOL didStart;
    BOOL windowHidden;
}

@property (assign) IBOutlet NSWindow *window;
@property (strong, nonatomic) PHHueSDK *phHueSDK;
@property (weak) IBOutlet NSMenu *theMenu;
@property (weak) IBOutlet NSMenuItem *cameraS;
@property (weak) IBOutlet NSMenuItem *micS;
@property (weak) IBOutlet NSMenuItem *HueM;
@property (retain,nonatomic) NSStatusItem* theItem;
@property (atomic, assign) BOOL launchOnLogin;

-(IBAction)quitMe:(id)sender;
- (IBAction)OnConnectionM:(id)sender;
- (IBAction)OnEmpty:(id)sender;


#pragma mark - HueSDK

/**
 Starts the local heartbeat
 */
- (void)enableLocalHeartbeat;

/**
 Stops the local heartbeat
 */
- (void)disableLocalHeartbeat;

/**
 Starts a search for a bridge
 */
- (void)searchForBridgeLocal;


@end
