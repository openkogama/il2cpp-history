
/* PlayerListBase CreatePlayerList(MVTeam, Int32) */

PlayerListBase *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerList
          (PlayerListsLayout *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PlayerListBase_MethodInfo__UnityEngine__Object__Instantiate<PlayerListBase>_PlayerListBase_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerListPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerListBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pPVar1,
                      PlayerListBase_MethodInfo__UnityEngine__Object__Instantiate<PlayerListBase>_PlayerListBase_
                     );
  if (pPVar1 != (PlayerListBase *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      (*(pPVar1->klass->vtable).__unknown.methodPtr)
                (pPVar1,team,score,(uint)(this->fields).typeToDisplay);
      return pPVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pPVar1 = (PlayerListBase *)(*pcVar2)();
  return pPVar1;
}


/* IEnumerator CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

IEnumerator *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerListsLayout___CreatePlayerLists_d__10);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[3].klass = (Object__Class *)players;
    func_?(value + 3,players);
    value[2].klass = (Object__Class *)teams;
    func_?(value + 2,teams);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    func_?(&TypeInfo__PlayerListsLayout__ScoreSorter);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  piStack_6 = (int *)0x0;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                           );
  pDStack_8 = this_00;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
              );
    pDStack_9 = this_00;
    if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_11,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                         );
      uStack_12 = 0;
      RVar13 = pLVar10->_current;
      uStack_1 = 1;
      pMStack_14 = (MethodInfo *)&stack0xffffff98;
      while( true ) {
        pMVar15 = (MethodInfo *)uVar7;
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffff98,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                          );
        if (bVar16 == 0) break;
        RStack_17 = RVar13;
        this_01 = (LowLevelList_1_System_Object_ *)func_?();
        if (this_01 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (this_01,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
        uVar7._4_2_ = RStack_17.First;
        uVar7._6_2_ = RStack_17.Last;
        uVar7._0_4_ = (Object *)pDStack_8;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDStack_8,(Object *)RStack_17,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff98,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 ,pMVar15);
      uStack_1 = 0xffffffff;
      if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
        piStack_6 = (int *)func_?();
        LStack_11._current = (RegexCharClass_SingleRange)&piStack_6;
        LStack_11._version = 0;
        uStack_1 = 4;
        while( true ) {
          piStack_18 = piStack_6;
          if (piStack_6 == (int *)0x0) break;
          piStack_19 = (int *)*piStack_6;
          uVar20 = 0;
          RStack_17.First = 0;
          RStack_17.Last = 0;
          uVar21 = *(ushort *)((int)piStack_19 + 0xb2);
          pMStack_14 = (MethodInfo *)(uint)uVar21;
          if (uVar21 != 0) {
            do {
              if (*(IEnumerator__Class **)(piStack_19[0x16] + (uint)uVar20 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar22 = (undefined4 *)
                         (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar20 * 8) * 8 + 0xbc +
                         *piStack_6);
                goto code_?;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar21);
          }
          puVar22 = (undefined4 *)func_?();
code_?:
          cVar23 = (*(code *)*puVar22)();
          if (cVar23 == '\0') {
            uStack_1 = 0xffffffff;
            if (piStack_6 != (int *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            pDVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                                &stack0xffffffa8,pDStack_8,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                               );
            uVar25 = *(undefined8 *)&(pDVar24->_current).value;
            LStack_11._version = 0;
            uStack_1 = 7;
            LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffff80;
            goto code_?;
          }
          piStack_19 = piStack_6;
          if (piStack_6 == (int *)0x0) break;
          piStack_18 = (int *)*piStack_6;
          uVar20 = 0;
          pMStack_14 = (MethodInfo *)0x0;
          uVar21 = *(ushort *)((int)piStack_18 + 0xb2);
          RStack_17.Last = 0;
          RStack_17.First = uVar21;
          if (uVar21 != 0) {
            do {
              if (*(IEnumerator_1_MVPlayer___Class **)(piStack_18[0x16] + (uint)uVar20 * 8) ==
                  TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
                puVar22 = (undefined4 *)
                         (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar20 * 8) * 8 + 0xbc +
                         *piStack_6);
                goto code_?;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar21);
          }
          puVar22 = (undefined4 *)func_?();
code_?:
          pOVar26 = (Object *)(*(code *)*puVar22)();
          if (pOVar26 == (Object *)0x0) break;
          if (pOVar26[9].klass != (Object__Class *)0x5) {
            this_02 = (List_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_8,
                                 (Int32Enum__Enum)pOVar26[9].klass,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                                );
            if (this_02 == (List_1_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_02,pOVar26,
                       MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar27 = (code *)swi(3);
  pDVar28 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar27)();
  return pDVar28;
code_?:
  pMVar15 = (MethodInfo *)uVar25;
  bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Int32Enum,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                     &stack0xffffff80,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                    );
  if (bVar16 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff80,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
               ,in_stack_29);
    *unaff_FS_OFFSET = uStack_3;
    return (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)pDStack_8;
  }
  pMStack_14 = pMVar15;
  pOVar26 = (Object *)func_?();
  if (pOVar26 == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (pOVar26,ExceptionArgument__Enum_obj,pMVar15);
  if (pMStack_14 == (MethodInfo *)0x0) goto code_?;
  uVar25._4_4_ = (int32_t)
                 MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
  ;
  uVar25._0_4_ = pOVar26;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_2
            ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pMStack_14,
             (IComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pOVar26,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
            );
  goto code_?;
}


/* Void Initialize(PlayerListsLayout, GameStatCounterType, UIPushOption) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Initialize
               (PlayerListsLayout *this,PlayerListsLayout *playerListsPrefab,
               GameStatCounterType__Enum typeToDisplay,UIPushOption__Enum pushOptions,
               MethodInfo *method)

{
  (this->fields).playerListsPrefab = playerListsPrefab;
  func_?(&(this->fields).playerListsPrefab,playerListsPrefab);
  (this->fields).typeToDisplay = (undefined1)typeToDisplay;
  (this->fields).pushOptions = pushOptions;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_OnDestroy
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerListsLayout__ReCreate__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pAVar4 = (pMVar3->fields).OnPlayerListChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)MethodInfo__PlayerListsLayout__ReCreate__,
                 MethodInfo__PlayerListsLayout__ReCreate__,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
        (pMVar3->fields).OnPlayerListChanged = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pFVar6 = (pMVar2->fields)._Friends_k__BackingField, pFVar6 != (FriendList *)0x0)) {
        pFVar7 = (pFVar6->fields).OnFriendListUpdated;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this_00,MethodInfo__PlayerListsLayout__ReCreate__,
                     (MethodInfo *)0x0);
          pFVar7 = (FriendList_OnFriendListUpdatedDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pFVar7,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pFVar7 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar6->fields).OnFriendListUpdated = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            func_?();
            return;
          }
          pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
          if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
            (pFVar6->fields).OnFriendListUpdated = pFVar8;
            pFVar8 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
            if (pFVar7->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
              pFVar8 = pFVar7;
            }
            if (pFVar8 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_ReCreate
               (PlayerListsLayout *this,MethodInfo *method)

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
                    PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PlayerListsLayout____c___ReCreate_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerListsLayout____c___ReCreate_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerListsLayout____c__DisplayClass9_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerListsLayout____c__DisplayClass9_0);
    func_?(&TypeInfo__PlayerListsLayout____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerListsLayout____c__DisplayClass9_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__PlayerListsLayout____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerListsLayout____c);
    }
    pEVar1 = TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0;
    if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__PlayerListsLayout____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PlayerListsLayout____c);
      }
      pPVar2 = TypeInfo__PlayerListsLayout____c->static_fields->__9;
      pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pPVar2,
                 MethodInfo__PlayerListsLayout____c___ReCreate_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0 = pEVar1;
      func_?(&TypeInfo__PlayerListsLayout____c->static_fields->__9__9_0,pEVar1);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pPVar3 = (this->fields).playerListsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pPVar3,
                        PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                       );
    value[1].klass = pOVar4;
    func_?(value + 1);
    uVar5 = (this->fields).typeToDisplay;
    pOVar4 = value[1].klass;
    pIVar6 = (Il2CppClass *)(this->fields).pushOptions;
    if (pOVar4 != (Object__Class *)0x0) {
      pPVar3 = (this->fields).playerListsPrefab;
      (pOVar4->_0).namespaze = (char *)pPVar3;
      func_?(&(pOVar4->_0).namespaze,pPVar3);
      *(uint8_t *)&(pOVar4->_0).this_arg.attrs = uVar5;
      (pOVar4->_0).element_class = pIVar6;
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__PlayerListsLayout____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PlayerListsLayout____c);
      }
      pEVar1 = TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1;
      if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PlayerListsLayout____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__PlayerListsLayout____c);
        }
        pPVar2 = TypeInfo__PlayerListsLayout____c->static_fields->__9;
        pEVar1 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        if (pEVar1 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)pPVar2,
                   MethodInfo__PlayerListsLayout____c___ReCreate_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1 = pEVar1;
        func_?(&TypeInfo__PlayerListsLayout____c->static_fields->__9__9_1,pEVar1);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__PlayerListsLayout____c__DisplayClass9_0___ReCreate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar7,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerListBase],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
               (PlayerListsLayout *this,
               Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerListBase>__Add_PlayerListBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<PlayerListBase>);
    cRam_? = '\x01';
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerListBase>);
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<PlayerListBase>__List__);
    if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffc4,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)teams
                          ,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                         );
      this_02 = pLVar4->_current;
      uStack_1 = 1;
      do {
        do {
          bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffb4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                            );
          if (bVar5 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                       ,in_stack_6);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          index = 0;
          bVar7 = false;
          key = this_02;
          while( true ) {
            if ((this_01->fields)._size <= index) break;
            if (bVar7) {
              this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,index,
                                   MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                                  );
              if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_02,(MethodInfo *)0x0);
              if (pTVar8 == (Transform *)0x0) goto code_?;
              in_stack_6 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                        (pTVar8,(MethodInfo *)0x0);
code_?:
              index = index + 1;
            }
            else {
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar9 == (MVNetworkGame *)0x0) ||
                 (this_00 = (pMVar9->fields).teamManager, this_00 == (MVTeamManager *)0x0))
              goto code_?;
              MVTeamManager::MVTeamManager_GetScore
                        (this_00,(MVTeam__Enum)key,typeToDisplay,(MethodInfo *)0x0);
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
              in_stack_6 = (MethodInfo *)&UNK_?;
              this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_01,index,
                                   MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                                  );
              if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
              newScore = 6;
              team = func_?();
              if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
              oldScore = MVTeamManager::MVTeamManager_GetScore
                                   ((MVTeamManager *)this_03,team,typeToDisplay,(MethodInfo *)0x0);
              bVar5 = MVWorldObject.dll::GameStatCounterManager::
                      GameStatCounterManager_IsNewScoreBetter
                                (newScore,oldScore,typeToDisplay,(MethodInfo *)0x0);
              if (bVar5 == 0) goto code_?;
              if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
              goto code_?;
              this_02 = (RegexCharClass_SingleRange)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                                   (Int32Enum__Enum)key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                                  );
              in_stack_6 =
                   MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
              ;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)this_01,index,(Object *)this_02,
                         MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
                        );
              bVar7 = true;
              index = index + 1;
            }
          }
        } while (bVar7);
        if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0) break;
        this_02 = (RegexCharClass_SingleRange)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                            );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__List<PlayerListBase>__Add_PlayerListBase_
                  );
        in_stack_6 = (MethodInfo *)&UNK_?;
        this_04 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)playerLists,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                            );
        if (this_04 == (Component *)0x0) break;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_04,(MethodInfo *)0x0);
        if (pTVar8 == (Transform *)0x0) break;
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar8,(MethodInfo *)0x0);
      } while( true );
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Start
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__FriendList__OnFriendListUpdatedDelegate);
    func_?(&MethodInfo__PlayerListsLayout__ReCreate__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
    method_00 = (MethodInfo *)
                MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar2,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game(method_00);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      pOVar3 = (Object__Class *)MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EBX);
        value[1].klass = (Object__Class *)0x0;
        value[2].monitor = (MonitorData *)unaff_EBX;
        pOVar4 = (Object__Class *)&UNK_?;
        func_?(&value[2].monitor);
        value[3].klass = pOVar4;
        func_?(value + 3,pOVar4);
        value[2].klass = pOVar3;
        func_?(value + 2,pOVar3);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)unaff_EBX,(IEnumerator *)value,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            a = (Delegate *)&UNK_?;
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)unaff_EBX,MethodInfo__PlayerListsLayout__ReCreate__,
                       (MethodInfo *)0x0);
            pAVar6 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               (a,(Delegate *)pNVar5,(MethodInfo *)0x0);
            if (pAVar6 == (Action *)0x0) {
              (pMVar2->fields).OnPlayerListChanged = (Action *)0x0;
            }
            else {
              pAVar7 = (Action *)0x0;
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar6;
              }
              if (pAVar7 == (Action *)0x0) goto code_?;
              (pMVar2->fields).OnPlayerListChanged = pAVar7;
              pAVar7 = (Action *)0x0;
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar6;
              }
              if (pAVar7 == (Action *)0x0) goto code_?;
            }
            func_?();
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pFVar8 = (pMVar1->fields)._Friends_k__BackingField, pFVar8 != (FriendList *)0x0)) {
              pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              if (pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                a_00 = pNVar5;
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar5,(Object *)unaff_EBX,MethodInfo__PlayerListsLayout__ReCreate__,
                           (MethodInfo *)0x0);
                pFVar9 = (FriendList_OnFriendListUpdatedDelegate *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)a_00,(Delegate *)pNVar5,(MethodInfo *)0x0);
                if (pFVar9 == (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                  (pFVar8->fields).OnFriendListUpdated =
                       (FriendList_OnFriendListUpdatedDelegate *)0x0;
                  func_?();
                  return;
                }
                pFVar10 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
                if (pFVar9->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                  pFVar10 = pFVar9;
                }
                if (pFVar10 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                  (pFVar8->fields).OnFriendListUpdated = pFVar10;
                  pFVar10 = (FriendList_OnFriendListUpdatedDelegate *)0x0;
                  if (pFVar9->klass == TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                    pFVar10 = pFVar9;
                  }
                  if (pFVar10 != (FriendList_OnFriendListUpdatedDelegate *)0x0) {
                    func_?();
                    return;
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

