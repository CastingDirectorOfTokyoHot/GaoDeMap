//
//  GaoMapTool.h
//  TestGaoDeMap
//
//  Created by libo on 15/9/29.
//  Copyright (c) 2015年 libo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class GaoMapView;
@class AMapTransit;

/**
 *  地图工具
 */

@interface GaoMapTool : NSObject

/**
 *  地图截屏
 */

+(UIImage *)takeSnapInMap:(GaoMapView *)map rect:(CGRect)rect;

/**
 *  计算两经纬度的距离
 *  lat纬度  lon经度
 *  @return 单位米
 */
double getDistance(double lat1, double lon1, double lat2, double lon2);

/**
 *  时间转换
 *  将秒转为字符串，类似："1小时3分钟"
 */
+(NSString *)secondsToFormatString:(NSInteger)seconds;

/**
 *  路程转换
 *
 *  @param meter 米
 *
 *  @return 返回类似 "1公里50米"
 */
+(NSString *)meterToFormatString:(NSInteger)meter;

/**
 *  将公交路线拼写成：xx路 - xx路
 *
 */
+ (NSString *)generateBusline:(AMapTransit *)transit;

/**
 *  解析站点名
 *
 *  @param stationCount 返回共有多少站地
 *  @param transit      公交路线
 *
 *  @return 返回公交路线字符串数组
 */
+ (NSArray *)getStations:(int *)stationCount transit:(AMapTransit *)transit;

//统计action
+(void)collectionActions:(NSString *)action;

@end
