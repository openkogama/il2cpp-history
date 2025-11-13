
/* Void RemoveAvatarSetting(KogamaSettingValueWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_RemoveAvatarSetting
               (AttributeSettingsManager *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                     ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
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
    if ((pSVar3->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
      bVar4 = iRam_? != 0;
      (pSVar3->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pSVar3->fields).DeltaRemovalData >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar3->fields).DeltaRemovalData,source,(MethodInfo *)0x0);
    pMVar9 = (pSVar3->fields).worldObject;
    if (pMVar9 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
                ((pMVar9->fields).data,(pSVar3->fields).DeltaRemovalData,0,(MethodInfo *)0x0);
      if ((pSVar3->fields).OnValueRemovedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar10 = (pSVar3->fields).OnValueRemovedLocal;
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,(pSVar3->fields).DeltaRemovalData,
                   (pAVar10->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_Submit
               (AttributeSettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 == (SettingsReporter *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pSVar3->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar4 = (pSVar3->fields).worldObject;
    if ((pMVar4 == (MVWorldObject *)0x0) ||
       (pAVar5 = (pSVar3->fields).partialDataUpdate,
       pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar5->fields)._._.invoke_impl)
              ((pAVar5->fields)._._.method_code,(pMVar4->fields).id,(pSVar3->fields).DeltaData,
               (pAVar5->fields)._._.method);
    bVar6 = iRam_? != 0;
    (pSVar3->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(pSVar3->fields).DeltaData >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if ((pSVar3->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar4 = (pSVar3->fields).worldObject;
    if ((pMVar4 == (MVWorldObject *)0x0) ||
       (pAVar5 = (pSVar3->fields).partialDataRemove,
       pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)0x0)) goto code_?;
    (*(pAVar5->fields)._._.invoke_impl)
              ((pAVar5->fields)._._.method_code,(pMVar4->fields).id,
               (pSVar3->fields).DeltaRemovalData,(pAVar5->fields)._._.method);
    bVar6 = iRam_? != 0;
    (pSVar3->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(pSVar3->fields).DeltaRemovalData >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  return;
}


/* Void UpdateSetting(KogamaSettingValueWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_UpdateSetting
               (AttributeSettingsManager *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                     ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
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
    if ((pSVar3->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
      bVar4 = iRam_? != 0;
      (pSVar3->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pSVar3->fields).DeltaData >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar3->fields).DeltaData,source,(MethodInfo *)0x0);
    pMVar9 = (pSVar3->fields).worldObject;
    if (pMVar9 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pMVar9->fields).data,source,(MethodInfo *)0x0);
      if ((pSVar3->fields).OnValueChangedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar10 = (pSVar3->fields).OnValueChangedLocal;
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,source,(pAVar10->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AttributeSettingsManager(Dictionary`2[System.Object,System.Object], AttributeSettingWoType,
   SettingsReporter) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager__ctor
               (AttributeSettingsManager *this,Dictionary_2_System_Object_System_Object_ *data,
               AttributeSettingWoType__Enum attributeSettingWoType,
               SettingsReporter *settingsReporter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).woData = data;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).woData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).attributeSettingWoType = (uint8_t)attributeSettingWoType;
  pSVar6 = (SettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                        );
  iVar7 = iRam_?;
  (pSVar6->fields).settingsReporter = settingsReporter;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pSVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).settingsManager = pSVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* KogamaSettingWrapperBase get_AvailableAttributeSettings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsManager::AttributeSettingsManager_get_AvailableAttributeSettings
          (AttributeSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).attributeSettingWoType;
  if (*(int *)&(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pKVar2 = AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot((uint)bVar1,(MethodInfo *)0x0);
  target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary
                     (pKVar2,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            (target,(this->fields).woData,1,(MethodInfo *)0x0);
  factoryFunc = (String__Class *)
                FUN_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
  FUN_?(factoryFunc);
  pSVar3 = factoryFunc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar4 = (String *)FUN_?();
code_?:
    FUN_?(pSVar4,pSVar3);
  }
  else {
    uStack_5 = 0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    uStack_12 = (ulonglong)(uint)(target->fields)._version;
    uStack_13 = 2;
    auStack_14._8_8_ = uStack_12;
    auStack_14._16_8_ = (String *)0x0;
    auStack_14._24_8_ = (Object *)0x0;
    puStack_15 = (undefined *)0x2;
    pDStack_8 = target;
    auStack_14._0_8_ = target;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_14,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar16 == 0) {
        return (KogamaSettingWrapperBase *)0x0;
      }
      if (pKVar2 == (KogamaSettingWrapperBase *)0x0) break;
      pSVar17 = (pKVar2->fields).key;
      pSVar18 = (String *)0x0;
      if ((String *)auStack_14._16_8_ != (String *)0x0) {
        if (*(String__Class **)auStack_14._16_8_ == pSRam0000000182db2520) {
          pSVar18 = (String *)auStack_14._16_8_;
        }
        pSVar4 = (String *)auStack_14._16_8_;
        pSVar3 = pSRam0000000182db2520;
        if (pSVar18 == (String *)0x0) goto code_?;
      }
      if ((pSVar18 == pSVar17) ||
         ((((pSVar18 != (String *)0x0 && (pSVar17 != (String *)0x0)) &&
           ((pSVar18->fields)._stringLength == (pSVar17->fields)._stringLength)) &&
          (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar18->fields)._firstChar,
                              (uint8_t *)&(pSVar17->fields)._firstChar,
                              (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar16 != 0)))) {
        KStack_19.key = (Object *)auStack_14._16_8_;
        KStack_19.value = (Object *)auStack_14._24_8_;
        pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues_1
                           (&KStack_19,pKVar2,(KogamaSettingsCollectionBase *)0x0,
                            (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)factoryFunc,(MethodInfo *)0x0);
        return pKVar2;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar20)();
  return pKVar2;
}


/* KogamaSettingWrapperBase get_Settings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsManager::AttributeSettingsManager_get_Settings
          (AttributeSettingsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).attributeSettingWoType;
  if (*(int *)&(
               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pKVar2 = AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot((uint)bVar1,(MethodInfo *)0x0);
  pDVar3 = (this->fields).woData;
  factoryFunc = (String__Class *)
                FUN_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                             );
  FUN_?(factoryFunc);
  pSVar4 = factoryFunc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar5 = (String *)FUN_?();
code_?:
    FUN_?(pSVar5,pSVar4);
  }
  else {
    uStack_6 = 0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    uStack_13 = (ulonglong)(uint)(pDVar3->fields)._version;
    uStack_14 = 2;
    auStack_15._8_8_ = uStack_13;
    auStack_15._16_8_ = (String *)0x0;
    auStack_15._24_8_ = (Object *)0x0;
    puStack_16 = (undefined *)0x2;
    pDStack_9 = pDVar3;
    auStack_15._0_8_ = pDVar3;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_15,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar17 == 0) {
        return (KogamaSettingWrapperBase *)0x0;
      }
      if (pKVar2 == (KogamaSettingWrapperBase *)0x0) break;
      pSVar18 = (pKVar2->fields).key;
      pSVar19 = (String *)0x0;
      if ((String *)auStack_15._16_8_ != (String *)0x0) {
        if (*(String__Class **)auStack_15._16_8_ == pSRam0000000182db2520) {
          pSVar19 = (String *)auStack_15._16_8_;
        }
        pSVar5 = (String *)auStack_15._16_8_;
        pSVar4 = pSRam0000000182db2520;
        if (pSVar19 == (String *)0x0) goto code_?;
      }
      if ((pSVar19 == pSVar18) ||
         ((((pSVar19 != (String *)0x0 && (pSVar18 != (String *)0x0)) &&
           ((pSVar19->fields)._stringLength == (pSVar18->fields)._stringLength)) &&
          (bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar19->fields)._firstChar,
                              (uint8_t *)&(pSVar18->fields)._firstChar,
                              (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar17 != 0)))) {
        KStack_20.key = (Object *)auStack_15._16_8_;
        KStack_20.value = (Object *)auStack_15._24_8_;
        pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues_1
                           (&KStack_20,pKVar2,(KogamaSettingsCollectionBase *)0x0,
                            (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                             *)factoryFunc,(MethodInfo *)0x0);
        return pKVar2;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  pKVar2 = (KogamaSettingWrapperBase *)(*pcVar21)();
  return pKVar2;
}

