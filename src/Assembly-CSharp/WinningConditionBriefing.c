
/* Void CreatePlayButton() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                   );
    func_?(&PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&MethodInfo__WinningConditionBriefing__OnPlayPressed__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pPVar1 = (this->fields).DesktopPlayButtonPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar1 = (PlayButton *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pPVar1,
                        PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                       );
    (this->fields).desktopPlayButton = pPVar1;
    func_?(&(this->fields).desktopPlayButton,pPVar1);
    pPVar1 = (this->fields).desktopPlayButton;
    if (pPVar1 == (PlayButton *)0x0) goto code_?;
    pAVar2 = (pPVar1->fields).OnPlayButtonPressed;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pPVar1->fields).OnPlayButtonPressed = (Action *)0x0;
code_?:
      func_?();
      pPVar1 = (this->fields).desktopPlayButton;
      if (pPVar1 != (PlayButton *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar1,(MethodInfo *)0x0);
        (this->fields).playButton = pGVar4;
        func_?(&(this->fields).playButton,pGVar4);
        pGVar4 = (this->fields).playButton;
        if (pGVar4 != (GameObject *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar5,pTVar6,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar2;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    (pPVar1->fields).OnPlayButtonPressed = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar2;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  else {
    pPVar8 = (this->fields).AndroidPlayButtonPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar8 = (PlayButtonTouch *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pPVar8,
                        PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                       );
    (this->fields).androidPlayButton = pPVar8;
    func_?(&(this->fields).androidPlayButton,pPVar8);
    pPVar8 = (this->fields).androidPlayButton;
    if (pPVar8 != (PlayButtonTouch *)0x0) {
      pAVar2 = (pPVar8->fields).OnPlayButtonPressed;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pPVar8->fields).OnPlayButtonPressed = (Action *)0x0;
      }
      else {
        pAVar7 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar2;
        }
        if (pAVar7 == (Action *)0x0) goto code_?;
        (pPVar8->fields).OnPlayButtonPressed = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar2;
        }
        if (pAVar7 == (Action *)0x0) goto code_?;
      }
      func_?();
      pPVar8 = (this->fields).androidPlayButton;
      if (pPVar8 != (PlayButtonTouch *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar8,(MethodInfo *)0x0);
        (this->fields).playButton = pGVar4;
        func_?(&(this->fields).playButton,pGVar4);
        pGVar4 = (this->fields).playButton;
        if (pGVar4 != (GameObject *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pTVar6 = (Transform *)0x0;
            if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              pTVar6 = pTVar5;
            }
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar6,(Transform *)(this->fields).TouchPlayButtonContainerTransform,0,
                         (MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                        (pTVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IEnumerator FixAspectRatioDelay() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_FixAspectRatioDelay
          (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__35);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__35);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Int32 GetHighScore(WinningConditionType) */

int32_t Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_GetHighScore
                  (WinningConditionBriefing *this,WinningConditionType__Enum winningConditionType,
                  MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  if (winningConditionType == WinningConditionType__Enum_Flag) {
    winningConditionType = WinningConditionType__Enum_Kill;
  }
  else {
    winningConditionType =
         CONCAT31(winningConditionType._1_3_,
                  (winningConditionType != WinningConditionType__Enum_TimeAttackFlag) + -1) &
         0xffffff08;
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      uStack_1 = 1;
      oldScore = WinningConditionType__Enum_Collectible;
      team = pDVar6->_currentValue;
      while( true ) {
        do {
          pOVar7 = team;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_9);
            *unaff_FS_OFFSET = uStack_3;
            return oldScore;
          }
          team = (Object *)0x0;
        } while (pOVar7 == (Object *)0x0);
        iVar10 = (int32_t)pOVar7[6].klass;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        this_01 = (pMVar5->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) break;
        in_stack_9 = (MethodInfo *)0x0;
        team = (Object *)pOVar7[9].klass;
        iVar10 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,winningConditionType,(MVTeam__Enum)team,iVar10,(MethodInfo *)0x0);
        WVar11 = winningConditionType;
        bVar8 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar10,oldScore,winningConditionType,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          oldScore = WVar11;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  iVar10 = (*pcVar12)();
  return iVar10;
}


