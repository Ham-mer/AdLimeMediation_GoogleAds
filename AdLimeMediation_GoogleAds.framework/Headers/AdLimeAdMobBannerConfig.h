//
//  AdLimeAdMobBannerConfig.h
//  AdLimeMediation_GoogleAds
//
//  Created by AdLimeSdk on 2020/3/2.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <AdLimeSdk/AdLimeSdk.h>
#import <GoogleMobileAds/GADAdSize.h>
#import "AdLimeGoogleAdsTypes.h"

@interface AdLimeAdMobBannerConfig : AdLimeNetworkConfig

@property(nonatomic, assign) GADAdSize anchoredAdaptiveBannerAdSize;
@property(nonatomic, assign) GADAdSize inlineAdaptiveBannerAdSize;

- (GADAdSize)getAdaptiveBannerAdSize:(BOOL)isInline;
+ (GADAdSize)getDefaultAdaptiveBannerAdSize:(BOOL)isInline;

#pragma mark - Unity
- (void)setAnchoredAdaptiveBannerSize:(CGFloat)width orientation:(AdLimeGoogleAdsBannerOrientation)orientation;
- (void)setInlineAdaptiveBannerSize:(CGFloat)width orientation:(AdLimeGoogleAdsBannerOrientation)orientation;

@end
