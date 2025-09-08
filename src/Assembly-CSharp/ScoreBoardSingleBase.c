
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
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffcc,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar4->_currentValue;
      while( true ) {
        do {
          pOVar5 = team;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_2,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar6 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        this_03 = (ScoreBoardSingleBase *)(this->fields)._.scoreBoardPlayerData;
        in_stack_8 = &UNK_?;
        RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_03,(pLVar9->fields)._size + -1,
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
          this = this_03;
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
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = 0;
  pLVar3 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar3 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (iVar2 < (pLVar3->fields)._size) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 == (MVPlayerContainer *)0x0)) ||
         (pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                 (pMVar5,(MethodInfo *)0x0),
         pDVar6 ==
         (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) goto code_?;
      iVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                         (pDVar6,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                         );
      if (iVar7 <= iVar2) break;
      pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields)._.scoreBoardPlayerData;
      if (((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar8,iVar2,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), RVar9 == (RegexCharClass_SingleRange)0x0)) ||
         ((*(Component **)((int)RVar9 + 0x1c) == (Component *)0x0 ||
          (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (*(Component **)((int)RVar9 + 0x1c),(MethodInfo *)0x0),
          this_00 == (GameObject *)0x0)))) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pLVar3 = (this->fields)._.scoreBoardPlayerData;
      iVar2 = iVar2 + 1;
      if (pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar4 != (MVNetworkGame *)0x0) &&
        (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
       (pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (pMVar5,(MethodInfo *)0x0),
       pDVar6 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      unaff_EBX = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                  StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                            (pDVar6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                            );
      pLVar3 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar3 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
  }
code_?:
  bVar10 = false;
  uVar11 = func_?();
  iVar2 = (int)((ulonglong)uVar11 >> 0x20);
  pcVar12 = (char *)uVar11;
  cVar13 = (char)uVar11;
  cRam_? = cVar13;
  if (!bVar10) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pcVar12 + -0x53))();
    return;
  }
  pbVar14 = (byte *)(iVar2 + -0x5defd68b);
  bVar15 = (byte)((ulonglong)uVar11 >> 8);
  bVar16 = CARRY1(*pbVar14,bVar15) || CARRY1(*pbVar14 + bVar15,bVar10);
  *pbVar14 = *pbVar14 + bVar15 + bVar10;
  if (*pbVar14 == 0) {
    pbVar14 = (byte *)(iVar2 + -0x5defd68b);
    bVar10 = CARRY1(*pbVar14,bVar15) || CARRY1(*pbVar14 + bVar15,bVar16);
    *pbVar14 = *pbVar14 + bVar15 + bVar16;
    if (*pbVar14 == 0) {
      pbVar14 = (byte *)(&cRam_? + iVar2);
      bVar17 = *pbVar14;
      bVar18 = *pbVar14;
      *pbVar14 = bVar18 + bVar15 + bVar10;
      if (CARRY1(bVar17,bVar15) || CARRY1(bVar18 + bVar15,bVar10)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
    else {
      *pcVar12 = *pcVar12 + cVar13;
      *pcVar12 = *pcVar12 + cVar13;
    }
  }
  else {
    *pcVar12 = *pcVar12 + cVar13;
    *pcVar12 = *pcVar12 + cVar13;
    *unaff_FS_OFFSET = (int32_t)&stack0xffffffcc;
  }
  pcVar12 = (char *)(unaff_EBX + 0x56);
  *pcVar12 = *pcVar12 + (char)((ulonglong)uVar11 >> 0x20);
  if (*pcVar12 == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    uRam_? = 1;
  }
  ScoreBoardBase::ScoreBoardBase_Initialize
            ((ScoreBoardBase *)this,(GameStatCounterType__Enum)method,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar4 != (MVNetworkGame *)0x0) &&
      (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
     (pDVar6 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar5,(MethodInfo *)0x0),
     pDVar6 !=
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    pDVar20 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
              StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)&stack0xffffffd8,pDVar6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                        );
    IVar21.m_value = (int32_t)&stack0xffffffc8;
    this_02 = (MVPlayer *)pDVar20->_currentValue;
    while( true ) {
      bVar22 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
               UInt32,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                           *)&stack0xffffffc8,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                         );
      if (bVar22 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)IVar21.m_value,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   ,(MethodInfo *)0xffffffff);
        *unaff_FS_OFFSET = IVar21.m_value;
        return;
      }
      if (this_02 == (MVPlayer *)0x0) break;
      MVPlayer::MVPlayer_GetGameStat(this_02,(GameStatCounterType__Enum)method,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).OnStatsChange.method)();
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
code_?:
  if ((pLVar3->fields)._size <= unaff_EBX) {
    return;
  }
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pSVar1->fields)._.scoreBoardPlayerData;
  if ((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar8,unaff_EBX,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), RVar9 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  pDVar23 = *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              **)((int)RVar9 + 8);
  IVar21.m_value = 0;
  uVar24 = (pSVar1->fields)._.statType;
  this = (ScoreBoardSingleBase *)CONCAT13(uVar24,this._0_3_);
  IVar25.m_value = 0;
  ppSVar26 = (String__Array__Class **)pDVar23;
  if (cRam_? == '\0') {
    ppSVar26 = &TypeInfo__System__String;
    func_?();
    func_?();
    func_?();
    func_?();
    IVar21.m_value = IVar25.m_value;
    func_?();
    cRam_? = '\x01';
  }
  pSVar27 = ::StringLiteral__;
  switch(uVar24) {
  default:
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
    break;
  case 2:
  case 8:
    this = (ScoreBoardSingleBase *)::StringLiteral__;
    if (IVar21.m_value != 0) {
      IVar25.m_value =
           (int32_t)((float)(IVar21.m_value + (int)((float)IVar21.m_value / _UNK_?) * -1000)
                    / _UNK_?);
      IVar28.m_value = (int)((float)IVar21.m_value / _UNK_?) % 0x3c;
      IVar21.m_value = func_?();
      pDVar23 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)ppSVar26;
      if (0x3b < IVar21.m_value) {
        func_?();
        iVar2 = (int)((ulonglong)((longlong)IVar21.m_value * 0x77777777) >> 0x20) - IVar21.m_value;
        IVar21.m_value = IVar21.m_value + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0x3c;
        pSVar29 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (pSVar27,pSVar29,::StringLiteral__,(MethodInfo *)0x0);
        pDVar23 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)ppSVar26;
      }
      pSVar27 = ::StringLiteral__;
      if (IVar25.m_value < 10) {
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
      }
      pSVar29 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar29 = mscorlib.dll::System::String::String_Concat_3(pSVar27,pSVar29,(MethodInfo *)0x0);
      pSVar27 = ::StringLiteral__;
      if (IVar28.m_value < 10) {
        pDVar23 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)::StringLiteral__;
        pSVar29 = StringLiteral__0;
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
      }
      pSVar30 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar30 = mscorlib.dll::System::String::String_Concat_3(pSVar27,pSVar30,(MethodInfo *)0x0);
      pSVar27 = ::StringLiteral__;
      if (IVar21.m_value < 10) {
        pSVar27 = mscorlib.dll::System::String::String_Concat_3
                            (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
      }
      str1 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar27 = mscorlib.dll::System::String::String_Concat_3(pSVar27,str1,(MethodInfo *)0x0);
      method = (MethodInfo *)TypeInfo__System__String;
      this = (ScoreBoardSingleBase *)&UNK_?;
      values = (String__Array *)func_?();
      if (values == (String__Array *)0x0) goto code_?;
      func_?();
      func_?(1,pSVar27);
      func_?(2,::StringLiteral__);
      func_?(3,pSVar30);
      func_?(4,::StringLiteral__);
      func_?(5,pSVar29);
      mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
    }
  }
  if (pDVar23 ==
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) goto code_?;
  (*pDVar23->klass[1].vtable.System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
    methodPtr)(pDVar23);
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pSVar1->fields)._.scoreBoardPlayerData;
  if (((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar8,unaff_EBX,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar9 == (RegexCharClass_SingleRange)0x0)) ||
     (piVar31 = *(int **)((int)RVar9 + 0xc), piVar31 == (int *)0x0)) goto code_?;
  (**(code **)(*piVar31 + 0x318))(piVar31);
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pSVar1->fields)._.scoreBoardPlayerData;
  if (((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar8,unaff_EBX,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), RVar9 == (RegexCharClass_SingleRange)0x0)) ||
     ((*(Component **)((int)RVar9 + 0x1c) == (Component *)0x0 ||
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (*(Component **)((int)RVar9 + 0x1c),(MethodInfo *)0x0),
      this_01 == (Transform *)0x0)))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
            (this_01,(MethodInfo *)0x0);
  pLVar3 = (pSVar1->fields)._.scoreBoardPlayerData;
  unaff_EBX = unaff_EBX + 1;
  if (pLVar3 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_Initialize
               (ScoreBoardSingleBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pIStack_3 = (Il2CppMethodPointer)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
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
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this,this->klass[1]._0.image)
  ;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar4 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0)
     , this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&stack0xffffffd8,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
              );
    uStack_1 = 1;
    while (bVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                               *)&stack0xffffffc8,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                             ), pMVar6 = _UNK_?, bVar5 != 0) {
      MVPlayer::MVPlayer_GetGameStat((MVPlayer *)&UNK_?,statType,(MethodInfo *)0x0);
      pIStack_3 = (this->klass->vtable).Initialize.methodPtr;
      (*(code *)(this->klass->vtable).OnStatsChange.method)();
      in_stack_7 = pMVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
               ,in_stack_7);
    *unaff_FS_OFFSET = pIStack_3;
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
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this,this->klass[1]._0.image)
  ;
  ScoreBoardSingleBase_AddPlayersToScoreBoard(this,(MethodInfo *)0x0);
  return;
}


