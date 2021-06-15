
/* IMobileAdsClient GetMobileAdsClient() */

IMobileAdsClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_GetMobileAdsClient
          (MethodInfo *method)

{
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_MobileAdsInstance
                     ((MethodInfo *)0x0);
  return pIVar1;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_Initialize
               (String *appId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar1 != (IMobileAdsClient *)0x0) {
    func_?(0,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,pIVar1,appId);
    if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr
         & 0x2000000) != 0) &&
       ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
      func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
    }
    GoogleMobileAds::Common::MobileAdsEventExecutor::MobileAdsEventExecutor_Initialize
              ((MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Action`1[GoogleMobileAds.Api.InitializationStatus]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_Initialize_1
               (Action_1_GoogleMobileAds_Api_InitializationStatus_ *initCompleteAction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar1 == (IMobileAdsClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IMobileAdsClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).Initialize_1)[pIVar3->interfaceOffsets[uVar4].offset].
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,1);
code_?:
  (*(code *)*ppMVar6)(pIVar1,initCompleteAction,ppMVar6[1]);
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  GoogleMobileAds::Common::MobileAdsEventExecutor::MobileAdsEventExecutor_Initialize
            ((MethodInfo *)0x0);
  return;
}


/* Void SetApplicationMuted(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetApplicationMuted
               (bool muted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar1 != (IMobileAdsClient *)0x0) {
    func_?(3,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,pIVar1,_muted);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetApplicationVolume(Single) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetApplicationVolume
               (float volume,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar1 == (IMobileAdsClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IMobileAdsClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).SetApplicationVolume)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,2);
code_?:
  (*(code *)*ppMVar6)(pIVar1,volume,ppMVar6[1]);
  return;
}


/* Void SetiOSAppPauseOnBackground(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds_SetiOSAppPauseOnBackground
               (bool pause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar1 != (IMobileAdsClient *)0x0) {
    func_?(4,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,pIVar1,_pause);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MobileAds() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds::MobileAds__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_MobileAdsInstance
                     ((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client = pIVar1;
  return;
}

