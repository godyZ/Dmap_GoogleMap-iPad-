//
//  DetailViewController.h
//  Dmap_GoogleMap(iPad)
//
//  Created by zhangrongjian on 13-3-2.
//  Copyright (c) 2013年 zgy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
