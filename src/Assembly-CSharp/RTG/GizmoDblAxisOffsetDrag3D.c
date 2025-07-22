
/* Plane CalculateDragPlane() */

Plane * Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::
        GizmoDblAxisOffsetDrag3D_CalculateDragPlane
                  (Plane *__return_storage_ptr__,GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._workData.Axis0.x;
  uVar2 = (this->fields)._workData.Axis0.y;
  fVar3 = (this->fields)._workData.Axis0.z;
  VStack_4.x = (this->fields)._workData.Axis1.x;
  VStack_4.y = (this->fields)._workData.Axis1.y;
  VStack_4.z = (this->fields)._workData.Axis1.z;
  value.y = VStack_4.x * fVar3 - (float)uVar1 * VStack_4.z;
  value.x = VStack_4.z * (float)uVar2 - VStack_4.y * fVar3;
  value.z = (float)uVar1 * VStack_4.y - VStack_4.x * (float)uVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,value,(MethodInfo *)0x0);
  uVar6 = (this->fields)._workData.DragOrigin.y;
  fVar3 = (this->fields)._workData.DragOrigin.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,*pVVar5,(MethodInfo *)0x0);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  fVar9 = pVVar5->z;
  (__return_storage_ptr__->m_Normal).x = (float)uVar7;
  (__return_storage_ptr__->m_Normal).y = (float)uVar8;
  (__return_storage_ptr__->m_Normal).z = fVar9;
  __return_storage_ptr__->m_Distance =
       (float)((uint)((float)uVar6 * (float)uVar8 + (float)uVar7 * 0.0 + fVar3 * fVar9) ^
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::
     GizmoDblAxisOffsetDrag3D_CalculateDragValues(GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = Vector3Ex::Vector3Ex_Dot
                     ((pIVar1->fields)._dragDelta,(this->fields)._workData.Axis0,(MethodInfo *)0x0)
  ;
  pIVar1 = (this->fields)._._planeDragSession;
  if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
  fVar4 = Vector3Ex::Vector3Ex_Dot
                     ((pIVar1->fields)._dragDelta,(this->fields)._workData.Axis1,(MethodInfo *)0x0)
  ;
  if ((this->fields)._._isSnapEnabled == 0) {
    pIVar1 = (this->fields)._._planeDragSession;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    if (pIVar1 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
    uVar5 = (pIVar1->fields)._dragDelta.x;
    uVar6 = (pIVar1->fields)._dragDelta.y;
    fVar4 = (this->fields)._._sensitivity;
    fVar3 = (pIVar1->fields)._dragDelta.z * fVar4;
    (this->fields)._._._relativeDragOffset.x = (float)uVar5 * fVar4;
    (this->fields)._._._relativeDragOffset.y = (float)uVar6 * fVar4;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = fVar3 + (this->fields)._accumSnapDrag0;
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar8 = (pVVar7->zeroVector).y;
    fVar9 = (pVVar7->zeroVector).z;
    (this->fields)._._._relativeDragOffset.x = (pVVar7->zeroVector).x;
    (this->fields)._._._relativeDragOffset.y = fVar8;
    fVar8 = (this->fields)._accumSnapDrag1;
    (this->fields)._._._relativeDragOffset.z = fVar9;
    (this->fields)._accumSnapDrag0 = fVar3;
    (this->fields)._accumSnapDrag1 = fVar4 + fVar8;
    bVar10 = SnapMath::SnapMath_CanExtractSnap
                       ((this->fields)._workData.SnapStep0,fVar3,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      fVar8 = SnapMath::SnapMath_ExtractSnap
                         ((this->fields)._workData.SnapStep0,&(this->fields)._accumSnapDrag0,
                          (MethodInfo *)0x0);
      uVar11 = (this->fields)._._._relativeDragOffset.x;
      uVar12 = (this->fields)._._._relativeDragOffset.y;
      fVar3 = (this->fields)._._._relativeDragOffset.z;
      uVar13 = (this->fields)._workData.Axis0.x;
      uVar14 = (this->fields)._workData.Axis0.y;
      fVar4 = (this->fields)._workData.Axis0.z;
      (this->fields)._._._relativeDragOffset.x = (float)uVar11 + (float)uVar13 * fVar8;
      (this->fields)._._._relativeDragOffset.y = (float)uVar12 + (float)uVar14 * fVar8;
      (this->fields)._._._relativeDragOffset.z = fVar3 + fVar4 * fVar8;
    }
    bVar10 = SnapMath::SnapMath_CanExtractSnap
                       ((this->fields)._workData.SnapStep1,(this->fields)._accumSnapDrag1,
                        (MethodInfo *)0x0);
    if (bVar10 == 0) goto code_?;
    fVar4 = SnapMath::SnapMath_ExtractSnap
                       ((this->fields)._workData.SnapStep1,&(this->fields)._accumSnapDrag1,
                        (MethodInfo *)0x0);
    uVar15 = (this->fields)._._._relativeDragOffset.x;
    uVar16 = (this->fields)._._._relativeDragOffset.y;
    uVar17 = (this->fields)._workData.Axis1.x;
    uVar18 = (this->fields)._workData.Axis1.y;
    fVar3 = (this->fields)._._._relativeDragOffset.z + (this->fields)._workData.Axis1.z * fVar4;
    (this->fields)._._._relativeDragOffset.x = (float)uVar15 + (float)uVar17 * fVar4;
    (this->fields)._._._relativeDragOffset.y = (float)uVar16 + (float)uVar18 * fVar4;
  }
  (this->fields)._._._relativeDragOffset.z = fVar3;
code_?:
  uVar19 = (this->fields)._._._totalDragOffset.x;
  uVar20 = (this->fields)._._._totalDragOffset.y;
  fVar3 = (this->fields)._._._totalDragOffset.z;
  uVar21 = (this->fields)._._._relativeDragOffset.x;
  uVar22 = (this->fields)._._._relativeDragOffset.y;
  fVar4 = (this->fields)._._._relativeDragOffset.z;
  (this->fields)._._._totalDragOffset.x = (float)uVar21 + (float)uVar19;
  (this->fields)._._._totalDragOffset.y = (float)uVar22 + (float)uVar20;
  (this->fields)._._._totalDragOffset.z = fVar4 + fVar3;
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
               (GizmoDblAxisOffsetDrag3D *this,GizmoDblAxisOffsetDrag3D_WorkData workData,
               MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._workData.DragOrigin.x = workData.DragOrigin.x;
    (this->fields)._workData.DragOrigin.y = workData.DragOrigin.y;
    (this->fields)._workData.DragOrigin.z = workData.DragOrigin.z;
    (this->fields)._workData.Axis0.x = workData.Axis0.x;
    (this->fields)._workData.Axis0.y = workData.Axis0.y;
    (this->fields)._workData.Axis0.z = workData.Axis0.z;
    (this->fields)._workData.Axis1.x = workData.Axis1.x;
    (this->fields)._workData.Axis1.y = workData.Axis1.y;
    *(undefined8 *)&(this->fields)._workData.Axis1.z = workData._32_8_;
    (this->fields)._workData.SnapStep1 = workData.SnapStep1;
  }
  return;
}

