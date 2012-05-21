//
//  TClientMasterViewController.h
//  TravelAppClient
//
//  Created by Ekaterina Larina on 5/20/12.
//  Copyright (c) 2012 Brooklyn College. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TClientDetailViewController;

@interface TClientMasterViewController : UITableViewController

@property (strong, nonatomic) TClientDetailViewController *detailViewController;

@end
