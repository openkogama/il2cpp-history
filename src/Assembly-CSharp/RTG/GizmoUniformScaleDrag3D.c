
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::
        GizmoUniformScaleDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._workData.CameraRight.x;
  uVar2 = (this->fields)._workData.CameraRight.y;
  fVar3 = (this->fields)._workData.CameraRight.z;
  (this->fields)._planeAxis0.x = (float)uVar1;
  (this->fields)._planeAxis0.y = (float)uVar2;
  (this->fields)._planeAxis0.z = fVar3;
  uStack_4._0_4_ = (this->fields)._workData.CameraUp.x;
  uStack_4._4_4_ = (this->fields)._workData.CameraUp.y;
  fVar5 = (this->fields)._workData.CameraUp.z;
  (this->fields)._planeAxis1.x = (float)(undefined4)uStack_4;
  (this->fields)._planeAxis1.y = (float)uStack_4._4_4_;
  (this->fields)._planeAxis1.z = fVar5;
  fVar6 = (float)uVar2 * fVar5 - fVar3 * (float)uStack_4._4_4_;
  fVar7 = (float)uVar1 * (float)uStack_4._4_4_ - (float)(undefined4)uStack_4 * (float)uVar2;
  fVar5 = (float)(undefined4)uStack_4 * fVar3 - (float)uVar1 * fVar5;
  uStack_8 = CONCAT44(fVar5,fVar6);
  fStack_9 = fVar7;
  fVar3 = (float)FUN_?(&uStack_8);
  if (_UNK_? < fVar3) {
    fStack_10 = fVar7 / fVar3;
    uStack_4 = CONCAT44(fVar5 / fVar3,fVar6 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_4._0_4_ = (pVVar11->zeroVector).x;
    uStack_4._4_4_ = (pVVar11->zeroVector).y;
    fStack_10 = (pVVar11->zeroVector).z;
  }
  uStack_8._0_4_ = (this->fields)._workData.DragOrigin.x;
  uStack_8._4_4_ = (this->fields)._workData.DragOrigin.y;
  fStack_9 = (this->fields)._workData.DragOrigin.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  FUN_?(__return_storage_ptr__,&uStack_4,&uStack_8);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_CalculateDragValues
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  if ((this->fields)._._isSnapEnabled == 0) {
    fVar1 = (this->fields)._scale;
    (this->fields)._accumSnapDrag = 0.0;
    pIVar2 = (this->fields)._._planeDragSession;
    if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (this->fields)._scaleDragAxis.x;
    uVar5 = (this->fields)._scaleDragAxis.y;
    uVar6 = (pIVar2->fields)._dragDelta.x;
    uVar7 = (pIVar2->fields)._dragDelta.y;
    fVar8 = ((float)uVar5 * (float)uVar7 + (float)uVar4 * (float)uVar6 +
             (this->fields)._scaleDragAxis.z * (pIVar2->fields)._dragDelta.z) *
             (this->fields)._._sensitivity + fVar1;
    (this->fields)._scale = fVar8;
    fVar1 = fVar8 / fVar1;
    (this->fields)._totalScale = fVar8;
    (this->fields)._relativeScale = fVar1;
    (this->fields)._._._relativeDragScale.x = fVar1;
    (this->fields)._._._relativeDragScale.y = fVar1;
    (this->fields)._._._relativeDragScale.z = fVar1;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar1 = (pVVar9->oneVector).z;
    fVar8 = (pVVar9->oneVector).y;
    (this->fields)._._._relativeDragScale.x = (pVVar9->oneVector).x;
    (this->fields)._._._relativeDragScale.y = fVar8;
    (this->fields)._._._relativeDragScale.z = fVar1;
    pIVar2 = (this->fields)._._planeDragSession;
    if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
    uVar10 = (this->fields)._scaleDragAxis.x;
    uVar11 = (this->fields)._scaleDragAxis.y;
    uVar12 = (pIVar2->fields)._dragDelta.x;
    uVar13 = (pIVar2->fields)._dragDelta.y;
    fVar1 = (float)uVar11 * (float)uVar13 + (float)uVar10 * (float)uVar12 +
             (this->fields)._scaleDragAxis.z * (pIVar2->fields)._dragDelta.z +
             (this->fields)._accumSnapDrag;
    (this->fields)._accumSnapDrag = fVar1;
    if ((this->fields)._workData.SnapStep <= (float)((uint)fVar1 & _UNK_?)) {
      fVar1 = (this->fields)._workData.SnapStep;
      fVar1 = (float)(int)((this->fields)._accumSnapDrag / fVar1) * fVar1;
      (this->fields)._accumSnapDrag = (this->fields)._accumSnapDrag - fVar1;
      fVar8 = (this->fields)._scale;
      fVar1 = fVar1 + fVar8;
      (this->fields)._scale = fVar1;
      fVar8 = fVar1 / fVar8;
      (this->fields)._totalScale = fVar1;
      (this->fields)._relativeScale = fVar8;
      (this->fields)._._._relativeDragScale.x = fVar8;
      (this->fields)._._._relativeDragScale.y = fVar8;
      (this->fields)._._._relativeDragScale.z = fVar8;
    }
  }
  fVar1 = (this->fields)._totalScale;
  (this->fields)._._._totalDragScale.x = fVar1;
  (this->fields)._._._totalDragScale.y = fVar1;
  (this->fields)._._._totalDragScale.z = fVar1;
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_OnSessionEnd
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale = 1.0;
  (this->fields)._totalScale = 1.0;
  return;
}


