/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol FileLockerDelegate
- (int)fileLocker:(id)fp8 actionForApparentlyAbandonedLock:(id)fp12 onAttempt:(int)fp16;
- (void)fileLocker:(id)fp8 lockWasStolen:(id)fp12;
@end

