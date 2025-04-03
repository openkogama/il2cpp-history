
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
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return __return_storage_ptr__;
}


/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoDblAxisOffsetDrag3D::
     GizmoDblAxisOffsetDrag3D_CalculateDragValues(GizmoDblAxisOffsetDrag3D *this,MethodInfo *method)

{
  pGVar1 = this;
  pIVar2 = (this->fields)._._planeDragSession;
  if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pGVar4 = (GizmoDblAxisOffsetDrag3D *)
            Vector3Ex::Vector3Ex_Dot
                      ((pIVar2->fields)._dragDelta,(this->fields)._workData.Axis0,(MethodInfo *)0x0
                      );
  pIVar2 = (this->fields)._._planeDragSession;
  if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
  fVar5 = Vector3Ex::Vector3Ex_Dot
                     ((pIVar2->fields)._dragDelta,(this->fields)._workData.Axis1,(MethodInfo *)0x0)
  ;
  if ((this->fields)._._isSnapEnabled == 0) {
    pIVar2 = (this->fields)._._planeDragSession;
    (this->fields)._accumSnapDrag0 = 0.0;
    (this->fields)._accumSnapDrag1 = 0.0;
    if (pIVar2 == (InputDevicePlaneDragSession3D *)0x0) goto code_?;
    uVar6 = (pIVar2->fields)._dragDelta.x;
    uVar7 = (pIVar2->fields)._dragDelta.y;
    fVar8 = (this->fields)._._sensitivity;
    fVar5 = (pIVar2->fields)._dragDelta.z * fVar8;
    (this->fields)._._._relativeDragOffset.x = (float)uVar6 * fVar8;
    (this->fields)._._._relativeDragOffset.y = (float)uVar7 * fVar8;
  }
  else {
    this = pGVar4;
    if (cRam_? == '\0') {
      this = (GizmoDblAxisOffsetDrag3D *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    accumulated = &(pGVar1->fields)._accumSnapDrag0;
    accumulated_00 = &(pGVar1->fields)._accumSnapDrag1;
    fVar8 = *accumulated;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = (pVVar9->zeroVector).y;
    fVar11 = (pVVar9->zeroVector).z;
    (pGVar1->fields)._._._relativeDragOffset.x = (pVVar9->zeroVector).x;
    (pGVar1->fields)._._._relativeDragOffset.y = fVar10;
    fVar10 = *accumulated_00;
    (pGVar1->fields)._._._relativeDragOffset.z = fVar11;
    *accumulated = (float)this + fVar8;
    *accumulated_00 = fVar5 + fVar10;
    bVar12 = SnapMath::SnapMath_CanExtractSnap
                       ((pGVar1->fields)._workData.SnapStep0,(float)this + fVar8,(MethodInfo *)0x0
                       );
    if (bVar12 != 0) {
      fVar10 = SnapMath::SnapMath_ExtractSnap
                         ((pGVar1->fields)._workData.SnapStep0,accumulated,(MethodInfo *)0x0);
      uVar13 = (pGVar1->fields)._._._relativeDragOffset.x;
      uVar14 = (pGVar1->fields)._._._relativeDragOffset.y;
      fVar5 = (pGVar1->fields)._._._relativeDragOffset.z;
      uVar15 = (pGVar1->fields)._workData.Axis0.x;
      uVar16 = (pGVar1->fields)._workData.Axis0.y;
      fVar8 = (pGVar1->fields)._workData.Axis0.z;
      (pGVar1->fields)._._._relativeDragOffset.x = (float)uVar13 + (float)uVar15 * fVar10;
      (pGVar1->fields)._._._relativeDragOffset.y = (float)uVar14 + (float)uVar16 * fVar10;
      (pGVar1->fields)._._._relativeDragOffset.z = fVar5 + fVar8 * fVar10;
    }
    bVar12 = SnapMath::SnapMath_CanExtractSnap
                       ((pGVar1->fields)._workData.SnapStep1,*accumulated_00,(MethodInfo *)0x0);
    if (bVar12 == 0) goto code_?;
    fVar8 = SnapMath::SnapMath_ExtractSnap
                       ((pGVar1->fields)._workData.SnapStep1,accumulated_00,(MethodInfo *)0x0);
    uVar17 = (pGVar1->fields)._._._relativeDragOffset.x;
    uVar18 = (pGVar1->fields)._._._relativeDragOffset.y;
    uVar19 = (pGVar1->fields)._workData.Axis1.x;
    uVar20 = (pGVar1->fields)._workData.Axis1.y;
    fVar5 = (pGVar1->fields)._._._relativeDragOffset.z +
             (pGVar1->fields)._workData.Axis1.z * fVar8;
    (pGVar1->fields)._._._relativeDragOffset.x = (float)uVar17 + (float)uVar19 * fVar8;
    (pGVar1->fields)._._._relativeDragOffset.y = (float)uVar18 + (float)uVar20 * fVar8;
  }
  (pGVar1->fields)._._._relativeDragOffset.z = fVar5;
code_?:
  uVar21 = (pGVar1->fields)._._._totalDragOffset.x;
  uVar22 = (pGVar1->fields)._._._totalDragOffset.y;
  fVar5 = (pGVar1->fields)._._._totalDragOffset.z;
  uVar23 = (pGVar1->fields)._._._relativeDragOffset.x;
  uVar24 = (pGVar1->fields)._._._relativeDragOffset.y;
  fVar8 = (pGVar1->fields)._._._relativeDragOffset.z;
  (pGVar1->fields)._._._totalDragOffset.x = (float)uVar23 + (float)uVar21;
  (pGVar1->fields)._._._totalDragOffset.y = (float)uVar24 + (float)uVar22;
  (pGVar1->fields)._._._totalDragOffset.z = fVar8 + fVar5;
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

