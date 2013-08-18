//
//  MZViewController.h
//  MZAppearance
//
//  Created by Michał Zaborowski on 17.08.2013.
//  Copyright (c) 2013 Michał Zaborowski. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MZAppearance.h"

@interface MZViewController : UIViewController <MZAppearance>

@property (nonatomic,strong) UIColor *customColor MZ_APPEARANCE_SELECTOR;
@property (nonatomic,assign) CGFloat customFloat MZ_APPEARANCE_SELECTOR;

+ (id)appearance;

@end
