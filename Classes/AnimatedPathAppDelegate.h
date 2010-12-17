//
//  AnimatedPathAppDelegate.h
//  AnimatedPath
//
//  Created by Ole Begemann on 08.12.10.
//  Copyright 2010 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AnimatedPathViewController;

@interface AnimatedPathAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    AnimatedPathViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AnimatedPathViewController *viewController;

@end

