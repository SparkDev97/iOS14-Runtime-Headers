/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned blue : 1;
	unsigned green : 1;
	unsigned red : 1;
} SCD_Struct_AC1;

typedef struct {
	unsigned badgeModelVersion : 1;
	unsigned goalValue : 1;
	unsigned progressValue : 1;
	unsigned badgeUsesFullColorEnamel : 1;
	unsigned badgeUsesTriColorEnamel : 1;
	unsigned faceHasMetalInlay : 1;
	unsigned unearnedUsesTwoToneEnamel : 1;
} SCD_Struct_AC2;

typedef struct {
	float red;
	float green;
	float blue;
} SCD_Struct_AC3;

typedef struct {
	unsigned createdDate : 1;
	unsigned creatorDevice : 1;
	unsigned displayOrder : 1;
	unsigned duplicateRemovalCalendarUnit : 1;
	unsigned duplicateRemovalStrategy : 1;
	unsigned earnDateStrategy : 1;
	unsigned earnLimit : 1;
	unsigned minimumEngineVersion : 1;
	unsigned mobileAssetVersion : 1;
	unsigned triggers : 1;
	unsigned version : 1;
	unsigned availableOnPairedDevice : 1;
	unsigned displaysEarnedInstanceCount : 1;
} SCD_Struct_AC4;

typedef struct {
	unsigned short year;
	unsigned char month;
	unsigned char day;
	BOOL valid;
} SCD_Struct_AC5;

typedef struct {
	unsigned achievementType : 1;
	unsigned completedDate : 1;
	unsigned doubleValue : 1;
	unsigned intValue : 1;
	unsigned workoutActivityType : 1;
	unsigned alerted : 1;
} SCD_Struct_AC6;
