//
//  Abyssal_FishAppDelegate.h
//  Strange Ocean
//
//  Created by Hugo CAILLARD (Cohars) on 30/01/11.
//  
//  Please read "ReadMe.txt".
//  This document is available under the Creative Commons Licence : BY-NC-SA.
//  http://creativecommons.org/licenses/by-nc-sa/3.0/
//
//  Thank you.
//

#define FichierGamesInformations @"game_informations.plist"

#import <UIKit/UIKit.h>

@class RootViewController;

@interface Strange_OceanAppDelegate : NSObject <UIApplicationDelegate> {
    NSUserDefaults *defaults;

    UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;


@end
