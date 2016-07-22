//
//  YXCookMenuViewController.h
//  TRProject
//
//  Created by Albert on 16/7/2.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YXMenuModel.h"
@interface YXCookMenuViewController : UIViewController
- (instancetype)initWithData:(MenuDataModel *)data;
/** 只读属性ID */
@property (nonatomic, readonly) MenuDataModel * data;
@end
