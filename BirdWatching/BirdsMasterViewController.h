//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Sebastian Wegener on 25.03.13.
//  Copyright (c) 2013 Sebastian Wegener. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