/* Void OnPlayerListChanged() */

void Assembly-CSharp.dll::ScoreBoardSingleBase::ScoreBoardSingleBase_OnPlayerListChanged
               (ScoreBoardSingleBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HandleParticipantListChanged.method)(this,this->klass[1]._0.image)
  ;
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
  pSVar1 = (ScoreBoardBase *)*unaff_FS_OFFSET;
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
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd4,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      team = pDVar4->_currentValue;
      while( true ) {
        do {
          pOVar5 = team;
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&pOStack_2,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                            );
          if (bVar6 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
                  (this_01,CONCAT31((int3)((uint)in_stack_8 >> 8),
                                    (in_stack_9->fields).statType),(MVTeam__Enum)team,
                   (int32_t)pOVar5[6].klass,(MethodInfo *)0x0);
        if ((SubscriptionRulesWrapper *)pOVar5[8].klass == (SubscriptionRulesWrapper *)0x0) break;
        bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          ((SubscriptionRulesWrapper *)pOVar5[8].klass,
                           SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
        pLVar10 = (in_stack_9->fields).scoreBoardPlayerData;
        if (pLVar10 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
        this_03 = (ScoreBoardBase *)(in_stack_9->fields).scoreBoardPlayerData;
        in_stack_8 = &UNK_?;
        RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_03,(pLVar10->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          );
        if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
        pSVar1 = in_stack_9;
        bVar12 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                          (in_stack_9,(int32_t)this_03,*(int32_t *)((int)RVar11 + 0x18),
                           (MethodInfo *)0x0);
        if (bVar12 != 0) {
          if (pOVar5[7].monitor == (MonitorData *)0x0) break;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    (this_03,*(String **)(pOVar5[7].monitor + 0xc),(int32_t)pOVar5[6].klass,
                     (int32_t)this_03,bVar6,(MethodInfo *)0x0);
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