/* Void Initialize(WinningConditionType) */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Initialize
               (WinningConditionBriefing *this,WinningConditionType__Enum winConType,
               MethodInfo *method)

{
  (this->fields).winConType = winConType;
  (this->fields).isInitialized = 1;
  if ((this->fields).initializeCallback != (Action *)0x0) {
    pAVar1 = (this->fields).initializeCallback;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  WinningConditionBriefing_CreatePlayButton(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnDestroy
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
          (IPlayModeUI *)0x0) {
code_?:
        uVar2 = func_?(&stack0xfffffff8);
        func_?(uVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = func_?();
      if (cVar4 == '\0') {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_00 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnPlayPressed
               (WinningConditionBriefing *this,MethodInfo *method)

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
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__WinningConditionBriefing____c___OnPlayPressed_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__WinningConditionBriefing____c__DisplayClass38_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__WinningConditionBriefing____c__DisplayClass38_0);
    func_?(&TypeInfo__WinningConditionBriefing____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    bVar2 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                      (this_00,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pPVar3 = (this->fields).desktopPlayButton;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar3 = (this->fields).desktopPlayButton;
        if (pPVar3 == (PlayButton *)0x0) goto code_?;
        PlayButton::PlayButton_Play(pPVar3,(MethodInfo *)0x0);
      }
      pPVar4 = (this->fields).androidPlayButton;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar4 = (this->fields).androidPlayButton;
        if (pPVar4 == (PlayButtonTouch *)0x0) goto code_?;
        PlayButtonTouch::PlayButtonTouch_Play(pPVar4,(MethodInfo *)0x0);
      }
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    value = (Object *)func_?(TypeInfo__WinningConditionBriefing____c__DisplayClass38_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,method_00);
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__WinningConditionBriefing____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__WinningConditionBriefing____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__WinningConditionBriefing____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 callbackFunction,(MethodInfo *)0x0);
      TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0 = callbackFunction;
      pGVar5 = (GameObject *)&UNK_?;
      func_?(&TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar5,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = (this->fields)._.spawnRoleMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar6;
      func_?();
      if (value[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)value[1].klass,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                   MethodInfo__WinningConditionBriefing____c__DisplayClass38_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_SetupBriefing
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                   );
    func_?(&
                    WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__WinningConditionBriefing__SetupBriefing__);
    func_?(&TypeInfo__WinningConditionType);
    func_?(&MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    func_?(&StringLiteral_WinningConditionData_is_null__bu);
    func_?(&StringLiteral_winConType__);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_02 == (MainCameraManager *)0x0) goto code_?;
  MainCameraManager::MainCameraManager_set_CamMaskMode
            (this_02,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
  pAVar1 = (this->fields).initializeCallback;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (this->fields).initializeCallback = (Action *)0x0;
code_?:
    gameStatType = &(this->fields).initializeCallback;
    func_?();
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).winningConditionMapping;
    iVar3 = 0;
    while (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((pLVar2->fields)._size <= iVar3) {
code_?:
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_winConType__,pSVar4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WinningConditionData_is_null__bu,(MethodInfo *)0x0);
code_?:
        if ((this->fields).winConType != 6) {
          this_00 = (this->fields).headerMap;
          pTVar5 = (this->fields).winningConditionHeader;
          if ((this_00 == (Dictionary_2_WinningConditionType_System_String_ *)0x0) ||
             (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                   (this->fields).winConType,
                                   MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_
                                  ), pTVar5 == (Text *)0x0)) break;
          (*(code *)(pTVar5->klass->vtable).set_text.method)(pTVar5,pOVar6);
          bVar7 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                            ((GameStatCounterType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar8 == (MVNetworkGame *)0x0) ||
               (this_01 = (pMVar8->fields).teamManager, this_01 == (MVTeamManager *)0x0)) break;
            iVar9 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
            if (iVar9 < 2) {
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar8 == (MVNetworkGame *)0x0) break;
              pGVar10 = (pMVar8->fields).gameStatCounterManager;
              GVar11 = CONCAT31((int3)((uint)in_stack_12 >> 8),(char)gameStatType);
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar8 == (MVNetworkGame *)0x0) ||
                 (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
                 pMVar13 == (MVLocalPlayer *)0x0)) break;
              team = (pMVar13->fields)._._Team_k__BackingField;
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar8 == (MVNetworkGame *)0x0) ||
                 ((pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0)
                  , pMVar13 == (MVLocalPlayer *)0x0 || (pGVar10 == (GameStatCounterManager *)0x0))))
              break;
              iVar3 = MVWorldObject.dll::GameStatCounterManager::
                       GameStatCounterManager_GetActorCount
                                 (pGVar10,GVar11,team,(pMVar13->fields)._._ActorNr_k__BackingField,
                                  (MethodInfo *)0x0);
            }
            else {
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar8 == (MVNetworkGame *)0x0) break;
              pGVar10 = (pMVar8->fields).gameStatCounterManager;
              GVar11 = CONCAT31((int3)((uint)in_stack_12 >> 8),(char)gameStatType);
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar8 == (MVNetworkGame *)0x0) ||
                  (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0)
                  , pMVar13 == (MVLocalPlayer *)0x0)) || (pGVar10 == (GameStatCounterManager *)0x0))
              break;
              iVar3 = MVWorldObject.dll::GameStatCounterManager::
                       GameStatCounterManager_GetTeamCount
                                 (pGVar10,GVar11,(pMVar13->fields)._._Team_k__BackingField,
                                  (MethodInfo *)0x0);
            }
            iVar9 = WinningConditionControl::WinningConditionControl_GetPrioritizedStatLimit
                               ((GameStatCounterType__Enum)gameStatType,(MethodInfo *)0x0);
            if ((iVar9 == 0) &&
               (((this->fields).winConType == 1 || ((this->fields).winConType == 5)))) {
              pGVar14 = (this->fields).progressableWinningConditionPresent;
              if (pGVar14 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,0,(MethodInfo *)0x0);
              pGVar14 = (this->fields).reachTheFlagPresent;
              if (pGVar14 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,1,(MethodInfo *)0x0);
              pTVar5 = (this->fields).flagScoreText;
              iVar9 = WinningConditionBriefing_GetHighScore
                                 (this,(this->fields).winConType,(MethodInfo *)0x0);
              GVar11 = GameStatCounterType__Enum_None;
              IVar15.m_value = 2;
              WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar9,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
              if (pTVar5 == (Text *)0x0) break;
              func_?();
            }
            else {
              pGVar14 = (this->fields).reachTheFlagPresent;
              if (pGVar14 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,0,(MethodInfo *)0x0);
              pGVar14 = (this->fields).progressableWinningConditionPresent;
              if (pGVar14 == (GameObject *)0x0) break;
              GVar11 = GameStatCounterType__Enum_None;
              IVar15.m_value = 1;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,1,(MethodInfo *)0x0);
            }
            pTVar5 = (this->fields).scoreLimit;
            mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0)
            ;
            if (pTVar5 == (Text *)0x0) break;
            (*(code *)(pTVar5->klass->vtable).set_text.method)();
            pPVar16 = (ProgressBarAndroid *)(this->fields).scoreProgressBar;
            if (pPVar16 == (ProgressBarAndroid *)0x0) break;
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (pPVar16,(float)iVar3 / (float)IVar15.m_value,(MethodInfo *)0x0);
            pTVar5 = (this->fields).scoreText;
            pSVar4 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (iVar3,GVar11,(MethodInfo *)0x0);
            if (pTVar5 == (Text *)0x0) break;
            (*(code *)(pTVar5->klass->vtable).set_text.method)
                      (pTVar5,pSVar4,
                       (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          }
          pSVar17 = (this->fields).scoreBoardController;
          if ((pSVar17 == (ScoreBoardController *)0x0) ||
             (this_04 = ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
                                  (pSVar17,(this->fields).winConType,(MethodInfo *)0x0),
             this_04 == (ScoreBoardBase *)0x0)) break;
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_04,(MethodInfo *)0x0);
          pSVar17 = (this->fields).scoreBoardController;
          if ((pSVar17 == (ScoreBoardController *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pSVar17,(MethodInfo *)0x0),
             pTVar18 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar18,pTVar19,0,(MethodInfo *)0x0);
          iVar3 = 0;
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_04,(MethodInfo *)0x0);
          if (pTVar18 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar18,(MethodInfo *)0x0);
          (*(code *)(this_04->klass->vtable).Initialize.method)();
          if (iVar3 == 0) break;
          pOVar6 = *(Object **)(iVar3 + 0x10);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pIVar20 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                       (pOVar6,
                                        UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                       );
          (this->fields).winConImage = pIVar20;
          func_?(&(this->fields).winConImage,pIVar20);
          pIVar20 = (this->fields).winConImage;
          if (pIVar20 == (Image *)0x0) break;
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pIVar20,(MethodInfo *)0x0);
          pGVar14 = (this->fields).winningConditionImageBackground;
          if ((pGVar14 == (GameObject *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar14,(MethodInfo *)0x0),
             pTVar18 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar18,pTVar19,0,(MethodInfo *)0x0);
          pCVar21 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (*(Object **)(iVar3 + 0xc),
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pCVar21 == (Component *)0x0) break;
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar21,(MethodInfo *)0x0);
          pGVar14 = (this->fields).scoreGameObject;
          if ((pGVar14 == (GameObject *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar14,(MethodInfo *)0x0),
             pTVar18 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar18,pTVar19,0,(MethodInfo *)0x0);
        }
        this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_05 == (MVWorldObjectClientManager *)0x0) break;
        this_06 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                            (this_05,
                             WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                            );
        if (this_06 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
          pPVar22 = (this->fields).roundTimeProgressBar;
          if ((pPVar22 == (ProgressBar *)0x0) ||
             (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pPVar22,(MethodInfo *)0x0),
             pGVar14 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar14,1,(MethodInfo *)0x0);
          pPVar16 = (ProgressBarAndroid *)(this->fields).roundTimeProgressBar;
          pMVar23 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if (pMVar23 == (MVRoundCube *)0x0) break;
          iVar9 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar23,(MethodInfo *)0x0);
          pMVar23 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if ((pMVar23 == (MVRoundCube *)0x0) ||
             (iVar24 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                                 (pMVar23,(MethodInfo *)0x0), pPVar16 == (ProgressBarAndroid *)0x0))
          break;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (pPVar16,(float)iVar9 / (float)iVar24,(MethodInfo *)0x0);
          pTVar5 = (this->fields).roundTimeText;
          pMVar23 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          this_07 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if ((this_07 == (MVRoundCube *)0x0) ||
             ((iVar9 = MVRoundCube::MVRoundCube_GetTimeLeft(this_07,(MethodInfo *)0x0),
              pMVar23 == (MVRoundCube *)0x0 ||
              (pSVar4 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar23,iVar9,(MethodInfo *)0x0)
              , pTVar5 == (Text *)0x0)))) break;
          (*(code *)(pTVar5->klass->vtable).set_text.method)
                    (pTVar5,pSVar4,
                     (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pIVar20 = (this->fields).roundTimeIconPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pCVar21 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pIVar20,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pCVar21 == (Component *)0x0) break;
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar21,(MethodInfo *)0x0);
          pPVar22 = (this->fields).roundTimeProgressBar;
          if ((pPVar22 == (ProgressBar *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pPVar22,(MethodInfo *)0x0),
             pTVar18 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar18,pTVar19,0,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        routine = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).winningConditionMapping;
      iVar25 = (this->fields).winConType;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,iVar3,
                              MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                             ), RVar26 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).winningConditionMapping;
      if (iVar25 == *(int *)((int)RVar26 + 8)) {
        if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,iVar3,
                              MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                             );
          if (RVar26 == (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    }
  }
  else {
    pAVar27 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar27 = pAVar1;
    }
    if (pAVar27 != (Action *)0x0) {
      (this->fields).initializeCallback = pAVar27;
      pAVar27 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar27 = pAVar1;
      }
      if (pAVar27 != (Action *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Start
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__WinningConditionBriefing__SetupBriefing__);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  bVar3 = (this->fields).isInitialized;
  (this->fields).screensize.x = (float)iVar1;
  (this->fields).screensize.y = (float)iVar2;
  if (bVar3 != 0) {
    WinningConditionBriefing_SetupBriefing(this,(MethodInfo *)0x0);
    return;
  }
  pAVar4 = (this->fields).initializeCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
             (MethodInfo *)0x0);
  pAStack5 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack5 == (Action *)0x0) {
    (this->fields).initializeCallback = (Action *)0x0;
    pAStack5 = (Action *)&(this->fields).initializeCallback;
    pAStack6 = (Action__Class *)0x0;
    func_?();
    return;
  }
  pAVar4 = (Action *)0x0;
  if (pAStack5->klass == TypeInfo__System__Action) {
    pAVar4 = pAStack5;
  }
  if (pAVar4 != (Action *)0x0) {
    (this->fields).initializeCallback = pAVar4;
    pAStack6 = (Action__Class *)(Action *)0x0;
    if (pAStack5->klass == TypeInfo__System__Action) {
      pAStack6 = (Action__Class *)pAStack5;
    }
    if (pAStack6 != (Action__Class *)0x0) {
      pAStack5 = (Action *)&(this->fields).initializeCallback;
      func_?();
      return;
    }
  }
  pAStack6 = TypeInfo__System__Action;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Update
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).screensize.x;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if ((fVar1 != (float)iVar2) ||
     (fVar1 = (this->fields).screensize.y,
     iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0),
     fVar1 != (float)iVar2)) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    (this->fields).screensize.x = (float)iVar2;
    (this->fields).screensize.y = (float)iVar3;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    routine = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                        (this_01,
                         WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                        );
    if (this_02 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
      return;
    }
    this_00 = (ProgressBarAndroid *)(this->fields).roundTimeProgressBar;
    pMVar4 = (MVRoundCube *)
             WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       (this_02,
                        MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    if (pMVar4 != (MVRoundCube *)0x0) {
      MVRoundCube::MVRoundCube_GetTimeLeft(pMVar4,(MethodInfo *)0x0);
      pMVar4 = (MVRoundCube *)
               WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         (this_02,
                          MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
      if ((pMVar4 != (MVRoundCube *)0x0) &&
         (iVar2 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar4,(MethodInfo *)0x0),
         this_00 != (ProgressBarAndroid *)0x0)) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  (this_00,(float)(int)this_02 / (float)iVar2,(MethodInfo *)0x0);
        pTVar5 = (this->fields).roundTimeText;
        pMVar4 = (MVRoundCube *)
                 WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           (this_02,
                            MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
        this_03 = (MVRoundCube *)
                  WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            (this_02,
                             MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__)
        ;
        if ((this_03 != (MVRoundCube *)0x0) &&
           ((iVar2 = MVRoundCube::MVRoundCube_GetTimeLeft(this_03,(MethodInfo *)0x0),
            pMVar4 != (MVRoundCube *)0x0 &&
            (pSStack6 =
                  MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar4,iVar2,(MethodInfo *)0x0),
            pTVar5 != (Text *)0x0)))) {
          pIStack7 = (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pTStack8 = pTVar5;
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* WinningConditionBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing__ctor
               (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>
                   );
    func_?(&StringLiteral_FIND_ALL_THE_STARS_);
    func_?(&StringLiteral_REACH_THE_FLAG_);
    func_?(&StringLiteral_ELIMINATE_YOUR_ENEMIES_);
    func_?(&StringLiteral_ELIMINATE_THE_OCULI_);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_FIND_ALL_THE_STARS_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_YOUR_ENEMIES_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_THE_OCULI_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    (this->fields).headerMap = (Dictionary_2_WinningConditionType_System_String_ *)this_00;
    func_?();
    LobbyStateController::LobbyStateController__ctor((LobbyStateController *)this,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

