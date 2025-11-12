
/* CubeModelingTransitionTable() */

void Assembly-CSharp.dll::CubeModelingTransitionTable::CubeModelingTransitionTable__ctor
               (CubeModelingTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ColorPicker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelingEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeleteCubes);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditCubes);
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
    FUN_?(&TypeInfo__PaintCubes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SprayCubes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pCVar1 = TypeInfo__CubeModelingEvent;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
  pOVar3 = (Object *)0x0;
  uStackX_8 = 0;
  iVar4._0_2_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.attrs;
  iVar4._2_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.type;
  iVar4._3_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.field_0xb;
  if (iVar4 < 0) {
    if (((TypeInfo__CubeModelingEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__CubeModelingEvent->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__CubeModelingEvent);
      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)(int)(pCVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  pOVar10 = (Object *)FUN_?(TypeInfo__EditCubes);
  *(undefined4 *)((longlong)&pOVar10[2].monitor + 4) = 2;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                ->klass->rgctx_data[0x22].method;
    uVar11 = CONCAT71((int7)((ulonglong)method_00 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar2,pOVar3,pOVar10,(InsertionBehavior__Enum)uVar11,method_00);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
    uStackX_8 = 1;
    pOVar3 = (Object *)FUN_?(TypeInfo__CubeModelingEvent,&uStackX_8);
    pOVar10 = (Object *)FUN_?(TypeInfo__DeleteCubes);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar2,pOVar3,pOVar10,(InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 ->klass->rgctx_data[0x22].method);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
      uStackX_8 = 2;
      pOVar3 = (Object *)FUN_?(TypeInfo__CubeModelingEvent,&uStackX_8);
      pOVar10 = (Object *)FUN_?(TypeInfo__PaintCubes);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar2,pOVar3,pOVar10,(InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   ->klass->rgctx_data[0x22].method);
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
        uStackX_8 = 3;
        pOVar3 = (Object *)FUN_?(TypeInfo__CubeModelingEvent,&uStackX_8);
        pOVar10 = (Object *)FUN_?(TypeInfo__SprayCubes);
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar2,pOVar3,pOVar10,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                     ->klass->rgctx_data[0x22].method);
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._.table;
          uStackX_8 = 4;
          pOVar3 = (Object *)FUN_?(TypeInfo__CubeModelingEvent,&uStackX_8);
          pOVar10 = (Object *)FUN_?(TypeInfo__ColorPicker);
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar2,pOVar3,pOVar10,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                       ->klass->rgctx_data[0x22].method);
            SStack_12.table = (this->fields)._.table;
            if ((Dictionary_2_System_Object_System_Object_ *)SStack_12.table !=
                (Dictionary_2_System_Object_System_Object_ *)0x0) {
              uStack_13 = 0;
              uStack_14 = 0;
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)&SStack_12 >> 0xc);
                lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              uStack_15 = (ulonglong)
                          (uint)(((Dictionary_2_System_Object_System_Object_ *)SStack_12.table)->
                                fields)._version;
              uStack_16 = 2;
              DStack_17._version = (undefined4)uStack_15;
              DStack_17._index = uStack_15._4_4_;
              DStack_17._current.key = (Object *)0x0;
              DStack_17._current.value = (Object *)0x0;
              DStack_17._getEnumeratorRetType = 2;
              DStack_17._36_4_ = 0;
              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)SStack_12.table;
              DStack_17._dictionary = (Dictionary_2_System_Object_System_Object_ *)SStack_12.table;
              while( true ) {
                bVar18 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_17,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                  );
                if (bVar18 == 0) {
                  return;
                }
                pOVar3 = DStack_17._current.value;
                if (DStack_17._current.value == (Object *)0x0) break;
                bVar19 = (TypeInfo__CubeModelTool->_1).naturalAligment;
                if (((((DStack_17._current.value)->klass->_1).naturalAligment < bVar19) ||
                    (((DStack_17._current.value)->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
                     (Il2CppClass *)TypeInfo__CubeModelTool)) ||
                   (DStack_17._current.value == (Object *)0x0)) goto code_?;
                if ((Dictionary_2_System_Object_System_Object_ *)DStack_17._current.key ==
                    (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
                pDVar2 = (Dictionary_2_System_Object_System_Object_ *)DStack_17._current.key;
                if ((((Dictionary_2_System_Object_IState___Class *)(DStack_17._current.key)->klass)
                    ->_0).element_class != (TypeInfo__CubeModelingEvent->_0).element_class)
                goto code_?;
                *(undefined4 *)((longlong)&DStack_17._current.value[1].klass + 4) =
                     *(undefined4 *)
                      &((Dictionary_2_System_Object_System_Object___Fields *)
                       ((longlong)DStack_17._current.key + 0x10))->_buckets;
              }
              FUN_?();
code_?:
              FUN_?(pDVar2);
code_?:
              FUN_?();
code_?:
              FUN_?(pOVar3);
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

