//
//  XYZPerson.m
//  Exercicio1
//
//  Created by Daniele Cebin on 12/06/15.
//  Copyright (c) 2015 Daniele Cebin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XYZPerson.h"

@implementation XYZPerson

- (void) saySomething: (NSString *)greeting {
    NSLog(@"%@", greeting);
    
}
- (void) sayHello{
    [self saySomething:@"Hello, world!"];
}


@end
