
/* Void AddPlayersToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_AddPlayersToScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  pSVar1 = (ScoreBoardSingleBase *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_2 = (Object__Class *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffcc,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar4->_currentValue;
      while( true ) {
        do {
          pOVar5 = team;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&pOStack_2,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar6 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&pOStack_2,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_7);
            *unaff_FS_OFFSET = pSVar1;
            return;
          }
          team = (Object *)0x0;
        } while (pOVar5 == (Object *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 == (MVNetworkGame *)0x0) break;
        this_01 = (pMVar3->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) break;
        in_stack_7 = (MethodInfo *)0x0;
        team = (Object *)pOVar5[9].klass;
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                  (this_01,CONCAT31((int3)((uint)in_stack_8 >> 8),(this->fields)._.statType),
                   (MVTeam__Enum)team,(int32_t)pOVar5[6].klass,(MethodInfo *)0x0);
        if ((SubscriptionRulesWrapper *)pOVar5[8].klass == (SubscriptionRulesWrapper *)0x0) break;
        bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          ((SubscriptionRulesWrapper *)pOVar5[8].klass,
                           SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
        pLVar9 = (this->fields)._.scoreBoardPlayerData;
        if (pLVar9 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields)._.scoreBoardPlayerData;
        in_stack_8 = &UNK_?;
        RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,(pLVar9->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          );
        if (RVar10 == (RegexCharClass_SingleRange)0x0) break;
        pSVar1 = this;
        bVar11 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                          ((ScoreBoardBase *)this,(int32_t)this_03,*(int32_t *)((int)RVar10 + 0x18),
                           (MethodInfo *)0x0);
        if (bVar11 != 0) {
          if (pOVar5[7].monitor == (MonitorData *)0x0) break;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)this_03,*(String **)(pOVar5[7].monitor + 0xc),
                     (int32_t)pOVar5[6].klass,(int32_t)this_03,bVar6,(MethodInfo *)0x0);
          this = (ScoreBoardSingleBase *)this_03;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void HandleParticipantListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_HandleParticipantListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields)._.scoreBoardPlayerData;
  while (cVar3 = (int)pLVar2 < 0, pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    if ((pLVar2->fields)._size <= iVar1) {
code_?:
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar3 = (int)pMVar4 < 0;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pMVar5 = (pMVar4->fields).playerContainer;
        cVar3 = (int)pMVar5 < 0;
        if (pMVar5 != (MVPlayerContainer *)0x0) {
          pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                 (pMVar5,(MethodInfo *)0x0);
          cVar3 = (int)pDVar6 < 0;
          if (pDVar6 !=
              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)0x0) {
            unaff_EBX = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                        Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                                  (pDVar6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                                  );
            pLVar2 = (this->fields)._.scoreBoardPlayerData;
            cVar3 = (int)pLVar2 < 0;
            if (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
          }
        }
      }
      break;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar3 = (int)pMVar4 < 0;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    pMVar5 = (pMVar4->fields).playerContainer;
    cVar3 = (int)pMVar5 < 0;
    if (pMVar5 == (MVPlayerContainer *)0x0) break;
    pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar5,(MethodInfo *)0x0);
    cVar3 = (int)pDVar6 < 0;
    if (pDVar6 ==
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) break;
    iVar7 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
             Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                       (pDVar6,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                       );
    if (iVar7 <= iVar1) goto code_?;
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._.scoreBoardPlayerData;
    cVar3 = (int)pLVar8 < 0;
    if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar8,iVar1,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    cVar3 = (int)RVar9 < 0;
    if (RVar9 == (RegexCharClass_SingleRange)0x0) break;
    pCVar10 = *(Component **)((int)RVar9 + 0x1c);
    cVar3 = (int)pCVar10 < 0;
    if (pCVar10 == (Component *)0x0) break;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCVar10,(MethodInfo *)0x0);
    cVar3 = (int)this_00 < 0;
    if (this_00 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
    pLVar2 = (this->fields)._.scoreBoardPlayerData;
  }
  goto code_?;
code_?:
  do {
    if ((pLVar2->fields)._size <= unaff_EBX) {
      return;
    }
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._.scoreBoardPlayerData;
    cVar3 = (int)pLVar8 < 0;
    if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar8,unaff_EBX,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    cVar3 = (int)RVar9 < 0;
    if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
    pSVar11 = *(String **)((int)RVar9 + 8);
    IVar12.m_value = 0;
    uVar13 = (this->fields)._.statType;
    IVar14.m_value = 0;
    ppSVar15 = (String__Array__Class **)pSVar11;
    if (cRam_? == '\0') {
      ppSVar15 = &TypeInfo__System__String;
      func_?();
      func_?(&::StringLiteral__);
      func_?(&StringLiteral______);
      func_?(&::StringLiteral__);
      IVar12.m_value = IVar14.m_value;
      func_?(&StringLiteral__0);
      cRam_? = '\x01';
    }
    pSVar16 = ::StringLiteral__;
    switch(uVar13) {
    default:
      pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
      break;
    case 2:
    case 8:
      pSVar17 = StringLiteral______;
      if (IVar12.m_value != 0) {
        IVar14.m_value =
             (int32_t)((float)(IVar12.m_value + (int)((float)IVar12.m_value / _UNK_?) * -1000
                              ) / _UNK_?);
        IVar18.m_value = (int)((float)IVar12.m_value / _UNK_?) % 0x3c;
        IVar12.m_value =
             func_?((float)(int)((float)IVar12.m_value / _UNK_?) / _UNK_?,0);
        pSVar11 = (String *)ppSVar15;
        if (0x3b < IVar12.m_value) {
          func_?((float)IVar12.m_value / _UNK_?,0);
          iVar1 = (int)((ulonglong)((longlong)IVar12.m_value * 0x77777777) >> 0x20) -
                   IVar12.m_value;
          IVar12.m_value = IVar12.m_value + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 0x3c;
          pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (pSVar16,pSVar11,::StringLiteral__,(MethodInfo *)0x0);
          pSVar11 = (String *)ppSVar15;
        }
        pSVar16 = ::StringLiteral__;
        if (IVar14.m_value < 10) {
          pSVar16 = mscorlib.dll::System::String::String_Concat_3
                              (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
        }
        pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
        pSVar17 = mscorlib.dll::System::String::String_Concat_3(pSVar16,pSVar17,(MethodInfo *)0x0);
        pSVar16 = ::StringLiteral__;
        if (IVar18.m_value < 10) {
          pSVar11 = ::StringLiteral__;
          pSVar17 = StringLiteral__0;
          pSVar16 = mscorlib.dll::System::String::String_Concat_3
                              (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
        }
        pSVar19 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
        pSVar19 = mscorlib.dll::System::String::String_Concat_3(pSVar16,pSVar19,(MethodInfo *)0x0);
        pSVar16 = ::StringLiteral__;
        if (IVar12.m_value < 10) {
          pSVar16 = mscorlib.dll::System::String::String_Concat_3
                              (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
        }
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar16 = mscorlib.dll::System::String::String_Concat_3(pSVar16,str1,(MethodInfo *)0x0);
        values = (String__Array *)func_?();
        cVar3 = (int)values < 0;
        if (values == (String__Array *)0x0) goto code_?;
        iVar1 = func_?(&UNK_?,(values->klass->_0).element_class);
        bVar20 = 0;
        cVar21 = '\0';
        cVar3 = iVar1 < 0;
        if (iVar1 == 0) goto code_?;
        func_?(0,&UNK_?);
        if (pSVar16 != (String *)0x0) {
          iVar1 = func_?(pSVar16,(values->klass->_0).element_class);
          bVar20 = 0;
          cVar21 = '\0';
          cVar3 = iVar1 < 0;
          if (iVar1 == 0) goto code_?;
        }
        func_?(1,pSVar16);
        if (::StringLiteral__ != (String *)0x0) {
          iVar1 = func_?(::StringLiteral__,(values->klass->_0).element_class);
          bVar20 = 0;
          cVar21 = '\0';
          cVar3 = iVar1 < 0;
          if (iVar1 == 0) goto code_?;
        }
        func_?(2,::StringLiteral__);
        if (pSVar19 != (String *)0x0) {
          iVar1 = func_?(pSVar19,(values->klass->_0).element_class);
          bVar20 = 0;
          cVar21 = '\0';
          cVar3 = iVar1 < 0;
          if (iVar1 == 0) goto code_?;
        }
        func_?(3,pSVar19);
        if (::StringLiteral__ != (String *)0x0) {
          iVar1 = func_?(::StringLiteral__,(values->klass->_0).element_class);
          bVar20 = 0;
          cVar21 = '\0';
          cVar3 = iVar1 < 0;
          if (iVar1 == 0) goto code_?;
        }
        func_?(4,::StringLiteral__);
        if (pSVar17 != (String *)0x0) {
          iVar1 = func_?(pSVar17,(values->klass->_0).element_class);
          bVar20 = 0;
          cVar21 = '\0';
          cVar3 = iVar1 < 0;
          if (iVar1 == 0) goto code_?;
        }
        func_?(5,pSVar17);
        pSVar17 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      }
    }
    cVar3 = (int)pSVar11 < 0;
    if (pSVar11 == (String *)0x0) goto code_?;
    (*(code *)pSVar11->klass[1].vtable.ToString_1.method)
              (pSVar11,pSVar17,pSVar11->klass[1].vtable.System_IConvertible_ToType.methodPtr);
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._.scoreBoardPlayerData;
    cVar3 = (int)pLVar8 < 0;
    if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar8,unaff_EBX,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    cVar3 = (int)RVar9 < 0;
    if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
    piVar22 = *(int **)((int)RVar9 + 0xc);
    cVar3 = (int)piVar22 < 0;
    if (piVar22 == (int *)0x0) goto code_?;
    (**(code **)(*piVar22 + 0x314))(piVar22,::StringLiteral__,*(undefined4 *)(*piVar22 + 0x318));
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._.scoreBoardPlayerData;
    cVar3 = (int)pLVar8 < 0;
    if (pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar8,unaff_EBX,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    cVar3 = (int)RVar9 < 0;
    if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
    pCVar10 = *(Component **)((int)RVar9 + 0x1c);
    cVar3 = (int)pCVar10 < 0;
    if (pCVar10 == (Component *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar10,(MethodInfo *)0x0);
    cVar3 = (int)this_01 < 0;
    if (this_01 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
              (this_01,(MethodInfo *)0x0);
    pLVar2 = (this->fields)._.scoreBoardPlayerData;
    unaff_EBX = unaff_EBX + 1;
  } while (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0);
  cVar3 = false;
code_?:
  cVar21 = '\0';
  bVar20 = 0;
  func_?();
code_?:
  uVar23 = func_?(0);
  func_?(uVar23);
  if (cVar21 == cVar3) {
    pbVar24 = (byte *)(extraout_EDX + 0x1d7c101f + unaff_EBX);
    bVar25 = CARRY1(*pbVar24,extraout_CL) || CARRY1(*pbVar24 + extraout_CL,bVar20);
    *pbVar24 = *pbVar24 + extraout_CL + bVar20;
    pbVar24 = &stack0x0000001b + unaff_EBX;
    bVar26 = (byte)((uint)unaff_EBX >> 8);
    bVar27 = CARRY1(*pbVar24,bVar26) || CARRY1(*pbVar24 + bVar26,bVar25);
    *pbVar24 = *pbVar24 + bVar26 + bVar25;
    pbVar24 = &stack0x0000001b + unaff_EBX;
    bVar25 = CARRY1(*pbVar24,bVar26) || CARRY1(*pbVar24 + bVar26,bVar27);
    *pbVar24 = *pbVar24 + bVar26 + bVar27;
    pbVar24 = &stack0x0000001b + unaff_EBX;
    bVar27 = CARRY1(*pbVar24,bVar26) || CARRY1(*pbVar24 + bVar26,bVar25);
    *pbVar24 = *pbVar24 + bVar26 + bVar25;
    pbVar24 = &stack0x0000001b + unaff_EBX;
    bVar20 = *pbVar24;
    bVar28 = *pbVar24;
    *pbVar24 = bVar28 + bVar26 + bVar27;
    pcVar29 = (char *)(extraout_EDX + -0x3333efe1 + unaff_EBX);
    *pcVar29 = *pcVar29 + extraout_CL + (CARRY1(bVar20,bVar26) || CARRY1(bVar28 + bVar26,bVar27));
    pcVar30 = (code *)swi(3);
    (*pcVar30)();
    return;
  }
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_Initialize
               (ScoreBoardSingleBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pMStack_3 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pMStack_3;
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
  ScoreBoardBase::ScoreBoardBase_Initialize((ScoreBoardBase *)this,statType,(MethodInfo *)0x0);
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)
            (this,(this->klass->vtable).HandleParticipantListChanged.method);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar4 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0)
     , this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
        *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
    Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)&stack0xffffffd8,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
              );
    uStack_1 = 1;
    while (bVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   Object,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                               *)&stack0xffffffc8,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                             ), pMVar6 = _UNK_?, bVar5 != 0) {
      MVPlayer::MVPlayer_GetGameStat((MVPlayer *)&UNK_?,statType,(MethodInfo *)0x0);
      pMStack_3 = (this->klass->vtable).OnStatsChange.method;
      (*(this->klass->vtable).OnStatsChange.methodPtr)();
      in_stack_7 = pMVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
               ,in_stack_7);
    *unaff_FS_OFFSET = pMStack_3;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnEnable
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)
            (this,(this->klass->vtable).HandleParticipantListChanged.method);
  ScoreBoardSingleBase_AddPlayersToScoreBoard(this,(MethodInfo *)0x0);
  return;
}


/* Void OnPlayerListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnPlayerListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  (*(this->klass->vtable).HandleParticipantListChanged.methodPtr)
            (this,(this->klass->vtable).HandleParticipantListChanged.method);
  ScoreBoardSingleBase_AddPlayersToScoreBoard(this,(MethodInfo *)0x0);
  return;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnStatsChange
               (ScoreBoardSingleBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MVPlayer *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    bVar3 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,actorNumber,(MVPlayer **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((pMVar1 != (MVPlayer *)0x0) &&
       (pMVar1 = (MVPlayer *)(pMVar1->fields)._SubscriptionRules_k__BackingField,
       pMVar1 != (MVPlayer *)0x0)) {
      bVar3 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        ((SubscriptionRulesWrapper *)pMVar1,SubscriptionBenefit__Enum_XPBoost,
                         (MethodInfo *)0x0);
      newScore = 
      MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_;
      pLVar4 = (unaff_ESI->fields).scoreBoardPlayerData;
      if ((pLVar4 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (unaff_ESI->fields).scoreBoardPlayerData,(pLVar4->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), RVar5 != (RegexCharClass_SingleRange)0x0)) {
        bVar6 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                          (unaff_ESI,(int32_t)newScore,*(int32_t *)((int)RVar5 + 0x18),
                           (MethodInfo *)0x0);
        if (bVar6 != 0) {
          if ((pMVar1 == (MVPlayer *)0x0) ||
             (pUVar7 = (pMVar1->fields)._UserProfileData_k__BackingField,
             pUVar7 == (UserProfileData *)0x0)) goto code_?;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    (unaff_ESI,(pUVar7->fields).UserName,0xADDR,(int32_t)unaff_ESI,bVar3,
                     (MethodInfo *)0x0);
        }
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


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_ReSortScoreBoard
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
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
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_2 = (Object__Class *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffd4,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar4->_currentValue;
      while( true ) {
        do {
          pOVar5 = team;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&pOStack_2,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar6 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&pOStack_2,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,in_stack_7);
            *unaff_FS_OFFSET = pLVar1;
            return;
          }
          team = (Object *)0x0;
        } while (pOVar5 == (Object *)0x0);
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 == (MVNetworkGame *)0x0) break;
        this_01 = (pMVar3->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) break;
        in_stack_7 = (MethodInfo *)0x0;
        team = (Object *)pOVar5[9].klass;
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                  (this_01,CONCAT31((int3)((uint)in_stack_8 >> 8),
                                    (char)(in_stack_9->fields)._size),(MVTeam__Enum)team,
                   (int32_t)pOVar5[6].klass,(MethodInfo *)0x0);
        if ((SubscriptionRulesWrapper *)pOVar5[8].klass == (SubscriptionRulesWrapper *)0x0) break;
        bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          ((SubscriptionRulesWrapper *)pOVar5[8].klass,
                           SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
        iVar10 = (in_stack_9->fields)._version;
        if (iVar10 == 0) break;
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (in_stack_9->fields)._version;
        in_stack_8 = &UNK_?;
        RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,*(int *)(iVar10 + 0xc) + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          );
        if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
        pLVar1 = in_stack_9;
        bVar12 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                          ((ScoreBoardBase *)in_stack_9,(int32_t)this_03,
                           *(int32_t *)((int)RVar11 + 0x18),(MethodInfo *)0x0);
        if (bVar12 != 0) {
          if (pOVar5[7].monitor == (MonitorData *)0x0) break;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)this_03,*(String **)(pOVar5[7].monitor + 0xc),
                     (int32_t)pOVar5[6].klass,(int32_t)this_03,bVar6,(MethodInfo *)0x0);
          in_stack_9 = this_03;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

