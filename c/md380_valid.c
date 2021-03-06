/* Generated by Macrocoder - do not edit */
#define _CRT_SECURE_NO_WARNINGS
#include "md380_valid.h"
#include <string.h>
#include "binlib.h"
#include "crc.h"
#include <assert.h>

/* Validate record ChannelInformation */
static int validate_ChannelInformation (const TRDTFile* container, const T_ChannelInformation* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);
	
	/* FIELD: PrivacyNo */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "ChannelInformation", recordLine, "PrivacyNo", s))
	if (rec->Privacy == 2 && rec->PrivacyNo > 7) REPORT ("out of range (with Privacy=enhanced, range is 0-7)");  
	#undef REPORT

	return noOfViolations;
}

/* Validate record DigitalContact */
static int validate_DigitalContact (const TRDTFile* container, const T_DigitalContact* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);

	return noOfViolations;
}

/* Validate record DigitalRxGroupList */
static int validate_DigitalRxGroupList (const TRDTFile* container, const T_DigitalRxGroupList* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);

	return noOfViolations;
}

/* Validate record GeneralSettings */
static int validate_GeneralSettings (const TRDTFile* container, const T_GeneralSettings* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);
	
	/* FIELD: RadioId */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "RadioId", s))
	if (rec->RadioId > 16776415) REPORT ("max is 16776415");
	#undef REPORT
	
	/* FIELD: TxPreamble */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "TxPreamble", s))
	if (rec->TxPreamble > 144) REPORT ("max value is 144");
	#undef REPORT
	
	/* FIELD: GroupCallHangTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "GroupCallHangTime", s))
	if (rec->GroupCallHangTime > 70) REPORT ("max value is 70");
	if ((rec->GroupCallHangTime % 5) != 0) REPORT ("must be multiple of 5");
	#undef REPORT
	
	/* FIELD: PrivateCallHangTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "PrivateCallHangTime", s))
	if (rec->PrivateCallHangTime > 70) REPORT ("max value is 70");
	if ((rec->PrivateCallHangTime % 5) != 0) REPORT ("must be multiple of 5");
	#undef REPORT
	
	/* FIELD: VoxSensitivity */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "VoxSensitivity", s))
	if (rec->VoxSensitivity < 1 || rec->VoxSensitivity > 10) REPORT ("allowed range 1...10");
	#undef REPORT
	
	/* FIELD: RxLowBatteryInterval */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "RxLowBatteryInterval", s))
	if (rec->TxPreamble > 127) REPORT ("max value is 127");
	#undef REPORT
	
	/* FIELD: CallAlertTone */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "CallAlertTone", s))
	if (rec->CallAlertTone > 240) REPORT ("max value is 240");
	#undef REPORT
	
	/* FIELD: LoneWorkerRespTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "LoneWorkerRespTime", s))
	if (rec->LoneWorkerRespTime < 1) REPORT ("min value is 1");
	#undef REPORT
	
	/* FIELD: LoneWorkerReminderTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "LoneWorkerReminderTime", s))
	if (rec->LoneWorkerReminderTime < 1) REPORT ("min value is 1");
	#undef REPORT
	
	/* FIELD: ScanDigitalHangTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "ScanDigitalHangTime", s))
	if (rec->ScanDigitalHangTime < 5 || rec->ScanDigitalHangTime > 100 || ((rec->ScanDigitalHangTime % 5) != 0)) REPORT ("value between 5 and 100, multiple of 5");
	#undef REPORT
	
	/* FIELD: ScanAnalogHangTime */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "GeneralSettings", recordLine, "ScanAnalogHangTime", s))
	if (rec->ScanAnalogHangTime < 5 || rec->ScanAnalogHangTime > 100 || ((rec->ScanAnalogHangTime % 5) != 0)) REPORT ("value between 5 and 100, multiple of 5");
	#undef REPORT

	return noOfViolations;
}

/* Validate record ScanList */
static int validate_ScanList (const TRDTFile* container, const T_ScanList* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);

	return noOfViolations;
}

/* Validate record TextMessage */
static int validate_TextMessage (const TRDTFile* container, const T_TextMessage* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);
	
	/* FIELD: Text */
	#define REPORT(s) (noOfViolations++, reportErrorFunc(reportErrorParam, "TextMessage", recordLine, "Text", s))
	if (rec->Text[0] == 0) REPORT ("no empty messages allowed");
	#undef REPORT

	return noOfViolations;
}

/* Validate record ZoneInformation */
static int validate_ZoneInformation (const TRDTFile* container, const T_ZoneInformation* rec, int recordLine, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	NOWARN_UNUSED(container);
	NOWARN_UNUSED(rec);
	NOWARN_UNUSED(recordLine);
	NOWARN_UNUSED(reportErrorFunc);
	NOWARN_UNUSED(reportErrorParam);

	return noOfViolations;
}
/* Validate an entire container */
int validateContainer(const TRDTFile* container, ReportErrorFunc reportErrorFunc, void* reportErrorParam)
{
	int noOfViolations = 0;
	unsigned i;
	
	for (i=0; i<container->ChannelInformation_COUNT; i++) {
		noOfViolations += validate_ChannelInformation (container, container->ChannelInformation+i, i, reportErrorFunc, reportErrorParam);
	}
	
	for (i=0; i<container->DigitalContact_COUNT; i++) {
		noOfViolations += validate_DigitalContact (container, container->DigitalContact+i, i, reportErrorFunc, reportErrorParam);
	}
	
	for (i=0; i<container->DigitalRxGroupList_COUNT; i++) {
		noOfViolations += validate_DigitalRxGroupList (container, container->DigitalRxGroupList+i, i, reportErrorFunc, reportErrorParam);
	}
	
	noOfViolations += validate_GeneralSettings (container, &container->GeneralSettings, -1, reportErrorFunc, reportErrorParam);
	
	for (i=0; i<container->ScanList_COUNT; i++) {
		noOfViolations += validate_ScanList (container, container->ScanList+i, i, reportErrorFunc, reportErrorParam);
	}
	
	for (i=0; i<container->TextMessage_COUNT; i++) {
		noOfViolations += validate_TextMessage (container, container->TextMessage+i, i, reportErrorFunc, reportErrorParam);
	}
	
	for (i=0; i<container->ZoneInformation_COUNT; i++) {
		noOfViolations += validate_ZoneInformation (container, container->ZoneInformation+i, i, reportErrorFunc, reportErrorParam);
	}
	return noOfViolations;
}
