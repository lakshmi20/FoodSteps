//
//  YLPClient.h
//  Pods
//
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kYLPAPIHost;

@interface YLPClient : NSObject

- (instancetype)initWithConsumerKey:(NSString *)consumerKey
                     consumerSecret:(NSString *)consumerSecret
                              token:(NSString *)token
                        tokenSecret:(NSString *)tokenSecret;

@end

NS_ASSUME_NONNULL_END
