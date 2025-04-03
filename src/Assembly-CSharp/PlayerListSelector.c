
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
  message = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&pOStack_1);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).playerLists;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__GetEnumerator__
                       );
    pOStack_3 = (Object__Class *)pDVar2->_dictionary;
    uVar4 = *(undefined8 *)&(pDVar2->_current).value;
    pOStack_1 = (Object *)&pOStack_3;
    while( true ) {
      bVar5 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &pOStack_3,
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&pOStack_3,
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
  method_00 = (UnityAction__Class *)&stack0xffffffb4;
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
    method_00 = pUVar4;
  }
  ppDVar5 = &(this->fields).playerLists;
  *ppDVar5 = playerLists;
  func_?(ppDVar5,playerLists);
  this_00 = (UnityAction *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 != (MVNetworkGame *)0x0) &&
     (pMVar7 = (pMVar6->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
    iVar8 = MVTeamManager::MVTeamManager_TeamCount(pMVar7,(MethodInfo *)0x0);
    pMVar9 = 
    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
    ;
    if (iVar8 == 1) {
      if (this_00 != (UnityAction *)0x0) {
        ppOVar10 = &(this_00->fields)._._.m_target;
        *ppOVar10 = (Object *)((int)&(*ppOVar10)->klass + 1);
        pRVar11 = (this_00->fields)._._.method_ptr;
        pvVar12 = (this_00->fields)._._.invoke_impl;
        if (pRVar11 != (RegexCharClass_SingleRange__Array *)0x0) {
          if (pvVar12 < (void *)pRVar11->max_length) {
            (this_00->fields)._._.invoke_impl = (void *)((int)pvVar12 + 1);
            if ((void *)pRVar11->max_length <= pvVar12) goto code_?;
            pRVar11->vector[(int)pvVar12].First = 5;
            pRVar11->vector[(int)pvVar12].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_00,
                       (RegexCharClass_SingleRange)0x5,pMVar9->klass->rgctx_data[0xe].method);
          }
          goto code_?;
        }
      }
    }
    else {
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar6 != (MVNetworkGame *)0x0) &&
          (pMVar7 = (pMVar6->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) &&
         (this_00 = (UnityAction *)
                    MVTeamManager::MVTeamManager_GetTeamList(pMVar7,(MethodInfo *)0x0),
         this_00 != (UnityAction *)0x0)) {
code_?:
        pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffd0,
                             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_00,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                            );
        pEStack_1 = (EventInfo *)0x1;
        this_01.__klassIndex = *(_union_86 *)&pLVar13->_current;
        while( true ) {
          team = this_01;
          bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                            );
          if (bVar14 == 0) {
            pEStack_1 = (EventInfo *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc0,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                       ,(MethodInfo *)method_00);
            *unaff_FS_OFFSET = pIStack_3;
            return;
          }
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)this_00);
          if (value == (Object *)0x0) break;
          value[1].monitor = (MonitorData *)this;
          func_?();
          pPVar15 = (this->fields).teamSelectButtonPrefab;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pPVar15 = (PlayerListSelectorButton *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pPVar15,parent,0,
                               PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton__UnityEngine__Transform__bool_
                              );
          if ((pPVar15 == (PlayerListSelectorButton *)0x0) ||
             (this_01.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar15,(MethodInfo *)0x0),
             (RegexCharClass_SingleRange)this_01.dummy == (RegexCharClass_SingleRange)0x0)) break;
          this_00 = (UnityAction *)0x1;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01.typeHandle,1,(MethodInfo *)0x0);
          PlayerListSelectorButton::PlayerListSelectorButton_Initialize
                    (pPVar15,team.__klassIndex,(MethodInfo *)0x0);
          if ((RegexCharClass_SingleRange)team.dummy != (RegexCharClass_SingleRange)0x5) {
            ((_union_86 *)(value + 1))->__klassIndex = (TypeDefinitionIndex)team;
            pBVar16 = (pPVar15->fields).button;
            if (pBVar16 == (Button *)0x0) break;
            this_01 = (_union_86)(pBVar16->fields).m_OnClick;
            method_00 = TypeInfo__UnityEngine__Events__UnityAction;
            this_00 = (UnityAction *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      ((NavMesh_OnNavMeshPreUpdate *)this_00,value,
                       MethodInfo__PlayerListSelector____c__DisplayClass2_0___Setup_b__0__,
                       (MethodInfo *)0x0);
            if ((RegexCharClass_SingleRange)this_01.dummy == (RegexCharClass_SingleRange)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      ((UnityEvent *)this_01.typeHandle,this_00,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

