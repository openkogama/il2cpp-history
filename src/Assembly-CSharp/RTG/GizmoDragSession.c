
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_AddTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                   );
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).__unknown_1.methodPtr);
  if (cVar1 == '\0') {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields)._targetTransforms;
    if (pLVar2 == (List_1_RTG_GizmoTransform_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar2,(Object *)transform,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                      );
    if (bVar4 == 0) {
      pLVar2 = (this->fields)._targetTransforms;
      if (pLVar2 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar2,(Object *)transform,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                );
    }
  }
  return;
}


/* Void ApplyDrag() */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_ApplyDrag
               (GizmoDragSession *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff40;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff40;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GizmoTransform::GizmoTransform_FilterParentsOnly
                      ((IEnumerable_1_RTG_GizmoTransform_ *)(this->fields)._targetTransforms,
                       (MethodInfo *)0x0);
  pLStack_9 = this_00;
  iVar10 = (*(code *)(this->klass->vtable).__unknown_1.method)
                    (this,(this->klass->vtable).__unknown_2.methodPtr);
  if (iVar10 == 1) {
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff50,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                       );
    pLStack_13 = &LStack_8;
    uStack_14 = 0;
    LStack_8._list = (List_1_System_Object_ *)pLVar12->_list;
    LStack_8._index = pLVar12->_index;
    LStack_8._version = pLVar12->_version;
    LStack_8._current = *(Object **)&pLVar12->_current;
    uStack_2 = 1;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                        );
      if (bVar15 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      uVar16 = *(undefined8 *)((int)LStack_8._current + 0x10);
      pLStack_17 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                    ((int)LStack_8._current + 0x18);
      uStack_18._0_4_ = (this->fields)._relativeDragOffset.x;
      uStack_18._4_4_ = (this->fields)._relativeDragOffset.y;
      fStack_19 = (this->fields)._relativeDragOffset.z;
      uStack_20._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
      uStack_20._0_4_ = (float)uVar16;
      fStack_21 = fStack_19 + (float)pLStack_17;
      value_00.y = (float)uStack_18._4_4_ + uStack_20._4_4_;
      value_00.x = (float)(undefined4)uStack_18 + (float)uStack_20;
      value_00.z = fStack_21;
      uStack_20 = uVar16;
      GizmoTransform::GizmoTransform_set_Position3D
                ((GizmoTransform *)LStack_8._current,value_00,(MethodInfo *)0x0);
    }
  }
  else {
    iVar10 = (*(code *)(this->klass->vtable).__unknown_1.method)();
    if (iVar10 != 2) goto code_?;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff50,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                       );
    pLStack_13 = &LStack_8;
    uStack_14 = 0;
    LStack_8._list = (List_1_System_Object_ *)pLVar12->_list;
    LStack_8._index = pLVar12->_index;
    LStack_8._version = pLVar12->_version;
    LStack_8._current = *(Object **)&pLVar12->_current;
    uStack_2 = 4;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                        );
      if (bVar15 == 0) break;
      fStack_22 = (this->fields)._relativeDragRotation.x;
      fStack_23 = (this->fields)._relativeDragRotation.y;
      fStack_21 = (this->fields)._relativeDragRotation.z;
      fStack_24 = (this->fields)._relativeDragRotation.w;
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      fStack_25 = *(float *)((int)LStack_8._current + 0x2c);
      fVar26 = *(float *)((int)LStack_8._current + 0x30);
      in_stack_27 = *(RegexCharClass_SingleRange *)((int)LStack_8._current + 0x34);
      uStack_18 = CONCAT44(fStack_25,fStack_25);
      pLStack_17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   ((((float)in_stack_27 * fStack_24 -
                     fStack_22 * *(float *)((int)LStack_8._current + 0x28)) - fStack_25 * fStack_23
                    ) - fStack_21 * fVar26);
      fVar28 = (fStack_21 * (float)in_stack_27 + fVar26 * fStack_24 + fStack_25 * fStack_22) -
               fStack_23 * *(float *)((int)LStack_8._current + 0x28);
      fVar29 = (fStack_23 * (float)in_stack_27 + fStack_25 * fStack_24 +
              fStack_21 * *(float *)((int)LStack_8._current + 0x28)) - fVar26 * fStack_22;
      uStack_20 = CONCAT44(fVar28,fVar29);
      fStack_30 = ((float)in_stack_27 * fStack_22 +
                   *(float *)((int)LStack_8._current + 0x28) * fStack_24 + fVar26 * fStack_23) -
                  fStack_25 * fStack_21;
      value.y = fVar29;
      value.x = fStack_30;
      value.z = fVar28;
      value.w = (float)pLStack_17;
      fStack_19 = fStack_25;
      pLStack_9 = pLStack_17;
      GizmoTransform::GizmoTransform_set_Rotation3D
                ((GizmoTransform *)LStack_8._current,value,(MethodInfo *)0x0);
    }
  }
  uStack_2 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&LStack_8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
             ,(MethodInfo *)in_stack_27);
code_?:
  *unaff_FS_OFFSET = uStack_4;
  return;
}


/* Boolean Begin() */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_Begin
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).CanBegin.method)
                    (this,(this->klass->vtable).OnSessionBegin.methodPtr);
  if (cVar1 != '\0') {
    cVar1 = (*(code *)(this->klass->vtable).__unknown_2.method)
                      (this,(this->klass->vtable).__unknown_3.methodPtr);
    if (cVar1 != '\0') {
      (*(code *)(this->klass->vtable).OnSessionBegin.method)
                (this,(this->klass->vtable).OnSessionEnd.methodPtr);
      return 1;
    }
  }
  return 0;
}


