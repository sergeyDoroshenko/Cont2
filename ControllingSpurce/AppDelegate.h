//
//  AppDelegate.h
//  ControllingSpurce
//
//  Created by Sergey Doroshenko on 10/31/13.
//  Copyright (c) 2013 Streambox. All rights reserved.
//

#import <UIKit/UIKit.h>
//epty
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
