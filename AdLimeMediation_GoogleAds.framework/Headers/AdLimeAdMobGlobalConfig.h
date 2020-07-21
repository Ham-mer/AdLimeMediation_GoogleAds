//
//  AdLimeAdMobGlobalConfig.h
//  AdLimeMediation_GoogleAds
//
//  Created by AdLimeSdk on 2020/6/1.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdLimeSdk/AdLimeSdk.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeAdMobGlobalConfig : AdLimeNetworkConfig

@property(nonatomic, strong) NSArray<NSString *> *testDeviceIdentifiers;

@end

NS_ASSUME_NONNULL_END
