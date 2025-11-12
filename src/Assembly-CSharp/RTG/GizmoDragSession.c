
/* Void AddTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_AddTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  if (cVar1 == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields)._targetTransforms;
    if (pLVar2 != (List_1_RTG_GizmoTransform_ *)0x0) {
      if (((pLVar2->fields)._size != 0) &&
         (iVar3 = mscorlib.dll::System::Array::Array_IndexOf_69
                            ((Object__Array *)(pLVar2->fields)._items,(Object *)transform,0,
                             (pLVar2->fields)._size,
                             (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                              ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
         iVar3 != -1)) {
        return;
      }
      pLVar2 = (this->fields)._targetTransforms;
      if (pLVar2 != (List_1_RTG_GizmoTransform_ *)0x0) {
        FUN_?(pLVar2,transform);
        return;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void ApplyDrag() */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_ApplyDrag
               (GizmoDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0;
  pGStack_3 = (GizmoTransform *)0x0;
  pLVar4 = GizmoTransform::GizmoTransform_FilterParentsOnly
                      ((IEnumerable_1_RTG_GizmoTransform_ *)(this->fields)._targetTransforms,
                       (MethodInfo *)0x0);
  iVar5 = (*(this->klass->vtable).__unknown_1.methodPtr)
                     (this,(this->klass->vtable).__unknown_1.method);
  if (iVar5 == 1) {
    if (pLVar4 == (List_1_RTG_GizmoTransform_ *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)auStack_8 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    fVar13 = _UNK_?;
    stack0xffffffffffffff30 = (undefined1 *)((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    uStack_14 = 0;
    uStack_2 = stack0xffffffffffffff30;
    pGStack_3 = (GizmoTransform *)0x0;
    auStack_8._0_8_ = (List_1_RTG_GizmoTransform_ *)0x0;
    unique0x00009c00 = auStack_1;
    auStack_1 = (undefined1  [8])pLVar4;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                              ), bVar15 != 0) {
      if (pGStack_3 == (GizmoTransform *)0x0) {
        FUN_?();
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = (this->fields)._relativeDragOffset.x;
      uVar17 = (this->fields)._relativeDragOffset.y;
      uVar18 = (pGStack_3->fields)._position3D.x;
      uVar19 = (pGStack_3->fields)._position3D.y;
      fVar20 = (this->fields)._relativeDragOffset.z + (pGStack_3->fields)._position3D.z;
      if (((pGStack_3->fields)._firingChanged3DEvent == 0) &&
         (fVar21 = (float)uVar18 - ((float)uVar16 + (float)uVar18),
         fVar22 = (float)uVar19 - ((float)uVar17 + (float)uVar19),
         fVar23 = (pGStack_3->fields)._position3D.z - fVar20,
         fVar13 <= fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23)) {
        (pGStack_3->fields)._position3D.x = (float)uVar16 + (float)uVar18;
        (pGStack_3->fields)._position3D.y = (float)uVar17 + (float)uVar19;
        (pGStack_3->fields)._position3D.z = fVar20;
        GizmoTransform::GizmoTransform_OnPosition3DChanged(pGStack_3,(MethodInfo *)0x0);
      }
    }
  }
  else {
    iVar5 = (*(this->klass->vtable).__unknown_1.methodPtr)
                       (this,(this->klass->vtable).__unknown_1.method);
    if (iVar5 == 2) {
      if (pLVar4 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)auStack_8 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      stack0xffffffffffffff30 = (undefined1 *)((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
      uStack_14 = 0;
      uStack_2 = stack0xffffffffffffff30;
      pGStack_3 = (GizmoTransform *)0x0;
      auStack_8._0_8_ = pLVar4;
      auStack_1 = (undefined1  [8])pLVar4;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                                ), bVar15 != 0) {
        fVar13 = (this->fields)._relativeDragRotation.x;
        fVar20 = (this->fields)._relativeDragRotation.y;
        fVar23 = (this->fields)._relativeDragRotation.z;
        fVar22 = (this->fields)._relativeDragRotation.w;
        if (pGStack_3 == (GizmoTransform *)0x0) goto code_?;
        fVar21 = (pGStack_3->fields)._rotation3D.x;
        fVar24 = (pGStack_3->fields)._rotation3D.y;
        fVar25 = (pGStack_3->fields)._rotation3D.z;
        fVar26 = (pGStack_3->fields)._rotation3D.w;
        auStack_8._4_4_ = (fVar22 * fVar24 + fVar20 * fVar26 + fVar23 * fVar21) - fVar13 * fVar25;
        auStack_8._0_4_ = (fVar22 * fVar21 + fVar13 * fVar26 + fVar20 * fVar25) - fVar23 * fVar24;
        stack0xffffffffffffff30 =
             (undefined1 *)
             CONCAT44(((fVar22 * fVar26 - fVar13 * fVar21) - fVar20 * fVar24) - fVar23 * fVar25,
                      (fVar13 * fVar24 + fVar22 * fVar25 + fVar23 * fVar26) - fVar20 * fVar21);
        GizmoTransform::GizmoTransform_set_Rotation3D
                  (pGStack_3,(Quaternion *)auStack_8,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Boolean Begin() */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_Begin
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).CanBegin.methodPtr)(this,(this->klass->vtable).CanBegin.method);
  if (cVar1 != '\0') {
    cVar1 = (*(this->klass->vtable).__unknown_2.methodPtr)
                      (this,(this->klass->vtable).__unknown_2.method);
    if (cVar1 != '\0') {
      (*(this->klass->vtable).OnSessionBegin.methodPtr)
                (this,(this->klass->vtable).OnSessionBegin.method);
      return 1;
    }
  }
  return 0;
}


/* Boolean CanBegin() */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_CanBegin
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  return cVar1 == '\0';
}


/* Boolean ContainsTargetTransform(GizmoTransform) */

bool Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_ContainsTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetTransforms;
  if (pLVar1 != (List_1_RTG_GizmoTransform_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)transform,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Contains_RTG__GizmoTransform_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_End
               (GizmoDragSession *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method)
  ;
  if (cVar1 != '\0') {
    (*(this->klass->vtable).__unknown_4.methodPtr)(this,(this->klass->vtable).__unknown_4.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    bVar3 = cRam_? == '\0';
    uVar4 = (pVVar2->zeroVector).x;
    uVar5 = (pVVar2->zeroVector).y;
    fVar6 = (pVVar2->zeroVector).z;
    (this->fields)._relativeDragOffset.x = (float)uVar4;
    (this->fields)._relativeDragOffset.y = (float)uVar5;
    (this->fields)._totalDragOffset.x = (float)uVar4;
    (this->fields)._totalDragOffset.y = (float)uVar5;
    (this->fields)._relativeDragOffset.z = fVar6;
    (this->fields)._totalDragOffset.z = fVar6;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
    bVar3 = cRam_? == '\0';
    fVar6 = (pQVar7->identityQuaternion).x;
    fVar8 = (pQVar7->identityQuaternion).y;
    fVar9 = (pQVar7->identityQuaternion).z;
    fVar10 = (pQVar7->identityQuaternion).w;
    (this->fields)._relativeDragRotation.x = fVar6;
    (this->fields)._relativeDragRotation.y = fVar8;
    (this->fields)._relativeDragRotation.z = fVar9;
    (this->fields)._relativeDragRotation.w = fVar10;
    (this->fields)._totalDragRotation.x = fVar6;
    (this->fields)._totalDragRotation.y = fVar8;
    (this->fields)._totalDragRotation.z = fVar9;
    (this->fields)._totalDragRotation.w = fVar10;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar2->oneVector).z;
    uVar11 = (pVVar2->oneVector).x;
    uVar12 = (pVVar2->oneVector).y;
    pGVar13 = this->klass;
    (this->fields)._relativeDragScale.x = (float)uVar11;
    (this->fields)._relativeDragScale.y = (float)uVar12;
    (this->fields)._totalDragScale.x = (float)uVar11;
    (this->fields)._totalDragScale.y = (float)uVar12;
    (this->fields)._relativeDragScale.z = fVar6;
    (this->fields)._totalDragScale.z = fVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar13->vtable).OnSessionEnd.methodPtr)(this,(pGVar13->vtable).OnSessionEnd.method);
    return;
  }
  return;
}


/* Void RemoveTargetTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_RemoveTargetTransform
               (GizmoDragSession *this,GizmoTransform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  if (cVar1 == '\0') {
    this_00 = (this->fields)._targetTransforms;
    if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) {
      FUN_?();
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
  cVar1 = (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
  if (cVar1 != '\0') {
    cVar1 = (*(this->klass->vtable).__unknown_3.methodPtr)
                      (this,(this->klass->vtable).__unknown_3.method);
    if (cVar1 != '\0') {
      (*(this->klass->vtable).__unknown_5.methodPtr)(this);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._targetTransforms = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar6 = cRam_?;
  cVar7 = cRam_?;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._totalDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._totalDragRotation.y = fVar9;
  (this->fields)._totalDragRotation.z = fVar10;
  (this->fields)._totalDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar6 = '\x01';
    cRam_? = '\x01';
    cVar7 = cRam_?;
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._totalDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._totalDragScale.y = fVar10;
  (this->fields)._totalDragScale.z = fVar9;
  if (cVar7 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    cVar6 = cRam_?;
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._relativeDragRotation.y = fVar9;
  (this->fields)._relativeDragRotation.z = fVar10;
  (this->fields)._relativeDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._relativeDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._relativeDragScale.y = fVar10;
  (this->fields)._relativeDragScale.z = fVar9;
  return;
}


/* Int32 get_NumTargetTransforms() */

int32_t Assembly-CSharp.dll::RTG::GizmoDragSession::GizmoDragSession_get_NumTargetTransforms
                  (GizmoDragSession *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetTransforms;
  if (pLVar1 != (List_1_RTG_GizmoTransform_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

