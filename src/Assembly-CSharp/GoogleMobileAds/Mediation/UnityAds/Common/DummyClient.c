
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Common::DummyClient::
     DummyClient_SetConsentMetaData
               (DummyClient *this,String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
  ;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
      ->is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__SetConsentMetaData_System__String__bool_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->klass);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DummyClient() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Common::DummyClient::
     DummyClient__ctor(DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)func_?();
  }
  piVar2 = (int *)func_?(pMVar1);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

