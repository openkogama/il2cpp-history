
/* AdapterStatus getAdapterStatusForClassName(String) */

AdapterStatus *
Assembly-CSharp.dll::GoogleMobileAds::Api::InitializationStatus::
InitializationStatus_getAdapterStatusForClassName
          (InitializationStatus *this,String *className,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IInitializationStatusClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pAVar6 = (AdapterStatus *)
                   (*(code *)(&(pIVar1->klass->vtable).getAdapterStatusForClassName)[iVar5].method)
                             (pIVar1,className,
                              (&(pIVar1->klass->vtable).getAdapterStatusMap)[iVar5].methodPtr);
          return pAVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient,0
                            );
    pAVar6 = (AdapterStatus *)(*(code *)*puVar7)(pIVar1,className,puVar7[1]);
    return pAVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pAVar6 = (AdapterStatus *)(*pcVar8)();
  return pAVar6;
}


/* Dictionary`2[System.String,GoogleMobileAds.Api.AdapterStatus] getAdapterStatusMap() */

Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *
Assembly-CSharp.dll::GoogleMobileAds::Api::InitializationStatus::
InitializationStatus_getAdapterStatusMap(InitializationStatus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IInitializationStatusClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pDVar6 = (Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *)
                   (*(code *)(&(pIVar1->klass->vtable).getAdapterStatusMap)[iVar5].method)
                             (pIVar1,(&pIVar1->klass[1]._0.image)[iVar5 * 2]);
          return pDVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient,1
                            );
    pDVar6 = (Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *)
             (*(code *)*puVar7)(pIVar1,puVar7[1]);
    return pDVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_String_GoogleMobileAds_Api_AdapterStatus_ *)(*pcVar8)();
  return pDVar6;
}

