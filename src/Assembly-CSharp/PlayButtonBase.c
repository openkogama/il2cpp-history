
/* Void StartPlaying() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_StartPlaying
               (PlayButtonBase *this,MethodInfo *method)

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
                  MethodInfo__PlayButtonBase____c___StartPlaying_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayButtonBase____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
    pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
       ((pMVar1->fields).lockCursorManager == (ILockCursorManager *)0x0)) goto code_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    if (0 < (pMVar5->fields)._._ProfileID_k__BackingField) {
      pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField;
      if (pUVar6 == (UserProfileData *)0x0) goto code_?;
      if ((pUVar6->fields).IsAdmin != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 == (MVGameControllerBase *)0x0) ||
            (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
           ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0 ||
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar4,(MethodInfo *)0x0), pMVar5 == (MVLocalPlayer *)0x0))))
        goto code_?;
        if ((pMVar5->fields)._.playerState == 3) {
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&::StringLiteral__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
                    (this_00,3,0,-1,::StringLiteral__,(MethodInfo *)0x0);
        }
      }
    }
    if ((this->fields).shouldPop != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PlayButtonBase____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayButtonBase____c);
      }
      this_01 = TypeInfo__PlayButtonBase____c->static_fields->__9__3_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PlayButtonBase____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayButtonBase____c);
        }
        object = TypeInfo__PlayButtonBase____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__PlayButtonBase____c___StartPlaying_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayButtonBase____c->static_fields->__9__3_0 = this_01;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&TypeInfo__PlayButtonBase____c->static_fields->__9__3_0 >> 0xc)
          ;
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_UpdateButton
               (PlayButtonBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
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
  bVar8 = fVar7 < *(float *)(extraout_RAX + 0xf4);
  bVar9 = iVar4 == 2;
  if (bVar9) {
    pIVar10 = (this->fields).countdownFill;
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
    pIVar10 = (this->fields).countdownFill;
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
    pIVar10 = (this->fields).countdownFill;
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
      fVar13 = (float)(*pcRam_?)();
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
      if ((extraout_RAX_01 == 0) ||
         (pIVar10 = (this->fields).countdownFill, pIVar10 == (Image *)0x0))
      goto code_?;
      fVar7 = (fVar7 - fVar13) * _UNK_?;
      goto code_?;
    }
    pIVar10 = (this->fields).countdownFill;
    if ((pIVar10 == (Image *)0x0) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pIVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0))
    goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar12 == 0) goto code_?;
    pIVar10 = (this->fields).countdownFill;
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

