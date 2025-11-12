
/* Void RemoveSetting(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_RemoveSetting
               (SettingsManager *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  source = KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
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
    if ((pSVar1->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar2 = iRam_? != 0;
      (pSVar1->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pSVar1->fields).DeltaRemovalData >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar1->fields).DeltaRemovalData,source,(MethodInfo *)0x0);
    pMVar7 = (pSVar1->fields).worldObject;
    if (pMVar7 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
                ((pMVar7->fields).data,(pSVar1->fields).DeltaRemovalData,0,(MethodInfo *)0x0);
      if ((pSVar1->fields).OnValueRemovedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar8 = (pSVar1->fields).OnValueRemovedLocal;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,(pSVar1->fields).DeltaRemovalData,
                   (pAVar8->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_Submit(SettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 == (SettingsReporter *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar1->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar3 = (pSVar1->fields).worldObject;
    if ((pMVar3 == (MVWorldObject *)0x0) ||
       (pAVar4 = (pSVar1->fields).partialDataUpdate,
       pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,(pSVar1->fields).DeltaData,
               (pAVar4->fields)._._.method);
    bVar5 = iRam_? != 0;
    (pSVar1->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pSVar1->fields).DeltaData >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if ((pSVar1->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar3 = (pSVar1->fields).worldObject;
    if ((pMVar3 == (MVWorldObject *)0x0) ||
       (pAVar4 = (pSVar1->fields).partialDataRemove,
       pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,
               (pSVar1->fields).DeltaRemovalData,(pAVar4->fields)._._.method);
    bVar5 = iRam_? != 0;
    (pSVar1->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pSVar1->fields).DeltaRemovalData >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  return;
}


/* Void UpdateSetting(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_UpdateSetting
               (SettingsManager *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  source = KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
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
    if ((pSVar1->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar2 = iRam_? != 0;
      (pSVar1->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pSVar1->fields).DeltaData >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar1->fields).DeltaData,source,(MethodInfo *)0x0);
    pMVar7 = (pSVar1->fields).worldObject;
    if (pMVar7 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pMVar7->fields).data,source,(MethodInfo *)0x0);
      if ((pSVar1->fields).OnValueChangedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar8 = (pSVar1->fields).OnValueChangedLocal;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,source,(pAVar8->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

