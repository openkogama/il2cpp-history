
/* CubeModelingTransitionTable() */

void Assembly-CSharp.dll::CubeModelingTransitionTable::CubeModelingTransitionTable__ctor
               (CubeModelingTransitionTable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ColorPicker);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&TypeInfo__CubeModelingEvent);
    func_?(&TypeInfo__DeleteCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                   );
    func_?(&TypeInfo__EditCubes);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                   );
    func_?(&TypeInfo__PaintCubes);
    in_stack_6 = &TypeInfo__SprayCubes;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCVar7 = this;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDStack_8 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
  this = (CubeModelingTransitionTable *)0x0;
  pOStack_9 = (Object *)func_?(TypeInfo__CubeModelingEvent,&this);
  method_01 = TypeInfo__EditCubes;
  value = (MethodInfo *)func_?();
  value->token = 2;
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (pDStack_8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDStack_8,pOStack_9,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
    uStack_11 = 1;
    pDStack_8 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    pOStack_9 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOStack_9,ExceptionArgument__Enum_obj,method_00);
    if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar10,(Object *)pDStack_8,pOStack_9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
      uStack_12 = 2;
      pDStack_8 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pOStack_9 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOStack_9,ExceptionArgument__Enum_obj,method_00);
      if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar10,(Object *)pDStack_8,pOStack_9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
        uStack_13 = 3;
        pDStack_8 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pOStack_9 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOStack_9,ExceptionArgument__Enum_obj,method_00);
        if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar10,(Object *)pDStack_8,pOStack_9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
          pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x4;
          pDStack_8 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          pOStack_9 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOStack_9,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
          if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar10,(Object *)pDStack_8,pOStack_9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                      );
            this_00 = (pCVar7->fields)._.table;
            if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
              pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       UInt32,System::Object]::
                       Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                   *)&stack0xffffff9c,
                                  (Dictionary_2_System_UInt32_System_Object_ *)this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                                 );
              DStack_16._dictionary =
                   (Dictionary_2_System_Object_System_Object_ *)pDVar15->_dictionary;
              DStack_16._version = pDVar15->_version;
              DStack_16._index = pDVar15->_index;
              DStack_16._current.key = (Object *)(pDVar15->_current).key;
              DStack_16._16_8_ = *(undefined8 *)&(pDVar15->_current).value;
              uStack_17 = 0;
              uStack_1 = 1;
              pDStack_14 = &DStack_16;
              while( true ) {
                bVar18 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_16,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                  );
                if (bVar18 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&DStack_16,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                             ,in_stack_19);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
                pOVar20 = DStack_16._current.value;
                if (DStack_16._current.value == (Object *)0x0) break;
                bVar21 = (TypeInfo__CubeModelTool->_1).naturalAligment;
                if (((((DStack_16._current.value)->klass->_1).naturalAligment < bVar21) ||
                    (((DStack_16._current.value)->klass->_1).typeHierarchy[bVar21 - 1] !=
                     (Il2CppClass *)TypeInfo__CubeModelTool)) ||
                   (DStack_16._current.value == (Object *)0x0)) goto code_?;
                if (DStack_16._current.key == (Object *)0x0) break;
                if (((DStack_16._current.key)->klass->_0).element_class !=
                    (TypeInfo__CubeModelingEvent->_0).element_class) goto code_?;
                puVar22 = (undefined4 *)func_?();
                this = (CubeModelingTransitionTable *)*puVar22;
                bVar21 = (TypeInfo__CubeModelTool->_1).naturalAligment;
                if ((((pOVar20->klass->_1).naturalAligment < bVar21) ||
                    ((pOVar20->klass->_1).typeHierarchy[bVar21 - 1] !=
                     (Il2CppClass *)TypeInfo__CubeModelTool)) || (pOVar20 == (Object *)0x0))
                goto code_?;
                pOVar20[1].monitor = (MonitorData *)this;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}

