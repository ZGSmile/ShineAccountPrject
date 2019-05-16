//
//  BaseView.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/15.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseView : UIView

//==================================== 加载 ====================================//
/// 加载第一个nib
+ (instancetype)loadFirstNib:(CGRect)frame;

/// 加载最后一个nib
+ (instancetype)loadLastNib:(CGRect)frame;

/// 从代码创建view
+ (instancetype)loadCode:(CGRect)frame;

/// 加载指定nib
+ (instancetype)loadNib:(NSInteger)index frame:(CGRect)frame;

/// 初始化UI
- (void)initUI;

@end

NS_ASSUME_NONNULL_END
