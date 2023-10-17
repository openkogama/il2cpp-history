
/* Void StartPlaying() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_StartPlaying
               (PlayButtonBase *this,MethodInfo *method)

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
                    MethodInfo__PlayButtonBase____c___StartPlaying_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayButtonBase____c);
    cRam_? = '\x01';
  }
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      bVar2 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(pMVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame *)0x0) goto code_?;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar1->fields)._.playerState == 3) {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
                    (this_02,0,(MethodInfo *)0x0);
        }
      }
      if (*(char *)&(this_00->fields).ReceivedAccessoryData != '\0') {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__PlayButtonBase____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__PlayButtonBase____c->static_fields->__9__3_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__PlayButtonBase____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__PlayButtonBase____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__PlayButtonBase____c___StartPlaying_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__PlayButtonBase____c->static_fields->__9__3_0 = callbackFunction;
          func_?();
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_UpdateButton
               (PlayButtonBase *this,MethodInfo *method)

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
          if ((pIVar6 != (Image *)0x0) &&
             (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar6,(MethodInfo *)0x0),
             pGVar7 != (GameObject *)0x0)) {
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar7,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              pIVar6 = (this->fields).countdownFill;
              if ((pIVar6 == (Image *)0x0) ||
                 (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0),
                 pGVar7 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
            }
            pMStack9 = (this->klass->vtable).OnCountDownEnd.method;
            (*(this->klass->vtable).OnCountDownEnd.methodPtr)();
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
        pIVar6 = (this->fields).countdownFill;
        if (pIVar6 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar6,((float)puVar11 - (float)puVar10) / fVar4,(MethodInfo *)0x0);
      }
      pIVar6 = (this->fields).countdownFill;
      if ((pIVar6 != (Image *)0x0) &&
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar6,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0))
      {
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar7,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return;
        }
        pIVar6 = (this->fields).countdownFill;
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

