//
//  YXCookMenuView.h
//  TRProject
//
//  Created by Albert on 16/7/4.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YXCookMenuView : UIView

/** 菜名 */
@property (nonatomic, strong) UILabel *labelTitle;

/** 烹饪时长 */
@property (nonatomic, strong) UILabel *labelTime;

/** 浏览人数 */
@property (nonatomic, strong) UILabel *labelNum;

@end
