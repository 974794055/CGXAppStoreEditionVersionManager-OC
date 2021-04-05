//
//  CGXAppStoreEditionVersionManager.h
//  下载链接：https://github.com/974794055/CGXAppStoreEditionVersionManager-OC.git
//  作者QQ：974794055
//  Created by CGX on 17/4/20.
//  Copyright © 2017年 CGX. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "CGXAppStoreInfoModel.h"
#import <UIKit/UIKit.h>
@class CGXAppStoreInfoModel;

typedef void(^CheckVersionBlock)(CGXAppStoreInfoModel *appInfo);

@interface CGXAppStoreEditionVersionManager : NSObject

/**
 *  检测新版本(使用系统默认提示框)
 *
 *  appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
 *  containCtrl: 提示框显示在哪个控制器上
 */
+(void)checkNewEditionWithAppID:(NSString *)appID ctrl:(UIViewController *)containCtrl;

/**
 *  检测新版本(使用自定义提示框)
 *
 *  @param appID (应用的AppStore地址里面可获取)
 *  @param checkVersionBlock AppStore上版本信息回调block
 */
+(void)checkNewEditionWithAppID:(NSString *)appID CustomAlert:(CheckVersionBlock)checkVersionBlock;

@end

