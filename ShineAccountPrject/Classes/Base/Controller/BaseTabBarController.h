//
//  BaseTabBarController.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/14.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseTabBarController : UITabBarController

@property (nonatomic, assign) NSInteger index;

- (void)hideTabbar:(BOOL)hidden;

@end

NS_ASSUME_NONNULL_END
