//
//  AnimatedPathViewController.h
//  AnimatedPath
//
//  Created by Ole Begemann on 08.12.10.
//  Copyright 2010 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>



@interface AnimatedPathViewController : UIViewController 
{
	CALayer *_animationLayer;
    CAShapeLayer *_pathLayer;
    CALayer *_penLayer;
}

@property (nonatomic, retain) CALayer *animationLayer;
@property (nonatomic, retain) CAShapeLayer *pathLayer;
@property (nonatomic, retain) CALayer *penLayer;

- (IBAction) replayButtonTapped:(id)sender;
- (IBAction) drawingTypeSelectorTapped:(id)sender;

@end

