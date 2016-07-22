//
//  YXMenuModel.m
//  TRProject
//
//  Created by Albert on 16/6/16.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import "YXMenuModel.h"

@implementation YXMenuModel
+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass{
    return @{@"data": [MenuDataModel class]};
}
@end
@implementation MenuDataModel
+ (NSDictionary<NSString *,id> *)modelCustomPropertyMapper{
    return @{@"ID": @"id",
             @"desc": @"description"};
}
@end


