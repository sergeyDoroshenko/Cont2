//
//  MasterViewController.h
//  ControllingSpurce
//
//  Created by Sergey Doroshenko on 10/31/13.
//  Copyright (c) 2013 Streambox. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
