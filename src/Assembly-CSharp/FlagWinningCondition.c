
/* Boolean CanWinningConditionBeFullfilledForTeam(MVTeam) */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_CanWinningConditionBeFullfilledForTeam
               (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = FlagWinningCondition_GetClosestFlags(this,team,(MethodInfo *)0x0);
  if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    return 0 < (int)pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[MVWorldObjectClient] GetClosestFlags(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_GetClosestFlags
          (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (this_00,WorldObjectType__Enum_Flag,(MethodInfo *)0x0),
     pLVar1 != (List_1_MVWorldObjectClient_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    do {
      if ((int)index < 0) {
        return pLVar1;
      }
      pPVar3 = (PrefabPool *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (pPVar3 != (PrefabPool *)0x0) {
        bVar4 = (TypeInfo__MVFlag->_1).naturalAligment;
        if (((pPVar3->klass->_1).naturalAligment < bVar4) ||
           ((MVFlag__Class *)(pPVar3->klass->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVFlag)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        this_05 = (PrefabPool *)0x0;
        if (bVar5) {
          this_05 = pPVar3;
        }
        if (this_05 != (PrefabPool *)0x0) {
          this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_05,(MethodInfo *)0x0);
          if (this_01 ==
              (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) break;
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_01,StringLiteral_team,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar6 != 0) {
            this_02 = (Dictionary_2_System_Type_Pool_ *)
                      PrefabPool::PrefabPool_get_MVBatteryPrefab(this_05,(MethodInfo *)0x0);
            if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_02,(Type *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar7 = (undefined4 *)func_?();
            puVar8 = (undefined *)*puVar7;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((this_03 == (MVNetworkGame *)0x0) ||
               (this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                    ((DayNightCycle *)this_03,(MethodInfo *)0x0),
               this_04 == (SkyParam *)0x0)) break;
            iVar9 = MVTeamManager::MVTeamManager_TeamCount
                               ((MVTeamManager *)this_04,(MethodInfo *)0x0);
            if ((puVar8 != &UNK_?) || (iVar9 < 2)) {
              mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
              List_1_MVPlayer__RemoveAt
                        ((List_1_MVPlayer_ *)pLVar1,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                        );
            }
          }
        }
      }
      index = index + -1;
    } while( true );
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar10)();
  return pLVar1;
}


/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_InitializeGameUI
               (FlagWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  FlagWinningCondition_UpdateFlagGraphics(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = (GameStatCounterManager *)
                DayNightCycle::DayNightCycle_get_CurrentStarsParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
      if (this_00 != (MVLocalPlayer *)0x0) {
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
        actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,
                                 (MethodInfo *)0x0);
        if (this_01 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                    (this_01,GameStatCounterType__Enum_Flag,(MVTeam__Enum)team,(int32_t)actorNumber,
                     (MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).UpdateValue.method)();
          WinningConditionBase::WinningConditionBase_InitializeGameUI
                    ((WinningConditionBase *)this,(RectTransform *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_RoundEndReset
               (FlagWinningCondition *this,MethodInfo *method)

{
  pTVar1 = (this->fields).score;
  pSVar2 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                     (0,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    WinningConditionBase::WinningConditionBase_RoundEndReset
              ((WinningConditionBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_Update
               (FlagWinningCondition *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  fVar1 = (float10)func_?();
  if ((float)fVar1 == _UNK_?) {
    FlagWinningCondition_UpdateFlagGraphics(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateFlagGraphics() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateFlagGraphics
               (FlagWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
      this_02 = FlagWinningCondition_GetClosestFlags(this,(MVTeam__Enum)team,(MethodInfo *)0x0);
      if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        pGVar2 = (this->fields).graphics;
        if (pOVar1 == (Object *)0x0) {
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            return;
          }
        }
        else if (pGVar2 != (GameObject *)0x0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pGVar2 = (this->fields).graphics;
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,1,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateValue
               (FlagWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    pTVar2 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = (GameStatCounterManager *)
                DayNightCycle::DayNightCycle_get_CurrentStarsParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
      if (this_00 != (MVLocalPlayer *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Single]::
        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                  ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0);
        team = &UNK_?;
        actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,
                                 (MethodInfo *)0x0);
        if (this_01 != (GameStatCounterManager *)0x0) {
          score = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                            (this_01,GameStatCounterType__Enum_Flag,(MVTeam__Enum)team,
                             (int32_t)actorNumber,(MethodInfo *)0x0);
          pSStack3 =
               WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (score,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
          if (pTVar2 != (Text *)0x0) {
            pIStack4 = (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            pTStack5 = pTVar2;
            (*(code *)(pTVar2->klass->vtable).set_text.method)();
            return;
          }
        }
      }
    }
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_get_StatType
          (FlagWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),2);
}


/* Boolean get_WinningConditionAbleToBeFulfilled() */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_get_WinningConditionAbleToBeFulfilled
               (FlagWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
      bVar1 = (**(code **)(iRam_? + 0xf8))(0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

