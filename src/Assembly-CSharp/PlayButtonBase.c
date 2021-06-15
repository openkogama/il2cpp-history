
/* Void StartPlaying() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_StartPlaying
               (PlayButtonBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1,1);
    if ((this->fields).shouldPop != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__PlayButtonBase->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__PlayButtonBase___StartPlaying_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__PlayButtonBase->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__PlayButtonBase->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase_UpdateButton
               (PlayButtonBase *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_01 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(method_00);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(pMVar3,(MethodInfo *)0x0);
      this_00 = pIRam0000000c;
      if (pOVar2 == (Object *)0x2) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (this_02 = (MVNetworkGameStateListener *)
                       InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                 ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
            this_02 == (MVNetworkGameStateListener *)0x0)) ||
           (fVar4 = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                              (this_02,(MethodInfo *)0x0), this_00 == (Image *)0x0))
        goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (this_00,fVar4,(MethodInfo *)0x0);
      }
      else {
        if (fVar4 <= (float)method_00) {
          if ((pIRam0000000c != (Image *)0x0) &&
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
             pGVar5 != (GameObject *)0x0)) {
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar5,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              if ((pIRam0000000c == (Image *)0x0) ||
                 (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject
                                     ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
                 pGVar5 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,0,(MethodInfo *)0x0);
            }
            uStack7 = *(undefined4 *)(iRam_? + 0xec);
            uStack8 = 0;
            (**(code **)(iRam_? + 0xe8))();
            return;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
        fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(pMVar3,(MethodInfo *)0x0);
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        fVar4 = fVar4 - fVar9;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar3 == (MVLocalPlayer *)0x0) ||
           (fVar9 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar3,(MethodInfo *)0x0),
           pIRam0000000c == (Image *)0x0)) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIRam0000000c,fVar4 / fVar9,(MethodInfo *)0x0);
      }
      if ((pIRam0000000c != (Image *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
         pGVar5 != (GameObject *)0x0)) {
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          return;
        }
        if ((pIRam0000000c != (Image *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
           pGVar5 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <StartPlaying>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonBase::PlayButtonBase__StartPlaying_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

