
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
  if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar3 = (pMVar2->fields).playerContainer;
    if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
    pAVar4 = (pMVar3->fields).OnPlayerListChanged;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pAVar4 != (Action *)0x0) {
      pAVar6 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar4;
      }
      if (pAVar6 != (Action *)0x0) {
        (pMVar3->fields).OnPlayerListChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar4;
        }
        if (pAVar6 != (Action *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar7 = (pMVar2->fields).teamManager;
    if (pMVar7 == (MVTeamManager *)0x0) goto code_?;
    pMVar8 = (pMVar7->fields).OnTeamsUpdated;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0)
    ;
    pMVar8 = (MVTeamManager_OnTeamsUpdatedDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pMVar8 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (pMVar7->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    }
    else {
      pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
      (pMVar7->fields).OnTeamsUpdated = pMVar9;
      pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pFVar10 = (pMVar2->fields)._Friends_k__BackingField;
    if (pFVar10 == (FriendList *)0x0) goto code_?;
    pUVar11 = (pFVar10->fields).OnFriendRequestReceived;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
               (MethodInfo *)0x0);
    pUVar11 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pUVar11 == (UnityAction *)0x0) {
      (pFVar10->fields).OnFriendRequestReceived = (UnityAction *)0x0;
    }
    else {
      pUVar12 = (UnityAction *)0x0;
      if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar12 = pUVar11;
      }
      if (pUVar12 == (UnityAction *)0x0) goto code_?;
      (pFVar10->fields).OnFriendRequestReceived = pUVar12;
      pUVar12 = (UnityAction *)0x0;
      if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar12 = pUVar11;
      }
      if (pUVar12 == (UnityAction *)0x0) goto code_?;
    }
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pFVar10 = (pMVar2->fields)._Friends_k__BackingField;
    if (pFVar10 == (FriendList *)0x0) goto code_?;
    pUVar13 = (pFVar10->fields).OnPendingCountChanged;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__PlayerListButton__PendingCountChanged_int_,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar13,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar14 == (Delegate *)0x0) {
      (pFVar10->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pMVar3 = (pMVar2->fields).playerContainer;
        if (pMVar3 != (MVPlayerContainer *)0x0) {
          pAVar4 = (pMVar3->fields).OnPlayerListLoaded;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                     (MethodInfo *)0x0);
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
          if (pAVar4 == (Action *)0x0) {
            (pMVar3->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
            func_?();
            PlayerListButton_UpdateButton(this,(MethodInfo *)0x0);
            return;
          }
          pAVar6 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar6 = pAVar4;
          }
          if (pAVar6 != (Action *)0x0) {
            (pMVar3->fields).OnPlayerListLoaded = pAVar6;
            pAVar6 = (Action *)0x0;
            if (pAVar4->klass == TypeInfo__System__Action) {
              pAVar6 = pAVar4;
            }
            if (pAVar6 != (Action *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pUVar13 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar13 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pFVar10->fields).OnPendingCountChanged = pUVar13;
    iVar15 = func_?();
    if (iVar15 != 0) goto code_?;
  }
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
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
    func_?(&
                    MethodInfo__PlayerListButton___CreatePlayerList_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerListButton____c___CreatePlayerList_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerListButton____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  ppDVar1 = &(this->fields).prevPlayerListState;
  *ppDVar1 = (Dictionary_2_System_Int32_MVPlayer_ *)this_03;
  func_?(ppDVar1,this_03);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0)
     , this_04 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&stack0xffffffd4,this_04,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
              );
    method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc4).rgctx_data;
    while( true ) {
      this_06 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                 *)&stack0xffffffc4;
      bVar3 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              UInt32,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (this_06,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                        );
      if (bVar3 == 0) break;
      this_01 = (this->fields).prevPlayerListState;
      if ((this_06 ==
           (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
            *)0x0) || (this_01 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)this_06[3]._dictionary
                 ,(Object *)this_06,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                );
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffc4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
               ,(MethodInfo *)method_00.methodMetadataHandle);
    this_02 = (this->fields).notification;
    if ((this_02 != (Image *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_02,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      typeToDisplay = GameStatCounterType__Enum_None;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = (this->fields).currPlayerLists;
      ppGVar5 = &(this->fields).currPlayerLists;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_05 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)
                             PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                             ,
                             PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                            );
        if (this_05 == (Component *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_05,(MethodInfo *)0x0);
        *ppGVar5 = pGVar4;
        func_?();
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)&stack0xffffffe8,(MethodInfo *)0x0);
        PlayerListsLayout::PlayerListsLayout_Initialize
                  ((PlayerListsLayout *)0x0,(this->fields).playerListsPrefab,typeToDisplay,
                   UIPushOption__Enum_HideAll,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        pGVar4 = (GameObject *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                   MethodInfo__PlayerListButton___CreatePlayerList_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
      }
      else {
        *ppGVar5 = (GameObject *)0x0;
        func_?();
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__PlayerListButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__PlayerListButton____c->static_fields->__9__13_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__PlayerListButton____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__PlayerListButton____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__PlayerListButton____c___CreatePlayerList_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__PlayerListButton____c->static_fields->__9__13_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      *unaff_FS_OFFSET = pGVar4;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0))
  goto code_?;
  pAVar4 = (pMVar3->fields).OnPlayerListChanged;
  ppAVar5 = &(pMVar3->fields).OnPlayerListChanged;
  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar6,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)pNVar6,(MethodInfo *)0x0);
  if (pAVar4 != (Action *)0x0) {
    pAVar7 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar4;
    }
    if (pAVar7 != (Action *)0x0) {
      *ppAVar5 = pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar4;
      }
      if (pAVar7 != (Action *)0x0) goto code_?;
    }
    goto code_?;
  }
  *ppAVar5 = (Action *)0x0;
