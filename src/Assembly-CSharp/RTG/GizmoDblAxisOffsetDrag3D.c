
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::
        GizmoDblAxisOffsetDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

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
    fStack_10 = fVar5 / fVar4;
    uStack_1 = CONCAT44(fVar7 / fVar4,fVar6 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar11->zeroVector).x;
    uStack_1._4_4_ = (pVVar11->zeroVector).y;
    fStack_10 = (pVVar11->zeroVector).z;
  }
  uStack_8._0_4_ = (this->fields)._workData.DragOrigin.x;
  uStack_8._4_4_ = (this->fields)._workData.DragOrigin.y;
  fStack_9 = (this->fields)._workData.DragOrigin.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  FUN_?(__return_storage_ptr__,&uStack_1,&uStack_8);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::
     GizmoDblAxisOffsetDrag3D_CalculateDragValues(GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (this->fields)._workData.Axis0.x;
  uVar4 = (this->fields)._workData.Axis0.y;
  uVar5 = (pIVar1->fields)._dragDelta.x;
  uVar6 = (pIVar1->fields)._dragDelta.y;
  fVar7 = (this->fields)._workData.Axis0.z;
  fVar8 = (pIVar1->fields)._dragDelta.z;
  uVar9 = (this->fields)._workData.Axis1.x;
  uVar10 = (this->fields)._workData.Axis1.y;
  uVar11 = (pIVar1->fields)._dragDelta.x;
  uVar12 = (pIVar1->fields)._dragDelta.y;
  fVar13 = (this->fields)._workData.Axis1.z;
  fVar14 = (pIVar1->fields)._dragDelta.z;
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
    fVar7 = (this->fields)._._sensitivity;
    uVar15 = (pIVar1->fields)._dragDelta.x;
    fVar13 = (pIVar1->fields)._dragDelta.y;
    fVar8 = (pIVar1->fields)._dragDelta.z * fVar7;
    (this->fields)._._._relativeDragOffset.x = (float)uVar15 * fVar7;
    (this->fields)._._._relativeDragOffset.y = fVar13 * fVar7;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar16 = (float)uVar4 * (float)uVar6 + (float)uVar3 * (float)uVar5 + fVar7 * fVar8 +
             (this->fields)._accumSnapDrag0;
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar7 = (pVVar17->zeroVector).z;
    fVar8 = (pVVar17->zeroVector).x;
    fVar18 = (pVVar17->zeroVector).y;
    (this->fields)._accumSnapDrag1 =
         (float)uVar10 * (float)uVar12 + (float)uVar9 * (float)uVar11 + fVar13 * fVar14 +
         (this->fields)._accumSnapDrag1;
    uVar19 = _UNK_?;
    (this->fields)._accumSnapDrag0 = fVar16;
    (this->fields)._._._relativeDragOffset.x = fVar8;
    (this->fields)._._._relativeDragOffset.y = fVar18;
    (this->fields)._._._relativeDragOffset.z = fVar7;
    if ((this->fields)._workData.SnapStep0 <= (float)((uint)fVar16 & uVar19)) {
      fVar7 = (this->fields)._workData.SnapStep0;
      fVar7 = (float)(int)((this->fields)._accumSnapDrag0 / fVar7) * fVar7;
      (this->fields)._accumSnapDrag0 = (this->fields)._accumSnapDrag0 - fVar7;
      uVar20 = (this->fields)._workData.Axis0.x;
      uVar21 = (this->fields)._workData.Axis0.y;
      uVar22 = (this->fields)._._._relativeDragOffset.x;
      uVar23 = (this->fields)._._._relativeDragOffset.y;
      fVar8 = (this->fields)._workData.Axis0.z;
      fVar13 = (this->fields)._._._relativeDragOffset.z;
      (this->fields)._._._relativeDragOffset.x = (float)uVar20 * fVar7 + (float)uVar22;
      (this->fields)._._._relativeDragOffset.y = (float)uVar21 * fVar7 + (float)uVar23;
      (this->fields)._._._relativeDragOffset.z = fVar8 * fVar7 + fVar13;
    }
    if ((float)((uint)(this->fields)._accumSnapDrag1 & uVar19) < (this->fields)._workData.SnapStep1)
    goto code_?;
    fVar7 = (this->fields)._workData.SnapStep1;
    fVar7 = (float)(int)((this->fields)._accumSnapDrag1 / fVar7) * fVar7;
    (this->fields)._accumSnapDrag1 = (this->fields)._accumSnapDrag1 - fVar7;
    uVar24 = (this->fields)._workData.Axis1.x;
    uVar25 = (this->fields)._workData.Axis1.y;
    uVar26 = (this->fields)._._._relativeDragOffset.x;
    uVar27 = (this->fields)._._._relativeDragOffset.y;
    fVar8 = (this->fields)._workData.Axis1.z * fVar7 + (this->fields)._._._relativeDragOffset.z;
    (this->fields)._._._relativeDragOffset.x = (float)uVar24 * fVar7 + (float)uVar26;
    (this->fields)._._._relativeDragOffset.y = (float)uVar25 * fVar7 + (float)uVar27;
  }
  (this->fields)._._._relativeDragOffset.z = fVar8;
code_?:
  uVar28 = (this->fields)._._._totalDragOffset.x;
  uVar29 = (this->fields)._._._totalDragOffset.y;
  uVar30 = (this->fields)._._._relativeDragOffset.x;
  fVar7 = (this->fields)._._._relativeDragOffset.y;
  fVar8 = (this->fields)._._._relativeDragOffset.z;
  fVar13 = (this->fields)._._._totalDragOffset.z;
  (this->fields)._._._totalDragOffset.x = (float)uVar30 + (float)uVar28;
  (this->fields)._._._totalDragOffset.y = fVar7 + (float)uVar29;
  (this->fields)._._._totalDragOffset.z = fVar8 + fVar13;
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::GizmoDblAxisOffsetDrag3D_OnSessionEnd
               (GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag0 = 0.0;
  (this->fields)._accumSnapDrag1 = 0.0;
  return;
}


/* Void SetWorkData(GizmoDblAxisOffsetDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::GizmoDblAxisOffsetDrag3D_SetWorkData
               (GizmoDblAxisOffsetDrag3D *this,GizmoDblAxisOffsetDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    fVar2 = (workData->DragOrigin).y;
    uVar3 = *(undefined8 *)&(workData->DragOrigin).z;
    fVar4 = workData->SnapStep1;
    fVar5 = (workData->Axis0).y;
    fVar6 = (workData->Axis0).z;
    fVar7 = (workData->Axis1).x;
    fVar8 = (workData->Axis1).y;
    (this->fields)._workData.DragOrigin.x = (workData->DragOrigin).x;
    (this->fields)._workData.DragOrigin.y = fVar2;
    *(undefined8 *)&(this->fields)._workData.DragOrigin.z = uVar3;
    uVar3 = *(undefined8 *)&(workData->Axis1).z;
    (this->fields)._workData.Axis0.y = fVar5;
    (this->fields)._workData.Axis0.z = fVar6;
    (this->fields)._workData.Axis1.x = fVar7;
    (this->fields)._workData.Axis1.y = fVar8;
    *(undefined8 *)&(this->fields)._workData.Axis1.z = uVar3;
    (this->fields)._workData.SnapStep1 = fVar4;
  }
  return;
}

