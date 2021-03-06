//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NMSong, NSArray;

@protocol NMListedPlayerController
- (void)preloadNextSong;
- (void)playPreviousSong;
- (void)playNextSong;
- (void)loadNextSong;
- (void)loadMoreSongs;
- (void)removeSongs:(NSArray *)arg1 play:(_Bool)arg2;
- (void)playSongIfInList:(NMSong *)arg1;
- (void)addSongs:(NSArray *)arg1;
- (unsigned long long)songCount;
@end

