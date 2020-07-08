////
//  AppDelegate.m
//  NJConfusionTool
//
//  Created by NingJzzz on 2020/7/8.
//Copyright © 2020年 NingJzzz. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (BOOL)windowShouldClose:(id)sender //close box quits the app
{
    [NSApp terminate:self];
    return YES;
}

- (void)performClose:(nullable id)sender {
    
}

//关闭按钮之后退出应用
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender {
    return YES;
}

@end



