
/* Boolean Reload() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager+AdLoadState::
     MobileAdManager_AdLoadState_Reload(MobileAdManager_AdLoadState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MobileAdManager_AdLoadState *)(this->fields).loadAttempts;
  if (-1 < (int)pMVar1) {
    this = pMVar1;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Failed_to_get_an_ad_after_,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return 0;
  }
  (this->fields).loadAttempts = (int32_t)((int)&pMVar1->klass + 1);
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
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
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

