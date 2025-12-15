
/* Int32 <SortHandleHoverDataCollection>b__0(GizmoHandleHoverData, GizmoHandleHoverData) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass104_0::
        RTGizmosEngine_c_DisplayClass104_0__SortHandleHoverDataCollection_b__0
                  (RTGizmosEngine_c_DisplayClass104_0 *this,GizmoHandleHoverData *h0,
                  GizmoHandleHoverData *h1,MethodInfo *method)

{
  if ((h0 != (GizmoHandleHoverData *)0x0) && (h1 != (GizmoHandleHoverData *)0x0)) {
    pGVar1 = (h0->fields)._gizmo;
    if ((h0->fields)._handleDimension == (h1->fields)._handleDimension) {
      if ((h0->fields)._handleDimension == 1) {
        if (((pGVar1 == (Gizmo *)0x0) ||
            (method = (MethodInfo *)(h1->fields)._gizmo, (Gizmo *)method == (Gizmo *)0x0)) ||
           ((pPVar2 = (pGVar1->fields)._hoverPriority2D, pPVar2 == (Priority *)0x0 ||
            (pPVar3 = (((Gizmo *)method)->fields)._hoverPriority2D, pPVar3 == (Priority *)0x0))))
        goto code_?;
        if ((pPVar2->fields)._priority != (pPVar3->fields)._priority) {
          pPVar2 = (((h0->fields)._gizmo)->fields)._hoverPriority2D;
          iVar4 = (((((Gizmo *)method)->fields)._hoverPriority2D)->fields)._priority;
          if ((pPVar2->fields)._priority < iVar4) {
            return -1;
          }
          return (int32_t)(iVar4 < (pPVar2->fields)._priority);
        }
        uVar5 = (h0->fields)._hoverPoint.x;
        uVar6 = (h0->fields)._hoverPoint.y;
        uVar7 = (this->fields).inputDevicePos.x;
        fVar8 = (this->fields).inputDevicePos.z - (h0->fields)._hoverPoint.z;
        fVar9 = (this->fields).inputDevicePos.y - (float)uVar6;
        uVar10 = (this->fields).inputDevicePos.x;
        fVar8 = fVar9 * fVar9 + ((float)uVar7 - (float)uVar5) * ((float)uVar7 - (float)uVar5) +
                 fVar8 * fVar8;
        uVar11 = (h1->fields)._hoverPoint.x;
        uVar12 = (h1->fields)._hoverPoint.y;
        fVar9 = (this->fields).inputDevicePos.z - (h1->fields)._hoverPoint.z;
        fVar13 = (this->fields).inputDevicePos.y - (float)uVar12;
        fVar9 = fVar13 * fVar13 + ((float)uVar10 - (float)uVar11) * ((float)uVar10 - (float)uVar11) +
                 fVar9 * fVar9;
        if (fVar8 < fVar9) {
          return -1;
        }
        if (fVar9 < fVar8) {
          return 1;
        }
        if (fVar8 == fVar9) {
          return 0;
        }
        fVar8 = ABS(fVar8);
      }
      else {
        if ((((pGVar1 == (Gizmo *)0x0) ||
             (this = (RTGizmosEngine_c_DisplayClass104_0 *)(h1->fields)._gizmo,
             (Gizmo *)this == (Gizmo *)0x0)) ||
            (method = (MethodInfo *)(pGVar1->fields)._hoverPriority3D,
            (Gizmo *)method == (Gizmo *)0x0)) ||
           (pPVar2 = (((Gizmo *)this)->fields)._hoverPriority3D, pPVar2 == (Priority *)0x0))
        goto code_?;
        if (*(int *)&(((Gizmo *)method)->fields).PostEnabled != (pPVar2->fields)._priority) {
          pPVar2 = (((h0->fields)._gizmo)->fields)._hoverPriority3D;
          iVar4 = (((((Gizmo *)this)->fields)._hoverPriority3D)->fields)._priority;
          if ((pPVar2->fields)._priority < iVar4) {
            return -1;
          }
          return (int32_t)(iVar4 < (pPVar2->fields)._priority);
        }
        fVar9 = (h1->fields)._hoverEnter3D;
        fVar8 = (h0->fields)._hoverEnter3D;
        if (fVar8 < fVar9) {
          return -1;
        }
        if (fVar9 < fVar8) {
          return 1;
        }
        if (fVar8 == fVar9) {
          return 0;
        }
        fVar8 = ABS(fVar8);
      }
      if ((uint)fVar8 < 0x7f800001) {
        return 1;
      }
code_?:
      return (0x7f800000 < (uint)ABS(fVar9)) - 1;
    }
    if ((((pGVar1 != (Gizmo *)0x0) &&
         (method = (MethodInfo *)(h1->fields)._gizmo, (Gizmo *)method != (Gizmo *)0x0)) &&
        (pPVar2 = (pGVar1->fields)._genericHoverPriority, pPVar2 != (Priority *)0x0)) &&
       (pPVar3 = (((Gizmo *)method)->fields)._genericHoverPriority, pPVar3 != (Priority *)0x0)) {
      method = (MethodInfo *)(h0->fields)._gizmo;
      if ((pPVar2->fields)._priority != (pPVar3->fields)._priority) {
        pPVar2 = (((Gizmo *)method)->fields)._genericHoverPriority;
        iVar4 = (((((h1->fields)._gizmo)->fields)._genericHoverPriority)->fields)._priority;
        if ((pPVar2->fields)._priority < iVar4) {
          return -1;
        }
        return (int32_t)(iVar4 < (pPVar2->fields)._priority);
      }
      pGVar14 = (((Gizmo *)method)->fields)._transform;
      if (pGVar14 != (GizmoTransform *)0x0) {
        uVar15 = (this->fields).hoverRay.m_Origin.x;
        uVar16 = (this->fields).hoverRay.m_Origin.y;
        uVar17 = (pGVar14->fields)._position3D.x;
        fVar8 = (pGVar14->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
        fVar9 = (pGVar14->fields)._position3D.y - (float)uVar16;
        pGVar1 = (h1->fields)._gizmo;
        fVar8 = fVar9 * fVar9 + ((float)uVar17 - (float)uVar15) * ((float)uVar17 - (float)uVar15) +
                 fVar8 * fVar8;
        if ((pGVar1 != (Gizmo *)0x0) &&
           (pGVar14 = (pGVar1->fields)._transform, pGVar14 != (GizmoTransform *)0x0)) {
          uVar18 = (this->fields).hoverRay.m_Origin.x;
          uVar19 = (this->fields).hoverRay.m_Origin.y;
          uVar20 = (pGVar14->fields)._position3D.x;
          fVar9 = (pGVar14->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
          fVar13 = (pGVar14->fields)._position3D.y - (float)uVar19;
          fVar9 = fVar13 * fVar13 + ((float)uVar20 - (float)uVar18) * ((float)uVar20 - (float)uVar18) +
                   fVar9 * fVar9;
          if (fVar8 < fVar9) {
            return -1;
          }
          if (fVar9 < fVar8) {
            return 1;
          }
          if (fVar8 == fVar9) {
            return 0;
          }
          if ((uint)ABS(fVar8) < 0x7f800001) {
            return 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?(this,h0,h1,method);
  pcVar21 = (code *)swi(3);
  iVar22 = (*pcVar21)();
  return iVar22;
}

