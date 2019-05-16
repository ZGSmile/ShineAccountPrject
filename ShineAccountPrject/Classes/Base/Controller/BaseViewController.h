//
//  BaseViewController.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/15.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaseViewController : UIViewController

// 标题
@property (nonatomic, strong) NSString *navTitle;
// 是否允许侧滑返回
@property (nonatomic, assign, getter=isAllowBack) BOOL allowPanBack;
// 按钮
@property (nonatomic, strong) UIButton *leftButton;
@property (nonatomic, strong) UIButton *rightButton;
// 导航栏
@property (nonatomic, strong) UIColor *navColor;


// 点击了返回按钮
- (void)leftButtonClick;
// 点击了右侧按钮
- (void)rightButtonClick;

- (void)hideNavigationBarLine;
- (void)showNavigationBarLine;

- (void)initUI;

@end

NS_ASSUME_NONNULL_END
