//
//  XYZPerson.h
//  Exercicio1
//
//  Created by Daniele Cebin on 12/06/15.
//  Copyright (c) 2015 Daniele Cebin. All rights reserved.
//


//Use Xcode’s New File template window to create the interface and implementation files for an Objective-C class called XYZPerson, which inherits from NSObject.
//Add properties for a person’s first name, last name and date of birth (dates are represented by the NSDate class) to the XYZPerson class interface.
//Declare the sayHello method and implement it as shown earlier in the chapter.
//Add a declaration for a class factory method, called “person”. 

#ifndef Exercicio1_XYZPerson_h
#define Exercicio1_XYZPerson_h

@interface XYZPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *dateBirth;

- (void) sayHello;
- (void) saySomething: (NSString *)greeting;
+ (void) person; //não entendi muito bem esse "factory method"

@end
#endif
