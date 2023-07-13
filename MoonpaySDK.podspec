Pod::Spec.new do |spec|
    spec.name                     = 'MoonpaySDK'
    spec.version                  = '1.0'
    spec.homepage                 = 'https://github.com/moonpay/mobile-sdk-ios'
    spec.source                   = { :http=> 'https://github.com/moonpay/mobile-sdk-ios/MoonpaySDK.xcframework.zip'}
    spec.authors                  = { 'MoonpaySDK' => 'fbeasley@moonpay.com' }
    spec.license                  = { :type => 'MIT' }
    spec.summary                  = 'This is the iOS SDK for the native plugin to use Moonpay systems'
    spec.vendored_frameworks      = 'build/cocoapods/framework/MoonpaySDK.framework'
    spec.ios.deployment_target = '14.0'

end
