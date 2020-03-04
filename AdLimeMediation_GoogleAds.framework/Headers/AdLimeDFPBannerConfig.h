//
//  AdLimeDFPBannerConfig.h
//  AdLimeMediation_GoogleAds
//
//  Created by AdLimeSdk on 2020/3/2.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <AdLimeSdk/AdLimeSdk.h>
#import <GoogleMobileAds/GADAdSize.h>
#import "AdLimeGoogleAdsTypes.h"

@interface AdLimeDFPBannerConfig : AdLimeNetworkConfig

@property(nonatomic, assign) GADAdSize adaptiveBannerAdSize;
+ (GADAdSize) getDefaultAdaptiveBannerAdSize;

// For Unity
-(void)setAdaptiveBannerSize:(CGFloat)width orientation:(AdLimeGoogleAdsBannerOrientation)orientation;

@end
