//
//  TClientDetailViewController.h
//  TravelAppClient
//
//  Created by Ekaterina Larina on 5/20/12.
//  Copyright (c) 2012 Brooklyn College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TClientDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
