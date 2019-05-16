//
//  BaseTabBar.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/14.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - typedef
typedef void (^BaseTabBarClick)(NSInteger index);

@interface BaseTabBar : UITabBar

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, copy  ) BaseTabBarClick click;
@end

NS_ASSUME_NONNULL_END
