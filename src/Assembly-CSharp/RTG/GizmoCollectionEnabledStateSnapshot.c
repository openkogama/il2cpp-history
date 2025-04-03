
/* Void Apply() */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot_Apply
               (GizmoCollectionEnabledStateSnapshot *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<RTG::Gizmo,_bool>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<RTG::Gizmo,_bool>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields)._gizmoToState;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Boolean_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Boolean]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Boolean__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((Gizmo *)DStack_9._current.key == (Gizmo *)0x0) goto code_?;
      Gizmo::Gizmo_SetEnabled
                ((Gizmo *)DStack_9._current.key,DStack_9._current.value,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields)._gizmoToState;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Snapshot(IEnumerable`1[RTG.Gizmo]) */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot_Snapshot
               (GizmoCollectionEnabledStateSnapshot *this,IEnumerable_1_RTG_Gizmo_ *gizmos,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Add_RTG__Gizmo__bool_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields)._gizmoToState;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
    if (gizmos != (IEnumerable_1_RTG_Gizmo_ *)0x0) {
      piVar4 = (int *)func_?(0);
      uStack_1 = 1;
      while( true ) {
        if (piVar4 == (int *)0x0) break;
        cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar4);
        if (cVar5 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar4 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piVar4);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (piVar4 == (int *)0x0) break;
        uVar6 = 0;
        uVar7 = *(ushort *)(*piVar4 + 0xb6);
        if (uVar7 != 0) {
          do {
            if (*(IEnumerator_1_RTG_Gizmo___Class **)(*(int *)(*piVar4 + 0x58) + (uint)uVar6 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>) {
              puVar8 = (undefined4 *)
                       (*piVar4 +
                       (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar6 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        puVar8 = (undefined4 *)
                 func_?(piVar4,
                                 TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>,0);
code_?:
        key = (Object *)(*(code *)*puVar8)(piVar4,puVar8[1]);
        this_01 = (this->fields)._gizmoToState;
        if ((key == (Object *)0x0) || (this_01 == (Dictionary_2_RTG_Gizmo_System_Boolean_ *)0x0))
        break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
        Dictionary_2_System_Object_System_Boolean__Add
                  ((Dictionary_2_System_Object_System_Boolean_ *)this_01,key,
                   *(bool *)&key[10].monitor,
                   MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Add_RTG__Gizmo__bool_
                  );
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GizmoCollectionEnabledStateSnapshot() */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot__ctor
               (GizmoCollectionEnabledStateSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(TypeInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Dictionary__);
  method_00 = (MethodInfo *)&this->fields;
  ((GizmoCollectionEnabledStateSnapshot__Fields *)method_00)->_gizmoToState =
       (Dictionary_2_RTG_Gizmo_System_Boolean_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

