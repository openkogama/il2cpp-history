
/* String GetBuildInfoString() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_GetBuildInfoString
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Build_Info___Version__3_5_14_0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_Build_Info___Version__3_5_14_0__;
}


/* Void SetStreamingAssetVersion(Int32) */

void Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_SetStreamingAssetVersion
               (int32_t version,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_SetStreamingAssetVersion_has_no_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String get_BranchName() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_BranchName
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_release_2025_12_17Maintenance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_release_2025_12_17Maintenance;
}


/* String get_BuildTime() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_BuildTime
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__12_17_2025_7_56_21_AM);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral__12_17_2025_7_56_21_AM;
}


/* DateTime get_BuildTimeDateTime() */

DateTime Assembly-CSharp.dll::BuildSystem::GameBuildSettings::
         GameBuildSettings_get_BuildTimeDateTime(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BuildSystem__GeneratedBuildData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<System::DateTime>__Nullable_System__DateTime_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__2025_12_17T07_56_21_0000000);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BuildSystem__GeneratedBuildData->static_fields->_buildDateTime).hasValue == 0) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral__2025_12_17T07_56_21_0000000;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Globalization__DateTimeFormatInfo);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__DateTimeParse);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar1 == (String *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      DVar3._dateData = (*pcVar2)();
      return (DateTime)DVar3._dateData;
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = (ulonglong)(uint)(pSVar1->fields)._stringLength;
    if (*(int *)&(TypeInfo__System__Globalization__DateTimeFormatInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    dtfi = mscorlib.dll::System::Globalization::DateTimeFormatInfo::
           DateTimeFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__DateTimeParse->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_5._8_8_ = uStack_4;
    RStack_5._pointer._value = &(pSVar1->fields)._firstChar;
    DVar3 = mscorlib.dll::System::DateTimeParse::DateTimeParse_Parse
                      (&RStack_5,dtfi,DateTimeStyles__Enum_None,(MethodInfo *)0x0);
    pGVar6 = TypeInfo__BuildSystem__GeneratedBuildData->static_fields;
    *(undefined8 *)&pGVar6->_buildDateTime = 1;
    (pGVar6->_buildDateTime).value._dateData = DVar3._dateData;
  }
  if ((TypeInfo__BuildSystem__GeneratedBuildData->static_fields->_buildDateTime).hasValue != 0) {
    return (DateTime)
           (TypeInfo__BuildSystem__GeneratedBuildData->static_fields->_buildDateTime).value.
           _dateData;
  }
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  DVar3._dateData = (*pcVar2)();
  return (DateTime)DVar3._dateData;
}


/* Int32 get_LocalDiscCacheAssetVersion() */

int32_t Assembly-CSharp.dll::BuildSystem::GameBuildSettings::
        GameBuildSettings_get_LocalDiscCacheAssetVersion(MethodInfo *method)

{
  return 0x23227e15;
}


/* String get_ReleaseName() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_ReleaseName
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Maintenance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_Maintenance;
}


/* String get_UrlCacheAssetVersionArgument() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::
         GameBuildSettings_get_UrlCacheAssetVersionArgument(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__version_589463061);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral__version_589463061;
}


/* Int32 get_VersionCode() */

int32_t Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_VersionCode
                  (MethodInfo *method)

{
  return 0x4a776;
}


/* String get_VersionGuid() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_VersionGuid
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__989b14cd_4b84_4331_86f6_27695d47);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral__989b14cd_4b84_4331_86f6_27695d47;
}


/* String get_VersionString() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::GameBuildSettings_get_VersionString
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__3_5_14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral__3_5_14_0;
}


/* String get_VersionStringNoBuild() */

String * Assembly-CSharp.dll::BuildSystem::GameBuildSettings::
         GameBuildSettings_get_VersionStringNoBuild(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__3_5_14);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral__3_5_14;
}

