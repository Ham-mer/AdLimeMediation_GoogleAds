//
//  GADAdSize_Preview.h
//  Google Mobile Ads SDK
//
//  Copyright 2019 Google LLC. All rights reserved.
//

#import <GoogleMobileAds/GADAdSize.h>

/// Returns a GADAdSize with the given width and the device's portrait height. This ad size
/// allows Google servers to choose an optimal ad size less than or equal to the returned size. The
/// exact size of the ad returned is passed through the banner's ad size delegate and is indicated
/// by the banner's intrinsicContentSize. This ad size is most suitable for ads intended for scroll
/// views.
GAD_EXTERN GADAdSize GADPortraitInlineAdaptiveBannerAdSizeWithWidth(CGFloat width);

/// Returns a GADAdSize with the given width and the device's landscape height. This ad size
/// allows Google servers to choose an optimal ad size less than or equal to the returned size. The
/// exact size of the ad returned is passed through the banner's ad size delegate and is indicated
/// by the banner's intrinsicContentSize. This ad size is most suitable for ads intended for scroll
/// views.
GAD_EXTERN GADAdSize GADLandscapeInlineAdaptiveBannerAdSizeWithWidth(CGFloat width);

/// Returns a GADAdSize with the given width and the device's height. This is a convenience
/// function to return GADPortraitInlineAdaptiveBannerAdSizeWithWidth or
/// GADLandscapeInlineAdaptiveBannerAdSizeWithWidth based on the current interface orientation.
/// This function must be called on the main queue.
GAD_EXTERN GADAdSize GADCurrentOrientationInlineAdaptiveBannerAdSizeWithWidth(CGFloat width);
