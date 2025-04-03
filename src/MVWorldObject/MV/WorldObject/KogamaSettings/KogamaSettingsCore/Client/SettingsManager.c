
/* Void RemoveSetting(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_RemoveSetting
               (SettingsManager *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  source = KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      cRam_? = '\x01';
    }
    ppDVar2 = &(pSVar1->fields).DeltaRemovalData;
    if ((pSVar1->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)this_00;
      func_?(ppDVar2,this_00);
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (*ppDVar2,source,(MethodInfo *)0x0);
    pMVar3 = (pSVar1->fields).worldObject;
    if (pMVar3 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                ((pMVar3->fields).data,*ppDVar2,(MethodInfo *)0x0);
      pAVar4 = (pSVar1->fields).OnValueRemovedLocal;
      if (pAVar4 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_Submit(SettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
    pDVar2 = (pSVar1->fields).DeltaData;
    ppDVar3 = &(pSVar1->fields).DeltaData;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar4 = (pSVar1->fields).worldObject;
      if ((pMVar4 == (MVWorldObject *)0x0) ||
         (pAVar5 = (pSVar1->fields).partialDataUpdate,
         pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pMVar4->fields).id,pDVar2,
                 (pAVar5->fields)._._.method);
      *ppDVar3 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(ppDVar3,0);
    }
    pDVar2 = (pSVar1->fields).DeltaRemovalData;
    ppDVar3 = &(pSVar1->fields).DeltaRemovalData;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar4 = (pSVar1->fields).worldObject;
      if ((pMVar4 == (MVWorldObject *)0x0) ||
         (pAVar5 = (pSVar1->fields).partialDataRemove,
         pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pMVar4->fields).id,pDVar2,
                 (pAVar5->fields)._._.method);
      *ppDVar3 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(ppDVar3,0);
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      cRam_? = '\x01';
    }
    ppDVar2 = &(pSVar1->fields).DeltaData;
    if ((pSVar1->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)this_00;
      func_?(ppDVar2,this_00);
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (*ppDVar2,source,(MethodInfo *)0x0);
    pMVar3 = (pSVar1->fields).worldObject;
    if (pMVar3 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pMVar3->fields).data,source,(MethodInfo *)0x0);
      pAVar4 = (pSVar1->fields).OnValueChangedLocal;
      if (pAVar4 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
                    )0x0) {
        (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

