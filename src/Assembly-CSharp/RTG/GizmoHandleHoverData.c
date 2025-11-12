
/* GizmoHandleHoverData(Ray, IGizmoHandle, Single) */

void Assembly-CSharp.dll::RTG::GizmoHandleHoverData::GizmoHandleHoverData__ctor
               (GizmoHandleHoverData *this,Ray *hoverRay,IGizmoHandle *gizmoHandle,
               float hoverEnter3D,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gizmoHandle == (IGizmoHandle *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
  (this->fields)._handleId = iVar2;
  pGVar3 = (Gizmo *)FUN_?(1,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
  bVar4 = iRam_? != 0;
  (this->fields)._gizmo = pGVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._gizmo >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  fVar9 = (hoverRay->m_Origin).x;
  fVar10 = (hoverRay->m_Origin).y;
  uVar11 = *(undefined8 *)&(hoverRay->m_Origin).z;
  (this->fields)._handleDimension = 2;
  fVar12 = (hoverRay->m_Direction).y;
  fVar13 = (hoverRay->m_Direction).z;
  (this->fields)._hoverRay.m_Origin.x = fVar9;
  (this->fields)._hoverRay.m_Origin.y = fVar10;
  *(undefined8 *)&(this->fields)._hoverRay.m_Origin.z = uVar11;
  (this->fields)._hoverRay.m_Direction.y = fVar12;
  (this->fields)._hoverRay.m_Direction.z = fVar13;
  (this->fields)._hoverEnter3D = hoverEnter3D;
  uVar14 = (this->fields)._hoverRay.m_Origin.x;
  uVar15 = (this->fields)._hoverRay.m_Origin.y;
  uVar16 = (this->fields)._hoverRay.m_Direction.x;
  fVar9 = (this->fields)._hoverRay.m_Direction.y;
  fVar10 = (this->fields)._hoverRay.m_Direction.z;
  fVar12 = (this->fields)._hoverRay.m_Origin.z;
  (this->fields)._hoverPoint.x = (float)uVar16 * hoverEnter3D + (float)uVar14;
  (this->fields)._hoverPoint.y = fVar9 * hoverEnter3D + (float)uVar15;
  (this->fields)._hoverPoint.z = fVar10 * hoverEnter3D + fVar12;
  return;
}


/* GizmoHandleHoverData(Ray, IGizmoHandle, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoHandleHoverData::GizmoHandleHoverData__ctor_1
               (GizmoHandleHoverData *this,Ray *hoverRay,IGizmoHandle *gizmoHandle,Vector2 hoverPt2D
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gizmoHandle == (IGizmoHandle *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
  (this->fields)._handleId = iVar2;
  pGVar3 = (Gizmo *)FUN_?(1,TypeInfo__RTG__IGizmoHandle,gizmoHandle);
  bVar4 = iRam_? != 0;
  (this->fields)._gizmo = pGVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._gizmo >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  fVar9 = (hoverRay->m_Origin).x;
  fVar10 = (hoverRay->m_Origin).y;
  uVar11 = *(undefined8 *)&(hoverRay->m_Origin).z;
  (this->fields)._handleDimension = 1;
  fVar12 = (hoverRay->m_Direction).y;
  fVar13 = (hoverRay->m_Direction).z;
  (this->fields)._hoverRay.m_Origin.x = fVar9;
  (this->fields)._hoverRay.m_Origin.y = fVar10;
  *(undefined8 *)&(this->fields)._hoverRay.m_Origin.z = uVar11;
  (this->fields)._hoverRay.m_Direction.y = fVar12;
  (this->fields)._hoverRay.m_Direction.z = fVar13;
  (this->fields)._hoverPoint.x = hoverPt2D.x;
  (this->fields)._hoverPoint.y = hoverPt2D.y;
  (this->fields)._hoverPoint.z = 0.0;
  return;
}


/* Ray get_HoverRay() */

Ray * Assembly-CSharp.dll::RTG::GizmoHandleHoverData::GizmoHandleHoverData_get_HoverRay
                (Ray *__return_storage_ptr__,GizmoHandleHoverData *this,MethodInfo *method)

{
  fVar1 = (this->fields)._hoverRay.m_Origin.y;
  uVar2 = *(undefined8 *)&(this->fields)._hoverRay.m_Origin.z;
  fVar3 = (this->fields)._hoverRay.m_Direction.y;
  fVar4 = (this->fields)._hoverRay.m_Direction.z;
  (__return_storage_ptr__->m_Origin).x = (this->fields)._hoverRay.m_Origin.x;
  (__return_storage_ptr__->m_Origin).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Origin).z = uVar2;
  (__return_storage_ptr__->m_Direction).y = fVar3;
  (__return_storage_ptr__->m_Direction).z = fVar4;
  return __return_storage_ptr__;
}

