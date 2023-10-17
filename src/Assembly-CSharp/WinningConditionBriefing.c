
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
    if (pPVar1 != (PlayButton *)0x0) {
      pAVar2 = (pPVar1->fields).OnPlayButtonPressed;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
        if (pAVar2 == (Action *)0x0) {
          (pPVar1->fields).OnPlayButtonPressed = (Action *)0x0;
        }
        else {
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
          (pPVar1->fields).OnPlayButtonPressed = pAVar4;
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
        }
        func_?();
        pPVar1 = (this->fields).desktopPlayButton;
        if (pPVar1 != (PlayButton *)0x0) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar1,(MethodInfo *)0x0);
code_?:
          (this->fields).playButton = pGVar5;
          func_?(&(this->fields).playButton,pGVar5);
          pGVar5 = (this->fields).playButton;
          if (pGVar5 != (GameObject *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar5,(MethodInfo *)0x0);
            parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_00,parent,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pPVar6 = (this->fields).AndroidPlayButtonPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar6 = (PlayButtonTouch *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pPVar6,
                        PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_
                       );
    (this->fields).androidPlayButton = pPVar6;
    func_?(&(this->fields).androidPlayButton,pPVar6);
    pPVar6 = (this->fields).androidPlayButton;
    if (pPVar6 != (PlayButtonTouch *)0x0) {
      pAVar2 = (pPVar6->fields).OnPlayButtonPressed;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
        if (pAVar2 == (Action *)0x0) {
          (pPVar6->fields).OnPlayButtonPressed = (Action *)0x0;
        }
        else {
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
          (pPVar6->fields).OnPlayButtonPressed = pAVar4;
          pAVar4 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar2;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
        }
        func_?();
        pPVar6 = (this->fields).androidPlayButton;
        if (pPVar6 != (PlayButtonTouch *)0x0) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar6,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator FixAspectRatioDelay() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_FixAspectRatioDelay
          (WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__34);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__34);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
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
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&pOStack_4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
                    MethodInfo__WinningConditionBriefing____c___OnPlayPressed_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__WinningConditionBriefing____c__DisplayClass37_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__WinningConditionBriefing____c__DisplayClass37_0);
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
    value = (Object *)func_?(TypeInfo__WinningConditionBriefing____c__DisplayClass37_0);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,in_stack_5);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__WinningConditionBriefing____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__WinningConditionBriefing____c->static_fields->__9__37_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__WinningConditionBriefing____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__WinningConditionBriefing____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__WinningConditionBriefing____c___OnPlayPressed_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__WinningConditionBriefing____c->static_fields->__9__37_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar6,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      original = (this->fields)._.spawnRoleMenuPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar7 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                         );
      value[1].klass = pOVar7;
      func_?();
      if (value[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)value[1].klass,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                     MethodInfo__WinningConditionBriefing____c__DisplayClass37_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  GVar1 = in_stack_2 & 0xffffff00;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_02 == (MainCameraManager *)0x0) goto code_?;
  MainCameraManager::MainCameraManager_set_CamMaskMode
            (this_02,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
  pAVar3 = (this->fields).initializeCallback;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (this_03 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar3,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (this->fields).initializeCallback = (Action *)0x0;
code_?:
    ppAVar4 = &(this->fields).initializeCallback;
    func_?();
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).winningConditionMapping;
    iVar6 = 0;
    while (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((pLVar5->fields)._size <= iVar6) {
code_?:
        pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_winConType__,pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_WinningConditionData_is_null__bu,(MethodInfo *)0x0);
code_?:
        if ((this->fields).winConType != 6) {
          this_00 = (this->fields).headerMap;
          pTVar8 = (this->fields).winningConditionHeader;
          if ((this_00 == (Dictionary_2_WinningConditionType_System_String_ *)0x0) ||
             (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                   (this->fields).winConType,
                                   MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_
                                  ), pTVar8 == (Text *)0x0)) break;
          (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8,pOVar9);
          bVar10 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                            ((GameStatCounterType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar11 == (MVNetworkGame *)0x0) ||
               (this_01 = (pMVar11->fields).teamManager, this_01 == (MVTeamManager *)0x0)) break;
            iVar12 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
            if (iVar12 < 2) {
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar11 == (MVNetworkGame *)0x0) break;
              pGVar13 = (pMVar11->fields).gameStatCounterManager;
              GVar14 = CONCAT31((int3)((uint)ppAVar4 >> 8),(char)GVar1);
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar11 == (MVNetworkGame *)0x0) ||
                 (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
                 pMVar15 == (MVLocalPlayer *)0x0)) break;
              team = (pMVar15->fields)._._Team_k__BackingField;
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar11 == (MVNetworkGame *)0x0) ||
                 ((pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0)
                  , pMVar15 == (MVLocalPlayer *)0x0 || (pGVar13 == (GameStatCounterManager *)0x0))))
              break;
              iVar6 = MVWorldObject.dll::GameStatCounterManager::
                       GameStatCounterManager_GetActorCount
                                 (pGVar13,GVar14,team,(pMVar15->fields)._._ActorNr_k__BackingField,
                                  (MethodInfo *)0x0);
            }
            else {
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar11 == (MVNetworkGame *)0x0) break;
              pGVar13 = (pMVar11->fields).gameStatCounterManager;
              GVar14 = CONCAT31((int3)((uint)ppAVar4 >> 8),(char)GVar1);
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar11 == (MVNetworkGame *)0x0) ||
                  (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0)
                  , pMVar15 == (MVLocalPlayer *)0x0)) || (pGVar13 == (GameStatCounterManager *)0x0))
              break;
              iVar6 = MVWorldObject.dll::GameStatCounterManager::
                       GameStatCounterManager_GetTeamCount
                                 (pGVar13,GVar14,(pMVar15->fields)._._Team_k__BackingField,
                                  (MethodInfo *)0x0);
            }
            iVar12 = WinningConditionControl::WinningConditionControl_GetPrioritizedStatLimit
                               (GVar1,(MethodInfo *)0x0);
            if ((iVar12 == 0) &&
               (((this->fields).winConType == 1 || ((this->fields).winConType == 5)))) {
              pGVar16 = (this->fields).progressableWinningConditionPresent;
              if (pGVar16 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar16,0,(MethodInfo *)0x0);
              pGVar16 = (this->fields).reachTheFlagPresent;
              if (pGVar16 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar16,1,(MethodInfo *)0x0);
              pTVar8 = (this->fields).flagScoreText;
              iVar12 = WinningConditionBriefing_GetHighScore
                                 (this,(this->fields).winConType,(MethodInfo *)0x0);
              GVar1 = GameStatCounterType__Enum_None;
              IVar17.m_value = 2;
              WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                        (iVar12,GameStatCounterType__Enum_Flag,(MethodInfo *)0x0);
              if (pTVar8 == (Text *)0x0) break;
              func_?();
            }
            else {
              pGVar16 = (this->fields).reachTheFlagPresent;
              if (pGVar16 == (GameObject *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar16,0,(MethodInfo *)0x0);
              pGVar16 = (this->fields).progressableWinningConditionPresent;
              if (pGVar16 == (GameObject *)0x0) break;
              GVar1 = GameStatCounterType__Enum_None;
              IVar17.m_value = 1;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar16,1,(MethodInfo *)0x0);
            }
            pTVar8 = (this->fields).scoreLimit;
            mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0)
            ;
            if (pTVar8 == (Text *)0x0) break;
            (*(pTVar8->klass->vtable).set_text.methodPtr)();
            pPVar18 = (ProgressBarAndroid *)(this->fields).scoreProgressBar;
            if (pPVar18 == (ProgressBarAndroid *)0x0) break;
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (pPVar18,(float)iVar6 / (float)IVar17.m_value,(MethodInfo *)0x0);
            pTVar8 = (this->fields).scoreText;
            pSVar7 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                                (iVar6,GVar1,(MethodInfo *)0x0);
            if (pTVar8 == (Text *)0x0) break;
            (*(pTVar8->klass->vtable).set_text.methodPtr)
                      (pTVar8,pSVar7,(pTVar8->klass->vtable).set_text.method);
          }
          pSVar19 = (this->fields).scoreBoardController;
          if ((pSVar19 == (ScoreBoardController *)0x0) ||
             (this_04 = ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
                                  (pSVar19,(this->fields).winConType,(MethodInfo *)0x0),
             this_04 == (ScoreBoardBase *)0x0)) break;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_04,(MethodInfo *)0x0);
          pSVar19 = (this->fields).scoreBoardController;
          if ((pSVar19 == (ScoreBoardController *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pSVar19,(MethodInfo *)0x0),
             pTVar20 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar20,pTVar21,0,(MethodInfo *)0x0);
          iVar6 = 0;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_04,(MethodInfo *)0x0);
          if (pTVar20 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                    (pTVar20,(MethodInfo *)0x0);
          (*(this_04->klass->vtable).Initialize.methodPtr)();
          if (iVar6 == 0) break;
          pOVar9 = *(Object **)(iVar6 + 0x10);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pIVar22 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                       (pOVar9,
                                        UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                       );
          (this->fields).winConImage = pIVar22;
          func_?(&(this->fields).winConImage,pIVar22);
          pIVar22 = (this->fields).winConImage;
          if (pIVar22 == (Image *)0x0) break;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pIVar22,(MethodInfo *)0x0);
          pGVar16 = (this->fields).winningConditionImageBackground;
          if ((pGVar16 == (GameObject *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar16,(MethodInfo *)0x0),
             pTVar20 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar20,pTVar21,0,(MethodInfo *)0x0);
          pCVar23 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (*(Object **)(iVar6 + 0xc),
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pCVar23 == (Component *)0x0) break;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar23,(MethodInfo *)0x0);
          pGVar16 = (this->fields).scoreGameObject;
          if ((pGVar16 == (GameObject *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar16,(MethodInfo *)0x0),
             pTVar20 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar20,pTVar21,0,(MethodInfo *)0x0);
        }
        this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_05 == (MVWorldObjectClientManager *)0x0) break;
        this_06 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                            (this_05,
                             WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                            );
        if (this_06 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
          pPVar24 = (this->fields).roundTimeProgressBar;
          if ((pPVar24 == (ProgressBar *)0x0) ||
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pPVar24,(MethodInfo *)0x0),
             pGVar16 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar16,1,(MethodInfo *)0x0);
          pPVar18 = (ProgressBarAndroid *)(this->fields).roundTimeProgressBar;
          pMVar25 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if (pMVar25 == (MVRoundCube *)0x0) break;
          iVar12 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar25,(MethodInfo *)0x0);
          pMVar25 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (this_06,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              );
          if ((pMVar25 == (MVRoundCube *)0x0) ||
             (iVar26 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                                 (pMVar25,(MethodInfo *)0x0), pPVar18 == (ProgressBarAndroid *)0x0))
          break;
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (pPVar18,(float)iVar12 / (float)iVar26,(MethodInfo *)0x0);
          pTVar8 = (this->fields).roundTimeText;
          pMVar25 = (MVRoundCube *)
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
             ((iVar12 = MVRoundCube::MVRoundCube_GetTimeLeft(this_07,(MethodInfo *)0x0),
              pMVar25 == (MVRoundCube *)0x0 ||
              (pSVar7 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar25,iVar12,(MethodInfo *)0x0)
              , pTVar8 == (Text *)0x0)))) break;
          (*(pTVar8->klass->vtable).set_text.methodPtr)
                    (pTVar8,pSVar7,(pTVar8->klass->vtable).set_text.method);
          pIVar22 = (this->fields).roundTimeIconPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pCVar23 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pIVar22,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                              );
          if (pCVar23 == (Component *)0x0) break;
          pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar23,(MethodInfo *)0x0);
          pPVar24 = (this->fields).roundTimeProgressBar;
          if ((pPVar24 == (ProgressBar *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pPVar24,(MethodInfo *)0x0),
             pTVar20 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar20,pTVar21,0,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        routine = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).winningConditionMapping;
      iVar27 = (this->fields).winConType;
      if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar28 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar5,iVar6,
                              MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                             ), RVar28 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).winningConditionMapping;
      if (iVar27 == *(int *)((int)RVar28 + 8)) {
        if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar28 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar5,iVar6,
                              MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_
                             );
          if (RVar28 == (RegexCharClass_SingleRange)0x0) goto code_?;
          goto code_?;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    }
  }
  else {
    pAVar29 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar29 = pAVar3;
    }
    if (pAVar29 != (Action *)0x0) {
      (this->fields).initializeCallback = pAVar29;
      pAVar29 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar29 = pAVar3;
      }
      if (pAVar29 != (Action *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (this->fields).initializeCallback = (Action *)0x0;
      func_?();
      return;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) {
      (this->fields).initializeCallback = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 != (Action *)0x0) {
        func_?();
        return;
      }
    }
    func_?();
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
          pMStack7 = (pTVar5->klass->vtable).set_text.method;
          pTStack8 = pTVar5;
          (*(pTVar5->klass->vtable).set_text.methodPtr)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__
              );
    pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x1,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_FIND_ALL_THE_STARS_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x0,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_YOUR_ENEMIES_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_ELIMINATE_THE_OCULI_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x3,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x5,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_
              );
    ppDStack2 = &(this->fields).headerMap;
    (this->fields).headerMap = (Dictionary_2_WinningConditionType_System_String_ *)this_00;
    pDStack3 = this_00;
    func_?();
    LobbyStateController::LobbyStateController__ctor((LobbyStateController *)this,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

