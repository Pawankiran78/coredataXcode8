//
//  AppDelegate.h
//  coredataXcode8
//
//  Created by Sudhakar Parsi on 7/23/17.
//  Copyright © 2017 Pawan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

