//
//  LXDAppFluecyMonitor.h
//  LXDAppFluecyMonitor
//
//  Created by linxinda on 2017/3/22.
//  Copyright © 2017年 Jolimark. All rights reserved.
//

#import <Foundation/Foundation.h>


#define SHAREDMONITOR [LXDAppFluecyMonitor sharedMonitor]


/*!
 *  @brief  监听UI线程卡顿
 */
@interface LXDAppFluecyMonitor : NSObject

+ (instancetype)sharedMonitor;

- (void)startMonitoring;
- (void)stopMonitoring;

@end
