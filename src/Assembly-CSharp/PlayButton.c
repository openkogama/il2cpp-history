
/* Void ConfirmPlay() */

void Assembly-CSharp.dll::PlayButton::PlayButton_ConfirmPlay(PlayButton *this,MethodInfo *method)

{
  if ((this->fields).OnPlayButtonPressed != (Action *)0x0) {
    cVar1 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                      (this,(this->klass->vtable).HandlePlayAvailable.method);
    if (cVar1 == '\0') {
      pAVar2 = (this->fields).OnPlayButtonPressed;
      if (pAVar2 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
        return;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Boolean HandlePlayAvailable() */

bool Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayAvailable
               (PlayButton *this,MethodInfo *method)

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
      bVar7 = (*pcVar5)();
      return bVar7;
    }
    pcRam_? = pcVar5;
    fVar8 = (float)(*pcRam_?)();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (extraout_RAX != 0) {
      if (*(float *)(extraout_RAX + 0xfc) <= fVar8 && iVar4 != 2) {
        return 0;
      }
      this_00 = (this->fields).button;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
        if ((this->fields).shouldConfirmPlay == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__ILockCursorManager);
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
          if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
            pMVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                               ((MethodInfo *)0x0);
            if ((pMVar9 == (MVGameControllerDesktop *)0x0) ||
               (pIVar10 = (pMVar9->fields).lockCursorManager, pIVar10 == (ILockCursorManager *)0x0))
            goto code_?;
            FUN_?(2,TypeInfo__ILockCursorManager,pIVar10,1);
          }
        }
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar7 = (*pcVar5)();
  return bVar7;
}


/* Void HandlePlayPress() */

void Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayPress
               (PlayButton *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                    (this,(this->klass->vtable).HandlePlayAvailable.method);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).StartPlaying.methodPtr)(this,(this->klass->vtable).StartPlaying.method);
    return;
  }
  return;
}


