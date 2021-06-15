
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_Initialize
               (RequirementNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).PanelsToDestroy;
  if (TypeInfo__RequirementNotification->static_fields->__f__am_cache0 ==
      (Action_1_UnityEngine_GameObject_ *)0x0) {
    this_01 = (RequirementNotification *)
              func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    in_stack_2 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )this_01,(Object *)0x0,
               MethodInfo__RequirementNotification___Initialize_m__0_UnityEngine__GameObject_,
               MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
    TypeInfo__RequirementNotification->static_fields->__f__am_cache0 =
         (Action_1_UnityEngine_GameObject_ *)this_01;
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::GameObject]::
    List_1_UnityEngine_GameObject__ForEach
              ((List_1_UnityEngine_GameObject_ *)data,
               TypeInfo__RequirementNotification->static_fields->__f__am_cache0,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
              );
    this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).PanelsToDestroy;
    if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__);
      data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(10,data._0_3_);
      key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar1,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
        if (pPVar3 != (Pool *)0x0) {
          if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?(pPVar3);
          iVar6 = *piVar5;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
              (this_03 = (PrefabPool *)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (this_02,iVar6,(MethodInfo *)0x0), this_03 != (PrefabPool *)0x0)
              ) && (pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                          (this_03,(MethodInfo *)0x0),
                   pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)0x0)) {
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (pDVar7,StringLiteral_levelAmount,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar8 == 0) {
code_?:
              pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
              if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                             *)0x0) {
                bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                        WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                        KogamaSettingWrapperBase]::
                        Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                  (pDVar7,StringLiteral_gameCoinAmount,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                  );
                if (bVar8 == 0) {
code_?:
                  pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
                  if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                 *)0x0) {
                    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            String,MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                            KogamaSettingTypes::KogamaSettingWrapperBase]::
                            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                      (pDVar7,StringLiteral_starAmount,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar8 == 0) {
code_?:
                      pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                            (this_03,(MethodInfo *)0x0);
                      if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                     *)0x0) {
                        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                String,MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                                KogamaSettingTypes::KogamaSettingWrapperBase]::
                                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                          (pDVar7,StringLiteral_team,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar8 == 0) {
code_?:
                          pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                    *)PrefabPool::PrefabPool_get_MVBatteryPrefab
                                                (this_03,(MethodInfo *)0x0);
                          if (pDVar7 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                                         *)0x0) {
                            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::String,MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                                    KogamaSettingTypes::KogamaSettingWrapperBase]::
                                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                                              (pDVar7,StringLiteral_RequiredRank,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                              );
                            if (bVar8 == 0) {
                              return;
                            }
                            pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                                     PrefabPool::PrefabPool_get_MVBatteryPrefab
                                               (this_03,(MethodInfo *)0x0);
                            if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                              method_00 = (MethodInfo *)&UNK_?;
                              pPVar3 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Type,Pool]::
                                       Dictionary_2_System_Type_Pool__get_Item
                                                 (pDVar9,(Type *)StringLiteral_RequiredRank,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 );
                              uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
                              if (pPVar3 != (Pool *)0x0) {
                                if ((pPVar3->klass->_0).element_class !=
                                    (TypeInfo__System__Int32->_0).element_class)
                                goto code_?;
                                puVar10 = (undefined1 *)func_?(pPVar3);
                                uVar11 = *puVar10;
                                if (cRam_? == '\0') {
                                  func_?(_UNK_?);
                                  cRam_? = '\x01';
                                }
                                pSVar12 = (ScaleAnimationBase *)
                                          func_?(
                                                  TypeInfo__RequirementNotification___ShowGameTierRequirement_c__AnonStorey4
                                                  );
                                ScaleAnimationBase::ScaleAnimationBase_Play(pSVar12,0.0,method_00);
                                if (pSVar12 != (ScaleAnimationBase *)0x0) {
                                  *(undefined1 *)&(pSVar12->fields)._._._._.m_CachedPtr = uVar11;
                                  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                            RequirementNotification_InstantiatePanel
                                                      (this,(this->fields).GameTierPanel,
                                                       (MethodInfo *)0x0);
                                  *(undefined1 *)&(pSVar12->fields).originalScale.x = 0;
                                  data = pDVar1;
                                  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr
                                       & 0x2000000) != 0) &&
                                     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__GamePassesManager);
                                  }
                                  bVar8 = GamePassesManager::GamePassesManager_get_GamePassesActive
                                                    ((MethodInfo *)0x0);
                                  if (bVar8 == 0) {
code_?:
                                    if (*(char *)&(pSVar12->fields).originalScale.x == '\0') {
                                      pSVar13 = (this->fields).OffSprite;
                                    }
                                    else {
                                      pSVar13 = (this->fields).OnSprite;
                                    }
                                    (pSVar12->fields).state = (int32_t)pSVar13;
                                    pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                               *)func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                    SceneManagement::Scene]::
                                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                              (pUVar14,(Object *)pSVar12,
                                               MethodInfo__RequirementNotification___ShowGameTierRequirement_c__AnonStorey4____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                               ,
                                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                                              );
                                    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                        cctor_started == 0)) {
                                      func_?();
                                    }
                                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                    ExecuteEvents_Execute_32
                                              ((GameObject *)pDVar1,(BaseEventData *)0x0,
                                               (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_
                                                *)pUVar14,
                                               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                              );
                                    return;
                                  }
                                  bVar15 = *(byte *)&(pSVar12->fields)._._._._.m_CachedPtr;
                                  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr
                                       & 0x2000000) != 0) &&
                                     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__GamePassesManager);
                                  }
                                  pPVar16 = GamePassesManager::
                                            GamePassesManager_get_PlayerPlanetData
                                                      ((MethodInfo *)0x0);
                                  if (pPVar16 != (PlayerPlanetData *)0x0) {
                                    *(bool *)&(pSVar12->fields).originalScale.x =
                                         bVar15 <= (pPVar16->fields).gamePassTier;
                                    pDVar1 = data;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                                   PrefabPool::PrefabPool_get_MVBatteryPrefab
                                             (this_03,(MethodInfo *)0x0);
                          if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                            pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                               (pDVar9,(Type *)StringLiteral_team,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               );
                            uVar4 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pPVar3);
                            if (pPVar3 != (Pool *)0x0) {
                              if ((pPVar3->klass->_0).element_class !=
                                  (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
                              goto code_?;
                              pMVar17 = (MVTeam__Enum *)func_?(pPVar3);
                              RequirementNotification_ShowTeamRequirement
                                        (this,*pMVar17,(MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                    else {
                      pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0)
                      ;
                      if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                           (pDVar9,(Type *)StringLiteral_starAmount,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
                        if (pPVar3 != (Pool *)0x0) {
                          if ((pPVar3->klass->_0).element_class !=
                              (TypeInfo__System__Int32->_0).element_class) goto code_?;
                          puVar18 = (undefined4 *)func_?(pPVar3);
                          pvVar19 = (void *)*puVar18;
                          if (cRam_? == '\0') {
                            func_?(_UNK_?);
                            cRam_? = '\x01';
                          }
                          pSVar12 = (ScaleAnimationBase *)
                                    func_?(
                                                  TypeInfo__RequirementNotification___ShowStarRequirement_c__AnonStorey1
                                                  );
                          ScaleAnimationBase::ScaleAnimationBase_Play
                                    (pSVar12,0.0,(MethodInfo *)in_stack_2);
                          if (pSVar12 != (ScaleAnimationBase *)0x0) {
                            (pSVar12->fields)._._._._.m_CachedPtr = pvVar19;
                            RequirementNotification_InstantiatePanel
                                      (this,(this->fields).StarPanel,(MethodInfo *)0x0);
                            pvVar19 = (pSVar12->fields)._._._._.m_CachedPtr;
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?(TypeInfo__MVGameControllerBase);
                            }
                            pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar20 != (MVNetworkGame *)0x0) &&
                               (pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                    (pMVar20,(MethodInfo *)0x0),
                               pMVar21 != (MVLocalPlayer *)0x0)) {
                              iVar6 = MVPlayer::MVPlayer_GetGameStat
                                                 ((MVPlayer *)pMVar21,
                                                  GameStatCounterType__Enum_Collectible,
                                                  (MethodInfo *)0x0);
                              *(bool *)&(pSVar12->fields).originalScale.x = (int)pvVar19 <= iVar6;
                              if (iVar6 < (int)pvVar19) {
                                pSVar13 = (this->fields).OffSprite;
                              }
                              else {
                                pSVar13 = (this->fields).OnSprite;
                              }
                              (pSVar12->fields).state = (int32_t)pSVar13;
                              target = (GameObject *)&UNK_?;
                              pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                         *)func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (pUVar14,(Object *)pSVar12,
                                         MethodInfo__RequirementNotification___ShowStarRequirement_c__AnonStorey1____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                         ,
                                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                                        );
                              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->
                                          vtable).Equals.methodPtr & 0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                  cctor_started == 0)) {
                                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                              }
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_Execute_32
                                        (target,(BaseEventData *)0x0,
                                         (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_
                                          *)pUVar14,
                                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                        );
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
                  if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                       (pDVar9,(Type *)StringLiteral_gameCoinAmount,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
                    if (pPVar3 != (Pool *)0x0) {
                      if ((pPVar3->klass->_0).element_class !=
                          (TypeInfo__System__Int32->_0).element_class) goto code_?;
                      puVar18 = (undefined4 *)func_?(pPVar3);
                      pvVar19 = (void *)*puVar18;
                      if (cRam_? == '\0') {
                        func_?(_UNK_?);
                        cRam_? = '\x01';
                      }
                      pSVar12 = (ScaleAnimationBase *)
                                func_?(
                                               TypeInfo__RequirementNotification___ShowGameCoinRequirement_c__AnonStorey0
                                               );
                      ScaleAnimationBase::ScaleAnimationBase_Play
                                (pSVar12,0.0,(MethodInfo *)in_stack_2);
                      if (pSVar12 != (ScaleAnimationBase *)0x0) {
                        (pSVar12->fields)._._._._.m_CachedPtr = pvVar19;
                        in_stack_2 = this;
                        RequirementNotification_InstantiatePanel
                                  (this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
                        pvVar19 = (pSVar12->fields)._._._._.m_CachedPtr;
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if ((pMVar20 != (MVNetworkGame *)0x0) &&
                           (this_04 = (MVGameCoinManager *)
                                      TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                                      TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)
                                                 pMVar20,(MethodInfo *)0x0),
                           this_04 != (MVGameCoinManager *)0x0)) {
                          iVar6 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                                             (this_04,(MethodInfo *)0x0);
                          *(bool *)&(pSVar12->fields).originalScale.x = (int)pvVar19 <= iVar6;
                          if (iVar6 < (int)pvVar19) {
                            pSVar13 = (this->fields).OffSprite;
                          }
                          else {
                            pSVar13 = (this->fields).OnSprite;
                          }
                          (pSVar12->fields).state = (int32_t)pSVar13;
                          pEVar22 = 
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                          ;
                          pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                     *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (pUVar14,(Object *)pSVar12,
                                     MethodInfo__RequirementNotification___ShowGameCoinRequirement_c__AnonStorey0____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     ,
                                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                                    );
                          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).
                                      Equals.methodPtr & 0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started
                              == 0)) {
                            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                          }
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_32
                                    ((GameObject *)pEVar22,(BaseEventData *)0x0,
                                     (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *
                                     )pUVar14,
                                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                    );
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                       PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
              if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   (pDVar9,(Type *)StringLiteral_levelAmount,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
                if (pPVar3 != (Pool *)0x0) {
                  if ((pPVar3->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  puVar18 = (undefined4 *)func_?(pPVar3);
                  pvVar19 = (void *)*puVar18;
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  pSVar12 = (ScaleAnimationBase *)
                            func_?(
                                           TypeInfo__RequirementNotification___ShowLevelRequirement_c__AnonStorey3
                                           );
                  ScaleAnimationBase::ScaleAnimationBase_Play
                            (pSVar12,0.0,(MethodInfo *)in_stack_2);
                  if (pSVar12 != (ScaleAnimationBase *)0x0) {
                    (pSVar12->fields)._._._._.m_CachedPtr = pvVar19;
                    in_stack_2 = this;
                    RequirementNotification_InstantiatePanel
                              (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
                    pvVar19 = (pSVar12->fields)._._._._.m_CachedPtr;
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar20 != (MVNetworkGame *)0x0) &&
                       (pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar20,(MethodInfo *)0x0),
                       pMVar21 != (MVLocalPlayer *)0x0)) {
                      pOVar23 = System.dll::System::Collections::Generic::
                                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                ::Single,System::Object]::
                                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                            *)pMVar21,(MethodInfo *)0x0);
                      *(bool *)&(pSVar12->fields).originalScale.x = (int)pvVar19 <= (int)pOVar23;
                      if ((int)pOVar23 < (int)pvVar19) {
                        pSVar13 = (this->fields).OffSprite;
                      }
                      else {
                        pSVar13 = (this->fields).OnSprite;
                      }
                      (pSVar12->fields).state = (int32_t)pSVar13;
                      pEVar22 = 
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                      ;
                      pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar14,(Object *)pSVar12,
                                 MethodInfo__RequirementNotification___ShowLevelRequirement_c__AnonStorey3____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                 ,
                                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                                );
                      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).
                                  Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started ==
                          0)) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_32
                                ((GameObject *)pEVar22,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)
                                 pUVar14,
                                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                );
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* GameObject InstantiatePanel(NotificationRequirementPanel) */

