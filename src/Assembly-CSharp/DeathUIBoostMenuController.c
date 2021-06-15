
/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Initialize
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIBoostMenuController___Initialize_c__AnonStorey0;
  this_04 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)method_00);
  if ((this->fields).timeUntilGhostMode <= 0.0) {
    pIVar1 = (this->fields).readyToPlayTimerFill;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).timerFill;
    if (pIVar1 == (Image *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar3 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this_05 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)pSVar3,(MethodInfo *)0x0);
    if (this_05 ==
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
    goto code_?;
    iVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                       (this_05,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (iVar4 != 4) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar5 == (GameEventManager *)0x0) ||
         (this_00 = (pGVar5->fields).AvatarCommandsPlayMode,
         this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_00,(MethodInfo *)0x0);
    }
    (this->fields).isGhost = 1;
  }
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pNVar7 = (this->fields).fader;
  (this->fields).startTime = fVar6;
  if (pNVar7 == (NotificationFade *)0x0) goto code_?;
  NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
  pNVar7 = (this->fields).fader;
  if (pNVar7 == (NotificationFade *)0x0) goto code_?;
  NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar7,0,(MethodInfo *)0x0);
  this_01 = (this->fields).embeddedPlayerConfig;
  if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
  pEVar8 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                      ((EmbeddedSiteConfigData *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
  bVar9 = pEVar8->showTouristPromotion;
  if (this_04 == (ScaleAnimationBase *)0x0) goto code_?;
  *(undefined1 *)&(this_04->fields)._._._._.m_CachedPtr = 0;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar10,(Object *)this_04,
             MethodInfo__DeathUIBoostMenuController___Initialize_c__AnonStorey0____m__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar10,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            );
  if (bVar9 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar11 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar11 == (IAdManager *)0x0) goto code_?;
    cVar12 = func_?();
    if (cVar12 == '\0') goto code_?;
    cVar12 = *(char *)&(this_04->fields)._._._._.m_CachedPtr;
  }
  else {
code_?:
    cVar12 = '\0';
  }
  pIVar1 = (this->fields).adIcon;
  if (pIVar1 != (Image *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pIVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,cVar12 != '\0',(MethodInfo *)0x0);
      pIVar1 = (this->fields).playIcon;
      if (pIVar1 != (Image *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,cVar12 == '\0',(MethodInfo *)0x0);
          pIVar1 = (this->fields).readyToPlayTimerFill;
          if (pIVar1 != (Image *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,cVar12 == '\0',(MethodInfo *)0x0);
              pPVar13 = (this->fields).respawnButton;
              pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar10,(Object *)this,MethodInfo__DeathUIBoostMenuController__OnRespawn__,
                         (MethodInfo *)0x0);
              if (pPVar13 != (PointerDownController *)0x0) {
                PointerDownController::PointerDownController_Initialize
                          (pPVar13,(UnityAction *)pUVar10,(MethodInfo *)0x0);
                pPVar13 = (this->fields).resetButton;
                pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar10,(Object *)this,
                           MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                           (MethodInfo *)0x0);
                if (pPVar13 != (PointerDownController *)0x0) {
                  PointerDownController::PointerDownController_Initialize
                            (pPVar13,(UnityAction *)pUVar10,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                     ((MethodInfo *)0x0);
                  if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
                    this_02 = (pSVar3->fields).SpawnRoleModeTypeWrapper;
                    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar10,(Object *)this,
                               MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                               ,
                               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                              );
                    if (this_02 != (SpawnRoleModeTypeWrapper *)0x0) {
                      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                (this_02,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar10,
                                 (MethodInfo *)0x0);
                      this_03 = (this->fields).boostMenu;
                      if (this_03 != (BoostMenuController *)0x0) {
                        BoostMenuController::BoostMenuController_Initialize
                                  (this_03,(MethodInfo *)0x0);
                        this_06 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (this_06 != (MVNetworkGame *)0x0) {
                          this_07 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (this_06,(MethodInfo *)0x0);
                          if (this_07 != (MVLocalPlayer *)0x0) {
                            pMVar14 = MVPlayer::MVPlayer_GetCheckpoint
                                                ((MVPlayer *)this_07,(MethodInfo *)0x0);
                            pNVar7 = (this->fields).buttonFader;
                            if (pNVar7 != (NotificationFade *)0x0) {
                              NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
                              pNVar7 = (this->fields).buttonFader;
                              if (pNVar7 != (NotificationFade *)0x0) {
                                NotificationFade::NotificationFade_PauseAt
                                          (pNVar7,0.0,(MethodInfo *)0x0);
                                pGVar2 = (this->fields).readyToPlayTimerObject;
                                if (pGVar2 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                  if (pMVar14 == (MVCheckpoint *)0x0) {
                                    pNVar7 = (this->fields).resetButtonFader;
                                    if (pNVar7 != (NotificationFade *)0x0) {
                                      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                               Component_1_get_gameObject
                                                         ((Component_1 *)pNVar7,(MethodInfo *)0x0);
                                      if (pGVar2 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar2,0,(MethodInfo *)0x0);
                                        pTVar15 = (this->fields).restartText;
                                        if (pTVar15 != (Text *)0x0) {
                                          pTVar16 = pTVar15->klass;
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    pTVar15 = (this->fields).restartText;
                                    if (pTVar15 != (Text *)0x0) {
                                      pTVar16 = pTVar15->klass;
code_?:
                                      (*(code *)(pTVar16->vtable).set_text.method)();
                                      if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).
                                                  Equals.methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__GamePointGainEffectManager->_1).cctor_started
                                          == 0)) {
                                        func_?();
                                      }
                                      GamePointGainEffectManager::
                                      GamePointGainEffectManager_get_GamePointAmountShown
                                                ((MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void LockCursorAndPop() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_LockCursorAndPop
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                      ((MethodInfo *)0x0);
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1,1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache4 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__DeathUIBoostMenuController___LockCursorAndPop_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache4 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache4;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    iVar3 = iRam_?;
    if ((pGVar2 != (GameEventManager *)0x0) &&
       ((pGVar2->fields).AvatarCommandsPlayMode !=
        (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      if (iRam_? == 0) {
        return;
      }
      uStack4 = 0;
      if (*(JumpState_OnWallJumpDelegate **)(iRam_? + 0x2c) !=
          (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                  (*(JumpState_OnWallJumpDelegate **)(iRam_? + 0x2c),(MethodInfo *)0x0);
      }
      this_00 = *(MethodInfo **)(iVar3 + 0x14);
      pcVar5 = *(code **)(iVar3 + 8);
      piVar6 = *(int **)(iVar3 + 0x10);
      piVar7 = piVar6;
      method_00 = this_00;
      if (this_00->flags == 0xffff) {
        func_?(this_00);
      }
      cVar8 = func_?(this_00);
      if (cVar8 == '\0') {
        if ((char)this_00->iflags == '\0') {
          (*pcVar5)();
          return;
        }
      }
      else if ((this_00->flags != 0xffff) &&
              (((piVar6 == (int *)0x0 || ((*(uint *)(*piVar6 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(iVar3 + 0xc) != 0)))) {
        cVar8 = func_?(piVar6);
        if (cVar8 != '\0') {
          return;
        }
        pMVar9 = this_00;
        cVar8 = func_?();
        pOVar10 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,pMVar9);
        cVar11 = func_?(pOVar10);
        if (cVar8 == '\0') {
          if (cVar11 != '\0') {
            pOVar10 = mscorlib.dll::System::Collections::Generic::
                     KeyValuePair`2[WinningConditionType,System::Object]::
                     KeyValuePair_2_WinningConditionType_System_Object__get_Value
                               ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                                method_00);
            func_?(this_00->flags,pOVar10,piVar6);
            return;
          }
          (**(code **)(*piVar6 + 0xc0 + (uint)this_00->flags * 8))
                    (piVar6,*(undefined4 *)(*piVar6 + 0xc4 + (uint)this_00->flags * 8));
          return;
        }
        uVar12 = (uint)this_00->flags;
        if (cVar11 == '\0') {
          puVar13 = (undefined4 *)
                   func_?(*(undefined4 *)(*piVar6 + 0xc4 + uVar12 * 8),this_00);
          (*(code *)*puVar13)(piVar6,puVar13);
          return;
        }
        uVar14 = 0;
        uVar15 = *(ushort *)(*piVar6 + 0xb6);
        pMVar9 = this_00;
        if (uVar15 != 0) {
          do {
            if (*(char **)(*(int *)(*piVar6 + 0x58) + (uint)uVar14 * 8) == this_00->name) {
              iVar3 = *piVar7 +
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar14 * 8) +
                      method_00->flags + 0x18) * 8;
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
          uVar12 = (uint)method_00->flags;
          pMVar9 = method_00;
          piVar6 = piVar7;
        }
        piVar7 = piVar6;
        method_00 = pMVar9;
        iVar3 = func_?(piVar7,this_00->name,uVar12);
code_?:
        puVar13 = (undefined4 *)func_?(*(undefined4 *)(iVar3 + 4),method_00);
        (*(code *)*puVar13)(piVar7,puVar13);
        return;
      }
      (*pcVar5)(piVar6,this_00);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
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
      NotificationFade::NotificationFade_PauseAt(pNVar1,0.0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_03 != (MVNetworkGame *)0x0) &&
     (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
     this_04 != (MVLocalPlayer *)0x0)) {
    MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)this_04,(MethodInfo *)0x0);
    pTVar1 = (this->fields).restartText;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      this_05 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((this_05 != (SpawnRoleDataMediator *)0x0) &&
         (this_06 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)this_05,(MethodInfo *)0x0),
         this_06 !=
         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
        iVar2 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          (this_06,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                          );
        if (iVar2 == 4) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar3 == (GameEventManager *)0x0) ||
             (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
             this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (this->fields).buttonFader;
        if (this_01 != (NotificationFade *)0x0) {
          bVar4 = NotificationFade::NotificationFade_get_IsPaused(this_01,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return;
          }
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_07,(Object *)this,
                     MethodInfo__DeathUIBoostMenuController___OnRespawn_m__3_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar5,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_07,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          this_02 = (this->fields).respawnButton;
          if ((this_02 != (PointerDownController *)0x0) &&
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0),
             pGVar5 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnRespawn() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OnRespawn
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonFader;
  if (this_00 != (NotificationFade *)0x0) {
    bVar1 = NotificationFade::NotificationFade_get_IsPaused(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__DeathUIBoostMenuController___OnRespawn_m__3_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
              );
    this_01 = (this->fields).respawnButton;
    if ((this_01 != (PointerDownController *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenMenu() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_OpenMenu
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonFader;
  if (this_00 != (NotificationFade *)0x0) {
    bVar1 = NotificationFade::NotificationFade_get_IsPaused(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).isGhost == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar2 == (GameEventManager *)0x0) ||
           (this_01 = (pGVar2->fields).AvatarCommandsPlayMode,
           this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_01,(MethodInfo *)0x0);
        (this->fields).isGhost = 1;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)0x0,
                   MethodInfo__DeathUIBoostMenuController___OpenMenu_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar3 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar3 == (IPlayModeUI *)0x0) goto code_?;
      uStack4 = 1;
      uStack5 = 4;
      func_?();
    }
    return;
  }
code_?:
  uStack4 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReadyToSpawn(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_ReadyToSpawn
               (DeathUIBoostMenuController *this,bool promotionPushedToStack,bool withAd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase,fVar1);
  }
  this_02 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    this_03 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
    if (this_03 !=
        (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
    {
      this_04 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (this_03,(MethodInfo *)0x0);
      if (this_04 !=
          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          (this_04,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                          );
        if ((iVar2 == 2) || (_UNK_? < (float)this_04)) {
          pNVar3 = (this->fields).buttonFader;
          if (pNVar3 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Unpause(pNVar3,(MethodInfo *)0x0);
            pGVar4 = (this->fields).readyToPlayTimerObject;
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
              pNVar3 = (this->fields).resetButtonFader;
              if (pNVar3 != (NotificationFade *)0x0) {
                NotificationFade::NotificationFade_Activate(pNVar3,(MethodInfo *)0x0);
                pNVar3 = (this->fields).boostFader;
                if (pNVar3 != (NotificationFade *)0x0) {
                  NotificationFade::NotificationFade_Activate(pNVar3,(MethodInfo *)0x0);
                  pNVar3 = (this->fields).menuButtonFader;
                  if (pNVar3 != (NotificationFade *)0x0) {
                    NotificationFade::NotificationFade_Activate(pNVar3,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                       ((MethodInfo *)0x0);
                    if ((pGVar5 != (GameEventManager *)0x0) &&
                       (this_01 = (pGVar5->fields).AvatarCommandsPlayMode,
                       this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                      FirstTimeChildDestroyedCallback::FirstTimeChildDestroyedCallback_OnDestroy
                                ((FirstTimeChildDestroyedCallback *)this_01,(MethodInfo *)0x0);
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
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache3 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_05,(Object *)0x0,
                       MethodInfo__DeathUIBoostMenuController___ReadyToSpawn_m__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache3 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)this_05;
          }
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache3;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar4,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar5 != (GameEventManager *)0x0) &&
             (this_00 = (SpawnRoleDataMediator *)(pGVar5->fields).AvatarCommandsPlayMode,
             this_00 != (SpawnRoleDataMediator *)0x0)) {
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
            SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide
                      (this_00,(MethodInfo *)0x0);
            return;
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


/* Void Update() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController_Update
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIBoostMenuController___Update_c__AnonStorey1;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields).state = (int32_t)this;
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
        *(undefined1 *)&(this_02->fields)._._._._.m_CachedPtr = 0;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        puVar4 = &UNK_?;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_02,
                   MethodInfo__DeathUIBoostMenuController___Update_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (((this->fields).shouldPop != 0) &&
           (*(char *)&(this_02->fields)._._._._.m_CachedPtr == '\0')) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)0x0,
                       MethodInfo__DeathUIBoostMenuController___Update_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
          }
          pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar3,(BaseEventData *)0x0,pEVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
        }
        if (((this->fields).isGhost == 0) && ((float)puVar4 <= 0.0)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar7 == (GameEventManager *)0x0) ||
             (this_00 = (pGVar7->fields).AvatarCommandsPlayMode,
             this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_00,(MethodInfo *)0x0);
          (this->fields).isGhost = 1;
        }
        if (((this->fields).wantsToPlay != 0) && ((float)puVar4 <= 0.0)) {
          (this->fields).wantsToPlay = 0;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache2 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)0x0,
                       MethodInfo__DeathUIBoostMenuController___Update_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache2 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
          }
          pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__DeathUIBoostMenuController->static_fields->__f__am_cache2;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar3,(BaseEventData *)0x0,pEVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar7 == (GameEventManager *)0x0) ||
             (this_01 = (SpawnRoleDataMediator *)(pGVar7->fields).AvatarCommandsPlayMode,
             this_01 == (SpawnRoleDataMediator *)0x0)) goto code_?;
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
          SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide
                    (this_01,(MethodInfo *)0x0);
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


/* Void <LockCursorAndPop>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::
     DeathUIBoostMenuController__LockCursorAndPop_m__5
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


/* Void <OnRespawn>m__3(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__OnRespawn_m__3
               (DeathUIBoostMenuController *this,IDeathPromotionSelector *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__DeathUIBoostMenuController__ReadyToSpawn_bool__bool_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__UnityAction_System__Object__void__
            );
  if (x != (IDeathPromotionSelector *)0x0) {
    func_?(1,TypeInfo__IDeathPromotionSelector);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OpenMenu>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__OpenMenu_m__0
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


/* Void <ReadyToSpawn>m__4(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__ReadyToSpawn_m__4
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


/* Void <Update>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__Update_m__1
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


/* Void <Update>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__Update_m__2
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


/* DeathUIBoostMenuController() */

void Assembly-CSharp.dll::DeathUIBoostMenuController::DeathUIBoostMenuController__ctor
               (DeathUIBoostMenuController *this,MethodInfo *method)

{
  (this->fields).timeUntilGhostMode = 2.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

