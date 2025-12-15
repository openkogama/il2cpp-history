
/* DateTime get_BuildDateTime() */

DateTime Assembly-CSharp.dll::BuildSystem::GeneratedBuildData::GeneratedBuildData_get_BuildDateTime
                   (MethodInfo *method)

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
    FUN_?(&StringLiteral__2025_12_15T09_00_12_0000000);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BuildSystem__GeneratedBuildData->static_fields->_buildDateTime).hasValue == 0) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral__2025_12_15T09_00_12_0000000;
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

