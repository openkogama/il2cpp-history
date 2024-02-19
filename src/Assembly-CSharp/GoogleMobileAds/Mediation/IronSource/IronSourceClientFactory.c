
/* IIronSourceClient CreateIronSourceClient() */

IIronSourceClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::IronSource::IronSourceClientFactory::
IronSourceClientFactory_CreateIronSourceClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__
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
    return (IIronSourceClient *)value;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (IIronSourceClient *)(*pcVar4)();
  return pIVar5;
}

