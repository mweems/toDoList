//
//  ToDoItem.h
//  toDoList
//
//  Created by Matt Weems on 24/02/2015.
//  Copyright (c) 2015 Matt Weems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
