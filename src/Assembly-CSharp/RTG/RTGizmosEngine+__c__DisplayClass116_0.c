
/* Int32 <SortHandleHoverDataCollection>b__0(GizmoHandleHoverData, GizmoHandleHoverData) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass116_0::
        RTGizmosEngine_c_DisplayClass116_0__SortHandleHoverDataCollection_b__0
                  (RTGizmosEngine_c_DisplayClass116_0 *this,GizmoHandleHoverData *h0,
                  GizmoHandleHoverData *h1,MethodInfo *method)

{
  pGVar1 = h1;
  pGVar2 = h0;
  if ((h0 == (GizmoHandleHoverData *)0x0) || (h1 == (GizmoHandleHoverData *)0x0))
  goto code_?;
  if ((h0->fields)._handleDimension == (h1->fields)._handleDimension) {
    pGVar3 = (h0->fields)._gizmo;
    if ((h0->fields)._handleDimension == 1) {
      if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (h1->fields)._gizmo, pGVar4 == (Gizmo *)0x0))
      goto code_?;
      bVar5 = Priority::Priority_op_Equality
                         ((pGVar3->fields)._hoverPriority2D,(pGVar4->fields)._hoverPriority2D,
                          (MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar6 = (this->fields).inputDevicePos.x;
        uVar7 = (this->fields).inputDevicePos.y;
        uVar8 = (pGVar2->fields)._hoverPoint.x;
        uVar9 = (pGVar2->fields)._hoverPoint.y;
        fVar10 = (this->fields).inputDevicePos.z - (pGVar2->fields)._hoverPoint.z;
        uVar11 = (this->fields).inputDevicePos.x;
        uVar12 = (this->fields).inputDevicePos.y;
        uVar13 = (pGVar1->fields)._hoverPoint.x;
        uVar14 = (pGVar1->fields)._hoverPoint.y;
        SStack_15.m_value =
             ((float)uVar6 - (float)uVar8) * ((float)uVar6 - (float)uVar8) +
             ((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) + fVar10 * fVar10;
        fVar10 = (this->fields).inputDevicePos.z - (pGVar1->fields)._hoverPoint.z;
        iVar16 = mscorlib.dll::System::Single::Single_CompareTo_1
                           (&SStack_15,
                            ((float)uVar11 - (float)uVar13) * ((float)uVar11 - (float)uVar13) +
                            ((float)uVar12 - (float)uVar14) * ((float)uVar12 - (float)uVar14) +
                            fVar10 * fVar10,(MethodInfo *)0x0);
        return iVar16;
      }
      pGVar3 = (pGVar2->fields)._gizmo;
      if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (pGVar1->fields)._gizmo, pGVar4 == (Gizmo *)0x0)
         ) goto code_?;
      other = (pGVar4->fields)._hoverPriority2D;
      this_00 = (pGVar3->fields)._hoverPriority2D;
    }
    else {
      if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (h1->fields)._gizmo, pGVar4 == (Gizmo *)0x0))
      goto code_?;
      bVar5 = Priority::Priority_op_Equality
                         ((pGVar3->fields)._hoverPriority3D,(pGVar4->fields)._hoverPriority3D,
                          (MethodInfo *)0x0);
      if (bVar5 != 0) {
        SStack_17.m_value = (pGVar2->fields)._hoverEnter3D;
        iVar16 = mscorlib.dll::System::Single::Single_CompareTo_1
                           (&SStack_17,(pGVar1->fields)._hoverEnter3D,(MethodInfo *)0x0);
        return iVar16;
      }
      pGVar3 = (pGVar2->fields)._gizmo;
      if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (pGVar1->fields)._gizmo, pGVar4 == (Gizmo *)0x0)
         ) goto code_?;
      other = (pGVar4->fields)._hoverPriority3D;
      this_00 = (pGVar3->fields)._hoverPriority3D;
    }
  }
  else {
    pGVar3 = (h0->fields)._gizmo;
    if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (h1->fields)._gizmo, pGVar4 == (Gizmo *)0x0))
    goto code_?;
    bVar5 = Priority::Priority_op_Equality
                       ((pGVar3->fields)._genericHoverPriority,
                        (pGVar4->fields)._genericHoverPriority,(MethodInfo *)0x0);
    pGVar3 = (pGVar2->fields)._gizmo;
    if (bVar5 != 0) {
      if ((pGVar3 != (Gizmo *)0x0) &&
         (pGVar18 = (pGVar3->fields)._transform, pGVar18 != (GizmoTransform *)0x0)) {
        uVar19 = (pGVar18->fields)._position3D.x;
        uVar20 = (pGVar18->fields)._position3D.y;
        uVar21 = (this->fields).hoverRay.m_Origin.x;
        uVar22 = (this->fields).hoverRay.m_Origin.y;
        fVar10 = (pGVar18->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
        pGVar3 = (pGVar1->fields)._gizmo;
        h0 = (GizmoHandleHoverData *)
             (((float)uVar19 - (float)uVar21) * ((float)uVar19 - (float)uVar21) +
              ((float)uVar20 - (float)uVar22) * ((float)uVar20 - (float)uVar22) + fVar10 * fVar10);
        if ((pGVar3 != (Gizmo *)0x0) &&
           (pGVar18 = (pGVar3->fields)._transform, pGVar18 != (GizmoTransform *)0x0)) {
          uVar23 = (pGVar18->fields)._position3D.x;
          uVar24 = (pGVar18->fields)._position3D.y;
          uVar25 = (this->fields).hoverRay.m_Origin.x;
          uVar26 = (this->fields).hoverRay.m_Origin.y;
          fVar10 = (pGVar18->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
          iVar16 = mscorlib.dll::System::Single::Single_CompareTo_1
                             ((Single *)&h0,
                              ((float)uVar23 - (float)uVar25) * ((float)uVar23 - (float)uVar25) +
                              ((float)uVar24 - (float)uVar26) * ((float)uVar24 - (float)uVar26) +
                              fVar10 * fVar10,(MethodInfo *)0x0);
          return iVar16;
        }
      }
      goto code_?;
    }
    if ((pGVar3 == (Gizmo *)0x0) || (pGVar4 = (pGVar1->fields)._gizmo, pGVar4 == (Gizmo *)0x0))
    goto code_?;
    other = (pGVar4->fields)._genericHoverPriority;
    this_00 = (pGVar3->fields)._genericHoverPriority;
  }
  if (this_00 != (Priority *)0x0) {
    iVar16 = Priority::Priority_CompareTo(this_00,other,(MethodInfo *)0x0);
    return iVar16;
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  iVar16 = (*pcVar27)();
  return iVar16;
}

