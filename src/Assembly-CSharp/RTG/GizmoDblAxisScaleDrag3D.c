
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::
        GizmoDblAxisScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields)._workData.Axis1.x;
  uStack_1._4_4_ = (this->fields)._workData.Axis1.y;
  uVar2 = (this->fields)._workData.Axis0.x;
  uVar3 = (this->fields)._workData.Axis0.y;
  fVar4 = (this->fields)._workData.Axis1.z;
  fVar5 = (this->fields)._workData.Axis0.z;
  fVar6 = fVar4 * (float)uVar3 - (float)uStack_1._4_4_ * fVar5;
  fVar7 = (float)(undefined4)uStack_1 * fVar5 - fVar4 * (float)uVar2;
  fVar5 = (float)uStack_1._4_4_ * (float)uVar2 - (float)(undefined4)uStack_1 * (float)uVar3;
  uStack_8 = CONCAT44(fVar7,fVar6);
  fStack_9 = fVar5;
  fVar4 = (float)FUN_?(&uStack_8);
  if (_UNK_? < fVar4) {
    fStack_9 = fVar5 / fVar4;
    uStack_8 = CONCAT44(fVar7 / fVar4,fVar6 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar10->zeroVector).x;
    uStack_8._4_4_ = (pVVar10->zeroVector).y;
    fStack_9 = (pVVar10->zeroVector).z;
  }
  uStack_1._0_4_ = (this->fields)._workData.DragOrigin.x;
  uStack_1._4_4_ = (this->fields)._workData.DragOrigin.y;
  fStack_11 = (this->fields)._workData.DragOrigin.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  FUN_?(__return_storage_ptr__,&uStack_8,&uStack_1);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_CalculateDragValues
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (this->fields)._scaleDragAxis.x;
  uVar4 = (this->fields)._scaleDragAxis.y;
  uVar5 = (pIVar1->fields)._dragDelta.x;
  uVar6 = (pIVar1->fields)._dragDelta.y;
  fVar7 = (this->fields)._workData.SnapStep;
  fVar8 = (float)uVar4 * (float)uVar6 + (float)uVar3 * (float)uVar5 +
           (this->fields)._scaleDragAxis.z * (pIVar1->fields)._dragDelta.z;
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar7 = (this->fields)._scale0;
    fVar9 = (this->fields)._._sensitivity;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    fVar9 = fVar8 * fVar9 + fVar7;
    (this->fields)._scale0 = fVar9;
    (this->fields)._totalScale0 = fVar9;
    fVar9 = fVar9 / fVar7;
    (this->fields)._relativeScale0 = fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (&(this->fields)._._._relativeDragScale,(this->fields)._workData.AxisIndex0,fVar9,
               in_R9);
    fVar7 = (this->fields)._scale1;
    fVar9 = fVar8 * (this->fields)._._sensitivity + fVar7;
    (this->fields)._scale1 = fVar9;
    (this->fields)._totalScale1 = fVar9;
    fVar9 = fVar9 / fVar7;
    (this->fields)._relativeScale1 = fVar9;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar10 = _UNK_?;
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = (pVVar11->oneVector).y;
    fVar9 = (pVVar11->oneVector).z;
    (this->fields)._._._relativeDragScale.x = (pVVar11->oneVector).x;
    (this->fields)._._._relativeDragScale.y = fVar12;
    fVar12 = fVar8 + (this->fields)._accumSnapDrag0;
    (this->fields)._._._relativeDragScale.z = fVar9;
    (this->fields)._accumSnapDrag0 = fVar12;
    if (fVar7 <= (float)((uint)fVar12 & uVar10)) {
      fVar9 = (this->fields)._scale0;
      fVar12 = (float)(int)((this->fields)._accumSnapDrag0 / fVar7) * fVar7;
      fVar13 = fVar12 + fVar9;
      (this->fields)._accumSnapDrag0 = (this->fields)._accumSnapDrag0 - fVar12;
      (this->fields)._scale0 = fVar13;
      (this->fields)._totalScale0 = fVar13;
      fVar13 = fVar13 / fVar9;
      (this->fields)._relativeScale0 = fVar13;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                (&(this->fields)._._._relativeDragScale,(this->fields)._workData.AxisIndex0,fVar13,
                 in_R9);
      uVar10 = _UNK_?;
    }
    fVar8 = fVar8 + (this->fields)._accumSnapDrag1;
    (this->fields)._accumSnapDrag1 = fVar8;
    if ((float)((uint)fVar8 & uVar10) < fVar7) goto code_?;
    fVar8 = (this->fields)._scale1;
    fVar7 = (float)(int)((this->fields)._accumSnapDrag1 / fVar7) * fVar7;
    fVar9 = fVar7 + fVar8;
    (this->fields)._accumSnapDrag1 = (this->fields)._accumSnapDrag1 - fVar7;
    (this->fields)._scale1 = fVar9;
    (this->fields)._totalScale1 = fVar9;
    fVar9 = fVar9 / fVar8;
    (this->fields)._relativeScale1 = fVar9;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(this->fields)._._._relativeDragScale,(this->fields)._workData.AxisIndex1,fVar9,in_R9
            );
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
            (&(this->fields)._._._totalDragScale,(this->fields)._workData.AxisIndex0,
             (this->fields)._totalScale0,in_R9);
  fVar7 = (this->fields)._totalScale1;
  iVar14 = (this->fields)._workData.AxisIndex1;
  if (iVar14 == 0) {
    (this->fields)._._._totalDragScale.x = fVar7;
    return;
  }
  if (iVar14 != 1) {
    if (iVar14 == 2) {
      (this->fields)._._._totalDragScale.z = fVar7;
      return;
    }
    uVar15 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_00 = (IndexOutOfRangeException *)func_?(uVar15);
    message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    uVar15 = func_?(&MethodInfo__UnityEngine__Vector3__set_Item_int__float_);
    FUN_?(this_00,uVar15);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->fields)._._._totalDragScale.y = fVar7;
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_OnSessionEnd
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale0 = 1.0;
  (this->fields)._accumSnapDrag0 = 0.0;
  (this->fields)._accumSnapDrag1 = 0.0;
  (this->fields)._relativeScale1 = 1.0;
  (this->fields)._totalScale0 = 1.0;
  (this->fields)._totalScale1 = 1.0;
  return;
}


