
/* Void Destroy() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Destroy(TeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Initialize(TeamEditor *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_2._16_4_ = (Object *)0x0;
  KStack_3.key = 0;
  KStack_3.value = 0;
  auStack_2._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_2._12_4_ = 0;
  puStack_4 = (undefined *)0x0;
  uStack_5 = 0;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_6 = (undefined4 *)&stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_6 = (undefined4 *)&stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar7 != (MVNetworkGame *)0x0) &&
     (pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)pMVar7,(MethodInfo *)0x0), pSVar8 != (SkyParam *)0x0)) {
    capacity = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar8,
                          (MethodInfo *)0x0);
    this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffac,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      auStack_2._0_4_ = pDVar9->dictionary;
      auStack_2._4_4_ = pDVar9->next;
      auStack_2._8_4_ = pDVar9->stamp;
      auStack_2._12_4_ = (pDVar9->current).key;
      auStack_2._16_4_ = (pDVar9->current).value;
      while( true ) {
        cVar10 = func_?();
        if (cVar10 == '\0') {
          *puStack_6 = 0xb4;
          func_?();
          *unaff_FS_OFFSET = uVar1;
          return;
        }
        KStack_3 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_2,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                              );
        pSStack_11 = (String *)func_?();
        this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_12,(MethodInfo *)0x0)
        ;
        puStack_4 = (undefined *)func_?();
        piVar13 = (int *)func_?();
        if (piVar13 == (int *)0x0) break;
        pSStack_14 = (String *)(**(code **)(*piVar13 + 0xd8))(piVar13);
        puVar15 = (undefined4 *)func_?();
        puStack_4 = (undefined *)*puVar15;
        if (this_01 ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) break;
        bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this_01,pSStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        name = pSStack_11;
        if (bVar16 != 0) {
          this_02 = (Dictionary_2_System_Type_Pool_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_12,(MethodInfo *)0x0);
          uStack_5 = func_?();
          iVar17 = func_?();
          if (iVar17 == 0) break;
          pSStack_14 = (String *)func_?(3);
          puVar15 = (undefined4 *)func_?();
          uStack_5 = *puVar15;
          if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    (this_02,(Type *)pSStack_14,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          name = (String *)func_?();
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 == (MVNetworkGame *)0x0) break;
        pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
        team = func_?();
        if (pSVar8 == (SkyParam *)0x0) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  ((MVTeamManager *)pSVar8,team,name,(MethodInfo *)pMVar7);
      }
    }
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_InitializeInventory
               (TeamEditor *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_OnDataUpdate(TeamEditor *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_2._16_4_ = (Object *)0x0;
  KStack_3.key = 0;
  KStack_3.value = 0;
  auStack_2._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_2._12_4_ = 0;
  puStack_4 = (undefined *)0x0;
  uStack_5 = 0;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_6 = (undefined4 *)&stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_6 = (undefined4 *)&stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar7 != (MVNetworkGame *)0x0) &&
     (pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)pMVar7,(MethodInfo *)0x0), pSVar8 != (SkyParam *)0x0)) {
    capacity = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar8,
                          (MethodInfo *)0x0);
    this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffac,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      auStack_2._0_4_ = pDVar9->dictionary;
      auStack_2._4_4_ = pDVar9->next;
      auStack_2._8_4_ = pDVar9->stamp;
      auStack_2._12_4_ = (pDVar9->current).key;
      auStack_2._16_4_ = (pDVar9->current).value;
      while( true ) {
        cVar10 = func_?();
        if (cVar10 == '\0') {
          *puStack_6 = 0xb4;
          func_?();
          *unaff_FS_OFFSET = uVar1;
          return;
        }
        KStack_3 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_2,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                              );
        pSStack_11 = (String *)func_?();
        this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_12,(MethodInfo *)0x0)
        ;
        puStack_4 = (undefined *)func_?();
        piVar13 = (int *)func_?();
        if (piVar13 == (int *)0x0) break;
        pSStack_14 = (String *)(**(code **)(*piVar13 + 0xd8))(piVar13);
        puVar15 = (undefined4 *)func_?();
        puStack_4 = (undefined *)*puVar15;
        if (this_01 ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) break;
        bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this_01,pSStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        name = pSStack_11;
        if (bVar16 != 0) {
          this_02 = (Dictionary_2_System_Type_Pool_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_12,(MethodInfo *)0x0);
          uStack_5 = func_?();
          iVar17 = func_?();
          if (iVar17 == 0) break;
          pSStack_14 = (String *)func_?(3);
          puVar15 = (undefined4 *)func_?();
          uStack_5 = *puVar15;
          if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    (this_02,(Type *)pSStack_14,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          name = (String *)func_?();
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 == (MVNetworkGame *)0x0) break;
        pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
        team = func_?();
        if (pSVar8 == (SkyParam *)0x0) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  ((MVTeamManager *)pSVar8,team,name,(MethodInfo *)pMVar7);
      }
    }
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateTeamNamesFromData() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_UpdateTeamNamesFromData
               (TeamEditor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  func_?();
  puStack_10 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_10 = (undefined4 *)&stack0xffffff98, puStack_4 = &stack0xffffff98,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_10 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar11 != (MVNetworkGame *)0x0) &&
     (pSVar12 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                         ((DayNightCycle *)pMVar11,(MethodInfo *)0x0), pSVar12 != (SkyParam *)0x0)) {
    capacity = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar12,
                          (MethodInfo *)0x0);
    this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffa4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar13->dictionary;
      auStack_6._4_4_ = pDVar13->next;
      auStack_6._8_4_ = pDVar13->stamp;
      auStack_6._12_4_ = (pDVar13->current).key;
      auStack_6._16_4_ = (pDVar13->current).value;
      uStack_1 = 0;
      while( true ) {
        cVar14 = func_?();
        if (cVar14 == '\0') {
          *puStack_10 = 0xb4;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                              );
        pSStack_15 = (String *)func_?();
        this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
        uStack_8 = func_?();
        piVar16 = (int *)func_?();
        if (piVar16 == (int *)0x0) break;
        pSStack_17 = (String *)(**(code **)(*piVar16 + 0xd8))(piVar16);
        puVar18 = (undefined4 *)func_?();
        uStack_8 = *puVar18;
        if (this_01 ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) break;
        bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this_01,pSStack_17,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        name = pSStack_15;
        if (bVar19 != 0) {
          this_02 = (Dictionary_2_System_Type_Pool_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0)
          ;
          uStack_9 = func_?();
          iVar20 = func_?();
          if (iVar20 == 0) break;
          pSStack_17 = (String *)func_?(3);
          puVar18 = (undefined4 *)func_?();
          uStack_9 = *puVar18;
          if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    (this_02,(Type *)pSStack_17,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          name = (String *)func_?();
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar11 == (MVNetworkGame *)0x0) break;
        pSVar12 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar11,(MethodInfo *)0x0);
        team = func_?();
        if (pSVar12 == (SkyParam *)0x0) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  ((MVTeamManager *)pSVar12,team,name,(MethodInfo *)pMVar11);
      }
    }
  }
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* TeamEditor(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TeamEditor::TeamEditor__ctor
               (TeamEditor *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_TeamEditorPrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    iVar1 = (this->fields)._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar1 & 0xffffdfff | 0x8000;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TeamEditor::TeamEditor_get_DocumentationType
          (TeamEditor *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TeamEditor;
}

