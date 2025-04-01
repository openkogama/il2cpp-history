
/* Boolean Reload() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_Reload(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Failed_to_get_an_ad_after_);
    cRam_? = '\x01';
  }
  this_00 = &(this->fields).loadAttempts;
  if (-1 < *this_00) {
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Failed_to_get_an_ad_after_,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return 0;
  }
  *this_00 = *this_00 + 1;
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
         MobileAdManager_AdLoadState_ToString(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_IsOk__0_u000A_loadingAd__1_u000A_loadAtt);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MobileAdManager_AdLoadState *)
         (CONCAT13((byte)((uint)(this->fields).loadAttempts >> 0x1f),this._0_3_) ^ 0x1000000);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  bStack_2 = (pMVar1->fields).loadingAd;
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_2);
  iStack_3 = (pMVar1->fields).loadAttempts;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_IsOk__0_u000A_loadingAd__1_u000A_loadAtt,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}


/* Boolean get_IsOk() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_get_IsOk(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  return (byte)((uint)(this->fields).loadAttempts >> 0x1f) ^ 1;
}

