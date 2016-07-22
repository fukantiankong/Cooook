//
//  YXSearchCell.h
//  TRProject
//
//  Created by Albert on 16/7/2.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YXSearchCell : UICollectionViewCell

/** 图 */
@property (nonatomic, strong) UIImageView *imageV;

/** 题目 */
@property (nonatomic, strong) UILabel *labelTitle;

/** 描述 */
@property (nonatomic, strong) UILabel *labelDec;

/** 浏览人数 */
@property (nonatomic, strong) UILabel *labelNum;

@end
