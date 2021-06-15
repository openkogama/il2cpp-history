
/* Void RemoveSetting(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_RemoveSetting
               (SettingsManager *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pDVar1 = KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar2 = (this->fields).settingsReporter;
  if (pSVar2 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    target = (pSVar2->fields).DeltaRemovalData;
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
      (pSVar2->fields).DeltaRemovalData = target;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (target,pDVar1,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar2->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                         (this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                (pDVar1,(pSVar2->fields).DeltaRemovalData,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar2->fields).OnValueRemovedLocal;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)
                           (pSVar2->fields).DeltaRemovalData,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Submit() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
     ::SettingsManager_Submit(SettingsManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsReporter;
  if (pSVar1 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((pSVar1->fields).DeltaData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar2 = (pSVar1->fields).worldObject;
      pAVar3 = (Action_2_Int32_Object_ *)(pSVar1->fields).partialDataUpdate;
      if ((pMVar2 == (MVWorldObject *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0),
         pAVar3 == (Action_2_Int32_Object_ *)0x0)) goto code_?;
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar3,(int32_t)pIVar4,(Object *)(pSVar1->fields).DeltaData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar1->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    if ((pSVar1->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      return;
    }
    pMVar2 = (pSVar1->fields).worldObject;
    pAVar3 = (Action_2_Int32_Object_ *)(pSVar1->fields).partialDataRemove;
    if ((pMVar2 != (MVWorldObject *)0x0) &&
       (pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0),
       pAVar3 != (Action_2_Int32_Object_ *)0x0)) {
      System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                (pAVar3,(int32_t)pIVar4,(Object *)(pSVar1->fields).DeltaRemovalData,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      (pSVar1->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (pSVar1->fields).DeltaData;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar1->fields).DeltaData = pDVar2;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (pDVar2,source,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar1->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab
                         (this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (pDVar2,source,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar1->fields).OnValueChangedLocal;
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

