//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImage;

@interface PTHFramedImageView : UIControl
{
    _Bool _imageHidden;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIImage *_frameImage;
    UIImage *_highlightedFrameImage;
    UIImage *_backgroundImage;
    UIImage *_highlightedBackgroundImage;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    double _cornerRadius;
    struct UIEdgeInsets _imageInset;
}

@property(nonatomic) _Bool imageHidden; // @synthesize imageHidden=_imageHidden;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets imageInset; // @synthesize imageInset=_imageInset;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *highlightedBackgroundImage; // @synthesize highlightedBackgroundImage=_highlightedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *highlightedFrameImage; // @synthesize highlightedFrameImage=_highlightedFrameImage;
@property(retain, nonatomic) UIImage *frameImage; // @synthesize frameImage=_frameImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInternal:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

