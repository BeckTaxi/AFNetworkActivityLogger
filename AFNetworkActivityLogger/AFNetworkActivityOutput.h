//
//  AFNetworkActivityOutput.h
//  Pods
//
//  Created by Niko Papadakis on 2017-05-01.
//
//

#import <Foundation/Foundation.h>

@protocol AFNetworkActivityOutput

-(void)logInfo:(NSString*)message;
-(void)logError:(NSString*)message statusCode:(NSInteger)statusCode;

@end

@interface AFNetworkActivityConsoleOutput : NSObject<AFNetworkActivityOutput>

@end
