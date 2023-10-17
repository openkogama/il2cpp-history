
/* Void SetActiveTeam(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_SetActiveTeam
               (PlayerListSelector *this,MVTeam__Enum team,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_PlayerList>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)team;
  pOStack_2 = (Object__Class *)0x0;
  message = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&pOStack_1);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).playerLists;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__GetEnumerator__
                       );
    pOStack_2 = (Object__Class *)pDVar3->_dictionary;
    uVar4 = *(undefined8 *)&(pDVar3->_current).value;
    pOStack_1 = (Object *)&pOStack_2;
    while( true ) {
      bVar5 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         &pOStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__MoveNext__
                        );
      if (bVar5 == 0) break;
      if ((Component *)uVar4 == (Component *)0x0) goto code_?;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)uVar4,(MethodInfo *)0x0);
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      in_stack_7 = (MethodInfo *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&pOStack_2,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__Dispose__
               ,in_stack_7);
    pDVar8 = (this->fields).playerLists;
    if (pDVar8 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
      pCVar9 = (Component *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pCVar9 != (Component *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (pCVar9,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pDVar8 = (this->fields).playerLists;
          if (pDVar8 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
            pCVar9 = (Component *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,team,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                               );
            if (pCVar9 != (Component *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar9,(MethodInfo *)0x0);
              if (this_01 != (Transform *)0x0) {
                puVar10 = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                          (this_01,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puVar10;
                return;
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Setup(Dictionary`2[MV.WorldObject.MVTeam,PlayerList]) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_Setup
               (PlayerListSelector *this,Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *playerLists
               ,MethodInfo *method)

{
  pEStack_1 = (EventInfo *)0xffffffff;
  pFStack_2 = (FieldInfo *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pUVar4 = (UnityAction__Class *)&stack0xffffffb4;
  method_01 = (UnityAction__Class *)&stack0xffffffb4;
  if (cRam_? == '\0') {
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
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
    func_?(&
                    PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayerListSelector____c__DisplayClass2_0___Setup_b__0__);
    func_?(&TypeInfo__PlayerListSelector____c__DisplayClass2_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
    method_01 = pUVar4;
  }
  (this->fields).playerLists = playerLists;
  func_?(&(this->fields).playerLists,playerLists);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
      iVar7 = MVTeamManager::MVTeamManager_TeamCount(pMVar6,(MethodInfo *)0x0);
      if (iVar7 == 1) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Add
                  (this_00,(RegexCharClass_SingleRange)0x5,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                  );
      }
      else {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 == (MVNetworkGame *)0x0) ||
            (pMVar6 = (pMVar5->fields).teamManager, pMVar6 == (MVTeamManager *)0x0)) ||
           (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      MVTeamManager::MVTeamManager_GetTeamList(pMVar6,(MethodInfo *)0x0),
           this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
      }
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd0,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                         );
      pEStack_1 = (EventInfo *)0x1;
      this_01.__klassIndex = *(_union_86 *)&pLVar8->_current;
      while( true ) {
        team = this_01;
        method_00 = (Il2CppClass *)&UNK_?;
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                          );
        if (bVar9 == 0) {
          pEStack_1 = (EventInfo *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                     ,(MethodInfo *)method_01);
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
        value = (Object *)func_?();
        if (value == (Object *)0x0) break;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].monitor = (MonitorData *)this;
        func_?();
        pPVar10 = (this->fields).teamSelectButtonPrefab;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar10 = (PlayerListSelectorButton *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pPVar10,parent,0,
                            PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton__UnityEngine__Transform__bool_
                           );
        if ((pPVar10 == (PlayerListSelectorButton *)0x0) ||
           (this_01.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar10,(MethodInfo *)0x0),
           (RegexCharClass_SingleRange)this_01.dummy == (RegexCharClass_SingleRange)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_01.typeHandle,1,(MethodInfo *)0x0);
        PlayerListSelectorButton::PlayerListSelectorButton_Initialize
                  (pPVar10,team.__klassIndex,(MethodInfo *)0x0);
        if ((RegexCharClass_SingleRange)team.dummy != (RegexCharClass_SingleRange)0x5) {
          ((_union_86 *)(value + 1))->__klassIndex = (TypeDefinitionIndex)team;
          pBVar11 = (pPVar10->fields).button;
          if (pBVar11 == (Button *)0x0) break;
          this_01 = (_union_86)(pBVar11->fields).m_OnClick;
          method_01 = TypeInfo__UnityEngine__Events__UnityAction;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          if ((this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) ||
             (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_02,value,
                         MethodInfo__PlayerListSelector____c__DisplayClass2_0___Setup_b__0__,
                         (MethodInfo *)0x0),
             (RegexCharClass_SingleRange)this_01.dummy == (RegexCharClass_SingleRange)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    ((UnityEvent *)this_01.typeHandle,(UnityAction *)this_02,(MethodInfo *)0x0);
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

