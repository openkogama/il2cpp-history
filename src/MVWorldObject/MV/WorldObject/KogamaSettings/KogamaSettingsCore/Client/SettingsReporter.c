
/* Void OnValueChange(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_OnValueChange
               (SettingsReporter *this,Dictionary_2_System_Object_System_Object_ *deltaChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bVar1 = iRam_? != 0;
    (this->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).DeltaData >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).DeltaData,deltaChange,(MethodInfo *)0x0);
  pMVar6 = (this->fields).worldObject;
  if (pMVar6 == (MVWorldObject *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((pMVar6->fields).data,deltaChange,(MethodInfo *)0x0);
  if ((this->fields).OnValueChangedLocal !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
    pAVar8 = (this->fields).OnValueChangedLocal;
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,deltaChange,(pAVar8->fields)._._.method);
  }
  return;
}


/* Void OnValueRemoved(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_OnValueRemoved
               (SettingsReporter *this,Dictionary_2_System_Object_System_Object_ *deltaChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    bVar1 = iRam_? != 0;
    (this->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).DeltaRemovalData >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).DeltaRemovalData,deltaChange,(MethodInfo *)0x0);
  pMVar6 = (this->fields).worldObject;
  if (pMVar6 == (MVWorldObject *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((pMVar6->fields).data,(this->fields).DeltaRemovalData,0,(MethodInfo *)0x0);
  if ((this->fields).OnValueRemovedLocal ==
      (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
    return;
  }
  pAVar8 = (this->fields).OnValueRemovedLocal;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar8->fields)._._.invoke_impl)
            ((pAVar8->fields)._._.method_code,(this->fields).DeltaRemovalData,
             (pAVar8->fields)._._.method);
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_Submit(SettingsReporter *this,MethodInfo *method)

{
  if ((this->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar1 = (this->fields).worldObject;
    if ((pMVar1 == (MVWorldObject *)0x0) ||
       (pAVar2 = (this->fields).partialDataUpdate,
       pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pMVar1->fields).id,(this->fields).DeltaData,
               (pAVar2->fields)._._.method);
    bVar3 = iRam_? != 0;
    (this->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).DeltaData >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  if ((this->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar1 = (this->fields).worldObject;
    if ((pMVar1 == (MVWorldObject *)0x0) ||
       (pAVar2 = (this->fields).partialDataRemove,
       pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pMVar1->fields).id,(this->fields).DeltaRemovalData,
               (pAVar2->fields)._._.method);
    bVar3 = iRam_? != 0;
    (this->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).DeltaRemovalData >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  return;
}


/* SettingsReporter(MVWorldObject,
   Action`2[Int32,System.Collections.Generic.Dictionary`2[System.Object,System.Object]],
   Action`2[Int32,System.Collections.Generic.Dictionary`2[System.Object,System.Object]]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter__ctor
               (SettingsReporter *this,MVWorldObject *worldObject,
               Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *partialDataUpdate,
               Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
               *partialDataRemove,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).worldObject = worldObject;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).partialDataUpdate = partialDataUpdate;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).partialDataUpdate >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).partialDataRemove = partialDataRemove;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).partialDataRemove >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void 
   add_OnValueChangedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_add_OnValueChangedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  a = (this->fields).OnValueChangedLocal;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   add_OnValueRemovedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_add_OnValueRemovedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  a = (this->fields).OnValueRemovedLocal;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   remove_OnValueChangedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_remove_OnValueChangedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueChangedLocal;
  source = (this->fields).OnValueChangedLocal;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   remove_OnValueRemovedLocal(Action`1[System.Collections.Generic.Dictionary`2[System.Object,System.Object]])
    */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
     SettingsReporter::SettingsReporter_remove_OnValueRemovedLocal
               (SettingsReporter *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnValueRemovedLocal;
  source = (this->fields).OnValueRemovedLocal;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

