
/* CEEditorStateTransitionTableUUI(Vector3) */

void Assembly-CSharp.dll::CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
               (CEEditorStateTransitionTableUUI *this,Vector3 *centerPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CEAvatarAccessoryUUI);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CEEditBodyUUI);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CEEnterCubeTutorial);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CELeaveCubeTutorial);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__CERoamUUI);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 );
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__ESCubeEdit);
    LOCK();
    UNLOCK();
    puStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackY_50 = &UNK_?;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
  uStackX_8 = 0x34;
  puStackY_50 = &UNK_?;
  pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
  puStackY_50 = &UNK_?;
  pEVar3 = (ESStateBase *)FUN_?(TypeInfo__CERoamUUI);
  *(undefined4 *)&pEVar3[1].klass = 0xffffffff;
  puStackY_50 = &UNK_?;
  ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
  fVar4 = centerPos->z;
  pEVar3[1].monitor = *(MonitorData **)centerPos;
  pEVar3[1].fields.stateType = (int32_t)fVar4;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    puStackY_50 = &UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar1,pOVar2,(Object *)pEVar3,(InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
    uStackX_8 = 0x35;
    puStackY_50 = &UNK_?;
    pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
    puStackY_50 = &UNK_?;
    pEVar3 = (ESStateBase *)FUN_?(TypeInfo__CEEditBodyUUI);
    pEVar3[1].fields.stateType = -1;
    puStackY_50 = &UNK_?;
    ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
      puStackY_50 = &UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,pOVar2,(Object *)pEVar3,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
      uStackX_8 = 0x36;
      puStackY_50 = &UNK_?;
      pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
      puStackY_50 = &UNK_?;
      pEVar3 = (ESStateBase *)FUN_?(TypeInfo__CEAvatarAccessoryUUI);
      puStackY_50 = &UNK_?;
      ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
        puStackY_50 = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar1,pOVar2,(Object *)pEVar3,(InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
        uStackX_8 = 0x37;
        puStackY_50 = &UNK_?;
        pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
        puStackY_50 = &UNK_?;
        pEVar3 = (ESStateBase *)FUN_?(TypeInfo__CEEnterCubeTutorial);
        *(undefined4 *)&pEVar3[1].klass = 0x3f800000;
        puStackY_50 = &UNK_?;
        ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
          puStackY_50 = &UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar1,pOVar2,(Object *)pEVar3,(InsertionBehavior__Enum)uVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
          uStackX_8 = 0x38;
          puStackY_50 = &UNK_?;
          pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
          puStackY_50 = &UNK_?;
          this_00 = (CEEditCubeTutorial *)FUN_?(TypeInfo__CEEditCubeTutorial);
          puStackY_50 = &UNK_?;
          CEEditCubeTutorial::CEEditCubeTutorial__ctor(this_00,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
            puStackY_50 = &UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar1,pOVar2,(Object *)this_00,(InsertionBehavior__Enum)uVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                       ->klass->rgctx_data[0x22].method);
            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
            uStackX_8 = 0x39;
            puStackY_50 = &UNK_?;
            pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
            puStackY_50 = &UNK_?;
            pEVar3 = (ESStateBase *)FUN_?(TypeInfo__CELeaveCubeTutorial);
            puStackY_50 = &UNK_?;
            ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              puStackY_50 = &UNK_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar1,pOVar2,(Object *)pEVar3,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                         ->klass->rgctx_data[0x22].method);
              pEVar6 = TypeInfo__EditorEvent;
              pOVar2 = (Object *)0x0;
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
              uStackX_8 = 0;
              iVar7._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
              iVar7._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
              iVar7._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
              if (iVar7 < 0) {
                if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
                   (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
                  puStackY_50 = &UNK_?;
                  pOVar2 = (Object *)FUN_?(TypeInfo__EditorEvent);
                  puStackY_50 = &UNK_?;
                  FUN_?(pOVar2 + 1,&uStackX_8,
                                (longlong)(int)(pEVar6->_1).instance_size + -0x10);
                  if (iRam_? != 0) {
                    uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
                    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                    do {
                      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                      LOCK();
                      bVar12 = uVar10 == *puVar11;
                      if (bVar12) {
                        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar12);
                  }
                }
              }
              else {
                pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
              }
              puStackY_50 = &UNK_?;
              pEVar3 = (ESStateBase *)FUN_?(TypeInfo__ESCubeEdit);
              pEVar3[1].fields.stateType = -1;
              puStackY_50 = &UNK_?;
              ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            ->klass->rgctx_data[0x22].method;
                puStackY_50 = &UNK_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (pDVar1,pOVar2,(Object *)pEVar3,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),
                           method_00);
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                                ,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__ESStateBase);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__EditorEvent);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                SVar13.table = (this->fields)._._.table;
                if (SVar13.table == (Dictionary_2_System_Object_IState_ *)0x0) {
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                if (iRam_? != 0) {
                  uVar8 = (uint)((ulonglong)&EStackY_60 >> 0xc);
                  puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar10 = *puVar11;
                    LOCK();
                    uVar9 = *puVar11;
                    if (uVar10 == uVar9) {
                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar10 != uVar9);
                }
                uStackY_58 = (ulonglong)(uint)((SVar13.table)->fields)._version;
                pOStack_15 = (Object *)0x0;
                uStackY_30 = uStackY_58;
                uStackY_40 = 2;
                uStackY_48 = 0;
                puStackY_50 = (undefined *)0x0;
                EStackY_60._.table =
                     (StateTransitionTable__Fields)(StateTransitionTable__Fields)SVar13.table;
                pDStackY_38 = (Dictionary_2_System_Object_System_Object_ *)SVar13.table;
                bVar16 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                    *)&pDStackY_38,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                  );
                if (bVar16 == 0) {
                  return;
                }
                FUN_?();
                FUN_?(SVar13.table);
                FUN_?();
                FUN_?(pOStack_15);
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
          }
        }
      }
    }
  }
  puStackY_50 = &UNK_?;
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

