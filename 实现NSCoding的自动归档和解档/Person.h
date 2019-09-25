//
//  Person.h
//  实现NSCoding的自动归档和解档
//
//  Created by zhifu360 on 2019/9/25.
//  Copyright © 2019 ZZJ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject<NSCoding>

@property (nonatomic, copy) NSString *name;

@end

NS_ASSUME_NONNULL_END
