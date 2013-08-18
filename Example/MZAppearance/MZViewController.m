//
//  MZViewController.m
//  MZAppearance
//
//  Created by Michał Zaborowski on 17.08.2013.
//  Copyright (c) 2013 Michał Zaborowski. All rights reserved.
//

#import "MZViewController.h"
#import "MZAppearance.h"

@interface MZViewController ()

@end

@implementation MZViewController

+ (id)appearance
{
    return [MZAppearance appearanceForClass:[self class]];
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    [[[self class] appearance] applyInvocationTo:self];
    
    NSLog(@"custom color: %@",self.customColor);
    NSLog(@"custom float: %f",self.customFloat);
}


@end
