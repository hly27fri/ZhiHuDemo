//
//  QFServerConnection.h
//  ZhiHuDemo
//
//  Created by administrator on 14-1-22.
//  Copyright (c) 2014年 GSX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QFServerConnection : NSObject
{
    BOOL    isAllowedDownLoadImages;
}

- (NSDictionary *)getLatestNews;
- (NSDictionary *)getBeforeNews;
- (NSDictionary *)getNewsAtDate:(NSString *)date;

@end