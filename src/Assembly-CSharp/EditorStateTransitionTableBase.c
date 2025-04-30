
/* Void SetStateTypes() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::
     EditorStateTransitionTableBase_SetStateTypes
               (EditorStateTransitionTableBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  method_00 = unaff_EDI;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                   );
    func_?(&TypeInfo__ESStateBase);
    func_?(&TypeInfo__EditorEvent);
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields)._.table;
  if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_EDI = (MethodInfo *)DStack_9._current.value;
      if ((MethodInfo *)DStack_9._current.value == (MethodInfo *)0x0) break;
      cVar12 = (code)(TypeInfo__ESStateBase->_1).naturalAligment;
      pEVar13 = TypeInfo__ESStateBase;
      if ((((byte)*(code *)((int)(DStack_9._current.value)->klass + 0xb8) < (byte)cVar12) ||
          (*(ESStateBase__Class **)
            (*(int *)((int)(DStack_9._current.value)->klass + 100) + -4 + (uint)(byte)cVar12 * 4) !=
           TypeInfo__ESStateBase)) || ((MethodInfo *)DStack_9._current.value == (MethodInfo *)0x0))
      goto code_?;
      if (DStack_9._current.key == (Object *)0x0) break;
      pOVar14 = DStack_9._current.key;
      pEVar15 = TypeInfo__EditorEvent;
      if (((DStack_9._current.key)->klass->_0).element_class !=
          (TypeInfo__EditorEvent->_0).element_class) goto code_?;
      puVar16 = (undefined4 *)func_?(DStack_9._current.key);
      cVar12 = (code)(TypeInfo__ESStateBase->_1).naturalAligment;
      pEVar13 = TypeInfo__ESStateBase;
      if ((((byte)*(code *)((int)((Object *)unaff_EDI)->klass + 0xb8) < (byte)cVar12) ||
          (*(ESStateBase__Class **)
            (*(int *)((int)((Object *)unaff_EDI)->klass + 100) + -4 + (uint)(byte)cVar12 * 4) !=
           TypeInfo__ESStateBase)) || (unaff_EDI == (MethodInfo *)0x0)) goto code_?;
      *(InvokerMethod *)((int)unaff_EDI + 8) = (InvokerMethod)*puVar16;
    }
  }
  func_?();
  pEVar13 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pEVar13);
  pOVar14 = extraout_ECX;
  pEVar15 = extraout_EDX_00;
code_?:
  func_?(pOVar14,pEVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* EditorStateTransitionTableBase() */

void Assembly-CSharp.dll::EditorStateTransitionTableBase::EditorStateTransitionTableBase__ctor
               (EditorStateTransitionTableBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (((EditorStateTransitionTableBase__Fields *)method_00)->_).table =
       (Dictionary_2_System_Object_IState_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

