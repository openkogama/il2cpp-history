
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>d__10::
     PlayerListsLayout_CreatePlayerLists_d_10_MoveNext
               (PlayerListsLayout_CreatePlayerLists_d_10 *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff50;
  puVar5 = &stack0xffffff50;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                   );
    func_?(&
                    UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  if (iVar6 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__UnityEngine__WaitForEndOfFrame)
    ;
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  else {
    if (iVar6 != 1) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    pLVar8 = (this->fields).teams;
    (this->fields).__1__state = -1;
    if (((pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) &&
        (iStack_9 = (pLVar8->fields)._size, iStack_10 = iStack_9,
        this_00 != (PlayerListsLayout *)0x0)) &&
       (pGVar11 = (this_00->fields).bottomGrid, pGVar11 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,0,(MethodInfo *)0x0);
      pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>
                              );
      pDStack_13 = pDVar12;
      if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
                  );
        pDStack_14 = pDVar12;
        if (iStack_10 == 1) {
          pPStack_15 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                                 (this_00,MVTeam__Enum_None,0,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar12,(Object *)0x5,(Object *)pPStack_15,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                    );
          if (pPStack_15 != (PlayerListBase *)0x0) {
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPStack_15,(MethodInfo *)0x0);
            pGVar11 = (this_00->fields).topGrid;
            if ((pGVar11 != (GameObject *)0x0) &&
               (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
               pTVar16 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar16,parent,0,(MethodInfo *)0x0);
code_?:
              pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
                       PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
                                 (this_00,(this->fields).players,(this->fields).teams,
                                  (MethodInfo *)0x0);
              if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::
                          Dictionary_2_System_Object_System_Object__GetEnumerator
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                      *)&stack0xffffff5c,pDVar12,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                                    );
                uStack_18 = 0;
                method_00 = (MethodInfo *)(pDVar17->_current).key;
                _pLStack_64 = *(undefined8 *)&(pDVar17->_current).value;
                pPStack_15 = (PlayerListBase *)&stack0xffffff8c;
                uStack_1 = 0;
                while( true ) {
                  uStack_1._0_1_ = 1;
                  bVar19 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                          Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                      *)&stack0xffffff8c,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                                    );
                  if (bVar19 == 0) break;
                  if (pLStack_20 ==
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  goto code_?;
                  pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                      ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)&stack0xffffff64,pLStack_20,
                                       MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                                      );
                  RStack_22.m_Width = 0.0;
                  LStack_7._list = (List_1_System_Object_ *)pLVar21->_list;
                  LStack_7._index = pLVar21->_index;
                  LStack_7._version = pLVar21->_version;
                  LStack_7._current = *(Object **)&pLVar21->_current;
                  uStack_1._0_1_ = 3;
                  RStack_22.m_Height = (float)&LStack_7;