GameObject *
Assembly-CSharp.dll::RequirementNotification::RequirementNotification_InstantiatePanel
          (RequirementNotification *this,NotificationRequirementPanel *panel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (panel != (NotificationRequirementPanel *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)panel,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)pXVar1,(MethodInfo *)0x0);
      this_00 = (this->fields).Layout;
      if (this_00 != (RectTransform *)0x0) {
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,parent,0,(MethodInfo *)0x0);
          this_01 = (this->fields).PanelsToDestroy;
          if (this_01 != (List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pXVar1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            return (GameObject *)pXVar1;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar2)();
  return pGVar3;
}


/* Void ShowGameCoinRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameCoinRequirement
               (RequirementNotification *this,int32_t gameCoins,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification___ShowGameCoinRequirement_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)gameCoins;
    RequirementNotification_InstantiatePanel(this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    pvVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = (MVGameCoinManager *)
                TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (MVGameCoinManager *)0x0) {
        iVar2 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_02,(MethodInfo *)0x0);
        *(bool *)&(this_00->fields).originalScale.x = (int)pvVar1 <= iVar2;
        if (iVar2 < (int)pvVar1) {
          pSVar3 = (this->fields).OffSprite;
        }
        else {
          pSVar3 = (this->fields).OnSprite;
        }
        (this_00->fields).state = (int32_t)pSVar3;
        pEStack4 =
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__RequirementNotification___ShowGameCoinRequirement_c__AnonStorey0____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        pEStack4 =
             (ExecuteEvents_EventFunction_1_INotificationRequirementPanel___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_32
                  ((GameObject *)this_03,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)this_03,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowGameTierRequirement(GamePassTier) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameTierRequirement
               (RequirementNotification *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification___ShowGameTierRequirement_c__AnonStorey4;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = (undefined1)tier;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).GameTierPanel,(MethodInfo *)0x0);
    *(undefined1 *)&(this_00->fields).originalScale.x = 0;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar2 = *(byte *)&(this_00->fields)._._._._.m_CachedPtr;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
      *(bool *)&(this_00->fields).originalScale.x = bVar2 <= (pPVar3->fields).gamePassTier;
    }
    if (*(char *)&(this_00->fields).originalScale.x == '\0') {
      pSVar4 = (this->fields).OffSprite;
    }
    else {
      pSVar4 = (this->fields).OnSprite;
    }
    (this_00->fields).state = (int32_t)pSVar4;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__RequirementNotification___ShowGameTierRequirement_c__AnonStorey4____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_32
              (target,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)this_01,
               bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
              );
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowLevelRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowLevelRequirement
               (RequirementNotification *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification___ShowLevelRequirement_c__AnonStorey3;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)level;
    RequirementNotification_InstantiatePanel(this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    pvVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        pOVar2 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_02,(MethodInfo *)0x0);
        *(bool *)&(this_00->fields).originalScale.x = (int)pvVar1 <= (int)pOVar2;
        if ((int)pOVar2 < (int)pvVar1) {
          pSVar3 = (this->fields).OffSprite;
        }
        else {
          pSVar3 = (this->fields).OnSprite;
        }
        (this_00->fields).state = (int32_t)pSVar3;
        pEStack4 =
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__RequirementNotification___ShowLevelRequirement_c__AnonStorey3____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        pEStack4 =
             (ExecuteEvents_EventFunction_1_INotificationRequirementPanel___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_32
                  ((GameObject *)this_03,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)this_03,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowStarRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowStarRequirement
               (RequirementNotification *this,int32_t stars,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification___ShowStarRequirement_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)stars;
    RequirementNotification_InstantiatePanel(this,(this->fields).StarPanel,(MethodInfo *)0x0);
    pvVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVLocalPlayer *)0x0) {
        iVar2 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_02,GameStatCounterType__Enum_Collectible,
                           (MethodInfo *)0x0);
        *(bool *)&(this_00->fields).originalScale.x = (int)pvVar1 <= iVar2;
        if (iVar2 < (int)pvVar1) {
          pSVar3 = (this->fields).OffSprite;
        }
        else {
          pSVar3 = (this->fields).OnSprite;
        }
        (this_00->fields).state = (int32_t)pSVar3;
        pEStack4 =
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
        ;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__RequirementNotification___ShowStarRequirement_c__AnonStorey1____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        pEStack4 =
             (ExecuteEvents_EventFunction_1_INotificationRequirementPanel___Class *)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_32
                  ((GameObject *)&UNK_?,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)this_03,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowTeamRequirement(MVTeam) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowTeamRequirement
               (RequirementNotification *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RequirementNotification___ShowTeamRequirement_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)team;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).TeamPanel,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
        if ((this_00->fields)._._._._.m_CachedPtr != pIVar2) {
          bVar3 = false;
code_?:
          *(bool *)&(this_00->fields).originalScale.x = bVar3;
          if (bVar3 == false) {
            pSVar4 = (this->fields).OffSprite;
          }
          else {
            pSVar4 = (this->fields).OnSprite;
          }
          (this_00->fields).state = (int32_t)pSVar4;
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this_00,
                     MethodInfo__RequirementNotification___ShowTeamRequirement_c__AnonStorey2____m__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_32
                    (target,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_INotificationRequirementPanel_ *)this_03,
                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                    );
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          if (this_02 != (SkyParam *)0x0) {
            iVar5 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)this_02,(MethodInfo *)0x0);
            bVar3 = iVar5 != 1;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Initialize>m__0(GameObject) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification__Initialize_m__0
               (GameObject *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(x,0);
  return;
}


/* RequirementNotification() */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification__ctor
               (RequirementNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
            );
  (this->fields).PanelsToDestroy = (List_1_UnityEngine_GameObject_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

