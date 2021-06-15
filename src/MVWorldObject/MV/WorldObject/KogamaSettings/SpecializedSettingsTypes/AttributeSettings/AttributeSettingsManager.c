
/* Void RemoveAvatarSetting(KogamaSettingValueWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingsManager::AttributeSettingsManager_RemoveAvatarSetting
               (AttributeSettingsManager *this,KogamaSettingValueWrapperBase *attributeSetting,
               MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                     ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
  pSVar4 = (pSVar1->fields).settingsReporter;
  if (pSVar4 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    target = (pSVar4->fields).DeltaRemovalData;
    if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      target = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)target,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar4->fields).DeltaRemovalData = target;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (target,pDVar3,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar4->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
               Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                         (this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                (pDVar3,(pSVar4->fields).DeltaRemovalData,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar4->fields).OnValueRemovedLocal;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)
                           (pSVar4->fields).DeltaRemovalData,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
      }
      return;
    }
  }
  func_?(0);
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
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((pSVar3->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar4 = (pSVar3->fields).worldObject;
      pAVar5 = (Action_2_Int32_Object_ *)(pSVar3->fields).partialDataUpdate;
      if ((pMVar4 == (MVWorldObject *)0x0) ||
         (pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0),
         pAVar5 == (Action_2_Int32_Object_ *)0x0)) goto code_?;
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar5,(int32_t)pIVar6,(Object *)(pSVar3->fields).DeltaData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar3->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    if ((pSVar3->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return;
    }
    pMVar4 = (pSVar3->fields).worldObject;
    pAVar5 = (Action_2_Int32_Object_ *)(pSVar3->fields).partialDataRemove;
    if ((pMVar4 != (MVWorldObject *)0x0) &&
       (pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0),
       pAVar5 != (Action_2_Int32_Object_ *)0x0)) {
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar5,(int32_t)pIVar6,(Object *)(pSVar3->fields).DeltaRemovalData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar3->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_GetSubTree
                     ((KogamaSettingWrapperBase *)attributeSetting,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar4 = (pSVar3->fields).DeltaData;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar3->fields).DeltaData = pDVar4;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (pDVar4,source,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar3->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                         (this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (pDVar4,source,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar3->fields).OnValueChangedLocal;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)source,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
      }
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).woData = data;
  (this->fields).attributeSettingWoType = (undefined1)attributeSettingWoType;
  this_00 = (TextCommand_Command *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                           );
  Assembly-CSharp.dll::TextCommand+Command::TextCommand_Command__ctor
            (this_00,(String__Array *)settingsReporter,(MethodInfo *)0x0);
  (this->fields).settingsManager = (SettingsManager *)this_00;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (AttributeSettingsManager *)CONCAT31(this._1_3_,(this->fields).attributeSettingWoType);
  if ((((uint)(
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar2 = AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     ((AttributeSettingWoType__Enum)this,(MethodInfo *)0x0);
  target = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_KogamaSettingsToDictionary
                     (pKVar2,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            (target,(pAVar1->fields).woData,1,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (target,pKVar2,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (AttributeSettingsManager *)CONCAT31(this._1_3_,(this->fields).attributeSettingWoType);
  if ((((uint)(
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((
      TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
      ->_1).cctor_started == 0)) {
    func_?(
                   TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributePrototypeSettings__AttributePrototypeSettingsManager
                   );
  }
  pKVar2 = AttributeSettings::AttributePrototypeSettings::AttributePrototypeSettingsManager::
           AttributePrototypeSettingsManager_GetRoot
                     ((AttributeSettingWoType__Enum)this,(MethodInfo *)0x0);
  values = (pAVar1->fields).woData;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)0x0,
             MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsFactory__KogamaSettingValueFactoryAttributeSettings_System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Object,_System::Object>,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__Func_System__Object__void__
            );
  pKVar2 = KogamaSettingsCore::KogamaSettingTools::KogamaSettingTools_CreateFromValues
                     (values,pKVar2,
                      (Func_4_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingsCollectionBase_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
                       *)this_00,(MethodInfo *)0x0);
  return pKVar2;
}

