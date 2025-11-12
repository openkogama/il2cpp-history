
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::
        GizmoSglAxisOffsetDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoSglAxisOffsetDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._workData.DragOrigin.x;
  uVar1._4_4_ = (this->fields)._workData.DragOrigin.y;
  fVar2 = (this->fields)._workData.DragOrigin.z;
  uVar3._0_4_ = (this->fields)._workData.Axis.x;
  uVar3._4_4_ = (this->fields)._workData.Axis.y;
  fVar4 = (this->fields)._workData.Axis.z;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar5 != (Object *)0x0) {
    VStack_6._0_8_ = uVar3;
    VStack_6.z = fVar4;
    VStack_7._0_8_ = uVar1;
    VStack_7.z = fVar2;
    pPVar8 = PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                       (&PStack_9,&VStack_7,&VStack_6,(Camera *)pOVar5[4].monitor,
                        (MethodInfo *)0x0);
    fVar2 = (pPVar8->m_Normal).y;
    uVar1 = *(undefined8 *)&(pPVar8->m_Normal).z;
    (__return_storage_ptr__->m_Normal).x = (pPVar8->m_Normal).x;
    (__return_storage_ptr__->m_Normal).y = fVar2;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar1;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pPVar8 = (Plane *)(*pcVar10)();
  return pPVar8;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::
     GizmoSglAxisOffsetDrag3D_CalculateDragValues(GizmoSglAxisOffsetDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 != (InputDevicePlaneDragSession3D *)0x0) {
    uVar2 = (this->fields)._workData.Axis.x;
    uVar3 = (this->fields)._workData.Axis.y;
    uVar4 = (pIVar1->fields)._dragDelta.x;
    uVar5 = (pIVar1->fields)._dragDelta.y;
    fVar6 = (float)uVar3 * (float)uVar5 + (float)uVar2 * (float)uVar4 +
             (this->fields)._workData.Axis.z * (pIVar1->fields)._dragDelta.z;
    if ((this->fields)._._isSnapEnabled == 0) {
      (this->fields)._accumSnapDrag = 0.0;
      uVar7 = (this->fields)._workData.Axis.x;
      uVar8 = (this->fields)._workData.Axis.y;
      fVar9 = (this->fields)._._sensitivity;
      fVar10 = (this->fields)._workData.Axis.z;
      (this->fields)._._._relativeDragOffset.x = (float)uVar7 * fVar6 * fVar9;
      (this->fields)._._._relativeDragOffset.y = (float)uVar8 * fVar6 * fVar9;
      (this->fields)._._._relativeDragOffset.z = fVar10 * fVar6 * fVar9;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar6 = fVar6 + (this->fields)._accumSnapDrag;
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar9 = (pVVar11->zeroVector).z;
      fVar10 = (pVVar11->zeroVector).y;
      (this->fields)._._._relativeDragOffset.x = (pVVar11->zeroVector).x;
      (this->fields)._._._relativeDragOffset.y = fVar10;
      (this->fields)._._._relativeDragOffset.z = fVar9;
      (this->fields)._accumSnapDrag = fVar6;
      if ((this->fields)._workData.SnapStep <= (float)((uint)fVar6 & _UNK_?)) {
        fVar6 = (this->fields)._workData.SnapStep;
        fVar6 = (float)(int)((this->fields)._accumSnapDrag / fVar6) * fVar6;
        (this->fields)._accumSnapDrag = (this->fields)._accumSnapDrag - fVar6;
        uVar12 = (this->fields)._workData.Axis.x;
        uVar13 = (this->fields)._workData.Axis.y;
        fVar9 = (this->fields)._workData.Axis.z;
        (this->fields)._._._relativeDragOffset.x = fVar6 * (float)uVar12;
        (this->fields)._._._relativeDragOffset.y = fVar6 * (float)uVar13;
        (this->fields)._._._relativeDragOffset.z = fVar6 * fVar9;
      }
    }
    uVar14 = (this->fields)._._._totalDragOffset.x;
    uVar15 = (this->fields)._._._totalDragOffset.y;
    uVar16 = (this->fields)._._._relativeDragOffset.x;
    fVar6 = (this->fields)._._._relativeDragOffset.y;
    fVar9 = (this->fields)._._._relativeDragOffset.z;
    fVar10 = (this->fields)._._._totalDragOffset.z;
    (this->fields)._._._totalDragOffset.x = (float)uVar16 + (float)uVar14;
    (this->fields)._._._totalDragOffset.y = fVar6 + (float)uVar15;
    (this->fields)._._._totalDragOffset.z = fVar9 + fVar10;
    return;
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_OnSessionEnd
               (GizmoSglAxisOffsetDrag3D *this,MethodInfo *method)

{
  (this->fields)._accumSnapDrag = 0.0;
  return;
}


/* Void SetWorkData(GizmoSglAxisOffsetDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
               (GizmoSglAxisOffsetDrag3D *this,GizmoSglAxisOffsetDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    fVar2 = (workData->DragOrigin).y;
    uVar3 = *(undefined8 *)&(workData->DragOrigin).z;
    fVar4 = workData->SnapStep;
    fVar5 = (workData->Axis).y;
    fVar6 = (workData->Axis).z;
    (this->fields)._workData.DragOrigin.x = (workData->DragOrigin).x;
    (this->fields)._workData.DragOrigin.y = fVar2;
    *(undefined8 *)&(this->fields)._workData.DragOrigin.z = uVar3;
    (this->fields)._workData.Axis.y = fVar5;
    (this->fields)._workData.Axis.z = fVar6;
    (this->fields)._workData.SnapStep = fVar4;
  }
  return;
}

