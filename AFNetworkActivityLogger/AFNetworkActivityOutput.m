//
//  AFNetworkActivityOutput.m
//  Pods
//
//  Created by Niko Papadakis on 2017-05-01.
//
//

#import "AFNetworkActivityOutput.h"

@implementation AFNetworkActivityConsoleOutput

-(void)logInfo:(NSString*)message {
    NSLog(@"%@", message);
}

-(void)logError:(NSString*)message statusCode:(NSInteger)statusCode{
    NSLog(@"%@", message);
}

@end
