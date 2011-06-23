//
//  AppDelegate.h
//  CCActionTest
//
//  Created by Craig Hinrichs on 6/23/11.
//  Copyright Authentic-Battle-Damage.com 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
