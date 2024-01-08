
/* Void Awake() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_Awake
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)(this->fields).colorStyleObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
  (pPVar1->fields).useColorStyle = bVar2;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
  goto code_?;
  unaff_EDI = (UnityAction_1_System_Int32___Class *)(pMVar4->fields).OnPlayerListChanged;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pUVar5 = (UnityAction_1_System_Int32___Class *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)unaff_EDI,(Delegate *)this_02,(MethodInfo *)0x0);
  in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0;
  if (pUVar5 != (UnityAction_1_System_Int32___Class *)0x0) {
    if ((Action__Class *)(pUVar5->_0).image == TypeInfo__System__Action) {
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
    }
    pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action;
    if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0) {
      (pMVar4->fields).OnPlayerListChanged = (Action *)in_stack_6;
      in_stack_6 =
           (MVTeamManager_OnTeamsUpdatedDelegate__Class *)(UnityAction_1_System_Int32___Class *)0x0;
      if ((Action__Class *)(pUVar5->_0).image == TypeInfo__System__Action) {
        in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
      }
      pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action;
      if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0)
      goto code_?;
    }
    goto code_?;
  }
  (pMVar4->fields).OnPlayerListChanged = (Action *)0x0;
code_?:
  in_stack_8.m_value = (int32_t)&UNK_?;
  func_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (pMVar9 = (pMVar3->fields).teamManager, pMVar9 == (MVTeamManager *)0x0)) goto code_?;
  unaff_EDI = (UnityAction_1_System_Int32___Class *)(pMVar9->fields).OnTeamsUpdated;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,(MethodInfo *)0x0);
  pUVar5 = (UnityAction_1_System_Int32___Class *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)unaff_EDI,(Delegate *)this_02,(MethodInfo *)0x0);
  in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0;
  if (pUVar5 != (UnityAction_1_System_Int32___Class *)0x0) {
    if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)(pUVar5->_0).image ==
        TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
    }
    pMVar7 = TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate;
    if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0) {
      (pMVar9->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)in_stack_6;
      in_stack_6 =
           (MVTeamManager_OnTeamsUpdatedDelegate__Class *)(UnityAction_1_System_Int32___Class *)0x0;
      if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)(pUVar5->_0).image ==
          TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
        in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
      }
      pMVar7 = TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate;
      if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0)
      goto code_?;
    }
    goto code_?;
  }
  (pMVar9->fields).OnTeamsUpdated = (MVTeamManager_OnTeamsUpdatedDelegate *)0x0;
code_?:
  in_stack_8.m_value = (int32_t)&UNK_?;
  func_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (pFVar10 = (pMVar3->fields)._Friends_k__BackingField, pFVar10 == (FriendList *)0x0))
  goto code_?;
  unaff_EDI = (UnityAction_1_System_Int32___Class *)(pFVar10->fields).OnFriendRequestReceived;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
             (MethodInfo *)0x0);
  pUVar5 = (UnityAction_1_System_Int32___Class *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)unaff_EDI,(Delegate *)this_02,(MethodInfo *)0x0);
  in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0;
  if (pUVar5 != (UnityAction_1_System_Int32___Class *)0x0) {
    if ((UnityAction__Class *)(pUVar5->_0).image == TypeInfo__UnityEngine__Events__UnityAction) {
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
    }
    pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)
              TypeInfo__UnityEngine__Events__UnityAction;
    if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0) {
      (pFVar10->fields).OnFriendRequestReceived = (UnityAction *)in_stack_6;
      in_stack_6 =
           (MVTeamManager_OnTeamsUpdatedDelegate__Class *)(UnityAction_1_System_Int32___Class *)0x0;
      if ((UnityAction__Class *)(pUVar5->_0).image == TypeInfo__UnityEngine__Events__UnityAction) {
        in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pUVar5;
      }
      pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)
                TypeInfo__UnityEngine__Events__UnityAction;
      if (in_stack_6 != (MVTeamManager_OnTeamsUpdatedDelegate__Class *)0x0)
      goto code_?;
    }
    goto code_?;
  }
  (pFVar10->fields).OnFriendRequestReceived = (UnityAction *)0x0;
code_?:
  in_stack_8.m_value = (int32_t)&UNK_?;
  func_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 == (MVNetworkGame *)0x0) ||
     (pFVar10 = (pMVar3->fields)._Friends_k__BackingField, pFVar10 == (FriendList *)0x0)) {
code_?:
    func_?();
    pMVar7 = extraout_EDX;
  }
  else {
    pUVar11 = (pFVar10->fields).OnPendingCountChanged;
    this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_03,(Object *)this,MethodInfo__PlayerListButton__PendingCountChanged_int_,
               (MethodInfo *)0x0);
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,(Delegate *)this_03,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
      (pFVar10->fields).OnPendingCountChanged = (UnityAction_1_System_Int32_ *)0x0;
      in_stack_12 = (UnityAction_1_System_Int32___Class *)0x0;
    }
    else {
      in_stack_12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)this_02;
      pUVar11 = (UnityAction_1_System_Int32_ *)func_?();
      if (pUVar11 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      (pFVar10->fields).OnPendingCountChanged = pUVar11;
      unaff_EDI = TypeInfo__UnityEngine__Events__UnityAction<int>;
      in_stack_12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)this_02;
      in_stack_12 = (UnityAction_1_System_Int32___Class *)func_?();
      if (in_stack_12 == (UnityAction_1_System_Int32___Class *)0x0) goto code_?;
    }
    in_stack_6 =
         (MVTeamManager_OnTeamsUpdatedDelegate__Class *)&(pFVar10->fields).OnPendingCountChanged;
    func_?();
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
    goto code_?;
    pAVar13 = (pMVar4->fields).OnPlayerListLoaded;
    method_00 = (Styles__Class *)&UNK_?;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
               (MethodInfo *)0x0);
    pAVar14 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar13,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar13 = (Action *)0x0;
    if (pAVar14 == (Action *)0x0) {
      (pMVar4->fields).OnPlayerListLoaded = (Action *)0x0;
code_?:
      in_stack_8.m_value = (int32_t)&UNK_?;
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)pAVar13;
      func_?();
      method = (MethodInfo *)0x0;
      in_stack_12 = (UnityAction_1_System_Int32___Class *)&DAT_?;
      in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0x00000018;
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
      pDVar15 = in_stack_16;
      pIVar17 = (in_stack_16->_0).this_arg.data.array;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
      goto code_?;
      pDVar18 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar4,(MethodInfo *)0x0);
      if (pDVar18 ==
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      in_stack_8.m_value =
           mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
           StyleSheetCache+SheetHandleKey,System::Object]::
           Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                     (pDVar18,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                     );
      mscorlib.dll::System::Int32::Int32_ToString(&stack0x00000010,(MethodInfo *)0x0);
      if (pIVar17 == (Il2CppArrayType *)0x0) goto code_?;
      (*(code *)pIVar17->etype[99].data)();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar9 = (pMVar3->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
      goto code_?;
      bVar2 = 0;
      iVar19 = MVTeamManager::MVTeamManager_TeamCount(pMVar9,(MethodInfo *)0x0);
      if (iVar19 < 2) {
        if (*(char *)&(pDVar15->_0).parent == '\0') {
          pBVar20 = *(Button **)&(pDVar15->_0).byval_arg.attrs;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          Styles::Styles_SetStyle_4
                    (pBVar20,ButtonStyle__Enum_RegularButton,MVTeam__Enum_None,
                     SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
        }
        else {
          pIVar21 = (pDVar15->_0).element_class;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          team.m_value = 5;
code_?:
          colorStyle = Styles::Styles_GetTeamColorStyle(team.m_value,bVar2,(MethodInfo *)0x0);
          if (pIVar21 == (Il2CppClass *)0x0) goto code_?;
          ColorStyleObject::ColorStyleObject_UpdateColorStyle
                    ((ColorStyleObject *)pIVar21,colorStyle,(MethodInfo *)0x0);
        }
      }
      else {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
        pMVar22 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar22 == (MVLocalPlayer *)0x0) goto code_?;
        pOVar23 = (Object *)(pMVar22->fields)._._Team_k__BackingField;
        in_stack_8.m_value = (int32_t)pOVar23;
        if (*(char *)&(pDVar15->_0).parent != '\0') {
          pIVar21 = (pDVar15->_0).element_class;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            method_00 = TypeInfo__Styles;
            func_?();
          }
          bVar2 = 0;
          team.m_value = in_stack_8.m_value;
          goto code_?;
        }
        pBVar20 = *(Button **)&(pDVar15->_0).byval_arg.attrs;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          method_00 = TypeInfo__Styles;
          func_?();
        }
        Styles::Styles_SetStyle_4
                  (pBVar20,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)pOVar23,
                   SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
      }
      this = (PlayerListButton *)0x0;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pPVar1 = (PlayerListButton *)(pMVar3->fields).playerContainer,
         pPVar1 != (PlayerListButton *)0x0)) {
        method = (MethodInfo *)0x0;
        this = pPVar1;
        pDVar18 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               ((MVPlayerContainer *)pPVar1,(MethodInfo *)0x0);
        if (pDVar18 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          in_stack_8.m_value =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
          ;
          method = (MethodInfo *)&this;
          this = (PlayerListButton *)&UNK_?;
          pDVar24 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                    StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)method,pDVar18,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                              );
          in_stack_8.m_value = (int32_t)&stack0xffffffec;
          pOVar23 = pDVar24->_currentValue;
          do {
            do {
              pOVar25 = pOVar23;
              in_stack_12 =
                   (UnityAction_1_System_Int32___Class *)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
              ;
              in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)&stack0xffffffec;
              bVar2 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                  *)in_stack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                );
              if (bVar2 == 0) {
                in_stack_26.genericMethod =
                     (Il2CppGenericMethod *)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                ;
                in_stack_12 = (UnityAction_1_System_Int32___Class *)&UNK_?;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&stack0xffffffec,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                           ,(MethodInfo *)in_stack_27.genericMethod);
                pDVar15 = in_stack_16;
                goto code_?;
              }
              in_stack_26.genericMethod = (Il2CppGenericMethod *)0x0;
              pOVar23 = pOVar25;
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((((pMVar3 == (MVNetworkGame *)0x0) ||
                   (pFVar10 = (pMVar3->fields)._Friends_k__BackingField, pFVar10 == (FriendList *)0x0)
                   ) || (this_00 = (pFVar10->fields).pendingNotifications, pOVar25 == (Object *)0x0))
                 || (this_00 == (List_1_System_Int32_ *)0x0)) goto code_?;
              in_stack_27.genericMethod =
                   (Il2CppGenericMethod *)
                   MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
              in_stack_26 = (_union_155)pOVar25[5].monitor;
              in_stack_12 = (UnityAction_1_System_Int32___Class *)&UNK_?;
              bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__Contains
                                (this_00,(int32_t)in_stack_26,
                                 MethodInfo__System__Collections__Generic__List<int>__Contains_int_)
              ;
            } while (bVar2 == 0);
            pDVar15 = (Dictionary_2_System_Int32_MVPlayer___Class *)
                      (in_stack_16->_0).declaringType;
            if (pDVar15 == (Dictionary_2_System_Int32_MVPlayer___Class *)0x0) goto code_?;
            in_stack_28 =
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
            ;
            in_stack_29 = pOVar25[5].monitor;
            in_stack_27.genericMethod = (Il2CppGenericMethod *)&UNK_?;
            in_stack_16 = pDVar15;
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar15,
                               (int32_t)in_stack_29,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                              );
            pDVar15 = in_stack_16;
          } while (bVar2 != 0);
          this_01 = *(Component **)&(in_stack_16->_0).this_arg.attrs;
          if (this_01 != (Component *)0x0) {
            this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
            if (this_04 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_04,1,(MethodInfo *)0x0);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffec,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,in_stack_30);
code_?:
              in_stack_16 = TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>;
              in_stack_27.genericMethod = (Il2CppGenericMethod *)&UNK_?;
              this_05.genericMethod = (Il2CppGenericMethod *)func_?();
              in_stack_27 =
                   (_union_155)
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
              ;
              in_stack_26.genericMethod = this_05.genericMethod;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              TextCore::Text::TextResourceManager+FontAssetRef]::
              Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                        ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                          *)this_05.genericMethod,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                        );
              in_stack_26.genericMethod = (Il2CppGenericMethod *)&(pDVar15->_0).declaringType;
              (pDVar15->_0).declaringType = (Il2CppClass *)this_05;
              in_stack_27.genericMethod = this_05.genericMethod;
              func_?();
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar3 != (MVNetworkGame *)0x0) &&
                 (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
                pDVar18 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                       (pMVar4,(MethodInfo *)0x0);
                if (pDVar18 !=
                    (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
                  pDVar24 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                        *)&this,pDVar18,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                      );
                  in_stack_8.m_value = (int32_t)&stack0xffffffec;
                  value = (MethodInfo *)pDVar24->_currentValue;
                  while( true ) {
                    bVar2 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                            ::UInt32,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                        *)&stack0xffffffec,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                      );
                    if (bVar2 == 0) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                                ((Object *)&stack0xffffffec,
                                 (ExceptionArgument__Enum)
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                                 ,(MethodInfo *)method_00);
                      *unaff_FS_OFFSET = in_stack_6;
                      return;
                    }
                    pIVar21 = (pDVar15->_0).declaringType;
                    if ((value == (MethodInfo *)0x0) || (pIVar21 == (Il2CppClass *)0x0)) break;
                    pMVar31 = 
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                    ;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)pIVar21,
                               (int32_t)value[1].methodPointer,(Object *)value,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                              );
                    value = pMVar31;
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
      pcVar32 = (code *)swi(3);
      (*pcVar32)();
      return;
    }
    if (pAVar14->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar14;
    }
    pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action;
    unaff_EDI = (UnityAction_1_System_Int32___Class *)in_stack_6;
    if (pAVar13 != (Action *)0x0) {
      (pMVar4->fields).OnPlayerListLoaded = pAVar13;
      pAVar13 = (Action *)0x0;
      if (pAVar14->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar14;
      }
      pMVar7 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)TypeInfo__System__Action;
      if (pAVar13 != (Action *)0x0) goto code_?;
    }
  }
code_?:
  in_stack_8.m_value = (int32_t)&UNK_?;
  in_stack_6 = pMVar7;
  func_?();
code_?:
  in_stack_6 = (MVTeamManager_OnTeamsUpdatedDelegate__Class *)this_02;
  in_stack_12 = unaff_EDI;
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void CreatePlayerList() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_CreatePlayerList
               (PlayerListButton *this,MethodInfo *method)

{
  this_07 = this;
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
  (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_03;
  func_?(&(this->fields).prevPlayerListState,this_03);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
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
      bVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              UInt32,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (this_06,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                        );
      if (bVar2 == 0) break;
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
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_02,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      x = (PlayerListButton *)(this->fields).currPlayerLists;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar4 = (this->fields).playerListsPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_05 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pPVar4,
                             PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                            );
        if (this_05 == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_05,(MethodInfo *)0x0);
        (this->fields).currPlayerLists = pGVar3;
        func_?();
        WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                  ((GameStatCounterType__Enum *)&stack0xffffffeb,(MethodInfo *)0x0);
        pPVar4 = (this->fields).playerListsPrefab;
        this_05[1].monitor = (MonitorData *)pPVar4;
        func_?();
        this._3_1_ = (undefined1)((uint)pPVar4 >> 0x18);
        *(undefined1 *)&this_05[2].fields._.m_CachedPtr = this._3_1_;
        this_05[3].klass = (Component__Class *)0x2;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_07,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_07,
                   MethodInfo__PlayerListButton___CreatePlayerList_b__13_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
      }
      else {
        (this->fields).currPlayerLists = (GameObject *)0x0;
        func_?();
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_07 = x;
        if ((TypeInfo__PlayerListButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          this_07 = x;
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
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      *unaff_FS_OFFSET = this_07;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)&UNK_?,MethodInfo__PlayerListButton__UpdateButton__,
               (MethodInfo *)0x0);
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)&UNK_?,MethodInfo__PlayerListButton__ViewNotification__,
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)&UNK_?,
                   MethodInfo__PlayerListButton__PendingCountChanged_int_,(MethodInfo *)0x0);
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
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar4,(Object *)&UNK_?,
                     MethodInfo__PlayerListButton__OnPlayerListReady__,(MethodInfo *)0x0);
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
      team.m_value = MVTeam__Enum_None;
code_?:
      colorStyle = Styles::Styles_GetTeamColorStyle(team.m_value,bVar5,(MethodInfo *)0x0);
      if (this_06 == (ColorStyleObject *)0x0) goto code_?;
      ColorStyleObject::ColorStyleObject_UpdateColorStyle(this_06,colorStyle,(MethodInfo *)0x0);
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
    team.m_value = (pMVar8->fields)._._Team_k__BackingField;
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
              (pBVar7,ButtonStyle__Enum_RegularButton,team.m_value,SoundStyle__Enum_NoSound,
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
          if (bVar5 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,unaff_retaddr);
            goto code_?;
          }
          pOVar11 = pOVar12;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((((pMVar2 == (MVNetworkGame *)0x0) ||
               (pFVar13 = (pMVar2->fields)._Friends_k__BackingField, pFVar13 == (FriendList *)0x0)) ||
              (this_01 = (pFVar13->fields).pendingNotifications, pOVar12 == (Object *)0x0)) ||
             (this_01 == (List_1_System_Int32_ *)0x0)) goto code_?;
          unaff_retaddr = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
          bVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__Contains
                            (this_01,(int32_t)pOVar12[5].monitor,
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        } while (bVar5 == 0);
        this = (PlayerListButton *)(this->fields).prevPlayerListState;
        if ((Dictionary_2_System_Int32_MVPlayer_ *)this ==
            (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        unaff_retaddr = (MethodInfo *)&UNK_?;
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_14);
code_?:
          this_05 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          TextCore::Text::TextResourceManager+FontAssetRef]::
          Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                    (this_05,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                    );
          (((Dictionary_2_System_Int32_MVPlayer_ *)this)->fields)._values =
               (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)this_05;
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
                this_03 = (Dictionary_2_System_Int32_System_Object_ *)
                          (((Dictionary_2_System_Int32_MVPlayer_ *)this)->fields)._values;
                if ((value == (MethodInfo *)0x0) ||
                   (this_03 == (Dictionary_2_System_Int32_System_Object_ *)0x0)) break;
                pMVar15 = 
                MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                ;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          (this_03,(int32_t)value[1].methodPointer,(Object *)value,
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
    darkTeam = 0x7d;
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
  (this->fields).prevPlayerListState = (Dictionary_2_System_Int32_MVPlayer_ *)this_00;
  func_?(&(this->fields).prevPlayerListState,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

