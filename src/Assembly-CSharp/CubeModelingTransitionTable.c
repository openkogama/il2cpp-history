
/* CubeModelingTransitionTable() */

void Assembly-CSharp.dll::CubeModelingTransitionTable::CubeModelingTransitionTable__ctor
               (CubeModelingTransitionTable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
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
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
    ;
    func_?();
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
    func_?(&TypeInfo__SprayCubes);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCVar7 = this;
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = (Object *)0x0;
  DStack_8._current.value = (Object *)0x0;
  DStack_8._getEnumeratorRetType = 0;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
  this = (CubeModelingTransitionTable *)0x0;
  pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(TypeInfo__CubeModelingEvent,&this);
  pOVar11 = (Object *)func_?(TypeInfo__EditCubes);
  if (pOVar11 != (Object *)0x0) {
    pOVar11[4].monitor = (MonitorData *)0x2;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar11,ExceptionArgument__Enum_obj,unaff_EBX);
    if (pDStack_9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDStack_9,(Object *)pDStack_10,pOVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
      uStack_12 = 1;
      pCVar13 = TypeInfo__CubeModelingEvent;
      pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pOVar11 = (Object *)func_?();
      if (pOVar11 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar11,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar13);
        if (pDStack_10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDStack_10,(Object *)pDStack_9,pOVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
          uStack_14 = 2;
          pCVar13 = TypeInfo__CubeModelingEvent;
          pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          pOVar11 = (Object *)func_?();
          if (pOVar11 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar11,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar13);
            if (pDStack_10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDStack_10,(Object *)pDStack_9,pOVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
              pDStack_15 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x3;
              pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)func_?();
              pOVar11 = (Object *)func_?();
              if (pOVar11 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar11,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
                if (pDStack_10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDStack_10,(Object *)pDStack_9,pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            );
                  this_00 = (Dictionary_2_System_Object_System_Object_ *)(pCVar7->fields)._.table;
                  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__GetEnumerator
                                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                         *)&stack0xffffffa0,this_00,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                                       );
                    DStack_8._dictionary = pDVar16->_dictionary;
                    DStack_8._version = pDVar16->_version;
                    DStack_8._index = pDVar16->_index;
                    DStack_8._current.key = (pDVar16->_current).key;
                    DStack_8._16_8_ = *(undefined8 *)&(pDVar16->_current).value;
                    uStack_17 = 0;
                    uStack_1 = 1;
                    pDStack_15 = &DStack_8;
                    while( true ) {
                      bVar18 = mscorlib.dll::System::Collections::Generic::
                              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                        (&DStack_8,
                                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                        );
                      if (bVar18 == 0) {
                        uStack_1 = 0xffffffff;
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                  ((Object *)&DStack_8,
                                   (ExceptionArgument__Enum)
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                                   ,in_stack_19);
                        *unaff_FS_OFFSET = uStack_3;
                        return;
                      }
                      pOVar11 = DStack_8._current.value;
                      if (DStack_8._current.value == (Object *)0x0) break;
                      if (((((DStack_8._current.value)->klass->_1).typeHierarchyDepth <
                            (TypeInfo__CubeModelTool->_1).typeHierarchyDepth) ||
                          (((DStack_8._current.value)->klass->_1).typeHierarchy
                           [(TypeInfo__CubeModelTool->_1).typeHierarchyDepth - 1] !=
                           (Il2CppClass *)TypeInfo__CubeModelTool)) ||
                         (DStack_8._current.value == (Object *)0x0)) goto code_?;
                      if (DStack_8._current.key == (Object *)0x0) break;
                      if (((DStack_8._current.key)->klass->_0).element_class !=
                          (TypeInfo__CubeModelingEvent->_0).element_class) goto code_?;
                      puVar20 = (undefined4 *)func_?();
                      this = (CubeModelingTransitionTable *)*puVar20;
                      if (((pOVar11->klass->_1).typeHierarchyDepth <
                           (TypeInfo__CubeModelTool->_1).typeHierarchyDepth) ||
                         ((pOVar11->klass->_1).typeHierarchy
                          [(TypeInfo__CubeModelTool->_1).typeHierarchyDepth - 1] !=
                          (Il2CppClass *)TypeInfo__CubeModelTool)) goto code_?;
                      pOVar11[1].monitor = (MonitorData *)this;
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
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

