//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMCommandFactory : NSObject
{
}

+ (id)continousCmdWithCmd:(id)arg1 key:(id)arg2 state:(long long)arg3;
+ (id)commandToRemoveView:(id)arg1 from:(id)arg2;
+ (id)commandToAddView:(id)arg1 to:(id)arg2;
+ (id)commandForLabel:(id)arg1 state:(id)arg2;
+ (id)commandForView:(id)arg1 transform:(struct CGAffineTransform)arg2;
+ (id)commandForCmds:(id)arg1;
+ (id)commandWithReceiver:(id)arg1;

@end

