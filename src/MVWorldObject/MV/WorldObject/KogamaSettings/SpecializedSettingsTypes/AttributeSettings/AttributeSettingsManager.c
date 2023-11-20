
/* Void RemoveAvatarSetting(KogamaSettingValueWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_RemoveAvatarSetting
               (AttributeSettingsManager *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 != (SettingsManager *)0x0) {
    source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                       ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
    pSVar2 = (pSVar1->fields).settingsReporter;
    if (pSVar2 != (SettingsReporter *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        cRam_? = '\x01';
      }
      if ((pSVar2->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
        (pSVar2->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
        func_?(&(pSVar2->fields).DeltaRemovalData,this_00);
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pSVar2->fields).DeltaRemovalData,source,(MethodInfo *)0x0);
      pMVar3 = (pSVar2->fields).worldObject;
      if (pMVar3 != (MVWorldObject *)0x0) {
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                  ((pMVar3->fields).data,(pSVar2->fields).DeltaRemovalData,(MethodInfo *)0x0);
        if ((pSVar2->fields).OnValueRemovedLocal !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          pAVar4 = (pSVar2->fields).OnValueRemovedLocal;
          (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
        }
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_Submit
               (AttributeSettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if ((pSVar1 != (SettingsManager *)0x0) &&
     (pSVar2 = (pSVar1->fields).settingsReporter, pSVar2 != (SettingsReporter *)0x0)) {
    if ((pSVar2->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar3 = (pSVar2->fields).worldObject;
      if ((pMVar3 == (MVWorldObject *)0x0) ||
         (pAVar4 = (pSVar2->fields).partialDataUpdate,
         pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,(pSVar2->fields).DeltaData,
                 (pAVar4->fields)._._.method);
      (pSVar2->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar2->fields).DeltaData,0);
    }
    if ((pSVar2->fields).DeltaRemovalData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar3 = (pSVar2->fields).worldObject;
      if ((pMVar3 == (MVWorldObject *)0x0) ||
         (pAVar4 = (pSVar2->fields).partialDataRemove,
         pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)0x0)) goto code_?;
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,(pMVar3->fields).id,
                 (pSVar2->fields).DeltaRemovalData,(pAVar4->fields)._._.method);
      (pSVar2->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?(&(pSVar2->fields).DeltaRemovalData,0);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateSetting(KogamaSettingValueWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_UpdateSetting
               (AttributeSettingsManager *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 != (SettingsManager *)0x0) {
    source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                       ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
    pSVar2 = (pSVar1->fields).settingsReporter;
    if (pSVar2 != (SettingsReporter *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        cRam_? = '\x01';
      }
      if ((pSVar2->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
        (pSVar2->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
        func_?(&(pSVar2->fields).DeltaData,this_00);
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pSVar2->fields).DeltaData,source,(MethodInfo *)0x0);
      pMVar3 = (pSVar2->fields).worldObject;
      if (pMVar3 != (MVWorldObject *)0x0) {
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                  ((pMVar3->fields).data,source,(MethodInfo *)0x0);
        if ((pSVar2->fields).OnValueChangedLocal !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          pAVar4 = (pSVar2->fields).OnValueChangedLocal;
          (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
        }
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).woData = data;
  func_?(&(this->fields).woData,data);
  (this->fields).attributeSettingWoType = (undefined1)attributeSettingWoType;
  method_00 = TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
  ;
  value = (SettingsManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).settingsReporter = settingsReporter;
  func_?(&value->fields,settingsReporter);
  (this->fields).settingsManager = value;
  func_?(&this->fields,value);
  return;
}


/* KogamaSettingWrapperBase get_AvailableAttributeSettings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsManager::AttributeSettingsManager_get_AvailableAttributeSettings
          (AttributeSettingsManager *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    cRam_? = '\x01';
  }
  this = (AttributeSettingsManager *)CONCAT31(this._1_3_,(this->fields).attributeSettingWoType);
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar2 = AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     ((AttributeSettingWoType__Enum)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary_1
            (pKVar2,(Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(pAVar1->fields).woData,1,
             (MethodInfo *)0x0);
  this_01 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System::
  Object],Object,Object,Object]::
  Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
            (this_01,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,(MethodInfo *)0x0);
  pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     ((Dictionary_2_System_Object_System_Object_ *)this_00,pKVar2,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_01,(MethodInfo *)0x0);
  return pKVar2;
}


/* KogamaSettingWrapperBase get_Settings() */

KogamaSettingWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
AttributeSettingsManager::AttributeSettingsManager_get_Settings
          (AttributeSettingsManager *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                   );
    cRam_? = '\x01';
  }
  this = (AttributeSettingsManager *)CONCAT31(this._1_3_,(this->fields).attributeSettingWoType);
  if ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar2 = AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     ((AttributeSettingWoType__Enum)this,(MethodInfo *)0x0);
  values = (pAVar1->fields).woData;
  this_00 = (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object_
             *)func_?(
                              TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                              );
  mscorlib.dll::System::Func`4[System::Collections::Generic::KeyValuePair`2[System::Object,System::
  Object],Object,Object,Object]::
  Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Object_Object_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,(MethodInfo *)0x0);
  pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar2,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
  return pKVar2;
}

