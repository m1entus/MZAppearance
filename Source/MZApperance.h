//
//  MZApperance.h
//  MZAppearance
//
//  Created by Michał Zaborowski on 17.08.2013.
//  Copyright (c) 2013 Michał Zaborowski. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MZ_APPEARANCE_SELECTOR UI_APPEARANCE_SELECTOR

@protocol MZApperance <NSObject>

/* To customize the appearance of all instances of a class, send the relevant appearance modification messages to the appearance proxy for the class.
 */
+ (id)appearance;
@end

@interface MZApperance : NSProxy

/* Applies the appearance of all instances to the object. */
- (void)applyInvocationTo:(id)target;

/* Returns appearance for class */
+ (id)appearanceForClass:(Class)aClass;

@end
