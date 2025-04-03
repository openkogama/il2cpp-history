
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
  puStack_4 = &stack0xffffff60;
  puVar5 = &stack0xffffff60;
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
  if (iVar6 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    ppOVar7 = &(this->fields).__2__current;
    *ppOVar7 = (Object *)this_01;
    func_?(ppOVar7,this_01);
    (this->fields).__1__state = 1;
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  if (iVar6 != 1) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  pLVar8 = (this->fields).teams;
  (this->fields).__1__state = -1;
  if (((pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) &&
      (iStack_9 = (pLVar8->fields)._size, this_00 != (PlayerListsLayout *)0x0)) &&
     (pGVar10 = (this_00->fields).bottomGrid, pGVar10 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pDVar11 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>
                            );
    pDStack_12 = pDVar11;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (pDVar11,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
              );
    if (iStack_9 == 1) {
      this_02 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                          (this_00,MVTeam__Enum_None,0,(MethodInfo *)0x0);
      if ((pDVar11 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
          ) && (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,5,
                           (Object *)this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                          ), this_02 != (PlayerListBase *)0x0)) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        pGVar10 = (this_00->fields).topGrid;
        if ((pGVar10 != (GameObject *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar10,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar13,parent,0,(MethodInfo *)0x0);
code_?:
          this_03 = (Dictionary_2_System_UInt32_System_Object_ *)
                    PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
                              (this_00,(this->fields).players,(this->fields).teams,(MethodInfo *)0x0
                              );
          if (this_03 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                      ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffff84,this_03,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                                );
            uVar15 = *(ulonglong *)&(pDVar14->_current).value;
            uStack_1 = 0;
            while( true ) {
              uStack_1._0_1_ = 1;
              uVar15 = uVar15 & 0xffffffff;
              bVar16 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&stack0xffffff6c,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__MoveNext__
                                );
              if (bVar16 == 0) break;
              if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)uVar15 ==
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              goto code_?;
              pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&stack0xffffff8c,
                                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)uVar15,
                                   MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                                  );
              RStack_18.m_Width = 0.0;
              RVar19 = pLVar17->_current;
              uStack_1._0_1_ = 3;
              RStack_18.m_Height = (float)&stack0xffffff9c;
code_?:
              in_stack_20 = (MethodInfo *)&UNK_?;
              bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff9c,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                                );
              if (bVar16 != 0) {
                if (RVar19 != (RegexCharClass_SingleRange)0x0) {
                  key = *(Int32Enum__Enum *)((int)RVar19 + 0x48);
                  if (iStack_9 != 1) goto code_?;
                  key = 5;
                  goto code_?;
                }
                goto code_?;
              }
              uStack_1 = CONCAT31(uStack_1._1_3_,1);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffff9c,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                         ,(MethodInfo *)RVar19);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffff6c,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dispose__
                       ,in_stack_20);
            goto code_?;
          }
        }
      }
    }
    else {
      pLVar8 = (this->fields).teams;
      if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        if (2 < (pLVar8->fields)._size) {
          pGVar10 = (this_00->fields).bottomGrid;
          if (pGVar10 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar10,1,(MethodInfo *)0x0);
        }
        pLVar8 = (this->fields).teams;
        if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          iVar6 = (pLVar8->fields)._size;
          pGVar10 = (this_00->fields).topGrid;
          if (pGVar10 != (GameObject *)0x0) {
            pMVar21 = (MVTeamManager *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar10,(MethodInfo *)0x0);
            uVar22 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pMVar21);
            if (pMVar21 != (MVTeamManager *)0x0) {
              pMStack_23 = (MVTeamManager *)0x0;
              if ((Transform__Class *)pMVar21->klass ==
                  (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                pMStack_23 = pMVar21;
              }
              if (pMStack_23 == (MVTeamManager *)0x0) goto code_?;
              pRVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect
                                 (&RStack_18,(RectTransform *)pMStack_23,(MethodInfo *)0x0);
              RStack_18.m_XMin = pRVar24->m_XMin;
              RStack_18.m_YMin = pRVar24->m_YMin;
              RStack_18.m_Width = pRVar24->m_Width;
              RStack_18.m_Height = pRVar24->m_Height;
              pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)pMStack_23,
                                   UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                                  );
              if (pOVar25 != (Object *)0x0) {
                pLVar8 = (this->fields).teams;
                pMStack_26 = (MVTeamManager *)0x0;
                pMStack_23 = (MVTeamManager *)0x0;
                RStack_18.m_Height =
                     RStack_18.m_Width * _UNK_? - (float)pOVar25[7].monitor * _UNK_?;
                if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  while( true ) {
                    pDVar11 = pDStack_12;
                    pLVar27 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).teams;
                    pMStack_23 = pMStack_26;
                    if ((pLVar8->fields)._size <= (int)pMStack_26) {
                      GStack_28 = (GameStatCounterType__Enum)(this_00->fields).typeToDisplay;
                      PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
                                (this_00,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                                         pDStack_12,(List_1_MV_WorldObject_MVTeam_ *)pLVar27,
                                 GStack_28,(MethodInfo *)0x0);
                      goto code_?;
                    }
                    if (pLVar27 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) break;
                    RStack_29 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (pLVar27,(int32_t)pMStack_26,
                                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                          );
                    pMVar30 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (pMVar30 == (MVNetworkGame *)0x0) break;
                    pMStack_23 = (pMVar30->fields).teamManager;
                    pLVar27 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).teams;
                    if (pLVar27 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) break;
                    RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar27,(int32_t)pMStack_26,
                                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                       );
                    GStack_31 = CONCAT31(GStack_31._1_3_,(this_00->fields).typeToDisplay);
                    if (pMStack_23 == (MVTeamManager *)0x0) break;
                    score = MVTeamManager::MVTeamManager_GetScore
                                      (pMStack_23,(MVTeam__Enum)RVar19,GStack_31,(MethodInfo *)0x0);
                    pMStack_23 = (MVTeamManager *)
                                 PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                                           (this_00,(MVTeam__Enum)RStack_29,score,(MethodInfo *)0x0)
                    ;
                    if ((pMStack_23 == (MVTeamManager *)0x0) ||
                       (RStack_29 = (RegexCharClass_SingleRange)
                                    UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_GetComponent_1
                                              ((Component *)pMStack_23,
                                               UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                                              ), RStack_29 == (RegexCharClass_SingleRange)0x0))
                    break;
                    in_stack_20 = (MethodInfo *)&UNK_?;
                    (**(code **)(*(int *)RStack_29 + 0x1e0))();
                    if ((int)pMStack_26 < 2) {
                      RStack_29 = (RegexCharClass_SingleRange)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pMStack_23,(MethodInfo *)0x0)
                      ;
                      pGVar10 = (this_00->fields).topGrid;
                    }
                    else {
                      func_?(0x28,RStack_29,(float)(3 < iVar6));
                      RStack_29 = (RegexCharClass_SingleRange)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pMStack_23,(MethodInfo *)0x0)
                      ;
                      pGVar10 = (this_00->fields).bottomGrid;
                    }
                    if ((pGVar10 == (GameObject *)0x0) ||
                       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                       RStack_29 == (RegexCharClass_SingleRange)0x0)) break;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                              ((Transform *)RStack_29,pTVar13,0,(MethodInfo *)0x0);
                    pLVar27 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).teams;
                    if ((pLVar27 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)0x0) ||
                       (RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar27,(int32_t)pMStack_26,
                                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                           ),
                       pDVar11 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                  *)0x0)) break;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,
                               (Int32Enum__Enum)RVar19,(Object *)pMStack_23,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                              );
                    pLVar8 = (this->fields).teams;
                    pMStack_23 = (MVTeamManager *)((int)&pMStack_26->klass + 1);
                    pMStack_26 = pMStack_23;
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
code_?:
  uVar22 = func_?();
code_?:
  func_?(uVar22);
  pcVar32 = (code *)swi(3);
  bVar16 = (*pcVar32)();
  return bVar16;
code_?:
  if (key != 5) {
code_?:
    if ((pDStack_12 ==
         (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) ||
       (pOVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_12,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                            ), pOVar25 == (Object *)0x0)) goto code_?;
    RVar19.First = 5;
    RVar19.Last = 0;
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

