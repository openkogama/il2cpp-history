
/* Boolean CanSpawnInTeam(MVTeam) */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_CanSpawnInTeam
               (TierBoostStateHandler *this,MVTeam__Enum team,MethodInfo *method)

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
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0))
     && (this_00 = MVTeamManager::MVTeamManager_GetTeamList
                             ((MVTeamManager *)pSVar2,(MethodInfo *)0x0),
        this_00 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if ((int)pOVar3 < 2) {
      return 1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0))
    {
      bVar4 = MVTeamManager::MVTeamManager_TeamHasSpawnPoints
                        ((MVTeamManager *)pSVar2,MVTeam__Enum_Blue,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (method_00 = (MethodInfo *)
                      DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
         method_00 != (MethodInfo *)0x0)) {
        this_01 = MVTeamManager::MVTeamManager_GetSpawnPointsForTeam
                            ((MVTeamManager *)method_00,MVTeam__Enum_Blue,(MethodInfo *)0x0);
        index = 0;
        if (this_01 != (List_1_MVWorldObjectClient_ *)0x0) {
          do {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                               );
            if ((int)pOVar3 <= index) {
              return 0;
            }
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
            iVar5 = func_?();
            if (iVar5 != 0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
              iVar5 = func_?();
              if (iVar5 == 0) break;
              this_02 = (MVAvatarSpawnRoleCreator *)func_?();
              GVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier(this_02,method_00)
              ;
              bVar7 = (byte)GVar6;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pPVar8 = (PrefabPool *)
                       MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0)
              ;
              if ((pPVar8 == (PrefabPool *)0x0) ||
                 (pPVar8 = (PrefabPool *)
                           PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar8,(MethodInfo *)0x0),
                 pPVar8 == (PrefabPool *)0x0)) break;
              s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar8,(MethodInfo *)0x0);
              SVar9 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                      SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                      SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                                ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                                );
              if (bVar7 < (byte)SVar9) {
                return 1;
              }
            }
            index = index + 1;
          } while( true );
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar4 = (*pcVar10)();
  return bVar4;
}


/* Void ExitContinuePopup() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ExitContinuePopup
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__TierBoostStateHandler___ExitContinuePopup_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  method_00 = (MethodInfo *)0x0;
  bVar3 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
  cVar4 = '\0';
  if (bVar3 == 0) {
code_?:
    this_00 = (Action_1_UIPushOption_ *)(this->fields).onFinished;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,(uint)(cVar4 == '\0'),MethodInfo__System__Action<bool>__Invoke_bool_);
    }
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar5 != (MVLocalPlayer *)0x0) {
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar5,(MethodInfo *)0x0);
    bVar3 = TierBoostStateHandler_CanSpawnInTeam(this,(MVTeam__Enum)pIVar6,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar7 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar7,0.0,method_00);
      pTVar8 = (this->fields).teamMenuPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pTVar8,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      if (pSVar7 != (ScaleAnimationBase *)0x0) {
        (pSVar7->fields)._._._._.m_CachedPtr = pXVar9;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)pSVar7,
                   MethodInfo__TierBoostStateHandler___ShowTeamSelectionMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pTVar8 = (pSVar7->fields)._._._._.m_CachedPtr;
        if (pTVar8 != (TeamMenu *)0x0) {
          TeamMenu::TeamMenu_UpdateBackButtonVisibility(pTVar8,(MethodInfo *)0x0);
          cVar4 = (char)((uint)pTVar8 >> 0x18);
          goto code_?;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar7 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar7,0.0,method_00);
      pSVar10 = (this->fields).spawnRoleSelectionMenuPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pSVar10,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if (pSVar7 != (ScaleAnimationBase *)0x0) {
        (pSVar7->fields)._._._._.m_CachedPtr = pXVar9;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)pSVar7,
                   MethodInfo__TierBoostStateHandler___ShowSpawnRoleSelectionMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pSVar10 = (pSVar7->fields)._._._._.m_CachedPtr;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar5 != (MVLocalPlayer *)0x0) &&
           (pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)pMVar5,
                                (MethodInfo *)0x0), pSVar10 != (SpawnRoleMenu *)0x0)) {
          SpawnRoleMenu::SpawnRoleMenu_Initialize(pSVar10,(MVTeam__Enum)pIVar6,(MethodInfo *)0x0);
          pSVar10 = (pSVar7->fields)._._._._.m_CachedPtr;
          if (pSVar10 != (SpawnRoleMenu *)0x0) {
            SpawnRoleMenu::SpawnRoleMenu_HideBackButton(pSVar10,(MethodInfo *)0x0);
            cVar4 = (char)((uint)pSVar10 >> 0x18);
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsInTempClass() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempClass
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pPVar1 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
      SVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
              SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                        ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                        );
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (pPVar3->fields).gamePassTier < (byte)SVar2;
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsInTempTier() */