/* Void SetWorkData(GizmoDblAxisScaleDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D_SetWorkData
               (GizmoDblAxisScaleDrag3D *this,GizmoDblAxisScaleDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                     (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    iVar2 = workData->AxisIndex0;
    iVar3 = workData->AxisIndex1;
    fVar4 = (workData->DragOrigin).x;
    fVar5 = (workData->DragOrigin).y;
    (this->fields)._scale0 = 1.0;
    fVar6 = (workData->DragOrigin).z;
    fVar7 = (workData->Axis0).x;
    fVar8 = (workData->Axis0).y;
    fVar9 = (workData->Axis0).z;
    (this->fields)._scale1 = 1.0;
    (this->fields)._workData.AxisIndex0 = iVar2;
    (this->fields)._workData.AxisIndex1 = iVar3;
    (this->fields)._workData.DragOrigin.x = fVar4;
    (this->fields)._workData.DragOrigin.y = fVar5;
    fVar4 = (workData->Axis1).x;
    fVar5 = (workData->Axis1).y;
    fVar10 = (workData->Axis1).z;
    fVar11 = workData->SnapStep;
    (this->fields)._workData.DragOrigin.z = fVar6;
    (this->fields)._workData.Axis0.x = fVar7;
    (this->fields)._workData.Axis0.y = fVar8;
    (this->fields)._workData.Axis0.z = fVar9;
    (this->fields)._workData.Axis1.x = fVar4;
    (this->fields)._workData.Axis1.y = fVar5;
    (this->fields)._workData.Axis1.z = fVar10;
    (this->fields)._workData.SnapStep = fVar11;
    fVar8 = (fVar8 + fVar5) * _UNK_?;
    fVar6 = (fVar7 + fVar4) * _UNK_?;
    fVar7 = (fVar9 + fVar10) * _UNK_?;
    uStack_12 = CONCAT44(fVar8,fVar6);
    fStack_13 = fVar7;
    fVar9 = (float)FUN_?(&uStack_12);
    if (_UNK_? < fVar9) {
      fVar6 = fVar6 / fVar9;
      fVar8 = fVar8 / fVar9;
      fVar7 = fVar7 / fVar9;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar6 = (pVVar14->zeroVector).x;
      fVar8 = (pVVar14->zeroVector).y;
      fVar7 = (pVVar14->zeroVector).z;
    }
    (this->fields)._scaleDragAxis.x = fVar6;
    (this->fields)._scaleDragAxis.y = fVar8;
    (this->fields)._scaleDragAxis.z = fVar7;
  }
  return;
}


/* GizmoDblAxisScaleDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisScaleDrag3D::GizmoDblAxisScaleDrag3D__ctor
               (GizmoDblAxisScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale0 = 1.0;
  (this->fields)._relativeScale1 = 1.0;
  (this->fields)._totalScale0 = 1.0;
  (this->fields)._totalScale1 = 1.0;
  (this->fields)._._sensitivity = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__,0);
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
  (this->fields)._._._targetTransforms = this_00;
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
  (this->fields)._._._totalDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._totalDragRotation.y = fVar9;
  (this->fields)._._._totalDragRotation.z = fVar10;
  (this->fields)._._._totalDragRotation.w = fVar11;
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
  (this->fields)._._._totalDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._totalDragScale.y = fVar10;
  (this->fields)._._._totalDragScale.z = fVar9;
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
  (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._relativeDragRotation.y = fVar9;
  (this->fields)._._._relativeDragRotation.z = fVar10;
  (this->fields)._._._relativeDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._._._relativeDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._relativeDragScale.y = fVar10;
  (this->fields)._._._relativeDragScale.z = fVar9;
  return;
}

