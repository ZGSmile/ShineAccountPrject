//
//  BaseNavigationController.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/15.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseNavigationController : UINavigationController

#pragma mark - 初始化
+ (instancetype)initWithRootViewController:(UIViewController *)vc;
@end

NS_ASSUME_NONNULL_END
