//
//  BaseNavigationController.m
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/15.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import "BaseNavigationController.h"
#import <AsyncDisplayKit/AsyncDisplayKit.h>

@interface BaseNavigationController ()

@end

@implementation BaseNavigationController

#pragma mark - 初始化
+ (instancetype)initWithRootViewController:(UIViewController *)vc {
    BaseNavigationController *nav = [[BaseNavigationController alloc] initWithRootViewController:vc];
    nav.jz_navigationBarTransitionStyle = JZNavigationBarTransitionStyleSystem;
    return nav;
}
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated {
    if (![viewController isKindOfClass:[ASBaseViewController class]]) {
        if (self.viewControllers.count == 1) {
            BaseViewController *vc = (BaseViewController *)viewController;
            vc.leftButton.hidden = true;
            vc.hidesBottomBarWhenPushed = true;
        } else {
            BaseViewController *vc = (BaseViewController *)viewController;
            vc.leftButton.hidden = true;
            vc.hidesBottomBarWhenPushed = false;
        }
    } else {
        if (self.viewControllers.count == 1) {
            ASBaseViewController *vc = (ASBaseViewController *)viewController;
            //            vc.leftButton.hidden = true;
            vc.hidesBottomBarWhenPushed = true;
        } else {
            ASBaseViewController *vc = (ASBaseViewController *)viewController;
            //            vc.leftButton.hidden = true;
            vc.hidesBottomBarWhenPushed = false;
        }
    }
    
    
    
    //    BaseTabBarController *tab = (BaseTabBarController *)[UIApplication sharedApplication].keyWindow.rootViewController;
    //    if ([viewController isKindOfClass:[HomeController class]] ||
    //        [viewController isKindOfClass:[ChartController class]] ||
    //        [viewController isKindOfClass:[BKCController class]] ||
    //        [viewController isKindOfClass:[FindController class]] ||
    //        [viewController isKindOfClass:[MineController class]]) {
    //        BaseViewController *vc = (BaseViewController *)viewController;
    //        vc.leftButton.hidden = YES;
    ////        [tab hideTabbar:NO];
    //    }
    //    else {
    //        BaseViewController *vc = (BaseViewController *)viewController;
    //        vc.leftButton.hidden = NO;
    //        vc.hidesBottomBarWhenPushed = YES;
    ////        [tab hideTabbar:YES];
    //    }
    
    
    
    [super pushViewController:viewController animated:animated];
}


@end
