
/* Int32 GetDeviceSafeWidth() */

int32_t Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds+Utils::
        MobileAds_Utils_GetDeviceSafeWidth(MethodInfo *method)

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
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IMobileAdsClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          iVar6 = (*(code *)(&(pIVar1->klass->vtable).GetDeviceSafeWidth)[iVar5].method)
                            (pIVar1,(&pIVar1->klass[1]._0.image)[iVar5 * 2]);
          return iVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,6);
    iVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1]);
    return iVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  iVar6 = (*pcVar8)();
  return iVar6;
}


/* Single GetDeviceScale() */

float Assembly-CSharp.dll::GoogleMobileAds::Api::MobileAds+Utils::MobileAds_Utils_GetDeviceScale
                (MethodInfo *method)

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
    fVar2 = (float10)func_?(5,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,pIVar1);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}

