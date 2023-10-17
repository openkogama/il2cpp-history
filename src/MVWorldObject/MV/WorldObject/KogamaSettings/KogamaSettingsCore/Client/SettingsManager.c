
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
    if ((pSVar1->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar1->fields).DeltaRemovalData = this_00;
      func_?(&(pSVar1->fields).DeltaRemovalData,this_00);
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar1->fields).DeltaRemovalData,source,(MethodInfo *)0x0);
    pMVar2 = (pSVar1->fields).worldObject;
    if (pMVar2 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                ((pMVar2->fields).data,(pSVar1->fields).DeltaRemovalData,(MethodInfo *)0x0);
      if ((pSVar1->fields).OnValueRemovedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar3 = (pSVar1->fields).OnValueRemovedLocal;
        (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_Submit(SettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
    if ((pSVar1->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar2 = (pSVar1->fields).worldObject;
      if ((pMVar2 == (MVWorldObject *)0x0) ||
         (pAVar3 = (pSVar1->fields).partialDataUpdate,
         pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,(pMVar2->fields).id,(pSVar1->fields).DeltaData,
                 (pAVar3->fields)._._.method);
      (pSVar1->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar1->fields).DeltaData,0);
    }
    if ((pSVar1->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar2 = (pSVar1->fields).worldObject;
      if ((pMVar2 == (MVWorldObject *)0x0) ||
         (pAVar3 = (pSVar1->fields).partialDataRemove,
         pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,(pMVar2->fields).id,
                 (pSVar1->fields).DeltaRemovalData,(pAVar3->fields)._._.method);
      (pSVar1->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar1->fields).DeltaRemovalData,0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    if ((pSVar1->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar1->fields).DeltaData = this_00;
      func_?(&(pSVar1->fields).DeltaData,this_00);
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar1->fields).DeltaData,source,(MethodInfo *)0x0);
    pMVar2 = (pSVar1->fields).worldObject;
    if (pMVar2 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pMVar2->fields).data,source,(MethodInfo *)0x0);
      if ((pSVar1->fields).OnValueChangedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar3 = (pSVar1->fields).OnValueChangedLocal;
        (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