/* Void SetWorkData(GizmoUniformScaleDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
               (GizmoUniformScaleDrag3D *this,GizmoUniformScaleDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    fVar2 = (workData->CameraRight).x;
    fVar3 = (workData->CameraRight).y;
    uVar4 = *(undefined8 *)&(workData->CameraRight).z;
    (this->fields)._scale = 1.0;
    fVar5 = (workData->CameraUp).y;
    fVar6 = (workData->CameraUp).z;
    fVar7 = (workData->DragOrigin).x;
    fVar8 = (workData->DragOrigin).y;
    (this->fields)._workData.CameraRight.x = fVar2;
    (this->fields)._workData.CameraRight.y = fVar3;
    *(undefined8 *)&(this->fields)._workData.CameraRight.z = uVar4;
    uVar4 = *(undefined8 *)&(workData->DragOrigin).z;
    fVar2 = (workData->CameraRight).x;
    fVar3 = (workData->CameraRight).y;
    fVar9 = (workData->CameraRight).z;
    (this->fields)._workData.CameraUp.y = fVar5;
    (this->fields)._workData.CameraUp.z = fVar6;
    (this->fields)._workData.DragOrigin.x = fVar7;
    (this->fields)._workData.DragOrigin.y = fVar8;
    *(undefined8 *)&(this->fields)._workData.DragOrigin.z = uVar4;
    fVar7 = (fVar2 + (workData->CameraUp).x) * _UNK_?;
    fVar5 = (fVar3 + fVar5) * _UNK_?;
    fVar6 = (fVar9 + fVar6) * _UNK_?;
    uStack_10 = CONCAT44(fVar5,fVar7);
    fStack_11 = fVar6;
    fVar8 = (float)FUN_?(&uStack_10);
    if (_UNK_? < fVar8) {
      fVar7 = fVar7 / fVar8;
      fVar5 = fVar5 / fVar8;
      fVar6 = fVar6 / fVar8;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar7 = (pVVar12->zeroVector).x;
      fVar5 = (pVVar12->zeroVector).y;
      fVar6 = (pVVar12->zeroVector).z;
    }
    (this->fields)._scaleDragAxis.x = fVar7;
    (this->fields)._scaleDragAxis.y = fVar5;
    (this->fields)._scaleDragAxis.z = fVar6;
  }
  return;
}


/* GizmoUniformScaleDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor
               (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  (this->fields)._relativeScale = 1.0;
  (this->fields)._totalScale = 1.0;
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


/* Single get_TotalScale() */

float Assembly-CSharp.dll::RTG::GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_get_TotalScale
                (GizmoUniformScaleDrag3D *this,MethodInfo *method)

{
  return (this->fields)._totalScale;
}

