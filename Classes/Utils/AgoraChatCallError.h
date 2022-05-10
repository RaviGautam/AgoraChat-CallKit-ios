//
//  AgoraChatCallError.h
//  EaseIM
//
//  Created by lixiaoming on 2021/1/29.
//  Copyright © 2021 lixiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AgoraChatCallDefine.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * EaseCallKit 错误异常类
 */
@interface AgoraChatCallError : NSObject
/**
 * 错误类型，包括IM错误，RTC错误，业务逻辑错误
 */
@property (nonatomic) AgoarChatCallErrorType aErrorType;
/**
 * 错误ID
 */
@property (nonatomic) NSInteger errCode;
/**
 * 错误描述信息
 */
@property (nonatomic) NSString *errDescription;

+ (instancetype)errorWithType:(AgoarChatCallErrorType)aType code:(NSInteger)errCode description:(NSString*)aDescription;

@end

NS_ASSUME_NONNULL_END
