
/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Initialize
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    func_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Initialize_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Respawning_at_start___);
    func_?(&StringLiteral_Respawning_at_checkpoint___);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0);
  if (value == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((this->fields).timeUntilGhostMode <= 0.0) {
    pIVar1 = (this->fields).readyToPlayTimerFill;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).timerFill;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).spawnRoleMode,
       this_00 == (SpawnRoleVariable_1_System_Object_ *)0x0)) goto code_?;
    pOVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (pOVar4 != (Object *)0x4) {
      pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar5 == (GameEventManager *)0x0) ||
         (this_01 = (pGVar5->fields).AvatarCommandsPlayMode,
         this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_01,(MethodInfo *)0x0);
    }
    (this->fields).isGhost = 1;
  }
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pNVar7 = (this->fields).fader;
  (this->fields).startTime = fVar6;
  if (pNVar7 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
    pNVar7 = (this->fields).fader;
    if (pNVar7 != (NotificationFade *)0x0) {
      (pNVar7->fields).shouldHideWhenDone = 0;
      this_02 = (this->fields).embeddedPlayerConfig;
      if (this_02 != (EmbeddedPlayerConfig *)0x0) {
        EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                  ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_02,(MethodInfo *)0x0);
        *(undefined1 *)&value[1].klass = 0;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          pOVar4 = value;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Initialize_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          cVar8 = (char)pOVar4;
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          if (cVar8 == '\0') {
            pIVar9 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            if (pIVar9 == (IAdManager *)0x0) goto code_?;
            bVar10 = func_?();
          }
          else {
            bVar10 = 0;
          }
          bVar10 = *(byte *)&value[1].klass & bVar10;
          pIVar1 = (this->fields).adIcon;
          if (pIVar1 != (Image *)0x0) {
            value_00 = bVar10;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,value_00,(MethodInfo *)0x0);
              pIVar1 = (this->fields).playIcon;
              if (pIVar1 != (Image *)0x0) {
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0);
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
                  pIVar1 = (this->fields).readyToPlayTimerFill;
                  if (pIVar1 != (Image *)0x0) {
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0);
                    if (pGVar2 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,bVar10 ^ 1,(MethodInfo *)0x0);
                      pPVar11 = (this->fields).respawnButton;
                      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                      if (pNVar12 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (pNVar12,(Object *)this,
                                   MethodInfo__DeathUIBoostMenuController__OnRespawn__,
                                   (MethodInfo *)0x0);
                        if (pPVar11 != (PointerDownController *)0x0) {
                          PointerDownController::PointerDownController_Initialize
                                    (pPVar11,(UnityAction *)pNVar12,(MethodInfo *)0x0);
                          pPVar11 = (this->fields).resetButton;
                          pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                          if (pNVar12 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                            NavMesh_OnNavMeshPreUpdate__ctor
                                      (pNVar12,(Object *)this,
                                       MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__
                                       ,(MethodInfo *)0x0);
                            if (pPVar11 != (PointerDownController *)0x0) {
                              PointerDownController::PointerDownController_Initialize
                                        (pPVar11,(UnityAction *)pNVar12,(MethodInfo *)0x0);
                              pSVar3 = MVGameControllerBase::
                                       MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                 ((MethodInfo *)0x0);
                              if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
                                this_03 = (pSVar3->fields).SpawnRoleModeTypeWrapper;
                                this_05 = (UnityAction_1_System_Int32Enum_ *)func_?();
                                if (this_05 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`1[System::Int32Enum]::
                                  UnityAction_1_System_Int32Enum___ctor
                                            (this_05,(Object *)this,
                                             MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                             ,(MethodInfo *)0x0);
                                  if (this_03 != (SpawnRoleModeTypeWrapper *)0x0) {
                                    SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                              (this_03,(Action_1_MV_Common_SpawnRoleModeType_ *)
                                                       this_05,(MethodInfo *)0x0);
                                    this_04 = (this->fields).boostMenu;
                                    if (this_04 != (BoostMenuController *)0x0) {
                                      BoostMenuController::BoostMenuController_Initialize
                                                (this_04,(MethodInfo *)0x0);
                                      this_06 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                          ((MethodInfo *)0x0);
                                      if (this_06 != (MVNetworkGame *)0x0) {
                                        this_07 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                            (this_06,(MethodInfo *)0x0);
                                        if (this_07 != (MVLocalPlayer *)0x0) {
                                          pMVar13 = MVPlayer::MVPlayer_GetCheckpoint
                                                              ((MVPlayer *)this_07,(MethodInfo *)0x0
                                                              );
                                          pNVar7 = (this->fields).buttonFader;
                                          if (pNVar7 != (NotificationFade *)0x0) {
                                            NotificationFade::NotificationFade_Activate
                                                      (pNVar7,(MethodInfo *)0x0);
                                            pNVar7 = (this->fields).buttonFader;
                                            if (pNVar7 != (NotificationFade *)0x0) {
                                              (pNVar7->fields).pauseAt = 0.0;
                                              pGVar2 = (this->fields).readyToPlayTimerObject;
                                              if (pGVar2 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                                if (pMVar13 == (MVCheckpoint *)0x0) {
                                                  pNVar7 = (this->fields).resetButtonFader;
                                                  if (pNVar7 != (NotificationFade *)0x0) {
                                                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::Component::Component_get_gameObject
                                                                       ((Component *)pNVar7,
                                                                        (MethodInfo *)0x0);
                                                    if (pGVar2 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar2,0,(MethodInfo *)0x0);
                                                      pTVar14 = (this->fields).restartText;
                                                      if (pTVar14 != (Text *)0x0) {
                                                        pTVar15 = pTVar14->klass;
                                                        goto code_?;
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  pTVar14 = (this->fields).restartText;
                                                  if (pTVar14 != (Text *)0x0) {
                                                    pTVar15 = pTVar14->klass;
code_?:
                                                    (*(pTVar15->vtable).set_text.methodPtr)();
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    return;
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
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void LockCursorAndPop() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_LockCursorAndPop
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c___LockCursorAndPop_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c);
    cRam_? = '\x01';
  }
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__30_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DeathUIBoostMenuController____c___LockCursorAndPop_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__30_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     ((pGVar1->fields).AvatarCommandsPlayMode !=
      (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if (*(int *)(in_stack_2 + 0x14) != 0) {
      (**(code **)(*(int *)(in_stack_2 + 0x14) + 0xc))();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::
     DeathUIBoostMenuController_OnAvatarStateChanged
               (DeathUIBoostMenuController *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if ((mode != SpawnRoleModeType__Enum_Hidden) && (mode != SpawnRoleModeType__Enum_Dead)) {
    (this->fields).shouldPop = 1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnDestroy
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    if ((this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   ,(MethodInfo *)0x0), this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnEnable
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  pNVar1 = (this->fields).buttonFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).buttonFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      (pNVar1->fields).pauseAt = 0.0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnResetToSpawnPoint() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnResetToSpawnPoint
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&StringLiteral_Respawning_at_start___);
    cRam_? = '\x01';
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_04 != (MVNetworkGame *)0x0) &&
     (this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0),
     this_05 != (MVLocalPlayer *)0x0)) {
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
    Stack_1_T_Enumerator_System_Object__Dispose
              ((Stack_1_T_Enumerator_System_Object_ *)this_05,(MethodInfo *)0x0);
    pTVar1 = (this->fields).restartText;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)();
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).spawnRoleMode,
         this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
        pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                           (this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                           );
        if (pOVar3 == (Object *)0x4) {
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar4 == (GameEventManager *)0x0) ||
             (this_01 = (pGVar4->fields).AvatarCommandsPlayMode,
             this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
          RewardedInterstitialAd__RegisterAdEvents_m__1
                    ((RewardedInterstitialAd *)this_01,(Object *)0x0,(EventArgs *)this_04,method_00)
          ;
        }
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                         );
          func_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                         );
          func_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                         );
          func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          cRam_? = '\x01';
        }
        this_02 = (this->fields).buttonFader;
        if (this_02 != (NotificationFade *)0x0) {
          bVar5 = NotificationFade::NotificationFade_get_IsPaused(this_02,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            return;
          }
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this
                       ,
                       MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar6,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                      );
            this_03 = (this->fields).respawnButton;
            if ((this_03 != (PointerDownController *)0x0) &&
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0),
               pGVar6 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnRespawn() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnRespawn
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonFader;
  if (this_00 != (NotificationFade *)0x0) {
    bVar1 = NotificationFade::NotificationFade_get_IsPaused(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                );
      this_01 = (this->fields).respawnButton;
      if ((this_01 != (PointerDownController *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenMenu() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OpenMenu
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c___OpenMenu_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonFader;
  if (this_00 != (NotificationFade *)0x0) {
    bVar1 = NotificationFade::NotificationFade_get_IsPaused(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).isGhost == 0) {
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar2 == (GameEventManager *)0x0) ||
           (this_01 = (pGVar2->fields).AvatarCommandsPlayMode,
           this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_01,(MethodInfo *)0x0);
        (this->fields).isGhost = 1;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__23_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__DeathUIBoostMenuController____c___OpenMenu_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__23_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar3 == (IPlayModeUI *)0x0) goto code_?;
      uVar4 = 0;
      uVar5 = (pIVar3->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (pIVar3->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IPlayModeUI) {
            (*(&(pIVar3->klass->vtable).set_InLobbyState)
              [pIVar3->klass->interfaceOffsets[uVar4].offset].methodPtr)();
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar6 = (undefined4 *)func_?();
      (*(code *)*puVar6)();
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReadyToSpawn(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_ReadyToSpawn
               (DeathUIBoostMenuController *this,bool promotionPushedToStack,bool withAd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c___ReadyToSpawn_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).startTime;
  fVar3 = (this->fields).timeUntilGhostMode;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((pMVar4 != (MVLocalPlayer *)0x0) &&
      (pSVar5 = (pMVar4->fields).spawnRoleDataMediator, pSVar5 != (SpawnRoleDataMediator *)0x0)) &&
     (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar5->fields).spawnRoleMode,
     this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
    pOVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if ((pOVar6 == (Object *)0x2) || (_UNK_? < _UNK_? - (fVar1 - fVar2) / fVar3)) {
      pNVar7 = (this->fields).buttonFader;
      if (pNVar7 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Unpause(pNVar7,(MethodInfo *)0x0);
        pGVar8 = (this->fields).readyToPlayTimerObject;
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,1,(MethodInfo *)0x0);
          pNVar7 = (this->fields).resetButtonFader;
          if (pNVar7 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
            pNVar7 = (this->fields).boostFader;
            if (pNVar7 != (NotificationFade *)0x0) {
              NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
              pNVar7 = (this->fields).menuButtonFader;
              if (pNVar7 != (NotificationFade *)0x0) {
                NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
                pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar9 != (GameEventManager *)0x0) &&
                   (pGVar10 = (pGVar9->fields).AvatarCommandsPlayMode,
                   pGVar10 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                  GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
                  RewardedInterstitialAd__RegisterAdEvents_m__0
                            ((RewardedInterstitialAd *)pGVar10,(MethodInfo *)0x0);
                  (this->fields).wantsToPlay = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__29_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__DeathUIBoostMenuController____c___ReadyToSpawn_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__29_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar8,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar9 != (GameEventManager *)0x0) &&
         (pGVar10 = (pGVar9->fields).AvatarCommandsPlayMode,
         pGVar10 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
        RewardedInterstitialAd__RegisterAdEvents_m__2
                  ((RewardedInterstitialAd *)pGVar10,(Object *)0x0,in_stack_11,
                   in_stack_12);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Update
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c___Update_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c___Update_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c__DisplayClass25_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c__DisplayClass25_0);
    func_?(&TypeInfo__DeathUIBoostMenuController____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__DeathUIBoostMenuController____c__DisplayClass25_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pIVar2 = (this->fields).timerFill;
    fVar1 = _UNK_? - (fVar1 - (this->fields).startTime) / (this->fields).timeUntilGhostMode;
    if (pIVar2 != (Image *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar2,fVar1,(MethodInfo *)0x0);
      pIVar2 = (this->fields).readyToPlayTimerFill;
      if (pIVar2 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar2,fVar1,(MethodInfo *)0x0);
        *(undefined1 *)&value[1].klass = 0;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__DeathUIBoostMenuController____c__DisplayClass25_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (((this->fields).shouldPop != 0) && (*(char *)&value[1].klass == '\0')) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__DeathUIBoostMenuController____c);
            }
            pEVar4 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_1;
            if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__DeathUIBoostMenuController____c);
              }
              pDVar5 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
              pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
              if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pDVar5,
                         MethodInfo__DeathUIBoostMenuController____c___Update_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_1 = pEVar4;
              func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_1,
                              pEVar4);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
          }
          if (((this->fields).isGhost == 0) && (fVar1 <= 0.0)) {
            pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if ((pGVar6 == (GameEventManager *)0x0) ||
               (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
               pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
            goto code_?;
            GameEventManager+AvatarCommandsPlayModeManager::
            GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(pGVar7,(MethodInfo *)0x0);
            (this->fields).isGhost = 1;
          }
          if (((this->fields).wantsToPlay != 0) && (fVar1 <= 0.0)) {
            (this->fields).wantsToPlay = 0;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__DeathUIBoostMenuController____c);
            }
            pEVar4 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_2;
            if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__DeathUIBoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__DeathUIBoostMenuController____c);
              }
              pDVar5 = TypeInfo__DeathUIBoostMenuController____c->static_fields->__9;
              pEVar4 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
              if (pEVar4 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pDVar5,
                         MethodInfo__DeathUIBoostMenuController____c___Update_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_2 = pEVar4;
              func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_2,
                              pEVar4);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if ((pGVar6 == (GameEventManager *)0x0) ||
               (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
               pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
            goto code_?;
            GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
            RewardedInterstitialAd__RegisterAdEvents_m__2
                      ((RewardedInterstitialAd *)pGVar7,(Object *)0x0,(EventArgs *)unaff_EDI,
                       unaff_ESI);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnRespawn>b__28_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__OnRespawn_b__28_0
               (DeathUIBoostMenuController *this,IDeathPromotionSelector *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_);
    func_?(&TypeInfo__IDeathPromotionSelector);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Boolean_System_Boolean_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  if (this_00 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    pUVar1 = this_00;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Boolean]
    ::UnityAction_2_System_Boolean_System_Boolean___ctor
              (this_00,(Object *)this,
               MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_,(MethodInfo *)0x0);
    if (x != (IDeathPromotionSelector *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4 = (pIVar2->_1).interface_offsets_count;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__IDeathPromotionSelector) {
            pVVar5 = &(x->klass->vtable).TryShowPromotion + x->klass->interfaceOffsets[uVar3].offset
            ;
            (*pVVar5->methodPtr)(x,pUVar1,pVVar5->method,pIVar2,0);
            return;
          }
          uVar3 = uVar3 + 1;
          this_00 = pUVar1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)func_?(x,TypeInfo__IDeathPromotionSelector,1);
      (*(code *)*puVar6)(x,this_00,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* DeathUIBoostMenuController() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__ctor
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  (this->fields).timeUntilGhostMode = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

