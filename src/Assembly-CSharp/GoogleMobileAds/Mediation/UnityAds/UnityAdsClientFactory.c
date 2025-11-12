
/* IUnityAdsClient CreateUnityAdsClient() */

IUnityAdsClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::UnityAdsClientFactory::
UnityAdsClientFactory_CreateUnityAdsClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IUnityAdsClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
              ->field8_0x40).genericMethod)->methodDefinition;
  }
  plVar3 = (longlong *)FUN_?(pMVar2,pMVar2->klass);
  if (plVar3 != (longlong *)0x0) {
    pSVar4 = (String *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    pSVar4 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
    return pIVar1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (IUnityAdsClient *)(*pcVar5)();
  return pIVar1;
}

