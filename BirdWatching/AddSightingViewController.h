//
//  AddSightingViewController.h
//  
//
//  Created by Sebastian Wegener on 06.04.13.
//
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdName;
@property (weak, nonatomic) IBOutlet UITextField *location;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end