bool Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).previewGamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      return (pPVar1->fields).gamePassTier < bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_OnPlayerPlanetDataUpdated
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)in_stack_6,(MethodInfo *)0x0);
  if (TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__TierBoostStateHandler___ExitContinuePopup_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar5,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar7 = TierBoostStateHandler_IsInTempClass(in_stack_6,(MethodInfo *)0x0);
  cVar8 = '\0';
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar9 == (MVLocalPlayer *)0x0) goto code_?;
    pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar9,(MethodInfo *)0x0);
    bVar7 = TierBoostStateHandler_CanSpawnInTeam
                      (in_stack_6,(MVTeam__Enum)pIVar10,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar11 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar11,0.0,(MethodInfo *)0x0);
      original = (in_stack_6->fields).teamMenuPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      if (pSVar11 == (ScaleAnimationBase *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pSVar11->fields)._._._._.m_CachedPtr = pXVar12;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)in_stack_6,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pSVar11,
                 MethodInfo__TierBoostStateHandler___ShowTeamSelectionMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar13 = (pSVar11->fields)._._._._.m_CachedPtr;
      if (pSVar13 == (SpawnRoleMenu *)0x0) goto code_?;
      TeamMenu::TeamMenu_UpdateBackButtonVisibility((TeamMenu *)pSVar13,(MethodInfo *)0x0);
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar11 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar11,0.0,(MethodInfo *)0x0);
      pSVar13 = (in_stack_6->fields).spawnRoleSelectionMenuPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pSVar13,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      if (pSVar11 == (ScaleAnimationBase *)0x0) goto code_?;
      (pSVar11->fields)._._._._.m_CachedPtr = pXVar12;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)in_stack_6,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pSVar11,
                 MethodInfo__TierBoostStateHandler___ShowSpawnRoleSelectionMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar13 = (pSVar11->fields)._._._._.m_CachedPtr;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar9 == (MVLocalPlayer *)0x0) goto code_?;
      pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar9,(MethodInfo *)0x0);
      if (pSVar13 == (SpawnRoleMenu *)0x0) goto code_?;
      SpawnRoleMenu::SpawnRoleMenu_Initialize(pSVar13,(MVTeam__Enum)pIVar10,(MethodInfo *)0x0);
      pSVar13 = (pSVar11->fields)._._._._.m_CachedPtr;
      if (pSVar13 == (SpawnRoleMenu *)0x0) goto code_?;
      SpawnRoleMenu::SpawnRoleMenu_HideBackButton(pSVar13,(MethodInfo *)0x0);
    }
    cVar8 = (char)((uint)pSVar13 >> 0x18);
  }
  this_00 = (Action_1_UIPushOption_ *)(in_stack_6->fields).onFinished;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(cVar8 == '\0'),MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void ShowSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowSpawnRoleSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierBoostStateHandler___ShowSpawnRoleSelectionMenu_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).spawnRoleSelectionMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__TierBoostStateHandler___ShowSpawnRoleSelectionMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pSVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleMenu *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize(pSVar1,(MVTeam__Enum)team,(MethodInfo *)0x0);
        if ((this_00->fields)._._._._.m_CachedPtr != (void *)0x0) {
          if (pGRam00000038 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGRam00000038,0,(MethodInfo *)0x0);
            return;
          }
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowTeamSelectionMenu() */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_ShowTeamSelectionMenu
               (TierBoostStateHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierBoostStateHandler___ShowTeamSelectionMenu_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  original = (this->fields).teamMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (this_00 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this_00->fields)._._._._.m_CachedPtr = pXVar1;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  puVar4 = &UNK_?;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this_00,
             MethodInfo__TierBoostStateHandler___ShowTeamSelectionMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar3 = pGRam00000030;
  if ((this_00->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?,puVar4);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar5 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar5 == (PlayerPlanetData *)0x0) {
    method._0_1_ = 1;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar6 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar6 == (PrefabPool *)0x0) goto code_?;
    pPVar6 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar6,(MethodInfo *)0x0);
    if (pPVar6 == (PrefabPool *)0x0) goto code_?;
    s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar6,(MethodInfo *)0x0);
    SVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
            SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                      ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar5 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    bVar8 = (pPVar5->fields).gamePassTier;
    pPVar5 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar8 < (byte)SVar7) {
      method._0_1_ = 1 - ((pPVar5->fields).previewGamePassTier < (byte)SVar7);
    }
    else {
      method._0_1_ = 1;
    }
  }
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,(bool)method,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopPreviewTier(Action`1[Boolean]) */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
               (TierBoostStateHandler *this,Action_1_Boolean_ *onFinishPreviewTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).onFinished = onFinishPreviewTier;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (onFinishPreviewTier != (Action_1_Boolean_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                ((Action_1_UIPushOption_ *)onFinishPreviewTier,UIPushOption__Enum_Blocking,
                 MethodInfo__System__Action<bool>__Invoke_bool_);
      return;
    }
  }
  else {
    bVar1 = TierBoostStateHandler_IsInTempClass(this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        bVar3 = (pPVar2->fields).previewGamePassTier;
        pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar2 != (PlayerPlanetData *)0x0) {
          if (bVar3 <= (pPVar2->fields).gamePassTier) goto code_?;
          goto code_?;
        }
      }
    }
    else {
code_?:
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__TierBoostStateHandler__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      uVar7 = CONCAT44(TypeInfo__System__Action,pAVar6);
      pAVar4 = (Action *)0x0;
      if (pAVar6 != (Action *)0x0) {
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar6;
        }
        if (pAVar4 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__TierBoostStateHandler___StopPreviewTier_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar5;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TierBoostStateHandler->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar7 = func_?(0);
code_?:
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ExitContinuePopup>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler__ExitContinuePopup_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <StopPreviewTier>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierBoostStateHandler::TierBoostStateHandler__StopPreviewTier_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

