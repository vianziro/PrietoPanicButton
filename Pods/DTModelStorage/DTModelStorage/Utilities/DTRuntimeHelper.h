//
//  DTRuntimeHelper.h
//  DTModelStorageTests
//
//  Created by Denys Telezhkin on 28.09.14.
//  Copyright (c) 2014 Denys Telezhkin. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma clang assume_nonnull begin

@interface DTRuntimeHelper : NSObject

+ (NSString *)classStringForClass:(Class)klass;
+ (NSString *)modelStringForClass:(Class)klass;

@end

#pragma clang assume_nonnull end
