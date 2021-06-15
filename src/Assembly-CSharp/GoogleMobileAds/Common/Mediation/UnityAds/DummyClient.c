
/* Void SetGDPRConsentMetaData(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::Mediation::UnityAds::DummyClient::
     DummyClient_4_SetGDPRConsentMetaData(DummyClient_4 *this,bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient__SetGDPRConsentMetaData_bool_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient__SetGDPRConsentMetaData_bool_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient__SetGDPRConsentMetaData_bool_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DummyClient() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::Mediation::UnityAds::DummyClient::
     DummyClient_4__ctor(DummyClient_4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  pMVar1 = MethodInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient__DummyClient__;
  if ((MethodInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient__DummyClient__->iflags
      & 0x200) != 0) {
    pMVar1 = (MethodInfo *)func_?();
  }
  piVar2 = (int *)func_?(pMVar1);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

