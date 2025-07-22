
/* Void OnConfirmPlay() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnConfirmPlay
               (PlayButtonTouch *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnPlayButtonPressed;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnDisable
               (PlayButtonTouch *this,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_OnPromotionShown
               (PlayButtonTouch *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_Play
               (PlayButtonTouch *this,MethodInfo *method)

{
  object = this;
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
                    MethodInfo__PlayButtonTouch___Play_b__5_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayButtonTouch___Play_b__5_1_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timedPlayReward;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).timedPlayReward;
    if (pTVar1 == (TimedPlayReward *)0x0) goto code_?;
    if ((pTVar1->fields)._IsClaimable_k__BackingField != 0) {
      TimedPlayReward::TimedPlayReward_ClaimReward(pTVar1,(MethodInfo *)0x0);
    }
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
     pMVar4 == (MVNetworkGameStateListener *)0x0)) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar6 = (pMVar4->fields).currentGameState;
  pMVar7 = (MethodInfo *)
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(pMVar7);
  if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
  fVar9 = (pMVar8->fields).respawnTime;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar10 = TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed;
  pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar11 == (SpawnRoleDataMediator *)0x0) ||
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar11->fields).spawnRoleMode,
     this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
  pTVar12 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
            WebCompletionSource_1_System_Object__get_Task
                      (this_00,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                      );
  bVar13 = pTVar12 == (Task *)0x2 || pTVar12 == (Task *)0x4;
  if ((iVar6 == 2) || ((float)pMVar7 < fVar9)) {
    if ((bVar10 & bVar13) == 0) {
      this_01 = (this->fields).button;
      if (this_01 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_01,0,(MethodInfo *)0x0);
      goto code_?;
    }
    this = (PlayButtonTouch *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    pMVar7 = 
    MethodInfo__PlayButtonTouch___Play_b__5_1_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  else {
    if ((bVar10 & bVar13) == 0) {
      (*(code *)(this->klass->vtable).StartPlaying.method)();
      goto code_?;
    }
    this = (PlayButtonTouch *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    pMVar7 = 
    MethodInfo__PlayButtonTouch___Play_b__5_0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,pMVar7
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)this,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__PlayButtonTouch____c___StartPlaying_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayButtonTouch____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(6,TypeInfo__IPlayModeUI,pIVar1,0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
       (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
       this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
      bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                        (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar4 == (GameEventManager *)0x0) ||
           (this_01 = (pGVar4->fields).AvatarCommandsPlayMode,
           this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
        GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                  ((RewardedAd *)this_01,(MethodInfo *)0x0);
      }
      if ((this->fields).shouldPop != 0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__PlayButtonTouch____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__PlayButtonTouch____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__PlayButtonTouch____c->static_fields->__9;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__PlayButtonTouch____c___StartPlaying_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0 = callbackFunction;
          func_?(&TypeInfo__PlayButtonTouch____c->static_fields->__9__10_0,callbackFunction
                         );
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch_Update
               (PlayButtonTouch *this,MethodInfo *method)

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
        pIVar6 = (this->fields).countdownFill;
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
          pIVar6 = (this->fields).countdownFill;
          if (pIVar6 != (Image *)0x0) {
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar6,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pIVar6 = (this->fields).countdownFill;
              if (pIVar6 == (Image *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
            }
            pBVar8 = (this->fields).button;
            if (pBVar8 != (Button *)0x0) {
              if ((pBVar8->fields)._.m_Interactable != 0) {
                return;
              }
              (*(code *)(this->klass->vtable).OnCountdownEnd.method)(this,this->klass[1]._0.image);
              pBVar8 = (this->fields).button;
              if (pBVar8 != (Button *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                          ((Selectable *)pBVar8,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                  ((MethodInfo *)(pMVar5->fields).respawnTime);
        puVar9 = &UNK_?;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
        puVar10 = &UNK_?;
        fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar5,(MethodInfo *)0x0);
        pIVar6 = (this->fields).countdownFill;
        if (pIVar6 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar6,((float)puVar10 - (float)puVar9) / fVar4,(MethodInfo *)0x0);
      }
      pIVar6 = (this->fields).countdownFill;
      if (pIVar6 != (Image *)0x0) {
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pIVar6,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return;
        }
        pIVar6 = (this->fields).countdownFill;
        if (pIVar6 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar6,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Play>b__5_0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch__Play_b__5_0
               (PlayButtonTouch *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDeathPromotionSelector);
    func_?(&MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_,
             (MethodInfo *)0x0);
  if (x != (IDeathPromotionSelector *)0x0) {
    func_?(1,TypeInfo__IDeathPromotionSelector);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Play>b__5_1(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonTouch::PlayButtonTouch__Play_b__5_1
               (PlayButtonTouch *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDeathPromotionSelector);
    func_?(&MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,MethodInfo__PlayButtonTouch__OnPromotionShown_bool__bool_,
             (MethodInfo *)0x0);
  if (x != (IDeathPromotionSelector *)0x0) {
    func_?(1,TypeInfo__IDeathPromotionSelector);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