code_?:
  func_?();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar8 = (pMVar2->fields).teamManager, pMVar8 == (MVTeamManager *)0x0)) goto code_?;
  pMVar9 = (pMVar8->fields).OnTeamsUpdated;
  ppMVar10 = &(pMVar8->fields).OnTeamsUpdated;
  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)
           func_?(TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar6,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pMVar9 = (MVTeamManager_OnTeamsUpdatedDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pMVar9,(Delegate *)pNVar6,(MethodInfo *)0x0);
  if (pMVar9 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
    pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
    if (pMVar9->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      pMVar11 = pMVar9;
    }
    if (pMVar11 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      *ppMVar10 = pMVar11;
      pMVar11 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
      if (pMVar9->klass == TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        pMVar11 = pMVar9;
      }
      if (pMVar11 != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) goto code_?;
    }
    goto code_?;
  }
  *ppMVar10 = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
code_?:
  func_?();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pFVar12 = (pMVar2->fields)._Friends_k__BackingField, pFVar12 == (FriendList *)0x0)) {
code_?:
    func_?();
  }
  else {
    pUVar13 = (pFVar12->fields).OnFriendRequestReceived;
    ppUVar14 = &(pFVar12->fields).OnFriendRequestReceived;
    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar6,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
               (MethodInfo *)0x0);
    pUVar13 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar13,(Delegate *)pNVar6,(MethodInfo *)0x0);
    if (pUVar13 == (UnityAction *)0x0) {
      *ppUVar14 = (UnityAction *)0x0;
code_?:
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pFVar12 = (pMVar2->fields)._Friends_k__BackingField, pFVar12 != (FriendList *)0x0)) {
        pUVar15 = (pFVar12->fields).OnPendingCountChanged;
        ppUVar16 = &(pFVar12->fields).OnPendingCountChanged;
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__PlayerListButton__PendingCountChanged_int_,
                   (MethodInfo *)0x0);
        pDVar17 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar15,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar17 == (Delegate *)0x0) {
          *ppUVar16 = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar15 = (UnityAction_1_System_Int32_ *)func_?();
          if (pUVar15 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          *ppUVar16 = pUVar15;
          iVar18 = func_?();
          if (iVar18 == 0) goto code_?;
        }
        func_?();
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pAVar4 = (pMVar3->fields).OnPlayerListLoaded;
          ppAVar5 = &(pMVar3->fields).OnPlayerListLoaded;
          pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar6,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                     (MethodInfo *)0x0);
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pAVar4,(Delegate *)pNVar6,(MethodInfo *)0x0);
          if (pAVar4 == (Action *)0x0) {
            *ppAVar5 = (Action *)0x0;
            func_?();
            return;
          }
          pAVar7 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar4;
          }
          if (pAVar7 != (Action *)0x0) {
            *ppAVar5 = pAVar7;
            pAVar7 = (Action *)0x0;
            if (pAVar4->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar4;
            }
            if (pAVar7 != (Action *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pUVar19 = (UnityAction *)0x0;
    if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar19 = pUVar13;
    }
    if (pUVar19 != (UnityAction *)0x0) {
      *ppUVar14 = pUVar19;
      pUVar19 = (UnityAction *)0x0;
      if (pUVar13->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar19 = pUVar13;
      }
      if (pUVar19 != (UnityAction *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnPlayerListReady() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnPlayerListReady
               (PlayerListButton *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  if (pMVar6 != (MVNetworkGame *)0x0) {
    DStack_7._currentValue = (Object *)(pMVar6->fields).playerContainer;
    if ((Action *)DStack_7._currentValue != (Action *)0x0) {
      pAVar8 = (((Action *)DStack_7._currentValue)->fields)._._.delegate_trampoline;
      this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_03,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                 (MethodInfo *)0x0);
      pAVar8 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar8,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pAVar8 == (Action *)0x0) {
        (((Action__Fields *)((int)DStack_7._currentValue + 8))->_)._.delegate_trampoline =
             (Action *)0x0;
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 == (Action *)0x0) {
          func_?();
          goto code_?;
        }
        (((Action__Fields *)((int)DStack_7._currentValue + 8))->_)._.delegate_trampoline = pAVar9;
        pAVar9 = (Action *)0x0;
        if (pAVar8->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar8;
        }
        if (pAVar9 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (this_00,(MethodInfo *)0x0);
        if (this_04 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_7,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar10->_index;
          pOVar11 = pDVar10->_currentValue;
          DStack_7._version = 0;
          uStack_1 = 1;
          DStack_7._currentValue = (Object *)&stack0xffffffc8;
          do {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar12 == 0) goto code_?;
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((((pMVar6 == (MVNetworkGame *)0x0) ||
                 (pFVar13 = (pMVar6->fields)._Friends_k__BackingField, pFVar13 == (FriendList *)0x0))
                || (this_01 = (pFVar13->fields).pending, pOVar11 == (Object *)0x0)) ||
               (this_01 == (Dictionary_2_System_Int32_Friend_ *)0x0)) goto code_?;
            bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)this_01,
                               (int32_t)pOVar11[5].monitor,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                              );
          } while (bVar12 == 0);
          this_02 = (this->fields).notification;
          if (this_02 != (Image *)0x0) {
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_02,(MethodInfo *)0x0);
            if (this_05 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_05,1,(MethodInfo *)0x0);
code_?:
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
  if (pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine
  ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
            (pDVar4,
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
            );
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(code *)(pTVar1->klass->vtable).set_text.method)();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  bVar5 = 0;
  iVar6 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (iVar6 < 2) {
    if ((this->fields).useColorStyle == 0) {
      pBVar7 = (this->fields).button;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Styles::Styles_SetStyle_4
                (pBVar7,ButtonStyle__Enum_RegularButton,MVTeam__Enum_None,SoundStyle__Enum_NoSound,
                 (MethodInfo *)0x0);
    }
    else {
      this_06 = (this->fields).colorStyleObject;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      team = MVTeam__Enum_None;
code_?:
      colorStyle = Styles::Styles_GetTeamColorStyle(team,bVar5,(MethodInfo *)0x0);
      if (this_06 == (ColorStyleObject *)0x0) goto code_?;
      ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_06,colorStyle,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
    team = (pMVar8->fields)._._Team_k__BackingField;
    if ((this->fields).useColorStyle != 0) {
      this_06 = (this->fields).colorStyleObject;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_9 = TypeInfo__Styles;
        func_?();
      }
      bVar5 = 0;
      goto code_?;
    }
    pBVar7 = (this->fields).button;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_9 = TypeInfo__Styles;
      func_?();
    }
    Styles::Styles_SetStyle_4
              (pBVar7,ButtonStyle__Enum_RegularButton,team,SoundStyle__Enum_NoSound,
               (MethodInfo *)0x0);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0);
    if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                            *)&stack0xffffffdc,pDVar4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                          );
      pOVar11 = pDVar10->_currentValue;
      do {
        do {
          pOVar12 = pOVar11;
          this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                     *)&stack0xffffffc4;
          bVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (this_07,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar5 == 0) goto code_?;
          pOVar11 = pOVar12;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((((pMVar2 == (MVNetworkGame *)0x0) ||
               (pFVar13 = (pMVar2->fields)._Friends_k__BackingField, pFVar13 == (FriendList *)0x0)) ||
              (this_01 = (pFVar13->fields).pendingNotifications, pOVar12 == (Object *)0x0)) ||
             (this_01 == (List_1_System_Int32_ *)0x0)) goto code_?;
          bVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__Contains
                            (this_01,(int32_t)pOVar12[5].monitor,
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        } while (bVar5 == 0);
        this = (PlayerListButton *)(this->fields).prevPlayerListState;
        if ((Dictionary_2_System_Int32_MVPlayer_ *)this ==
            (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)this,
                           (int32_t)pOVar12[5].monitor,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          );
      } while (bVar5 != 0);
      this_02 = (Component *)(((Dictionary_2_System_Int32_MVPlayer_ *)this)->fields)._version;
      if (this_02 != (Component *)0x0) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_02,(MethodInfo *)0x0);
        if (this_04 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_04,1,(MethodInfo *)0x0);
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_14);
          this_05 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          TextCore::Text::TextResourceManager+FontAssetRef]::
          Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                    (this_05,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                    );
          ppDVar15 = &(this->fields).prevPlayerListState;
          *ppDVar15 = (Dictionary_2_System_Int32_MVPlayer_ *)this_05;
          func_?();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
            pDVar4 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                  (pMVar3,(MethodInfo *)0x0);
            if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)0x0) {
              pDVar10 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                    *)&stack0xffffffdc,pDVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                  );
              value = (MethodInfo *)pDVar10->_currentValue;
              while( true ) {
                bVar5 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                        UInt32,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffc4,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                  );
                if (bVar5 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&stack0xffffffc4,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                             ,(MethodInfo *)in_stack_9);
                  *unaff_FS_OFFSET = this_07;
                  return;
                }
                this_03 = *ppDVar15;
                if ((value == (MethodInfo *)0x0) ||
                   (this_03 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)) break;
                pMVar16 = 
                MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                ;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)this_03,
                           (int32_t)value[1].methodPointer,(Object *)value,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                          );
                value = pMVar16;
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                );
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        pTVar3 = pTVar1->klass;
        pIStack4 = (pTVar3->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar3->vtable).set_text.method)();
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
    darkTeam = 0xad;
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
  ptr = (this->fields).currPlayerLists;
  if (ptr != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
    UnsafeUtility_AsRef_1((Void *)ptr,(MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  ppDVar1 = &(this->fields).prevPlayerListState;
  *ppDVar1 = (Dictionary_2_System_Int32_MVPlayer_ *)this_00;
  func_?(ppDVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

