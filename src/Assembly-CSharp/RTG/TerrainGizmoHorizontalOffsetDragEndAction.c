
/* Void Execute() */

void Assembly-CSharp.dll::RTG::TerrainGizmoHorizontalOffsetDragEndAction::
     TerrainGizmoHorizontalOffsetDragEndAction_Execute
               (TerrainGizmoHorizontalOffsetDragEndAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoHorizontalOffsetDragEndAction::
     TerrainGizmoHorizontalOffsetDragEndAction_Redo
               (TerrainGizmoHorizontalOffsetDragEndAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pTVar6 = (this->fields)._terrainGizmo;
  if (((pTVar6 != (TerrainGizmo *)0x0) &&
      (pGVar7 = (pTVar6->fields)._._gizmo, pGVar7 != (Gizmo *)0x0)) &&
     (this_00 = (pGVar7->fields)._transform, this_00 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_set_Position3D
              (this_00,(this->fields)._postChangeGizmoPos,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._postChangeSnapshots;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                         );
      this_02 = pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (this_02 == (RegexCharClass_SingleRange)0x0) break;
        LocalTransformSnapshot::LocalTransformSnapshot_Apply
                  ((LocalTransformSnapshot *)this_02,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoHorizontalOffsetDragEndAction::
     TerrainGizmoHorizontalOffsetDragEndAction_Undo
               (TerrainGizmoHorizontalOffsetDragEndAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pTVar6 = (this->fields)._terrainGizmo;
  if (((pTVar6 != (TerrainGizmo *)0x0) &&
      (pGVar7 = (pTVar6->fields)._._gizmo, pGVar7 != (Gizmo *)0x0)) &&
     (this_00 = (pGVar7->fields)._transform, this_00 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_set_Position3D
              (this_00,(this->fields)._preChangeGizmoPos,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._preChangeSnapshots;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_9,this_01,
                          MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                         );
      this_02 = pLVar8->_current;
      LStack_9._version = 0;
      uStack_1 = 1;
      LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (this_02 == (RegexCharClass_SingleRange)0x0) break;
        LocalTransformSnapshot::LocalTransformSnapshot_Apply
                  ((LocalTransformSnapshot *)this_02,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* TerrainGizmoHorizontalOffsetDragEndAction(TerrainGizmo, Vector3,
   List`1[RTG.LocalTransformSnapshot], List`1[RTG.LocalTransformSnapshot]) */

void Assembly-CSharp.dll::RTG::TerrainGizmoHorizontalOffsetDragEndAction::
     TerrainGizmoHorizontalOffsetDragEndAction__ctor
               (TerrainGizmoHorizontalOffsetDragEndAction *this,TerrainGizmo *terrainGizmo,
               Vector3 preChangeGizmoPos,List_1_RTG_LocalTransformSnapshot_ *preChangeSnapshots,
               List_1_RTG_LocalTransformSnapshot_ *postChangeSnapshots,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
  pTVar2 = &this->fields;
  pTVar2->_preChangeSnapshots = pLVar1;
  func_?(pTVar2,pLVar1);
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
  ppLVar3 = &(this->fields)._postChangeSnapshots;
  *ppLVar3 = pLVar1;
  method_00 = (MethodInfo *)ppLVar3;
  func_?(ppLVar3,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)preChangeSnapshots,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
            );
  pTVar2->_preChangeSnapshots = pLVar1;
  func_?();
  pLVar4 = TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>;
  this_00 = (List_1_RTG_LocalTransformSnapshot_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)postChangeSnapshots,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
            );
  *ppLVar3 = this_00;
  func_?();
  *(ulonglong *)&(this_00->fields)._version = CONCAT44(pLVar1,pTVar2);
  this_00[1].klass = (List_1_RTG_LocalTransformSnapshot___Class *)preChangeGizmoPos.z;
  if (((pLVar4 != (List_1_RTG_LocalTransformSnapshot___Class *)0x0) &&
      (pcVar5 = (pLVar4->_0).name, pcVar5 != (char *)0x0)) &&
     (iVar6 = *(int *)(pcVar5 + 0xf8), iVar6 != 0)) {
    iVar7 = *(int32_t *)(iVar6 + 0x18);
    *(undefined8 *)&this_00[1].monitor = *(undefined8 *)(iVar6 + 0x10);
    this_00[1].fields._size = iVar7;
    piStack8 = &this_00[1].fields._version;
    pLStack9 = pLVar4;
    *piStack8 = (int32_t)pLVar4;
    func_?();
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

