//
//  UILayer.h
//  Gorillas
//
//  Created by Maarten Billemont on 08/03/09.
//  Copyright 2009 lhunath (Maarten Billemont). All rights reserved.
//


@interface UILayer : Layer {
    
    Label                                   *messageLabel;
    NSMutableArray                          *messageQueue, *callbackQueue;
    
    RotateTo                                *rotateAction;
    UIAccelerationValue                     accelX, accelY, accelZ;
}

-(void) rotateTo:(float)aRotation;

-(void) message:(NSString *)msg;
-(void) message:(NSString *)msg callback:(id)target :(SEL)selector;

@end