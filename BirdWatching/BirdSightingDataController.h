//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Sebastian Wegener on 25.03.13.
//  Copyright (c) 2013 Sebastian Wegener. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
