
/* Void OnConfirmPlay() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnConfirmPlay
               (PlayButtonTouch *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnPlayButtonPressed;
  if (pAVar1 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnDisable
               (PlayButtonTouch *this,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 == (Button *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = FUN_?(&(this_00->fields)._.m_Interactable);
  if (cVar2 == '\0') {
    return;
  }
  if ((this_00->fields)._.m_Interactable == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pEVar3 != (EventSystem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pEVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar3 != (EventSystem *)0x0) {
          pGVar4 = (pEVar3->fields).m_CurrentSelected;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar5 != (GameObject *)0x0 || pGVar4 != (GameObject *)0x0) {
            if (pGVar5 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pGVar4 == (GameObject *)0x0) goto DAT_?;
              bVar6 = (pGVar4->fields)._.m_CachedPtr == (void *)0x0;
            }
            else if (pGVar4 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar6 = (pGVar5->fields)._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar6 = pGVar4 == pGVar5;
            }
            if (!bVar6) goto code_?;
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if (pEVar3 != (EventSystem *)0x0) {
            UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_SetSelectedGameObject_1(pEVar3,(GameObject *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnPromotionShown
               (PlayButtonTouch *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 == (Button *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = FUN_?(&(this_00->fields)._.m_Interactable);
  if (cVar2 == '\0') {
    return;
  }
  if ((this_00->fields)._.m_Interactable == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pEVar3 != (EventSystem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pEVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar3 != (EventSystem *)0x0) {
          pGVar4 = (pEVar3->fields).m_CurrentSelected;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar5 != (GameObject *)0x0 || pGVar4 != (GameObject *)0x0) {
            if (pGVar5 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pGVar4 == (GameObject *)0x0) goto DAT_?;
              bVar6 = (pGVar4->fields)._.m_CachedPtr == (void *)0x0;
            }
            else if (pGVar4 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar6 = (pGVar5->fields)._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar6 = pGVar4 == pGVar5;
            }
            if (!bVar6) goto code_?;
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if (pEVar3 != (EventSystem *)0x0) {
            UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_SetSelectedGameObject_1(pEVar3,(GameObject *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_Play
               (PlayButtonTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayButtonTouch___Play_b__5_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayButtonTouch___Play_b__5_1_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timedPlayReward;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (TimedPlayReward *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).timedPlayReward;
      if (pTVar1 == (TimedPlayReward *)0x0) goto code_?;
      if ((pTVar1->fields)._IsClaimable_k__BackingField != 0) {
        method = (MethodInfo *)0x0;
        TimedPlayReward::TimedPlayReward_ClaimReward(pTVar1,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
     pMVar4 == (MVNetworkGameStateListener *)0x0)) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar6 = (pMVar4->fields).currentGameState;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar8 = (float)(*pcRam_?)();
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX == 0) goto code_?;
  fVar9 = *(float *)(extraout_RAX + 0xf4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar10 = TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed;
  pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar11 == (SpawnRoleDataMediator *)0x0) ||
      (pSVar12 = (pSVar11->fields).spawnRoleMode,
      pSVar12 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                0x0)) ||
     (pSVar13 = (pSVar12->fields)._.subscribableVariable,
     pSVar13 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
  goto code_?;
  iVar14 = (pSVar13->fields)._.value;
  bVar15 = iVar14 == 2 || iVar14 == 4;
  if ((iVar6 == 2) || (fVar8 < fVar9)) {
    if ((bVar10 & bVar15) == 0) {
      this_00 = (this->fields).button;
      if (this_00 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      goto code_?;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                           );
    method_1 = 
    MethodInfo__PlayButtonTouch___Play_b__5_1_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  else {
    if ((bVar10 & bVar15) == 0) {
      (*(this->klass->vtable).StartPlaying.methodPtr)
                (this,(this->klass->vtable).StartPlaying.method);
      goto code_?;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                           );
    method_1 = 
    MethodInfo__PlayButtonTouch___Play_b__5_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,method_1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            );
code_?:
  if (bVar10 == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_StartPlaying
               (PlayButtonTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayButtonTouch____c___StartPlaying_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayButtonTouch____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    FUN_?();
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
       (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
       pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = (pSVar2->fields).spawnRoleType;
      if ((pSVar3 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
         (pSVar4 = (pSVar3->fields).subscribableVariable,
         pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
        if (((pSVar4->fields)._.value & 4) != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
               (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
              (pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 == (GameEventManager *)0x0)) ||
             (pGVar8 = (pGVar7->fields).AvatarCommandsPlayMode,
             pGVar8 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          if ((pGVar8->fields).OnEnterPlaymode != (Action *)0x0) {
            pAVar9 = (pGVar8->fields).OnEnterPlaymode;
            (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
          }
        }
        if ((this->fields).shouldPop != 0) {
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__PlayButtonTouch____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__PlayButtonTouch____c);
          }
          this_00 = TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0;
          if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__PlayButtonTouch____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__PlayButtonTouch____c);
            }
            object = TypeInfo__PlayButtonTouch____c->static_fields->__9;
            this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                       MethodInfo__PlayButtonTouch____c___StartPlaying_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0 = this_00;
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)&TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0
                             >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_Update
               (PlayButtonTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  player = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
  pMVar1 = (MVGameControllerBase *)(player->fields).OnLevelChanged;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    iVar4 = (pMVar3->fields).currentGameState;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar7 = (float)(*pcRam_?)();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (extraout_RAX != 0) {
      if (iVar4 == 2) {
        pIVar8 = (this->fields).countdownFill;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 == (MVGameControllerBase *)0x0) ||
            (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
           ((pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
            pMVar3 == (MVNetworkGameStateListener *)0x0 || (pIVar8 == (Image *)0x0))))
        goto code_?;
        fVar7 = (float)(pMVar3->fields).timeLeft / (float)(pMVar3->fields).duration;
      }
      else {
        if (*(float *)(extraout_RAX + 0xf4) <= fVar7) {
          pIVar8 = (this->fields).countdownFill;
          if (pIVar8 != (Image *)0x0) {
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar8,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              pIVar8 = (this->fields).countdownFill;
              if (pIVar8 == (Image *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pIVar8,0,(MethodInfo *)0x0);
            }
            pBVar10 = (this->fields).button;
            if (pBVar10 != (Button *)0x0) {
              if ((pBVar10->fields)._.m_Interactable != 0) {
                return;
              }
              (*(this->klass->vtable).OnCountdownEnd.methodPtr)
                        (this,(this->klass->vtable).OnCountdownEnd.method);
              pBVar10 = (this->fields).button;
              if (pBVar10 != (Button *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                          ((Selectable *)pBVar10,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
        if (extraout_RAX_00 == 0) goto code_?;
        fVar7 = *(float *)(extraout_RAX_00 + 0xf4);
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        fVar11 = (float)(*pcRam_?)();
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
        if ((extraout_RAX_01 == 0) ||
           (pIVar8 = (this->fields).countdownFill, pIVar8 == (Image *)0x0))
        goto code_?;
        fVar7 = (fVar7 - fVar11) * _UNK_?;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar8,fVar7,(MethodInfo *)0x0);
      pIVar8 = (this->fields).countdownFill;
      if (pIVar8 != (Image *)0x0) {
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pIVar8,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          pIVar8 = (this->fields).countdownFill;
          if (pIVar8 == (Image *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar8,1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Play>b__5_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch__Play_b__5_0
               (PlayButtonTouch *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IDeathPromotionSelector);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  FUN_?(uVar1,this,MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
  if (x == (IDeathPromotionSelector *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IDeathPromotionSelector) {
        pIVar6 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pIVar6 = (IDeathPromotionSelector__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->TryShowPromotionOrAd).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,uVar1,(pIVar6->TryShowPromotionOrAd).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <Play>b__5_1(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch__Play_b__5_1
               (PlayButtonTouch *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IDeathPromotionSelector);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  FUN_?(uVar1,this,MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
  if (x == (IDeathPromotionSelector *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IDeathPromotionSelector) {
        pIVar6 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pIVar6 = (IDeathPromotionSelector__VTable *)FUN_?(x);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->TryShowPromotionOrAd).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,uVar1,(pIVar6->TryShowPromotionOrAd).method,UNRECOVERED_JUMPTABLE);
  return;
}

