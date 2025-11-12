
/* Void ChangeStatType(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ChangeStatType
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  (this->fields).statType = (uint8_t)statType;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).ReSortScoreBoard.methodPtr)
            (this,(this->klass->vtable).ReSortScoreBoard.method);
  return;
}


/* Color GetBackgroundColor(Int32) */

Color * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_GetBackgroundColor
                  (Color *__return_storage_ptr__,ScoreBoardBase *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__Styles;
  __return_storage_ptr__->r = 0.0;
  __return_storage_ptr__->g = 0.0;
  __return_storage_ptr__->b = 0.0;
  __return_storage_ptr__->a = 0.0;
  if (*(int *)&(pSVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar2 = Styles::Styles_GetColor
                     (&CStack_3,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  fVar4 = pCVar2->g;
  fVar5 = pCVar2->b;
  fVar6 = pCVar2->a;
  fVar7 = (this->fields).backgroundAlpha;
  __return_storage_ptr__->r = pCVar2->r;
  __return_storage_ptr__->g = fVar4;
  __return_storage_ptr__->b = fVar5;
  __return_storage_ptr__->a = fVar6;
  __return_storage_ptr__->a = fVar7;
  return __return_storage_ptr__;
}


/* Boolean HandleAlreadyOnScoreBoard(Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_HandleAlreadyOnScoreBoard
               (ScoreBoardBase *this,int32_t id,int32_t newScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  uVar2 = 0;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return 0;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pSVar6 = (pLVar1->fields)._items;
      if (pSVar6 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
      if ((uint)pSVar6->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      lVar7 = *(longlong *)((longlong)pSVar6->vector + lVar3 + -0x20);
      if (lVar7 == 0) goto code_?;
      if (id == *(int *)(lVar7 + 0x28)) break;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    }
    lVar3 = FUN_?(pLVar1,uVar2);
    if (lVar3 != 0) {
      bVar5 = ScoreBoardBase_IsNewScoreBetter_1
                        (this,newScore,*(int32_t *)(lVar3 + 0x2c),0,unaff_EDI,unaff_retaddr);
      if (bVar5 == 0) {
        return 1;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
         (lVar3 = FUN_?(pLVar1,uVar2), lVar3 != 0)) {
        *(int32_t *)(lVar3 + 0x2c) = newScore;
        pLVar1 = (this->fields).scoreBoardPlayerData;
        if ((pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
           (lVar3 = FUN_?(pLVar1,uVar2), lVar3 != 0)) {
          plVar8 = *(longlong **)(lVar3 + 0x10);
          uVar9 = (*(this->klass->vtable).ScoreIntoString.methodPtr)
                            (this,newScore,(this->klass->vtable).ScoreIntoString.method);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x5e8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x5f0));
            if (id < 0) {
              pLVar1 = (this->fields).scoreBoardPlayerData;
              if (((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
                  (lVar3 = FUN_?(pLVar1,uVar2), lVar3 == 0)) ||
                 (plVar8 = *(longlong **)(lVar3 + 0x10), plVar8 == (longlong *)0x0))
              goto code_?;
              (**(code **)(*plVar8 + 0x5e8))
                        (plVar8,::StringLiteral__,*(undefined8 *)(*plVar8 + 0x5f0));
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_Initialize
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).statType = (uint8_t)statType;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pAVar4 = (pMVar3->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar5,pAVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar3->fields).OnWinningConditionFulfilled = pAVar4;
      pAVar6 = TypeInfo__System__Action<IWinningCondition>;
      lVar8 = FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
      if (lVar8 == 0) {
        FUN_?(pDVar5,pAVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar11 == *puVar12;
        if (bVar1) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar13 = (this->fields).scoreBoardPlayerData;
    if (pLVar13 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
      iVar14 = (pLVar13->fields)._size;
      if (iVar14 < 1) {
        return;
      }
      if (iVar14 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar15 = (pLVar13->fields)._items;
      if (pSVar15 != (ScoreBoardBase_ScoreData__Array *)0x0) {
        if ((int)pSVar15->max_length == 0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pSVar15->vector[0] != (ScoreBoardBase_ScoreData *)0x0) &&
           (pIVar16 = (pSVar15->vector[0]->fields).Background, pIVar16 != (Image *)0x0)) {
          lVar8 = (*(pIVar16->klass->vtable).get_color.methodPtr)
                             (auStack_17,pIVar16,(pIVar16->klass->vtable).get_color.method);
          (this->fields).backgroundAlpha = *(float *)(lVar8 + 0xc);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
               (ScoreBoardBase *this,int32_t newScore,int32_t oldScore,int32_t newId,int32_t oldId,
               MethodInfo *method)

{
  switch((this->fields).statType) {
  case 1:
  case 3:
  case 6:
    if (oldScore < newScore) {
      return 1;
    }
    break;
  case 2:
  case 8:
    if (oldScore < 0) {
      return 1;
    }
    if (0 < newScore) {
      if (newScore < oldScore) {
        return 1;
      }
      if (oldScore == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_OnWinningConditionFulfilled
               (ScoreBoardBase *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  uVar2 = 0;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      *(undefined4 *)(lVar6 + 0x2c) = 0;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      plVar7 = *(longlong **)(lVar6 + 0x10);
      uVar8 = (*(this->klass->vtable).ScoreIntoString.methodPtr)
                        (this,0,(this->klass->vtable).ScoreIntoString.method);
      if (plVar7 == (longlong *)0x0) break;
      (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x5f0));
      pLVar1 = (this->fields).scoreBoardPlayerData;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ReSortScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  uVar2 = 0;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      *(undefined4 *)(lVar6 + 0x2c) = 0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      *(undefined4 *)(lVar6 + 0x28) = 0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(lVar6 + 0x48) = 0;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ResetScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  uVar2 = 0;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      *(undefined4 *)(lVar6 + 0x2c) = 0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      *(undefined4 *)(lVar6 + 0x28) = 0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pSVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) break;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(lVar6 + 0x48) = 0;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ScoreIntoString(Int32) */

String * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ScoreIntoString
                   (ScoreBoardBase *this,int32_t score,MethodInfo *method)

{
  uVar1 = (this->fields).statType;
  aIStackX_8[0].m_value = score;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral______);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = ::StringLiteral__;
  switch(uVar1) {
  default:
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    return pSVar2;
  case 2:
  case 8:
    break;
  }
  if (score == 0) {
    return StringLiteral______;
  }
  iVar3 = (int)((float)(score + (int)((float)score / _UNK_?) * -1000) / _UNK_?);
  fVar4 = (float)(int)((float)score / _UNK_?) / _UNK_?;
  iVar5 = (int)((float)score / _UNK_?) % 0x3c;
  IStack_6.m_value = iVar3;
  aIStack_7[0].m_value = iVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar8 = (double)func_?((double)fVar4);
  iVar9 = (int)dVar8;
  aIStackX_10[0].m_value = iVar9;
  if (0x3b < iVar9) {
    aIStackX_20[0].m_value = FUN_?((float)iVar9 / _UNK_?);
    iVar10 = (int)((ulonglong)((longlong)iVar9 * 0x77777777) >> 0x20) - iVar9;
    iVar9 = iVar9 + ((iVar10 >> 5) - (iVar10 >> 0x1f)) * 0x3c;
    aIStackX_10[0].m_value = iVar9;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar2,pSVar11,::StringLiteral__,(MethodInfo *)0x0);
  }
  pSVar11 = ::StringLiteral__;
  if (iVar3 < 10) {
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4(pSVar11,pSVar12,(MethodInfo *)0x0);
  pSVar11 = ::StringLiteral__;
  if (iVar5 < 10) {
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_7,(MethodInfo *)0x0);
  pSVar12 = mscorlib.dll::System::String::String_Concat_4(pSVar11,pSVar12,(MethodInfo *)0x0);
  pSVar11 = ::StringLiteral__;
  if (iVar9 < 10) {
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pSVar11 = mscorlib.dll::System::String::String_Concat_4(pSVar11,str1,(MethodInfo *)0x0);
  lVar13 = FUN_?(TypeInfo__System__String,6);
  if (lVar13 == 0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar14)();
    return pSVar2;
  }
  FUN_?(lVar13,0,pSVar2);
  FUN_?(lVar13,1,pSVar11);
  FUN_?(lVar13,2,::StringLiteral__);
  FUN_?(lVar13,3,pSVar12);
  FUN_?(lVar13,4,::StringLiteral__);
  FUN_?(lVar13,5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar13 == 0) {
    uVar15 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar15);
    pSVar2 = (String *)func_?(&StringLiteral_values);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar2,(MethodInfo *)0x0);
    uVar15 = func_?(&MethodInfo__System__String__Concat_System__String____);
    FUN_?(this_00,uVar15);
    pcVar14 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar14)();
    return pSVar2;
  }
  if (*(int *)(lVar13 + 0x18) < 2) {
    if (*(longlong *)(lVar13 + 0x18) == 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (*(int *)(lVar13 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar14)();
      return pSVar2;
    }
    if (*(String **)(lVar13 + 0x20) != (String *)0x0) {
      return *(String **)(lVar13 + 0x20);
    }
  }
  else {
    plVar16 = (longlong *)(lVar13 + 0x20);
    values = (String__Array *)0x0;
    pSVar17 = values;
    pSVar18 = values;
    while (uVar19 = (uint)pSVar17, (int)uVar19 < (int)*(uint *)(lVar13 + 0x18)) {
      if (*(uint *)(lVar13 + 0x18) <= uVar19) goto code_?;
      if (*plVar16 != 0) {
        pSVar18 = (String__Array *)
                  ((longlong)pSVar18->vector + (longlong)*(int *)(*plVar16 + 0x10) + -0x20);
      }
      plVar16 = plVar16 + 1;
      pSVar17 = (String__Array *)(ulonglong)(uVar19 + 1);
    }
    if (0x7fffffff < (longlong)pSVar18) {
      uVar15 = func_?(&TypeInfo__System__OutOfMemoryException);
      this_02 = (OutOfMemoryException *)func_?(uVar15);
      mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor
                (this_02,(MethodInfo *)0x0);
      uVar15 = func_?(&MethodInfo__System__String__Concat_System__String____);
      FUN_?(this_02,uVar15);
      pcVar14 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar14)();
      return pSVar2;
    }
    iVar5 = (int)pSVar18;
    if (iVar5 != 0) {
      pSVar2 = (String *)FUN_?((ulonglong)pSVar18 & 0xffffffff);
      plVar16 = (longlong *)(lVar13 + 0x20);
      pSVar17 = values;
      pSVar18 = values;
code_?:
      do {
        iVar3 = (int)pSVar17;
        uVar19 = (uint)pSVar18;
        if (*(int *)(lVar13 + 0x18) <= (int)uVar19) {
code_?:
          if (iVar3 == iVar5) {
            return pSVar2;
          }
          lVar13 = FUN_?(lVar13);
          pSVar20 = TypeInfo__System__String;
          if ((lVar13 != 0) &&
             (values = (String__Array *)FUN_?(lVar13), values == (String__Array *)0x0)) {
            FUN_?(lVar13,pSVar20);
            pcVar14 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar14)();
            return pSVar2;
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          return pSVar2;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar19) goto code_?;
        lVar21 = *plVar16;
        if ((lVar21 == 0) || (*(int *)(lVar21 + 0x10) == 0)) {
code_?:
          pSVar18 = (String__Array *)(ulonglong)(uVar19 + 1);
          plVar16 = plVar16 + 1;
          goto code_?;
        }
        iVar9 = *(int *)(lVar21 + 0x10);
        if (iVar5 - iVar3 < iVar9) {
          iVar3 = -1;
          goto code_?;
        }
        if (pSVar2 == (String *)0x0) {
          FUN_?();
          pcVar14 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar14)();
          return pSVar2;
        }
        if ((pSVar2->fields)._stringLength - iVar3 < iVar9) {
          uVar15 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          this_01 = (IndexOutOfRangeException *)func_?(uVar15);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (this_01,(MethodInfo *)0x0);
          uVar15 = func_?(&
                                       MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                      );
          FUN_?(this_01,uVar15);
          pcVar14 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar14)();
          return pSVar2;
        }
        src = (uint8_t *)(lVar21 + 0x14);
        dest = &(pSVar2->fields)._firstChar + iVar3;
        uVar22 = (ulonglong)(uint)(iVar9 * 2);
        if (((ulonglong)((longlong)dest - (longlong)src) < uVar22) ||
           ((ulonglong)((longlong)src - (longlong)dest) < uVar22)) {
          FUN_?(dest,src,uVar22);
          pSVar17 = (String__Array *)(ulonglong)(uint)(iVar3 + iVar9);
          goto code_?;
        }
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)dest,src,iVar9 * 2,(MethodInfo *)0x0);
        pSVar17 = (String__Array *)(ulonglong)(uint)(iVar3 + iVar9);
        pSVar18 = (String__Array *)(ulonglong)(uVar19 + 1);
        plVar16 = plVar16 + 1;
      } while( true );
    }
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Void SetActiveMemberUI(Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetActiveMemberUI
               (ScoreBoardBase *this,int32_t index,bool shouldBeActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
    pSVar2 = (pLVar1->fields)._items;
    if (pSVar2 != (ScoreBoardBase_ScoreData__Array *)0x0) {
      if ((uint)pSVar2->max_length <= (uint)index) goto code_?;
      if (pSVar2->vector[index] != (ScoreBoardBase_ScoreData *)0x0) {
        pGVar3 = (pSVar2->vector[index]->fields).MemberUI;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar3 != (GameObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
            pLVar1 = (this->fields).scoreBoardPlayerData;
            if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
              if ((uint)(pLVar1->fields)._size <= (uint)index) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pSVar2 = (pLVar1->fields)._items;
              if (pSVar2 != (ScoreBoardBase_ScoreData__Array *)0x0) {
                if ((uint)pSVar2->max_length <= (uint)index) {
code_?:
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((pSVar2->vector[index] != (ScoreBoardBase_ScoreData *)0x0) &&
                   (pGVar3 = (pSVar2->vector[index]->fields).MemberUI, pGVar3 != (GameObject *)0x0))
                {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,shouldBeActive,(MethodInfo *)0x0);
                  if (shouldBeActive == 0) {
                    return;
                  }
                  pLVar1 = (this->fields).scoreBoardPlayerData;
                  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
                    if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                    pSVar2 = (pLVar1->fields)._items;
                    if (pSVar2 != (ScoreBoardBase_ScoreData__Array *)0x0) {
                      if ((uint)pSVar2->max_length <= (uint)index) goto code_?;
                      if ((pSVar2->vector[index] != (ScoreBoardBase_ScoreData *)0x0) &&
                         (pTVar5 = (pSVar2->vector[index]->fields).PlacementText,
                         pTVar5 != (Text *)0x0)) {
                        (*(pTVar5->klass->vtable).set_text.methodPtr)
                                  (pTVar5,::StringLiteral__,(pTVar5->klass->vtable).set_text.method)
                        ;
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPlacementTextForIndex(Int32) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetPlacementTextForIndex
               (ScoreBoardBase *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar3 = (pLVar1->fields)._items;
    if (pSVar3 != (ScoreBoardBase_ScoreData__Array *)0x0) {
      if ((uint)pSVar3->max_length <= (uint)index) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pSVar3->vector[index] != (ScoreBoardBase_ScoreData *)0x0) {
        pTVar4 = (pSVar3->vector[index]->fields).PlacementText;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_5[0]._pointer._value = (void *)0x0;
        aRStack_5[0]._length = 0;
        aRStack_5[0]._12_4_ = 0;
        pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                           (index + 1,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)(pTVar4,pSVar6);
          pLVar1 = (this->fields).scoreBoardPlayerData;
          if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
            pSVar3 = (pLVar1->fields)._items;
            if (pSVar3 != (ScoreBoardBase_ScoreData__Array *)0x0) {
              if ((uint)pSVar3->max_length <= (uint)index) goto code_?;
              if (pSVar3->vector[index] != (ScoreBoardBase_ScoreData *)0x0) {
                pTVar4 = (pSVar3->vector[index]->fields).MemberPlacementText;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pTVar4 != (Text *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((Object_1__Fields)(pTVar4->fields)._._._._._._ != (Object_1__Fields)0x0) {
                    pLVar1 = (this->fields).scoreBoardPlayerData;
                    if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
                      if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                      pSVar3 = (pLVar1->fields)._items;
                      if (pSVar3 != (ScoreBoardBase_ScoreData__Array *)0x0) {
                        if ((uint)pSVar3->max_length <= (uint)index) goto code_?;
                        if (pSVar3->vector[index] != (ScoreBoardBase_ScoreData *)0x0) {
                          pTVar4 = (pSVar3->vector[index]->fields).MemberPlacementText;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__System__Number);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               ->klass->field_0x135 & 1) == 0) {
                            FUN_?();
                          }
                          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          aRStack_5[0]._pointer._value = (void *)0x0;
                          aRStack_5[0]._length = 0;
                          aRStack_5[0]._12_4_ = 0;
                          pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                                             (index + 1,aRStack_5,(IFormatProvider *)0x0,
                                              (MethodInfo *)0x0);
                          if (pTVar4 != (Text *)0x0) {
                            (*(pTVar4->klass->vtable).set_text.methodPtr)
                                      (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method);
                            return;
                          }
                        }
                      }
                    }
                    goto code_?;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SortNewScore(String, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SortNewScore
               (ScoreBoardBase *this,String *playerName,int32_t id,int32_t scoreCount,
               bool activateMemberUI,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Insert_int__ScoreBoardBase__ScoreData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ScoreBoardBase_HandleAlreadyOnScoreBoard(this,id,scoreCount,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    (pSVar5->vector[(longlong)iVar3 + -1]->fields).Score = scoreCount;
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
    if ((pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0) ||
       (pTVar6 = (pSVar5->vector[(longlong)iVar3 + -1]->fields).NameText, pTVar6 == (Text *)0x0))
    goto code_?;
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,playerName,(pTVar6->klass->vtable).set_text.method);
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
    if (pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    pIVar7 = (pSVar5->vector[(longlong)iVar3 + -1]->fields).Background;
    puVar8 = (undefined4 *)
              (*(this->klass->vtable).GetBackgroundColor.methodPtr)
                        (&uStack_9,this,id,(this->klass->vtable).GetBackgroundColor.method);
    if (pIVar7 == (Image *)0x0) goto code_?;
    uStack_9 = *puVar8;
    uStack_10 = puVar8[1];
    uStack_11 = puVar8[2];
    uStack_12 = puVar8[3];
    (*(pIVar7->klass->vtable).set_color.methodPtr)
              (pIVar7,&uStack_9,(pIVar7->klass->vtable).set_color.method);
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
    if (pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    (pSVar5->vector[(longlong)iVar3 + -1]->fields).Id = id;
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
    if (pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    pTVar6 = (pSVar5->vector[(longlong)iVar3 + -1]->fields).ScoreText;
    uVar13 = (*(this->klass->vtable).ScoreIntoString.methodPtr)
                       (this,scoreCount,(this->klass->vtable).ScoreIntoString.method);
    if (pTVar6 == (Text *)0x0) goto code_?;
    (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,uVar13);
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    iVar3 = (pLVar2->fields)._size;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
    pSVar5 = (pLVar2->fields)._items;
    if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
    if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
    if (pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0)
    goto code_?;
    (pSVar5->vector[(longlong)iVar3 + -1]->fields).ShouldShowMemberUI = activateMemberUI;
    if (id < 0) {
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      iVar3 = (pLVar2->fields)._size;
      if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) goto code_?;
      pSVar5 = (pLVar2->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) goto code_?;
      if ((uint)pSVar5->max_length <= iVar3 - 1U) goto code_?;
      if ((pSVar5->vector[(longlong)iVar3 + -1] == (ScoreBoardBase_ScoreData *)0x0) ||
         (pTVar6 = (pSVar5->vector[(longlong)iVar3 + -1]->fields).ScoreText, pTVar6 == (Text *)0x0)
         ) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,::StringLiteral__);
    }
  }
  this_00 = (List_1_ScoreBoardBase_ScoreData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__List__);
  pLVar2 = (this->fields).scoreBoardPlayerData;
  index_00 = 0;
  iVar3 = 0;
  if (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (iVar3 < (pLVar2->fields)._size) {
      index = 0;
      if (this_00 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      for (; pLVar2 = (this->fields).scoreBoardPlayerData, index < (this_00->fields)._size;
          index = index + 1) {
        if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
           (lVar14 = FUN_?(pLVar2,iVar3), lVar14 == 0)) goto code_?;
        uVar15 = *(undefined4 *)(lVar14 + 0x2c);
        lVar14 = FUN_?(this_00,index);
        if (lVar14 == 0) goto code_?;
        pLVar2 = (this->fields).scoreBoardPlayerData;
        uVar16 = *(undefined4 *)(lVar14 + 0x2c);
        if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
           (lVar14 = FUN_?(pLVar2,iVar3), lVar14 == 0)) goto code_?;
        uVar17 = *(undefined4 *)(lVar14 + 0x28);
        lVar14 = FUN_?(this_00,index);
        if (lVar14 == 0) goto code_?;
        cVar18 = FUN_?(7,this,uVar15,uVar16,uVar17,*(undefined4 *)(lVar14 + 0x28));
        if (cVar18 != '\0') {
          pLVar2 = (this->fields).scoreBoardPlayerData;
          if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
          pOVar19 = (Object *)FUN_?(pLVar2,iVar3);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Insert
                    ((List_1_System_Object_ *)this_00,index,pOVar19,
                     MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Insert_int__ScoreBoardBase__ScoreData_
                    );
          goto code_?;
        }
      }
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      pOVar19 = (Object *)FUN_?(pLVar2,iVar3);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,pOVar19,
                 MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
                );
code_?:
      pLVar2 = (this->fields).scoreBoardPlayerData;
      iVar3 = iVar3 + 1;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    bVar20 = iRam_? != 0;
    (this->fields).scoreBoardPlayerData = this_00;
    if (bVar20) {
      uVar21 = (uint)((ulonglong)&(this->fields).scoreBoardPlayerData >> 0xc);
      puVar22 = (ulonglong *)((ulonglong)((uVar21 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar23 = *puVar22;
        LOCK();
        uVar24 = *puVar22;
        if (uVar23 == uVar24) {
          *puVar22 = uVar23 | 1L << (uVar21 & 0x3f);
        }
        UNLOCK();
      } while (uVar23 != uVar24);
    }
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    lVar14 = 0x20;
    while( true ) {
      if ((pLVar2->fields)._size <= (int)index_00) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(this->klass->vtable).__unknown_1.methodPtr)
                  (this,(this->klass->vtable).__unknown_1.method);
        return;
      }
      ScoreBoardBase_SetPlacementTextForIndex(this,index_00,(MethodInfo *)0x0);
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= index_00) goto code_?;
      pSVar5 = (pLVar2->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= index_00) goto code_?;
      lVar25 = *(longlong *)((longlong)pSVar5->vector + lVar14 + -0x20);
      if (lVar25 == 0) break;
      ScoreBoardBase_SetActiveMemberUI(this,index_00,*(bool *)(lVar25 + 0x48),(MethodInfo *)0x0);
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= index_00) goto code_?;
      pSVar5 = (pLVar2->fields)._items;
      if (pSVar5 == (ScoreBoardBase_ScoreData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= index_00) goto code_?;
      lVar25 = *(longlong *)((longlong)pSVar5->vector + lVar14 + -0x20);
      if ((lVar25 == 0) || (pOVar19 = *(Object **)(lVar25 + 0x30), pOVar19 == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar26 = pOVar19[1].klass;
      if (pOVar26 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar26);
      pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (gcHandlePtr,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      if (pOVar19 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar26 = pOVar19[1].klass;
      if (pOVar26 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar26);
      pLVar2 = (this->fields).scoreBoardPlayerData;
      index_00 = index_00 + 1;
      lVar14 = lVar14 + 8;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

