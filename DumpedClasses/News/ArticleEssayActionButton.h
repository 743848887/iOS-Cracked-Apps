//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActionButton.h"

@interface ArticleEssayActionButton : ActionButton
{
    _Bool _centerAlignImage;
    _Bool _disableRedHighlight;
    double _minWidth;
    double _minHeight;
    double _maxWidth;
}

@property(nonatomic) _Bool disableRedHighlight; // @synthesize disableRedHighlight=_disableRedHighlight;
@property(nonatomic) _Bool centerAlignImage; // @synthesize centerAlignImage=_centerAlignImage;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
- (void)updateFrames;
- (void)updateThemes;
- (id)initWithFrame:(struct CGRect)arg1;

@end
