
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
  method_00 = TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
       (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar3->fields).spawnRoleMode,
       this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
    pTVar4 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
              WebCompletionSource_1_System_Object__get_Task
                        (this_00,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                        );
    if (pTVar4 != (Task *)0x4) {
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
        pEVar8 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                            ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_02,(MethodInfo *)0x0);
        cVar9 = pEVar8->noPlayButtonVideoIcon;
        if (value != (Object *)0x0) {
          *(undefined1 *)&value[1].klass = 0;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          pOVar10 = value;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Initialize_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          cVar11 = (char)pOVar10;
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          if ((cVar9 == '\0') && (cVar11 == '\0')) {
            pIVar12 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            if (pIVar12 == (IAdManager *)0x0) goto code_?;
            bVar13 = func_?();
          }
          else {
            bVar13 = 0;
          }
          bVar13 = *(byte *)&value[1].klass & bVar13;
          pIVar1 = (this->fields).adIcon;
          if (pIVar1 != (Image *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,bVar13,(MethodInfo *)0x0);
              pIVar1 = (this->fields).playIcon;
              if (pIVar1 != (Image *)0x0) {
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0);
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,bVar13 ^ 1,(MethodInfo *)0x0);
                  pIVar1 = (this->fields).readyToPlayTimerFill;
                  if (pIVar1 != (Image *)0x0) {
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0);
                    if (pGVar2 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,bVar13 ^ 1,(MethodInfo *)0x0);
                      pPVar14 = (this->fields).respawnButton;
                      pNVar15 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (pNVar15,(Object *)this,
                                 MethodInfo__DeathUIBoostMenuController__OnRespawn__,
                                 (MethodInfo *)0x0);
                      if (pPVar14 != (PointerDownController *)0x0) {
                        PointerDownController::PointerDownController_Initialize
                                  (pPVar14,(UnityAction *)pNVar15,(MethodInfo *)0x0);
                        pPVar14 = (this->fields).resetButton;
                        pNVar15 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (pNVar15,(Object *)this,
                                   MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                                   (MethodInfo *)0x0);
                        if (pPVar14 != (PointerDownController *)0x0) {
                          PointerDownController::PointerDownController_Initialize
                                    (pPVar14,(UnityAction *)pNVar15,(MethodInfo *)0x0);
                          pSVar3 = MVGameControllerBase::
                                   MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                             ((MethodInfo *)0x0);
                          if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
                            this_03 = (pSVar3->fields).SpawnRoleModeTypeWrapper;
                            this_05 = (UnityAction_1_System_Int32Enum_ *)func_?();
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                      (this_05,(Object *)this,
                                       MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                       ,(MethodInfo *)0x0);
                            if (this_03 != (SpawnRoleModeTypeWrapper *)0x0) {
                              SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                        (this_03,(Action_1_MV_Common_SpawnRoleModeType_ *)this_05,
                                         (MethodInfo *)0x0);
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
                                    pMVar16 = MVPlayer::MVPlayer_GetCheckpoint
                                                        ((MVPlayer *)this_07,(MethodInfo *)0x0);
                                    pNVar7 = (this->fields).buttonFader;
                                    if (pNVar7 != (NotificationFade *)0x0) {
                                      NotificationFade::NotificationFade_Activate
                                                (pNVar7,(MethodInfo *)0x0);
                                      pNVar7 = (this->fields).buttonFader;
                                      if (pNVar7 != (NotificationFade *)0x0) {
                                        (pNVar7->fields).pauseAt = 0.0;
                                        pGVar2 = (this->fields).readyToPlayTimerObject;
                                        if (pGVar2 != (GameObject *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                          if (pMVar16 == (MVCheckpoint *)0x0) {
                                            pNVar7 = (this->fields).resetButtonFader;
                                            if (pNVar7 != (NotificationFade *)0x0) {
                                              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::
                                                       Component::Component_get_gameObject
                                                                 ((Component *)pNVar7,
                                                                  (MethodInfo *)0x0);
                                              if (pGVar2 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                                pTVar17 = (this->fields).restartText;
                                                if (pTVar17 != (Text *)0x0) {
                                                  pTVar18 = pTVar17->klass;
                                                  goto code_?;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pTVar17 = (this->fields).restartText;
                                            if (pTVar17 != (Text *)0x0) {
                                              pTVar18 = pTVar17->klass;
code_?:
                                              (*(code *)(pTVar18->vtable).set_text.method)();
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
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DeathUIBoostMenuController____c___LockCursorAndPop_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__30_0 = callbackFunction;
    func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__30_0,
                    callbackFunction);
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
      iVar3 = *(int *)(in_stack_2 + 0x14);
      puStack4 = *(undefined **)(iVar3 + 0x14);
      uStack5 = *(undefined4 *)(iVar3 + 0x20);
      (**(code **)(iVar3 + 0xc))();
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
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
    mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
    BindingRestrictions+TestBuilder+AndNode]::
    Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
              ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
               this_05,(MethodInfo *)0x0);
    pTVar1 = (this->fields).restartText;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar2->fields).spawnRoleMode,
         this_00 != (WebCompletionSource_1_System_Object_ *)0x0)) {
        pTVar3 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                 WebCompletionSource_1_System_Object__get_Task
                           (this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                           );
        if (pTVar3 == (Task *)0x4) {
          pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar4 == (GameEventManager *)0x0) ||
             (this_01 = (pGVar4->fields).AvatarCommandsPlayMode,
             this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__8
                    ((RewardedAd *)this_01,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                     MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          this_03 = (this->fields).respawnButton;
          if ((this_03 != (PointerDownController *)0x0) &&
             (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_03,(MethodInfo *)0x0),
             pGVar6 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,0,(MethodInfo *)0x0);
            return;
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__DeathUIBoostMenuController___OnRespawn_b__28_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
              );
    this_01 = (this->fields).respawnButton;
    if ((this_01 != (PointerDownController *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
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
        ppMStack3 = &TypeInfo__MVGameControllerBase;
        func_?();
        cRam_? = '\x01';
      }
      pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar4 == (IPlayModeUI *)0x0) goto code_?;
      pIVar5 = pIVar4->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      pIStack8 = pIVar4;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI)
          {
            pIVar5 = pIVar4->klass;
            iVar9 = pIVar5->interfaceOffsets[uVar6].offset;
            ppMStack3 =
                 (MVGameControllerBase__Class **)(&(pIVar5->vtable).get_IsInLobby)[iVar9].methodPtr;
            (*(code *)(&(pIVar5->vtable).set_IsInPauseMenu)[iVar9].method)();
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      ppMStack3 = (MVGameControllerBase__Class **)0x6;
      puVar10 = (undefined4 *)func_?();
      ppMStack3 = (MVGameControllerBase__Class **)puVar10[1];
      pIStack8 = pIVar4;
      (*(code *)*puVar10)();
    }
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar5->fields).spawnRoleMode,
     this_00 != (WebCompletionSource_1_System_Object_ *)0x0)) {
    pTVar6 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if ((pTVar6 == (Task *)0x2) || (_UNK_? < _UNK_? - (fVar1 - fVar2) / fVar3)) {
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
                  GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
                  RewardedAd__RegisterAdEvents_m__7((RewardedAd *)pGVar10,(MethodInfo *)0x0);
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
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                  ((RewardedAd *)pGVar10,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  method_00 = TypeInfo__DeathUIBoostMenuController____c__DisplayClass25_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__DeathUIBoostMenuController____c__DisplayClass25_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
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
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pDVar5,
                       MethodInfo__DeathUIBoostMenuController____c___Update_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_1 = pEVar4;
            func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_1,
                            pEVar4);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
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
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)pDVar5,
                       MethodInfo__DeathUIBoostMenuController____c___Update_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_2 = pEVar4;
            func_?(&TypeInfo__DeathUIBoostMenuController____c->static_fields->__9__25_2,
                            pEVar4);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
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
          GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                    ((RewardedAd *)pGVar7,(MethodInfo *)0x0);
        }
        return;
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
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_
             ,(MethodInfo *)0x0);
  if (x == (IDeathPromotionSelector *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IDeathPromotionSelector) {
        ppMVar5 = &(&(x->klass->vtable).TryShowPromotion)[x->klass->interfaceOffsets[uVar3].offset].
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__IDeathPromotionSelector,1);
code_?:
  (*(code *)*ppMVar5)(x,ppMVar5[1]);
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

