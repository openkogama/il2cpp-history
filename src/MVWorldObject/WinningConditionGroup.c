
/* Void AddWinnerCondition(WinningCondition) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_AddWinnerCondition
               (WinningConditionGroup *this,WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((winnerCondition != (WinningCondition *)0x0) &&
     (this_00 = (this->fields).winnerConditions,
     this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(winnerCondition->fields).id,
               (Object *)winnerCondition,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
               ->klass->rgctx_data[0x22].method);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppEVar1 = &(winnerCondition->fields).OnWinningConditionChanged;
    a = (winnerCondition->fields).OnWinningConditionChanged;
    do {
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
      if (pDVar2 == (Delegate *)0x0) {
        pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
      }
      else {
        pEVar4 = (EventHandler_1_EventArgs_ *)
                 FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
          FUN_?(pDVar2,pEVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      pEVar6 = *ppEVar1;
      bVar7 = a == pEVar6;
      if (bVar7) {
        *ppEVar1 = pEVar4;
        pEVar6 = a;
      }
      UNLOCK();
      pEVar4 = a;
      if (!bVar7) {
        pEVar4 = pEVar6;
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      bVar7 = pEVar4 != a;
      a = pEVar4;
    } while (bVar7);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveWinnerCondition(Int32) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_RemoveWinnerCondition
               (WinningConditionGroup *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).winnerConditions;
  if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                        );
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,(this->klass->vtable).__unknown.method,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      FUN_?(2,TypeInfo__IWinningCondition,pOVar2,this_00);
      pMVar3 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_;
      pDVar1 = (this->fields).winnerConditions;
      if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
        uVar4 = (ulonglong)(uint)id;
        if ((pDVar1->fields)._buckets != (Int32__Array *)0x0) {
          pIVar5 = (pDVar1->fields)._comparer;
          if (pIVar5 != (IEqualityComparer_1_System_Int32_ *)0x0) {
            pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                      ->klass->rgctx_data[1].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
              pvVar6 = (void *)FUN_?(pvVar6);
            }
            id = FUN_?(1,pvVar6,pIVar5,uVar4);
          }
          pIVar7 = (pDVar1->fields)._buckets;
          if (pIVar7 == (Int32__Array *)0x0) {
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar9 = (int)(id & 0x7fffffffU) % (int)pIVar7->max_length;
          if ((uint)pIVar7->max_length <= uVar9) {
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar10 = pIVar7->vector[(int)uVar9] - 1;
          uVar11 = 0xffffffff;
          while (uVar12 = uVar10, -1 < (int)uVar12) {
            pDVar13 = (pDVar1->fields)._entries;
            if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32_IWinningCondition___Array *)
                          0x0) goto code_?;
            if ((uint)pDVar13->max_length <= uVar12) goto code_?;
            if (pDVar13->vector[(int)uVar12].hashCode == (id & 0x7fffffffU)) {
              pIVar14 = pMVar3->klass->rgctx_data;
              if ((pDVar1->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
                pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                          Int32]::EqualityComparer_1_System_Int32__get_Default(pIVar14[3].method);
                if (pEVar15 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
                cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                                   (pEVar15,(ulonglong)(uint)pDVar13->vector[(int)uVar12].key,uVar4,
                                    (pEVar15->klass->vtable).__unknown.method);
              }
              else {
                pvVar6 = pIVar14[1].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
                  FUN_?(pvVar6);
                }
                cVar16 = FUN_?();
              }
              if (cVar16 != '\0') {
                if ((int)uVar11 < 0) {
                  pIVar7 = (pDVar1->fields)._buckets;
                  if (pIVar7 == (Int32__Array *)0x0) goto code_?;
                  if ((uint)pIVar7->max_length <= uVar9) goto code_?;
                  pIVar7->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
                }
                else {
                  pDVar17 = (pDVar1->fields)._entries;
                  if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_IWinningCondition___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar17->max_length <= uVar11) goto code_?;
                  pDVar17->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
                }
                pDVar13->vector[(int)uVar12].hashCode = -1;
                pDVar13->vector[(int)uVar12].next = (pDVar1->fields)._freeList;
                pDVar13->vector[(int)uVar12].value = (IWinningCondition *)0x0;
                piVar18 = &(pDVar1->fields)._freeCount;
                *piVar18 = *piVar18 + 1;
                piVar18 = &(pDVar1->fields)._version;
                *piVar18 = *piVar18 + 1;
                (pDVar1->fields)._freeList = uVar12;
                return;
              }
            }
            uVar11 = uVar12;
            uVar10 = pDVar13->vector[(int)uVar12].next;
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_Traverse
               (WinningConditionGroup *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IWinningCondition>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (callBack == (Func_2_IWinningCondition_Boolean_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar1 = uStack_2;
code_?:
    uStack_2 = uVar1;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  cVar5 = (*(callBack->fields)._._.invoke_impl)
                    ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
  if (cVar5 == '\0') {
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).winnerConditions;
    if ((this_00 ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                                      ),
                 pDVar6 ==
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) goto code_?;
    uStack_7 = (pDVar6->fields)._dictionary;
    puStack_8 = (undefined4 *)0x0;
    uStack_9 = 0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_7 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (uStack_7 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    iStack_13 = (uStack_7->fields)._version;
    uStack_9 = 0;
    uStack_7._4_4_ = (undefined4)((ulonglong)uStack_7 >> 0x20);
    uStack_14 = (undefined4)uStack_7;
    uStack_15 = uStack_7._4_4_;
    uStack_2 = 0;
    plStack_16 = (longlong *)0x0;
    uStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_8 = &uStack_14;
    do {
      lVar17 = CONCAT44(uStack_15,uStack_14);
      if (lVar17 == 0) goto code_?;
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_2) {
          return 0;
        }
        lVar18 = *(longlong *)(lVar17 + 0x18);
        lVar19 = (longlong)(int)uStack_2;
        uVar1 = uStack_2 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_2;
        uStack_2 = uVar1;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      plStack_16 = *(longlong **)(lVar18 + (lVar19 + 2) * 0x18);
      func_?();
      plVar21 = plStack_16;
      if (plStack_16 == (longlong *)0x0) goto code_?;
      lVar17 = *plStack_16;
      uVar22 = 0;
      if (*(ushort *)(lVar17 + 0x12e) != 0) {
        do {
          if (*(IWinningCondition__Class **)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar22 * 0x10)
              == TypeInfo__IWinningCondition) {
            puVar23 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar22 * 0x10) + 4) *
                       0x10 + 0x138 + lVar17);
            goto code_?;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < *(ushort *)(lVar17 + 0x12e));
      }
      puVar23 = (undefined8 *)FUN_?(plStack_16,TypeInfo__IWinningCondition,4);
code_?:
      cVar5 = (*(code *)*puVar23)(plVar21,callBack,puVar23[1]);
    } while (cVar5 == '\0');
  }
  return 1;
}


/* WinningConditionGroup(WinningCondition, Int32, GameStatCounterManager, Int32, Boolean,
   GameStatCounterType, WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup__ctor
               (WinningConditionGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t limit,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).winnerConditions = (Dictionary_2_System_Int32_IWinningCondition_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).winnerConditions >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar6 = iRam_?;
  (this->fields)._.gameCounterManager = gameCounterManager;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.gameCounterManager >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.id = id;
  (this->fields)._._Parent_k__BackingField = (IWinningCondition *)parent;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._Parent_k__BackingField >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar8 = (this->fields)._.gameCounterManager;
  (this->fields)._.limit = limit;
  (this->fields)._._IsBriefingNode_k__BackingField = isBriefingNode;
  (this->fields)._.gameStatCounterType = (undefined1)gameStatCounterType;
  (this->fields)._.winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
             ,(MethodInfo *)0x0);
  if (pGVar8 == (GameStatCounterManager *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar10 = &(pGVar8->fields).OnCounterTypeChanged;
  a = (pGVar8->fields).OnCounterTypeChanged;
  do {
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar12 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    if (pDVar11 == (Delegate *)0x0) {
      pEVar13 = (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0;
    }
    else {
      pEVar13 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
                FUN_?(pDVar11,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (pEVar13 == (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
        FUN_?(pDVar11,pEVar12);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    pEVar14 = *ppEVar10;
    bVar1 = a == pEVar14;
    if (bVar1) {
      *ppEVar10 = pEVar13;
      pEVar14 = a;
    }
    UNLOCK();
    pEVar13 = a;
    if (!bVar1) {
      pEVar13 = pEVar14;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)ppEVar10 >> 0xc);
      uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    bVar1 = pEVar13 != a;
    a = pEVar13;
  } while (bVar1);
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_get_Length
                  (WinningConditionGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).winnerConditions;
  if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

