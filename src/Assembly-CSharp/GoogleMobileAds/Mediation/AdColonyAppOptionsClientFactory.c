
/* IAdColonyAppOptionsClient getAdColonyAppOptionsInstance() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient);
    cRam_? = '\x01';
  }
  pIVar1 = (IAdColonyAppOptionsClient *)
           func_?(TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient);
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient__DummyClient__
                     );
      func_?(&StringLiteral_Dummy_);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pIVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pMVar2 = MethodInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient__DummyClient__;
    if (MethodInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient__DummyClient__->
        is_inflated != 0) {
      pMVar2 = (MethodInfo *)
               func_?(
                              MethodInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient__DummyClient__
                              );
    }
    piVar3 = (int *)func_?(pMVar2,pMVar2->klass);
    if (piVar3 != (int *)0x0) {
      pSVar4 = (String *)(**(code **)(*piVar3 + 0xf4))(piVar3,*(undefined4 *)(*piVar3 + 0xf8));
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (IAdColonyAppOptionsClient *)(*pcVar5)();
  return pIVar1;
}