code_?:
                  in_stack_23 = (MethodInfo *)&UNK_?;
                  bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    (&LStack_7,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                                    );
                  pOVar24 = LStack_7._current;
                  if (bVar19 != 0) {
                    if ((RegexCharClass_SingleRange)LStack_7._current !=
                        (RegexCharClass_SingleRange)0x0) {
                      key = *(Int32Enum__Enum *)((int)LStack_7._current + 0x48);
                      if (iStack_10 != 1) goto code_?;
                      key = 5;
                      goto code_?;
                    }
                    goto code_?;
                  }
                  uStack_1 = CONCAT31(uStack_1._1_3_,1);
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&LStack_7,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                             ,method_00);
                }
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)pPStack_15,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                           ,in_stack_23);
                goto code_?;
              }
            }
          }
        }
        else {
          pLVar8 = (this->fields).teams;
          if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            if (2 < (pLVar8->fields)._size) {
              pGVar11 = (this_00->fields).bottomGrid;
              if (pGVar11 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar11,1,(MethodInfo *)0x0);
            }
            pLVar8 = (this->fields).teams;
            if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
              pPStack_15 = (PlayerListBase *)(uint)(3 < (pLVar8->fields)._size);
              pGVar11 = (this_00->fields).topGrid;
              if (pGVar11 != (GameObject *)0x0) {
                pMVar25 = (MVTeamManager *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                uVar26 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pMVar25);
                if (pMVar25 != (MVTeamManager *)0x0) {
                  pMStack_27 = (MVTeamManager *)0x0;
                  if ((Transform__Class *)pMVar25->klass ==
                      (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                    pMStack_27 = pMVar25;
                  }
                  if (pMStack_27 == (MVTeamManager *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            (&RStack_22,(RectTransform *)pMStack_27,(MethodInfo *)0x0);
                  RStack_28 = (RegexCharClass_SingleRange)
                              SubscribableVariableBase`1[System::Single]::
                              SubscribableVariableBase_1_System_Single__get_Value
                                        ((SubscribableVariableBase_1_System_Single_ *)
                                         &stack0xffffff74,(MethodInfo *)0x0);
                  pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_GetComponent_1
                                     ((Component *)pMStack_27,
                                      UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                                     );
                  if (pOVar24 != (Object *)0x0) {
                    pLVar8 = (this->fields).teams;
                    iStack_29 = 0;
                    RStack_22.m_Height =
                         (float)RStack_28 * _UNK_? - (float)pOVar24[7].klass * _UNK_?;
                    if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                      while( true ) {
                        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).teams;
                        if ((pLVar8->fields)._size <= iStack_29) {
                          pPStack_15 = (PlayerListBase *)
                                       CONCAT31(pPStack_15._1_3_,(this_00->fields).typeToDisplay);
                          PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
                                    (this_00,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                                             pDVar12,(List_1_MV_WorldObject_MVTeam_ *)pLVar30,
                                     (GameStatCounterType__Enum)pPStack_15,(MethodInfo *)0x0);
                          goto code_?;
                        }
                        if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) break;
                        RStack_28 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar30,iStack_29,
                                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                              );
                        pMVar31 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (pMVar31 == (MVNetworkGame *)0x0) break;
                        pMStack_27 = (pMVar31->fields).teamManager;
                        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).teams;
                        if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) break;
                        RVar32 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar30,iStack_29,
                                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                           );
                        GStack_33 = CONCAT31(GStack_33._1_3_,(this_00->fields).typeToDisplay);
                        if (pMStack_27 == (MVTeamManager *)0x0) break;
                        score = MVTeamManager::MVTeamManager_GetScore
                                          (pMStack_27,(MVTeam__Enum)RVar32,GStack_33,
                                           (MethodInfo *)0x0);
                        pMStack_27 = (MVTeamManager *)
                                     PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                                               (this_00,(MVTeam__Enum)RStack_28,score,
                                                (MethodInfo *)0x0);
                        if ((pMStack_27 == (MVTeamManager *)0x0) ||
                           (RStack_28 = (RegexCharClass_SingleRange)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)pMStack_27,
                                                                                                      
                                                  UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                                                  ), RStack_28 == (RegexCharClass_SingleRange)0x0))
                        break;
                        in_stack_23 = (MethodInfo *)&UNK_?;
                        (**(code **)(*(int *)RStack_28 + 0x1dc))();
                        if (iStack_29 < 2) {
                          RStack_28 = (RegexCharClass_SingleRange)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pMStack_27,(MethodInfo *)0x0);
                          pGVar11 = (this_00->fields).topGrid;
                        }
                        else {
                          func_?(0x28,RStack_28,(float)(int)pPStack_15);
                          RStack_28 = (RegexCharClass_SingleRange)
                                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pMStack_27,(MethodInfo *)0x0);
                          pGVar11 = (this_00->fields).bottomGrid;
                        }
                        if ((pGVar11 == (GameObject *)0x0) ||
                           (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                           RStack_28 == (RegexCharClass_SingleRange)0x0)) break;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                  ((Transform *)RStack_28,pTVar16,0,(MethodInfo *)0x0);
                        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).teams;
                        if (pLVar30 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) break;
                        RVar32 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar30,iStack_29,
                                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                           );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  (pDVar12,(Object *)RVar32,(Object *)pMStack_27,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                                  );
                        iStack_29 = iStack_29 + 1;
                        pLVar8 = (this->fields).teams;
                        if (pLVar8 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar26 = func_?();
code_?:
  func_?(uVar26);
  pcVar34 = (code *)swi(3);
  bVar19 = (*pcVar34)();
  return bVar19;
code_?:
  if (key != 5) {
code_?:
    pLStack_20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_13,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                           );
    if (pLStack_20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RStack_35 = (RegexCharClass_SingleRange)pOVar24;
    method_00 = (MethodInfo *)0x5;
    func_?();
  }
  goto code_?;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>d__10::
     PlayerListsLayout_CreatePlayerLists_d_10_System_Collections_IEnumerator_Reset
               (PlayerListsLayout_CreatePlayerLists_d_10 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PlayerListsLayout___CreatePlayerLists_d__10__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

