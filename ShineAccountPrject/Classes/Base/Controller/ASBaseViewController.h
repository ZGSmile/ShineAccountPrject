//
//  ASBaseViewController.h
//  ShineAccountPrject
//
//  Created by 祝争光 on 2019/5/15.
//  Copyright © 2019年 Shine. All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ASBaseViewController : ASViewController


// 标题
@property (nonatomic, strong) NSString *navTitle;
// 按钮
@property (nonatomic, strong) UIButton *leftButton;
@property (nonatomic, strong) UIButton *rightButton;
@end

NS_ASSUME_NONNULL_END
