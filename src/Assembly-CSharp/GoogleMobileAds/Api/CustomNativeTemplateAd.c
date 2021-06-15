
/* List`1[System.String] GetAvailableAssetNames() */

List_1_System_String_ *
Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
CustomNativeTemplateAd_GetAvailableAssetNames(CustomNativeTemplateAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (ICustomNativeTemplateClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pLVar6 = (List_1_System_String_ *)
                   (*(code *)(&(pIVar1->klass->vtable).GetAvailableAssetNames)[iVar5].method)
                             (pIVar1,(&(pIVar1->klass->vtable).GetText)[iVar5].methodPtr);
          return pLVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,2
                            );
    pLVar6 = (List_1_System_String_ *)(*(code *)*puVar7)(pIVar1,puVar7[1]);
    return pLVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pLVar6 = (List_1_System_String_ *)(*pcVar8)();
  return pLVar6;
}


/* String GetCustomTemplateId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
         CustomNativeTemplateAd_GetCustomTemplateId(CustomNativeTemplateAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (ICustomNativeTemplateClient *)0x0) {
    pSVar2 = (String *)
             func_?(0,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,pIVar1
                            );
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String GetText(String) */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
         CustomNativeTemplateAd_GetText(CustomNativeTemplateAd *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (ICustomNativeTemplateClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pSVar6 = (String *)
                   (*(code *)(&(pIVar1->klass->vtable).GetText)[iVar5].method)
                             (pIVar1,key,(&(pIVar1->klass->vtable).PerformClick)[iVar5].methodPtr);
          return pSVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,3
                            );
    pSVar6 = (String *)(*(code *)*puVar7)(pIVar1,key,puVar7[1]);
    return pSVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* Texture2D GetTexture2D(String) */

Texture2D *
Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
CustomNativeTemplateAd_GetTexture2D(CustomNativeTemplateAd *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 == (ICustomNativeTemplateClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pTVar3 = (Texture2D *)(*pcVar2)();
    return pTVar3;
  }
  pIVar4 = pIVar1->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient) {
        ppMVar7 = &(&(pIVar1->klass->vtable).GetImageByteArray)
                   [pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,1)
  ;
code_?:
  img = (Byte__Array *)(*(code *)*ppMVar7)(pIVar1,key,ppMVar7[1]);
  if (img != (Byte__Array *)0x0) {
    pTVar3 = GoogleMobileAds::Common::Utils::Utils_GetTexture2DFromByteArray(img,(MethodInfo *)0x0);
    return pTVar3;
  }
  return (Texture2D *)0x0;
}


/* Void PerformClick(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
     CustomNativeTemplateAd_PerformClick
               (CustomNativeTemplateAd *this,String *assetName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (ICustomNativeTemplateClient *)0x0) {
    func_?(4,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,pIVar1,
                    assetName);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RecordImpression() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::CustomNativeTemplateAd::
     CustomNativeTemplateAd_RecordImpression(CustomNativeTemplateAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (ICustomNativeTemplateClient *)0x0) {
    func_?(5,TypeInfo__GoogleMobileAds__Common__ICustomNativeTemplateClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