/* Boolean CanBegin() */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_CanBegin
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).__unknown_1.methodPtr);
  return cVar1 == '\0';
}


/* Boolean ContainsTargetTransform(GizmoTransform) */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_ContainsTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._targetTransforms;
  if (this_00 != (List_1_RTG_GizmoTransform_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)transform,
                       MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_End
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                     (this,(this->klass->vtable).__unknown_1.methodPtr);
  if (cVar1 != '\0') {
    (*(code *)(this->klass->vtable).__unknown_4.method)
              (this,(this->klass->vtable).__unknown_5.methodPtr);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3 = (pVVar2->zeroVector).x;
    uVar4 = (pVVar2->zeroVector).y;
    fVar5 = (pVVar2->zeroVector).z;
    (this->fields)._relativeDragOffset.x = (float)uVar3;
    (this->fields)._relativeDragOffset.y = (float)uVar4;
    (this->fields)._totalDragOffset.x = (float)uVar3;
    (this->fields)._totalDragOffset.y = (float)uVar4;
    (this->fields)._relativeDragOffset.z = fVar5;
    (this->fields)._totalDragOffset.z = fVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar5 = (pQVar6->identityQuaternion).y;
    fVar7 = (pQVar6->identityQuaternion).z;
    fVar8 = (pQVar6->identityQuaternion).w;
    fVar9 = (pQVar6->identityQuaternion).x;
    fVar10 = (pQVar6->identityQuaternion).y;
    fVar11 = (pQVar6->identityQuaternion).z;
    fVar12 = (pQVar6->identityQuaternion).w;
    (this->fields)._relativeDragRotation.x = (pQVar6->identityQuaternion).x;
    (this->fields)._relativeDragRotation.y = fVar5;
    (this->fields)._relativeDragRotation.z = fVar7;
    (this->fields)._relativeDragRotation.w = fVar8;
    (this->fields)._totalDragRotation.x = fVar9;
    (this->fields)._totalDragRotation.y = fVar10;
    (this->fields)._totalDragRotation.z = fVar11;
    (this->fields)._totalDragRotation.w = fVar12;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar2->oneVector).x;
    uVar14 = (pVVar2->oneVector).y;
    fVar5 = (pVVar2->oneVector).z;
    (this->fields)._totalDragScale.x = (float)uVar13;
    (this->fields)._totalDragScale.y = (float)uVar14;
    (this->fields)._totalDragScale.z = fVar5;
    pGVar15 = this->klass;
    (this->fields)._relativeDragScale.x = (float)uVar13;
    (this->fields)._relativeDragScale.y = (float)uVar14;
    (this->fields)._relativeDragScale.z = fVar5;
    (*(code *)(pGVar15->vtable).OnSessionEnd.method)(this,pGVar15[1]._0.image);
  }
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_RemoveTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                   );
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).__unknown_1.methodPtr);
  if (cVar1 == '\0') {
    this_00 = (this->fields)._targetTransforms;
    if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)transform,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
              );
  }
  return;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_Update
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).__unknown.method)
                    (this,(this->klass->vtable).__unknown_1.methodPtr);
  if (cVar1 != '\0') {
    cVar1 = (*(code *)(this->klass->vtable).__unknown_3.method)
                      (this,(this->klass->vtable).__unknown_4.methodPtr);
    if (cVar1 != '\0') {
      (*(code *)(this->klass->vtable).__unknown_5.method)
                (this,(this->klass->vtable).CanBegin.methodPtr);
      GizmoDragSession_ApplyDrag(this,(MethodInfo *)0x0);
      return 1;
    }
  }
  return 0;
}


/* GizmoDragSession() */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession__ctor
               (GizmoDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  (this->fields)._targetTransforms = this_00;
  func_?(&this->fields,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._totalDragRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields)._totalDragRotation.y = fVar2;
  (this->fields)._totalDragRotation.z = fVar3;
  (this->fields)._totalDragRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar5->oneVector).y;
  fVar2 = (pVVar5->oneVector).z;
  (this->fields)._totalDragScale.x = (pVVar5->oneVector).x;
  (this->fields)._totalDragScale.y = fVar3;
  (this->fields)._totalDragScale.z = fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._relativeDragRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields)._relativeDragRotation.y = fVar2;
  (this->fields)._relativeDragRotation.z = fVar3;
  (this->fields)._relativeDragRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar5->oneVector).y;
  fVar2 = (pVVar5->oneVector).z;
  (this->fields)._relativeDragScale.x = (pVVar5->oneVector).x;
  (this->fields)._relativeDragScale.y = fVar3;
  (this->fields)._relativeDragScale.z = fVar2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  return;
}


/* Int32 get_NumTargetTransforms() */

int32_t Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_get_NumTargetTransforms
                  (GizmoDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._targetTransforms;
  if (pLVar2 != (List_1_RTG_GizmoTransform_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Vector3 get_RelativeDragScale() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_get_RelativeDragScale
                    (Vector3 *__return_storage_ptr__,GizmoDragSession *this,MethodInfo *method)

{
  fVar1 = (this->fields)._relativeDragScale.y;
  fVar2 = (this->fields)._relativeDragScale.z;
  __return_storage_ptr__->x = (this->fields)._relativeDragScale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

