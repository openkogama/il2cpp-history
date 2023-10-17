
/* Void Awake() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_Awake
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
    func_?(&MethodInfo__PlayerListButton__PendingCountChanged_int_);
    func_?(&MethodInfo__PlayerListButton__UpdateButton__);
    func_?(&MethodInfo__PlayerListButton__ViewNotification__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  x = (this->fields).colorStyleObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  (this->fields).useColorStyle = bVar1;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
code_?:
    func_?();
  }
  else {
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)0x0,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar5 != (Action *)0x0) {
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 != (Action *)0x0) {
        (pMVar3->fields).OnPlayerListChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar7 = (pMVar2->fields).teamManager, pMVar7 == (MVTeamManager *)0x0))
    goto code_?;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)0x0,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pMVar8 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar7->fields).OnTeamsUpdated = pMVar9;
        pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar9 = pMVar8;
        }
        if (pMVar9 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pMVar7->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
code_?:
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pFVar10 = (pMVar2->fields)._Friends_k__BackingField, pFVar10 == (FriendList *)0x0))
    goto code_?;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
               (MethodInfo *)0x0);
    pUVar11 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)0x0,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pUVar11 == (UnityAction *)0x0) {
      (pFVar10->fields).OnFriendRequestReceived = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pFVar10 = (pMVar2->fields)._Friends_k__BackingField, pFVar10 != (FriendList *)0x0)) {
        pUVar12 = (pFVar10->fields).OnPendingCountChanged;
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,MethodInfo__PlayerListButton__PendingCountChanged_int_,
                     (MethodInfo *)0x0);
          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar12,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pDVar13 == (Delegate *)0x0) {
            (pFVar10->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
          }
          else {
            pUVar12 = (UnityAction_1_System_Int32_ *)func_?();
            if (pUVar12 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
            (pFVar10->fields).OnPendingCountChanged = pUVar12;
            iVar14 = func_?();
            if (iVar14 == 0) goto code_?;
          }
          func_?();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
            pAVar5 = (pMVar3->fields).OnPlayerListLoaded;
            pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar4,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                         (MethodInfo *)0x0);
              pAVar5 = (Action *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar5,(Delegate *)pNVar4,(MethodInfo *)0x0);
              if (pAVar5 == (Action *)0x0) {
                (pMVar3->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
                func_?();
                PlayerListButton_UpdateButton(this,(MethodInfo *)0x0);
                return;
              }
              pAVar6 = (Action *)0x0;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar6 = pAVar5;
              }
              if (pAVar6 != (Action *)0x0) {
                (pMVar3->fields).OnPlayerListLoaded = pAVar6;
                pAVar6 = (Action *)0x0;
                if (pAVar5->klass == TypeInfo__System__Action) {
                  pAVar6 = pAVar5;
                }
                if (pAVar6 != (Action *)0x0) goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pUVar15 = (UnityAction *)0x0;
    if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar15 = pUVar11;
    }
    if (pUVar15 != (UnityAction *)0x0) {
      (pFVar10->fields).OnFriendRequestReceived = pUVar15;
      pUVar15 = (UnityAction *)0x0;
      if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar15 = pUVar11;
      }
      if (pUVar15 != (UnityAction *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreatePlayerList() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_CreatePlayerList
               (PlayerListButton *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
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
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    in_stack_6 =
         &
         MethodInfo__PlayerListButton___CreatePlayerList_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
    ;
    func_?();
    func_?(&
                    MethodInfo__PlayerListButton____c___CreatePlayerList_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerListButton____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_7 = GameStatCounterType__Enum_None;
  this_03 = (Dictionary_2_System_Int32_MVPlayer_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  if (this_03 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
    (this->fields).prevPlayerListState = this_03;
    func_?(&(this->fields).prevPlayerListState,this_03);
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar8 != (MVNetworkGame *)0x0) &&
        (this_00 = (pMVar8->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (this_04 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (this_00,(MethodInfo *)0x0),
       this_04 !=
       (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
        *)0x0)) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_10,this_04,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      value = pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&stack0xffffffc4;
      while (bVar11 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                     Object,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                 *)&stack0xffffffc4,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                               ), bVar11 != 0) {
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).prevPlayerListState;
        if ((value == (Object *)0x0) ||
           (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)value[6].klass,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffc4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      this_02 = (this->fields).notification;
      if ((this_02 != (Image *)0x0) &&
         (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_02,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar12,0,(MethodInfo *)0x0);
        pGVar12 = (this->fields).currPlayerLists;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          (this->fields).currPlayerLists = (GameObject *)0x0;
          func_?(&(this->fields).currPlayerLists,0);
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__PlayerListButton____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__PlayerListButton____c->static_fields->__9__13_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__PlayerListButton____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            DStack_10._currentValue = (Object *)TypeInfo__PlayerListButton____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       DStack_10._currentValue,
                       MethodInfo__PlayerListButton____c___CreatePlayerList_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__PlayerListButton____c->static_fields->__9__13_0 = callbackFunction;
            func_?(&TypeInfo__PlayerListButton____c->static_fields->__9__13_0,
                            callbackFunction);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
code_?:
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar12,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        original = (this->fields).playerListsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_05 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                            );
        if (this_05 != (Component *)0x0) {
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_05,(MethodInfo *)0x0);
          (this->fields).currPlayerLists = pGVar12;
          func_?(&(this->fields).currPlayerLists,pGVar12);
          WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                    ((GameStatCounterType__Enum *)&uStack_7,(MethodInfo *)0x0);
          uStack_13 = uStack_7;
          pCVar14 = (Component__Class *)(this->fields).playerListsPrefab;
          this_05[1].klass = pCVar14;
          func_?(this_05 + 1,pCVar14);
          *(undefined1 *)&this_05[2].monitor = uStack_13;
          this_05[2].fields._.m_CachedPtr = (void *)0x2;
          DStack_10._currentValue =
               (Object *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this
                       ,
                       MethodInfo__PlayerListButton___CreatePlayerList_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            pGVar12 = (GameObject *)DStack_10._currentValue;
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
              pGVar12 = (GameObject *)DStack_10._currentValue;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnDestroy
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    func_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
    func_?(&MethodInfo__PlayerListButton__PendingCountChanged_int_);
    func_?(&MethodInfo__PlayerListButton__UpdateButton__);
    func_?(&MethodInfo__PlayerListButton__ViewNotification__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 == (MVPlayerContainer *)0x0) goto code_?;
    pAVar3 = (pMVar2->fields).OnPlayerListChanged;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pAVar3 != (Action *)0x0) {
      pAVar5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar3;
      }
      if (pAVar5 != (Action *)0x0) {
        (pMVar2->fields).OnPlayerListChanged = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pMVar2->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar6 = (pMVar1->fields).teamManager, pMVar6 == (MVTeamManager *)0x0))
    goto code_?;
    pMVar7 = (pMVar6->fields).OnTeamsUpdated;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar7,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pMVar7 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
        (pMVar6->fields).OnTeamsUpdated = pMVar8;
        pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
        if (pMVar7->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
          pMVar8 = pMVar7;
        }
        if (pMVar8 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      }
      goto code_?;
    }
    (pMVar6->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
code_?:
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pFVar9 = (pMVar1->fields)._Friends_k__BackingField, pFVar9 == (FriendList *)0x0))
    goto code_?;
    pUVar10 = (pFVar9->fields).OnFriendRequestReceived;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar4 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
               (MethodInfo *)0x0);
    pUVar10 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar10,(Delegate *)pNVar4,(MethodInfo *)0x0);
    if (pUVar10 == (UnityAction *)0x0) {
      (pFVar9->fields).OnFriendRequestReceived = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pFVar9 = (pMVar1->fields)._Friends_k__BackingField, pFVar9 != (FriendList *)0x0)) {
        pUVar11 = (pFVar9->fields).OnPendingCountChanged;
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,MethodInfo__PlayerListButton__PendingCountChanged_int_,
                     (MethodInfo *)0x0);
          pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pUVar11,(Delegate *)this_00,(MethodInfo *)0x0);
          if (pDVar12 == (Delegate *)0x0) {
            (pFVar9->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
          }
          else {
            pUVar11 = (UnityAction_1_System_Int32_ *)func_?();
            if (pUVar11 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
            (pFVar9->fields).OnPendingCountChanged = pUVar11;
            iVar13 = func_?();
            if (iVar13 == 0) goto code_?;
          }
          func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
            pAVar3 = (pMVar2->fields).OnPlayerListLoaded;
            pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            if (pNVar4 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar4,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                         (MethodInfo *)0x0);
              pAVar3 = (Action *)
                       mscorlib.dll::System::Delegate::Delegate_Remove
                                 ((Delegate *)pAVar3,(Delegate *)pNVar4,(MethodInfo *)0x0);
              if (pAVar3 == (Action *)0x0) {
                (pMVar2->fields).OnPlayerListLoaded = (Action *)0x0;
                func_?();
                return;
              }
              pAVar5 = (Action *)0x0;
              if (pAVar3->klass == TypeInfo__System__Action) {
                pAVar5 = pAVar3;
              }
              if (pAVar5 != (Action *)0x0) {
                (pMVar2->fields).OnPlayerListLoaded = pAVar5;
                pAVar5 = (Action *)0x0;
                if (pAVar3->klass == TypeInfo__System__Action) {
                  pAVar5 = pAVar3;
                }
                if (pAVar5 != (Action *)0x0) {
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pUVar14 = (UnityAction *)0x0;
    if (pUVar10->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar14 = pUVar10;
    }
    if (pUVar14 != (UnityAction *)0x0) {
      (pFVar9->fields).OnFriendRequestReceived = pUVar14;
      pUVar14 = (UnityAction *)0x0;
      if (pUVar10->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar14 = pUVar10;
      }
      if (pUVar14 != (UnityAction *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnPlayerListReady() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnPlayerListReady
               (PlayerListButton *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo_1 *)0xffffffff;
  pMStack_2 = (MethodInfo_1 *)&DAT_?;
  pvStack_3 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__PlayerListButton__OnPlayerListReady__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 == (MVNetworkGame *)0x0) ||
     (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0))
  goto code_?;
  DStack_8._currentValue = (Object *)(pMVar7->fields).OnPlayerListLoaded;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
             (MethodInfo *)0x0);
  pAVar9 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)DStack_8._currentValue,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pAVar9 == (Action *)0x0) {
    (pMVar7->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
    func_?();
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) {
      this_03 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar7,(MethodInfo *)0x0);
      if (this_03 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_8,this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)pDVar10->_index;
        pOVar11 = pDVar10->_currentValue;
        DStack_8._version = 0;
        pMStack_1 = (MethodInfo_1 *)0x1;
        DStack_8._currentValue = (Object *)&stack0xffffffc8;
        do {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffc8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar12 == 0) goto code_?;
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((((pMVar6 == (MVNetworkGame *)0x0) ||
               (pFVar13 = (pMVar6->fields)._Friends_k__BackingField, pFVar13 == (FriendList *)0x0)) ||
              (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                         (pFVar13->fields).pending, pOVar11 == (Object *)0x0)) ||
             (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))
          goto code_?;
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_00,(Object *)pOVar11[5].monitor,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
        } while (bVar12 == 0);
        this_01 = (this->fields).notification;
        if (this_01 != (Image *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_04 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_04,1,(MethodInfo *)0x0);
code_?:
            pMStack_1 = (MethodInfo_1 *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffc8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
  }
  else {
    pAVar14 = (Action *)0x0;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar14 = pAVar9;
    }
    if (pAVar14 != (Action *)0x0) {
      (pMVar7->fields).OnPlayerListLoaded = pAVar14;
      pAVar14 = (Action *)0x0;
      if (pAVar9->klass == TypeInfo__System__Action) {
        pAVar14 = pAVar9;
      }
      if (pAVar14 != (Action *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void PendingCountChanged(Int32) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_PendingCountChanged
               (PlayerListButton *this,int32_t pending,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if (this_00 != (Image *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateButton
               (PlayerListButton *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playersCount;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
  goto code_?;
  pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
            *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
  if (pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) goto code_?;
  IStack_5.m_value =
       mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System
       ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
       Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                 (pDVar4,
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
  mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(pTVar1->klass->vtable).set_text.methodPtr)();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  bVar6 = 0;
  iVar7 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (iVar7 < 2) {
    if ((this->fields).useColorStyle == 0) {
      pBVar8 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Styles::Styles_SetStyle_4
                (pBVar8,ButtonStyle__Enum_RegularButton,MVTeam__Enum_None,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
    }
    else {
      this_07 = (this->fields).colorStyleObject;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      team.m_value = 5;
code_?:
      colorStyle = Styles::Styles_GetTeamColorStyle(team.m_value,bVar6,(MethodInfo *)0x0);
      if (this_07 == (ColorStyleObject *)0x0) goto code_?;
      ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_07,colorStyle,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar9 == (MVLocalPlayer *)0x0) goto code_?;
    pBVar8 = (Button *)(pMVar9->fields)._._Team_k__BackingField;
    if ((this->fields).useColorStyle != 0) {
      this_07 = (this->fields).colorStyleObject;
      IStack_5.m_value = (int32_t)pBVar8;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_10 = TypeInfo__Styles;
        func_?();
      }
      bVar6 = 0;
      team.m_value = IStack_5.m_value;
      goto code_?;
    }
    IStack_5.m_value = (int32_t)(this->fields).button;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_10 = TypeInfo__Styles;
      func_?();
    }
    Styles::Styles_SetStyle_4
              ((Button *)IStack_5.m_value,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)pBVar8,
               SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
    if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&stack0xffffffd0,pDVar4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                          );
      pBVar8 = (Button *)pDVar11->_currentValue;
      do {
        do {
          IStack_5.m_value = (int32_t)&UNK_?;
          pMVar12 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
          ;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar6 == 0) goto code_?;
          IStack_5.m_value = (int32_t)pBVar8;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pFVar13 = (pMVar2->fields)._Friends_k__BackingField, pFVar13 == (FriendList *)0x0))
          goto code_?;
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (pFVar13->fields).pendingNotifications;
          if (((Button *)IStack_5.m_value == (Button *)0x0) ||
             (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          goto code_?;
          pMVar12 = (MethodInfo *)&UNK_?;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                            (this_01,*(RegexCharClass_SingleRange *)(IStack_5.m_value + 0x2c),
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        } while (bVar6 == 0);
        this_02 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (this->fields).prevPlayerListState;
        if (this_02 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_02,(Object *)
                                   (((ColorBlock *)(IStack_5.m_value + 0x2c))->m_NormalColor).r,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
      } while (bVar6 != 0);
      this_03 = (this->fields).notification;
      if (this_03 != (Image *)0x0) {
        this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_03,(MethodInfo *)0x0);
        if (this_05 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_05,1,(MethodInfo *)0x0);
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_14);
          this_06 = (Dictionary_2_System_Int32_MVPlayer_ *)func_?();
          if (this_06 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_06,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                      );
            (this->fields).prevPlayerListState = this_06;
            func_?();
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
              pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                    (pMVar3,(MethodInfo *)0x0);
              if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)0x0) {
                pDVar11 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions
                          ::Regex+CachedCodeEntryKey,System::Object]::
                          Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                      *)&stack0xffffffd0,pDVar4,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                    );
                value = (MethodInfo *)pDVar11->_currentValue;
                while( true ) {
                  bVar6 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                          Object,System::Object]::
                          Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                      *)&stack0xffffffc0,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                    );
                  if (bVar6 == 0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              ((Object *)&stack0xffffffc0,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                               ,(MethodInfo *)in_stack_10);
                    *unaff_FS_OFFSET = pMVar12;
                    return;
                  }
                  this_04 = (Dictionary_2_System_Object_System_Object_ *)
                            (this->fields).prevPlayerListState;
                  if ((value == (MethodInfo *)0x0) ||
                     (this_04 == (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
                  pMVar15 = 
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  ;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_04,(Object *)value[1].methodPointer,(Object *)value,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                            );
                  value = pMVar15;
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
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdatePlayersCount() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdatePlayersCount
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playersCount;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                );
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        pTVar3 = pTVar1->klass;
        pMStack4 = (pTVar3->vtable).set_text.method;
        (*(pTVar3->vtable).set_text.methodPtr)();
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTeamColor() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateTeamColor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (iVar2 < 2) {
    if ((this->fields).useColorStyle == 0) {
      pBVar3 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      Styles::Styles_SetStyle_4
                (pBVar3,ButtonStyle__Enum_RegularButton,MVTeam__Enum_None,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).colorStyleObject;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pMVar1 = (MVNetworkGame *)0x0;
    darkTeam = 0;
    team = MVTeam__Enum_None;
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    darkTeam = 0xfd;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    team = (pMVar4->fields)._._Team_k__BackingField;
    if ((this->fields).useColorStyle == 0) {
      pBVar3 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Styles::Styles_SetStyle_4
                (pBVar3,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).colorStyleObject;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
  }
  colorStyle = Styles::Styles_GetTeamColorStyle(team,darkTeam,(MethodInfo *)pMVar1);
  if (this_01 != (ColorStyleObject *)0x0) {
    ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_01,colorStyle,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ViewNotification() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_ViewNotification
               (PlayerListButton *this,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if (this_00 != (Image *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <CreatePlayerList>b__13_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__CreatePlayerList_b__13_1
               (PlayerListButton *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  source = (this->fields).currPlayerLists;
  if (source != (GameObject *)0x0) {
    mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
              ((Void *)source,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PlayerListButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__ctor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVPlayer_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
    (this->fields).prevPlayerListState = this_00;
    func_?(&(this->fields).prevPlayerListState,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

