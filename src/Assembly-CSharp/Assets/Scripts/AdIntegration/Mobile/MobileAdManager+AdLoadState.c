
/* Boolean Reload() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_Reload(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_an_ad_after_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < (this->fields).loadAttempts) {
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).loadAttempts,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Failed_to_get_an_ad_after_,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return 0;
  }
  piVar2 = &(this->fields).loadAttempts;
  *piVar2 = *piVar2 + 1;
  return 1;
}


/* Void ResetAttempts() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_ResetAttempts(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  (this->fields).loadAttempts = 0;
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
         MobileAdManager_AdLoadState_ToString(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_IsOk__0_u000A_loadingAd__1_u000A_loadAtt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] =
       CONCAT31(auStackX_8[0]._1_3_,(byte)((uint)(this->fields).loadAttempts >> 0x1f)) ^ 1;
  arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,(this->fields).loadingAd);
  arg1 = (Object *)FUN_?(uRam_?,auStackX_8);
  auStackX_8[0] = (this->fields).loadAttempts;
  arg2 = (Object *)FUN_?(uRam_?,auStackX_8);
  pSVar1 = StringLiteral_IsOk__0_u000A_loadingAd__1_u000A_loadAtt;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean get_IsOk() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_get_IsOk(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  return (byte)((uint)(this->fields).loadAttempts >> 0x1f) ^ 1;
}

