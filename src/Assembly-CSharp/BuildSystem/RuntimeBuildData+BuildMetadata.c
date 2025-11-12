
/* String get_BuildTimeString() */

String * Assembly-CSharp.dll::BuildSystem::RuntimeBuildData+BuildMetadata::
         RuntimeBuildData_BuildMetadata_get_BuildTimeString
                   (RuntimeBuildData_BuildMetadata *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  dateTime._dateData = (this->fields)._BuildTime_k__BackingField._dateData;
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread((MethodInfo *)0x0);
  if (this_00 != (Thread *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Globalization__CultureInfo);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    provider = mscorlib.dll::System::Threading::Thread::Thread_GetCurrentCultureNoAppX
                         (this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTimeFormat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTimeFormat,0,provider,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTimeFormat->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__DateTimeFormat);
    }
    pSVar1 = mscorlib.dll::System::DateTimeFormat::DateTimeFormat_Format_1
                       (dateTime,(String *)0x0,(IFormatProvider *)provider,
                        (TimeSpan)
                        (TypeInfo__System__DateTimeFormat->static_fields->NullOffset)._ticks,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String get_UrlCacheAssetVersionArgument() */

String * Assembly-CSharp.dll::BuildSystem::RuntimeBuildData+BuildMetadata::
         RuntimeBuildData_BuildMetadata_get_UrlCacheAssetVersionArgument
                   (RuntimeBuildData_BuildMetadata *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__version__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields)._StreamingAssetsVersion_k__BackingField;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral__version__0_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

