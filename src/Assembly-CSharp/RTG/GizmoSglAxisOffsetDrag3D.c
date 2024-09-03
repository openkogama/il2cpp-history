
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::
        GizmoSglAxisOffsetDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoSglAxisOffsetDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  PStack_1.m_Normal.z = (this->fields)._workData.DragOrigin.x;
  PStack_1.m_Distance = (this->fields)._workData.DragOrigin.y;
  fVar2 = (this->fields)._workData.DragOrigin.z;
  fVar3 = (this->fields)._workData.Axis.z;
  uStack_4._0_4_ = (this->fields)._workData.Axis.x;
  uStack_4._4_4_ = (this->fields)._workData.Axis.y;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar5 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar5 != (Object *)0x0) {
    axisOrigin.z = fVar2;
    axisOrigin.x = PStack_1.m_Normal.z;
    axisOrigin.y = PStack_1.m_Distance;
    axis.z = fVar3;
    axis.x = (float)(undefined4)uStack_4;
    axis.y = (float)uStack_4._4_4_;
    pPVar6 = PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                       (&PStack_1,axisOrigin,axis,(Camera *)pOVar5[4].monitor,(MethodInfo *)0x0);
    fVar2 = (pPVar6->m_Normal).y;
    fVar3 = (pPVar6->m_Normal).z;
    fVar7 = pPVar6->m_Distance;
    (__return_storage_ptr__->m_Normal).x = (pPVar6->m_Normal).x;
    (__return_storage_ptr__->m_Normal).y = fVar2;
    (__return_storage_ptr__->m_Normal).z = fVar3;
    __return_storage_ptr__->m_Distance = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pPVar6 = (Plane *)(*pcVar8)();
  return pPVar6;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::
     GizmoSglAxisOffsetDrag3D_CalculateDragValues(GizmoSglAxisOffsetDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = Vector3Ex::Vector3Ex_Dot
                     ((pIVar1->fields)._dragDelta,(this->fields)._workData.Axis,(MethodInfo *)0x0);
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._accumSnapDrag = 0.0;
    uVar4 = (this->fields)._workData.Axis.x;
    uVar5 = (this->fields)._workData.Axis.y;
    fVar6 = (float)uVar4 * fVar3;
    fVar7 = (float)uVar5 * fVar3;
    fVar3 = (this->fields)._workData.Axis.z * fVar3;
    fVar8 = (this->fields)._._sensitivity;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar3 = fVar3 + (this->fields)._accumSnapDrag;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar9->zeroVector).y;
    fVar8 = (pVVar9->zeroVector).z;
    (this->fields)._._._relativeDragOffset.x = (pVVar9->zeroVector).x;
    (this->fields)._._._relativeDragOffset.y = fVar6;
    (this->fields)._._._relativeDragOffset.z = fVar8;
    (this->fields)._accumSnapDrag = fVar3;
    bVar10 = SnapMath::SnapMath_CanExtractSnap
                       ((this->fields)._workData.SnapStep,fVar3,(MethodInfo *)0x0);
    if (bVar10 == 0) goto code_?;
    fVar8 = SnapMath::SnapMath_ExtractSnap
                       ((this->fields)._workData.SnapStep,&(this->fields)._accumSnapDrag,
                        (MethodInfo *)0x0);
    fVar6 = (this->fields)._workData.Axis.x;
    fVar7 = (this->fields)._workData.Axis.y;
    fVar3 = (this->fields)._workData.Axis.z;
  }
  (this->fields)._._._relativeDragOffset.x = fVar6 * fVar8;
  (this->fields)._._._relativeDragOffset.y = fVar7 * fVar8;
  (this->fields)._._._relativeDragOffset.z = fVar3 * fVar8;
code_?:
  uVar11 = (this->fields)._._._totalDragOffset.x;
  uVar12 = (this->fields)._._._totalDragOffset.y;
  fVar3 = (this->fields)._._._totalDragOffset.z;
  uVar13 = (this->fields)._._._relativeDragOffset.x;
  uVar14 = (this->fields)._._._relativeDragOffset.y;
  fVar8 = (this->fields)._._._relativeDragOffset.z;
  (this->fields)._._._totalDragOffset.x = (float)uVar13 + (float)uVar11;
  (this->fields)._._._totalDragOffset.y = (float)uVar14 + (float)uVar12;
  (this->fields)._._._totalDragOffset.z = fVar8 + fVar3;
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
               (GizmoSglAxisOffsetDrag3D *this,GizmoSglAxisOffsetDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._workData.DragOrigin.x = workData.DragOrigin.x;
    (this->fields)._workData.DragOrigin.y = workData.DragOrigin.y;
    (this->fields)._workData.DragOrigin.z = workData.DragOrigin.z;
    (this->fields)._workData.Axis.x = workData.Axis.x;
    (this->fields)._workData.Axis.y = workData.Axis.y;
    (this->fields)._workData.Axis.z = workData.Axis.z;
    (this->fields)._workData.SnapStep = workData.SnapStep;
  }
  return;
}


/* Vector3 get_Axis() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                    (Vector3 *__return_storage_ptr__,GizmoSglAxisOffsetDrag3D *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._workData.Axis.y;
  fVar2 = (this->fields)._workData.Axis.z;
  __return_storage_ptr__->x = (this->fields)._workData.Axis.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