/* Void OnContinuePressed() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnContinuePressed
               (PlayButton *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__PlayButton____c___OnContinuePressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PlayButton____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayButton____c);
  }
  this_00 = TypeInfo__PlayButton____c->static_fields->__9__13_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__PlayButton____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayButton____c);
    }
    object = TypeInfo__PlayButton____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__PlayButton____c___OnContinuePressed_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayButton____c->static_fields->__9__13_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__PlayButton____c->static_fields->__9__13_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  cVar5 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                    (this,(this->klass->vtable).HandlePlayAvailable.method);
  if (cVar5 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).StartPlaying.methodPtr)(this,(this->klass->vtable).StartPlaying.method);
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnCountDownEnd(PlayButton *this,MethodInfo *method)

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
                  MethodInfo__PlayButton____c___OnCountDownEnd_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) goto code_?;
  if ((pBVar1->fields)._.m_Interactable != 0) {
    return;
  }
  if ((this->fields).shouldConfirmPlay == 0) {
    bVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
    if (bVar2 == 0) {
      pIVar3 = (this->klass->vtable).StartPlaying.methodPtr;
      pMVar4 = (this->klass->vtable).StartPlaying.method;
      pPVar5 = this;
code_?:
      (*pIVar3)(pPVar5,pMVar4);
    }
    else {
      lVar6 = FUN_?();
      if (lVar6 == 0) goto code_?;
      FUN_?(8);
      if ((this->fields)._.shouldPop != 0) {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__PlayButton____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayButton____c);
        }
        this_00 = TypeInfo__PlayButton____c->static_fields->__9__19_0;
        if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__PlayButton____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__PlayButton____c);
          }
          object = TypeInfo__PlayButton____c->static_fields->__9;
          this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                     MethodInfo__PlayButton____c___OnCountDownEnd_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__PlayButton____c->static_fields->__9__19_0 = this_00;
          func_?(&TypeInfo__PlayButton____c->static_fields->__9__19_0);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar7,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
  }
  else if (((this->fields).OnPlayButtonPressed != (Action *)0x0) &&
          (cVar8 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                             (this,(this->klass->vtable).HandlePlayAvailable.method), cVar8 == '\0')
          ) {
    pAVar9 = (this->fields).OnPlayButtonPressed;
    if (pAVar9 == (Action *)0x0) goto code_?;
    pIVar3 = (pAVar9->fields)._._.invoke_impl;
    pMVar4 = (pAVar9->fields)._._.method;
    pPVar5 = (pAVar9->fields)._._.method_code;
    goto code_?;
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
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
  cVar8 = FUN_?(&(pBVar1->fields)._.m_Interactable);
  if (cVar8 == '\0') {
    return;
  }
  if ((pBVar1->fields)._.m_Interactable == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
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
    if (pEVar11 != (EventSystem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pEVar11->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar11 != (EventSystem *)0x0) {
          pGVar7 = (pEVar11->fields).m_CurrentSelected;
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar1,(MethodInfo *)0x0);
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
          if (pGVar12 != (GameObject *)0x0 || pGVar7 != (GameObject *)0x0) {
            if (pGVar12 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pGVar7 == (GameObject *)0x0) goto DAT_?;
              bVar13 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
            }
            else if (pGVar7 == (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar13 = (pGVar12->fields)._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar13 = pGVar7 == pGVar12;
            }
            if (!bVar13) goto code_?;
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if (pEVar11 != (EventSystem *)0x0) {
            UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_SetSelectedGameObject_1(pEVar11,(GameObject *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
DAT_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)pBVar1,(MethodInfo *)0x0);
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPointerDown
               (PlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver == 0) {
    return;
  }
  if (eventData == (PointerEventData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((eventData->fields)._button_k__BackingField != 0) {
    return;
  }
  if ((this->fields).shouldConfirmPlay != 0) {
    if (((this->fields).OnPlayButtonPressed != (Action *)0x0) &&
       (cVar2 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                           (this,(this->klass->vtable).HandlePlayAvailable.method), cVar2 == '\0'))
    {
      pAVar3 = (this->fields).OnPlayButtonPressed;
      if (pAVar3 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
        return;
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
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
                  MethodInfo__PlayButton___Play_b__11_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto DAT_?;
    if ((pGVar4->fields).profileID < 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVClientSettings->static_fields->flags & 4) != 0) {
        pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
            (pSVar6 = (pSVar5->fields).spawnRoleMode,
            pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                       *)0x0)) &&
           (pSVar7 = (pSVar6->fields)._.subscribableVariable,
           pSVar7 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          iVar8 = (pSVar7->fields)._.value;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar10 = (pMVar9->fields)._NetworkGameStateListener_k__BackingField,
             pMVar10 != (MVNetworkGameStateListener *)0x0)) {
            if (((iVar8 != 2) && (iVar8 != 4)) || ((pMVar10->fields).currentGameState == 2)) {
              cVar2 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                                 (this,(this->klass->vtable).HandlePlayAvailable.method);
              if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(this->klass->vtable).StartPlaying.methodPtr)
                          (this,(this->klass->vtable).StartPlaying.method);
                return;
              }
              return;
            }
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__PlayButton___Play_b__11_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar12 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            ;
            if ((
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(pMVar12);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_GetEventChain
                      (pGVar11,(IList_1_UnityEngine_Transform_ *)
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList,(MethodInfo *)0x0);
            pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
              lVar14 = (longlong)(pLVar13->fields)._size;
              uVar15 = 0;
              if (0 < lVar14) {
                lVar16 = 0;
                lVar17 = 0x20;
                do {
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList;
                  if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                  if ((uint)(pLVar13->fields)._size <= uVar15) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pTVar18 = (pLVar13->fields)._items;
                  if (pTVar18 == (Transform__Array *)0x0) goto code_?;
                  if ((uint)pTVar18->max_length <= uVar15) {
                    FUN_?();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  this_00 = *(Component **)((longlong)pTVar18->vector + lVar17 + -0x20);
                  if (this_00 == (Component *)0x0) goto code_?;
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_00,(MethodInfo *)0x0);
                  bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                           ExecuteEvents_Execute_18
                                     (pGVar11,(BaseEventData *)0x0,this_01,
                                      (pMVar12->field7_0x38).rgctx_data[1].method);
                  if (bVar19 != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
                    return;
                  }
                  uVar15 = uVar15 + 1;
                  lVar16 = lVar16 + 1;
                  lVar17 = lVar17 + 8;
                } while (lVar16 < lVar14);
              }
              return;
            }
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        goto DAT_?;
      }
    }
  }
  (*(this->klass->vtable).HandlePlayAvailable.methodPtr)(this);
  pTVar20 = (this->fields).timedPlayReward;
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
  if (pTVar20 != (TimedPlayReward *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar20->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar20 = (this->fields).timedPlayReward;
      if (pTVar20 == (TimedPlayReward *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pTVar20->fields)._IsClaimable_k__BackingField != 0) {
        TimedPlayReward::TimedPlayReward_ClaimReward(pTVar20,(MethodInfo *)0x0);
      }
    }
  }
  cVar2 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                     (this,(this->klass->vtable).HandlePlayAvailable.method);
  if (cVar2 == '\0') {
    (*(this->klass->vtable).StartPlaying.methodPtr)(this,(this->klass->vtable).StartPlaying.method);
  }
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPointerEnter
               (PlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMouseOver = 1;
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPromotionShown
               (PlayButton *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
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
    FUN_?(&
                  ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayButton__OnContinuePressed__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayButton____c__DisplayClass12_0___OnPromotionShown_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayButton____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((withAd & promotionShown) == 0) {
    cVar1 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                      (this,(this->klass->vtable).HandlePlayAvailable.method);
    if (cVar1 != '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).StartPlaying.methodPtr)(this,(this->klass->vtable).StartPlaying.method);
    return;
  }
  object = (Object *)FUN_?(TypeInfo__PlayButton____c__DisplayClass12_0);
  original = (this->fields).continueButtonPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                     );
  if (object != (Object *)0x0) {
    bVar3 = iRam_? != 0;
    object[1].klass = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pOVar2 = object[1].klass;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__PlayButton__OnContinuePressed__,(MethodInfo *)0x0)
    ;
    if (pOVar2 != (Object__Class *)0x0) {
      ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                ((ContinueButtonLockCursor *)pOVar2,(Action *)this_00,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__PlayButton____c__DisplayClass12_0___OnPromotionShown_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Play(PlayButton *this,MethodInfo *method)

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
                  MethodInfo__PlayButton___Play_b__11_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto DAT_?;
    if ((pGVar1->fields).profileID < 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVClientSettings->static_fields->flags & 4) != 0) {
        pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
            (pSVar3 = (pSVar2->fields).spawnRoleMode,
            pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                       *)0x0)) &&
           (pSVar4 = (pSVar3->fields)._.subscribableVariable,
           pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          iVar5 = (pSVar4->fields)._.value;
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar6 != (MVNetworkGame *)0x0) &&
             (pMVar7 = (pMVar6->fields)._NetworkGameStateListener_k__BackingField,
             pMVar7 != (MVNetworkGameStateListener *)0x0)) {
            if (((iVar5 != 2) && (iVar5 != 4)) || ((pMVar7->fields).currentGameState == 2)) {
              cVar8 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                                 (this,(this->klass->vtable).HandlePlayAvailable.method);
              if (cVar8 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(this->klass->vtable).StartPlaying.methodPtr)
                          (this,(this->klass->vtable).StartPlaying.method);
                return;
              }
              return;
            }
            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__PlayButton___Play_b__11_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar10 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            ;
            if ((
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(pMVar10);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_GetEventChain
                      (pGVar9,(IList_1_UnityEngine_Transform_ *)
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList,(MethodInfo *)0x0);
            pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
              lVar12 = (longlong)(pLVar11->fields)._size;
              uVar13 = 0;
              if (0 < lVar12) {
                lVar14 = 0;
                lVar15 = 0x20;
                do {
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList;
                  if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                  if ((uint)(pLVar11->fields)._size <= uVar13) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pTVar17 = (pLVar11->fields)._items;
                  if (pTVar17 == (Transform__Array *)0x0) goto code_?;
                  if ((uint)pTVar17->max_length <= uVar13) {
                    FUN_?();
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
                  if (this_00 == (Component *)0x0) goto code_?;
                  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_00,(MethodInfo *)0x0);
                  bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                           ExecuteEvents_Execute_18
                                     (pGVar9,(BaseEventData *)0x0,this_01,
                                      (pMVar10->field7_0x38).rgctx_data[1].method);
                  if (bVar18 != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
                    return;
                  }
                  uVar13 = uVar13 + 1;
                  lVar14 = lVar14 + 1;
                  lVar15 = lVar15 + 8;
                } while (lVar14 < lVar12);
              }
              return;
            }
code_?:
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
        goto DAT_?;
      }
    }
  }
  (*(this->klass->vtable).HandlePlayAvailable.methodPtr)(this);
  pTVar19 = (this->fields).timedPlayReward;
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
  if (pTVar19 != (TimedPlayReward *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar19->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar19 = (this->fields).timedPlayReward;
      if (pTVar19 == (TimedPlayReward *)0x0) {
DAT_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((pTVar19->fields)._IsClaimable_k__BackingField != 0) {
        TimedPlayReward::TimedPlayReward_ClaimReward(pTVar19,(MethodInfo *)0x0);
      }
    }
  }
  cVar8 = (*(this->klass->vtable).HandlePlayAvailable.methodPtr)
                     (this,(this->klass->vtable).HandlePlayAvailable.method);
  if (cVar8 == '\0') {
    (*(this->klass->vtable).StartPlaying.methodPtr)(this,(this->klass->vtable).StartPlaying.method);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Update(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  player = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
  pMVar1 = (MVGameControllerBase *)(player->fields).OnLevelChanged;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
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
  if (extraout_RAX == 0) goto code_?;
  bVar8 = fVar7 < *(float *)(extraout_RAX + 0xfc);
  bVar9 = iVar4 == 2;
  if (bVar9) {
    pIVar10 = (this->fields)._.countdownFill;
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
        pMVar3 == (MVNetworkGameStateListener *)0x0 || (pIVar10 == (Image *)0x0))))
    goto code_?;
    fVar7 = (float)(pMVar3->fields).timeLeft / (float)(pMVar3->fields).duration;
code_?:
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar10,fVar7,(MethodInfo *)0x0);
    pIVar10 = (this->fields)._.countdownFill;
    if ((pIVar10 == (Image *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar12 != 0) goto code_?;
    pIVar10 = (this->fields)._.countdownFill;
    if ((pIVar10 == (Image *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    bVar12 = 1;
  }
  else {
    if (bVar8) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
      if (extraout_RAX_00 == 0) goto code_?;
      fVar7 = *(float *)(extraout_RAX_00 + 0xfc);
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
      fVar13 = (float)(*pcRam_?)();
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
      if ((extraout_RAX_01 == 0) ||
         (pIVar10 = (this->fields)._.countdownFill, pIVar10 == (Image *)0x0))
      goto code_?;
      fVar7 = (fVar7 - fVar13) * _UNK_?;
      goto code_?;
    }
    pIVar10 = (this->fields)._.countdownFill;
    if ((pIVar10 == (Image *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar12 == 0) goto code_?;
    pIVar10 = (this->fields)._.countdownFill;
    if ((pIVar10 == (Image *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    bVar12 = 0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar11,bVar12,(MethodInfo *)0x0);
code_?:
  if ((!bVar9) && (!bVar8)) {
    (*(this->klass->vtable).OnCountDownEnd.methodPtr)
              (this,(this->klass->vtable).OnCountDownEnd.method);
  }
  return;
}


/* Void <Play>b__11_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton__Play_b__11_0
               (PlayButton *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IDeathPromotionSelector);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayButton__OnPromotionShown_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  FUN_?(uVar1,this,MethodInfo__PlayButton__OnPromotionShown_bool__bool_);
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

