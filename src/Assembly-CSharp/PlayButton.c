
/* Void ConfirmPlay() */

void Assembly-CSharp.dll::PlayButton::PlayButton_ConfirmPlay(PlayButton *this,MethodInfo *method)

{
  if ((this->fields).OnPlayButtonPressed != (Action *)0x0) {
    cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)
                      (this,this->klass[1]._0.image);
    if (cVar1 == '\0') {
      pAVar2 = (this->fields).OnPlayButtonPressed;
      if (pAVar2 == (Action *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    }
  }
  return;
}


/* Boolean HandlePlayAvailable() */

bool Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayAvailable
               (PlayButton *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar2->fields).currentGameState;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      if ((pMVar5->fields).respawnTime <= fVar4 && iVar3 != 2) {
        return 0;
      }
      this_00 = (this->fields).button;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
        if ((this->fields).shouldConfirmPlay == 0) {
          MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
        }
        return 1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void HandlePlayPress() */

void Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayPress
               (PlayButton *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  if (cVar1 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)
              (this,(this->klass->vtable).OnCountDownEnd.methodPtr);
  }
  return;
}


/* Void OnContinuePressed() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnContinuePressed
               (PlayButton *this,MethodInfo *method)

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
                    MethodInfo__PlayButton____c___OnContinuePressed_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PlayButton____c);
  }
  callbackFunction = TypeInfo__PlayButton____c->static_fields->__9__15_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayButton____c);
    }
    object = TypeInfo__PlayButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__PlayButton____c___OnContinuePressed_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayButton____c->static_fields->__9__15_0 = callbackFunction;
    func_?(&TypeInfo__PlayButton____c->static_fields->__9__15_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  if (cVar1 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)();
  }
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnCountDownEnd(PlayButton *this,MethodInfo *method)

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
                    MethodInfo__PlayButton____c___OnCountDownEnd_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayButton____c);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    if ((pBVar1->fields)._.m_Interactable == 0) {
      if ((this->fields).shouldConfirmPlay == 0) {
        bVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0)
        ;
        if (bVar2 == 0) {
          (*(code *)(this->klass->vtable).StartPlaying.method)
                    (this,(this->klass->vtable).OnCountDownEnd.methodPtr);
        }
        else {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if (pIVar3 == (IPlayModeUI *)0x0) goto code_?;
          func_?(4,TypeInfo__IPlayModeUI,pIVar3,0);
          if ((this->fields)._.shouldPop != 0) {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__PlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__PlayButton____c);
            }
            callbackFunction = TypeInfo__PlayButton____c->static_fields->__9__21_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__PlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__PlayButton____c);
              }
              object = TypeInfo__PlayButton____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__PlayButton____c___OnCountDownEnd_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__PlayButton____c->static_fields->__9__21_0 = callbackFunction;
              func_?(&TypeInfo__PlayButton____c->static_fields->__9__21_0,callbackFunction)
              ;
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
          }
        }
      }
      else {
        PlayButton_ConfirmPlay(this,(MethodInfo *)0x0);
      }
      pBVar1 = (this->fields).button;
      if (pBVar1 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)pBVar1,1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnEnable(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                    MethodInfo__PlayButton____c__DisplayClass19_0___OnEnable_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    in_stack_1 = &TypeInfo__PlayButton____c__DisplayClass19_0;
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    this_01 = (this->fields).embeddedPlayerConfig;
    if (this_01 != (EmbeddedPlayerConfig *)0x0) {
      pEVar3 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
      uVar4 = pEVar3->showTouristPromotion;
      uVar5 = pEVar3->noPlayButtonVideoIcon;
      if (value != (Object *)0x0) {
        *(undefined1 *)&value[1].klass = 0;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__PlayButton____c__DisplayClass19_0___OnEnable_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                  );
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
           (this_02 = (WebCompletionSource_1_System_Object_ *)(pSVar7->fields).spawnRoleMode,
           this_02 != (WebCompletionSource_1_System_Object_ *)0x0)) {
          pTVar8 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                    WebCompletionSource_1_System_Object__get_Task
                              (this_02,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                              );
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (pMVar10 = (pMVar9->fields)._NetworkGameStateListener_k__BackingField,
             pMVar10 != (MVNetworkGameStateListener *)0x0)) {
            iVar11 = (pMVar10->fields).currentGameState;
            if ((uVar5 == '\0') && (uVar4 == '\0')) {
              pIVar12 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
              if (pIVar12 == (IAdManager *)0x0) goto code_?;
              bVar13 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar12
                                     );
            }
            else {
              bVar13 = 0;
            }
            if (((*(byte *)&value[1].klass & bVar13) == 0) ||
               ((pTVar8 != (Task *)0x2 && (pTVar8 != (Task *)0x4)))) {
              value_00 = false;
            }
            else {
              value_00 = iVar11 != 2;
            }
            pIVar14 = (this->fields).playIcon;
            if ((pIVar14 != (Image *)0x0) &&
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar14,(MethodInfo *)0x0),
               pGVar6 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,value_00 ^ 1,(MethodInfo *)0x0);
              pIVar14 = (this->fields).adIcon;
              if ((pIVar14 != (Image *)0x0) &&
                 (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar14,(MethodInfo *)0x0),
                 pGVar6 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPointerDown
               (PlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
      uVar1 = func_?(&puStack_2);
      func_?(uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((eventData->fields)._button_k__BackingField == 0) {
      if ((this->fields).shouldConfirmPlay != 0) {
        PlayButton_ConfirmPlay(this,(MethodInfo *)0x0);
        return;
      }
      PlayButton_Play(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPromotionShown
               (PlayButton *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayButton__OnContinuePressed__);
    func_?(&
                    MethodInfo__PlayButton____c__DisplayClass14_0___OnPromotionShown_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayButton____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  if ((withAd & promotionShown) == 0) {
    cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)
                      (this,this->klass[1]._0.image);
    if (cVar1 == '\0') {
      (*(code *)(this->klass->vtable).StartPlaying.method)
                (this,(this->klass->vtable).OnCountDownEnd.methodPtr);
    }
    return;
  }
  method_00 = TypeInfo__PlayButton____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).continueButtonPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pOVar2 = value[1].klass;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__PlayButton__OnContinuePressed__,(MethodInfo *)0x0)
    ;
    if (pOVar2 != (Object__Class *)0x0) {
      ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                ((ContinueButtonLockCursor *)pOVar2,(Action *)this_00,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__PlayButton____c__DisplayClass14_0___OnPromotionShown_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Play(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayButton___Play_b__13_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimePressPlayController);
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  else {
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
      if (bVar1 != 0) {
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
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
             pMVar5 != (MVNetworkGameStateListener *)0x0)) {
            if (((pTVar3 == (Task *)0x2) || (pTVar3 == (Task *)0x4)) &&
               ((pMVar5->fields).currentGameState != 2)) {
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)this,
                         MethodInfo__PlayButton___Play_b__13_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                        );
              return;
            }
            puStack6 = *(undefined **)(*in_stack_7 + 0x10c);
            cVar8 = (**(code **)(*in_stack_7 + 0x108))();
            if (cVar8 == '\0') {
              puStack6 = *(undefined **)(*in_stack_7 + 0xe4);
              (**(code **)(*in_stack_7 + 0xe0))();
            }
            return;
          }
        }
        goto code_?;
      }
    }
  }
  (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  pTVar9 = (this->fields).timedPlayReward;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar9 = (this->fields).timedPlayReward;
    if (pTVar9 == (TimedPlayReward *)0x0) {
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pTVar9->fields)._IsClaimable_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar11 = TypeInfo__TimedPlayReward__RewardTracker->static_fields;
      if ((pTVar11->IsCollected == 0) && (pTVar11->CollectedChanged != (Action *)0x0)) {
        (*(pTVar11->CollectedChanged->fields)._._.invoke_impl)();
      }
    }
  }
  cVar8 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)();
  if (cVar8 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)();
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Update(PlayButton *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar2->fields).currentGameState;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      if (iVar3 == 2) {
        pIVar6 = (this->fields)._.countdownFill;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
            pMVar2 == (MVNetworkGameStateListener *)0x0)) ||
           (fVar4 = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                              (pMVar2,(MethodInfo *)0x0), pIVar6 == (Image *)0x0))
        goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar6,fVar4,(MethodInfo *)0x0);
      }
      else {
        if ((pMVar5->fields).respawnTime <= fVar4) {
          pIVar6 = (this->fields)._.countdownFill;
          if ((pIVar6 != (Image *)0x0) &&
             (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar6,(MethodInfo *)0x0),
             pGVar7 != (GameObject *)0x0)) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar7,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              pIVar6 = (this->fields)._.countdownFill;
              if ((pIVar6 == (Image *)0x0) ||
                 (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0),
                 pGVar7 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
            }
            pIStack9 = (this->klass->vtable).OnPointerEnter.methodPtr;
            (*(code *)(this->klass->vtable).OnCountDownEnd.method)();
            return;
          }
          goto code_?;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                  ((MethodInfo *)(pMVar5->fields).respawnTime);
        puVar10 = &UNK_?;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
        puVar11 = &UNK_?;
        fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar5,(MethodInfo *)0x0);
        pIVar6 = (this->fields)._.countdownFill;
        if (pIVar6 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar6,((float)puVar11 - (float)puVar10) / fVar4,(MethodInfo *)0x0);
      }
      pIVar6 = (this->fields)._.countdownFill;
      if ((pIVar6 != (Image *)0x0) &&
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar6,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0))
      {
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar7,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return;
        }
        pIVar6 = (this->fields)._.countdownFill;
        if ((pIVar6 != (Image *)0x0) &&
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar6,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <Play>b__13_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton__Play_b__13_0
               (PlayButton *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDeathPromotionSelector);
    func_?(&MethodInfo__PlayButton__OnPromotionShown_bool__bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,MethodInfo__PlayButton__OnPromotionShown_bool__bool_,
             (MethodInfo *)0x0);
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

