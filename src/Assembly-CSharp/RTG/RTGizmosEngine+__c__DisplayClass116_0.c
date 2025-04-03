
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
  iVar3 = (h0->fields)._handleDimension;
  pGVar4 = (h0->fields)._gizmo;
  if (iVar3 == (h1->fields)._handleDimension) {
    if (iVar3 == 1) {
      if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (h1->fields)._gizmo, pGVar5 == (Gizmo *)0x0))
      goto code_?;
      bVar6 = Priority::Priority_op_Equality
                         ((pGVar4->fields)._hoverPriority2D,(pGVar5->fields)._hoverPriority2D,
                          (MethodInfo *)0x0);
      if (bVar6 != 0) {
        uVar7 = (this->fields).inputDevicePos.x;
        uVar8 = (this->fields).inputDevicePos.y;
        uVar9 = (pGVar2->fields)._hoverPoint.x;
        uVar10 = (pGVar2->fields)._hoverPoint.y;
        fVar11 = (this->fields).inputDevicePos.z - (pGVar2->fields)._hoverPoint.z;
        SStack_12.m_value =
             ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) +
             ((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) + fVar11 * fVar11;
        uVar13 = (this->fields).inputDevicePos.x;
        uVar14 = (this->fields).inputDevicePos.y;
        uVar15 = (pGVar1->fields)._hoverPoint.x;
        uVar16 = (pGVar1->fields)._hoverPoint.y;
        fVar11 = (this->fields).inputDevicePos.z - (pGVar1->fields)._hoverPoint.z;
        iVar17 = mscorlib.dll::System::Single::Single_CompareTo_1
                           (&SStack_12,
                            ((float)uVar14 - (float)uVar16) * ((float)uVar14 - (float)uVar16) +
                            ((float)uVar13 - (float)uVar15) * ((float)uVar13 - (float)uVar15) +
                            fVar11 * fVar11,(MethodInfo *)0x0);
        return iVar17;
      }
      pGVar4 = (pGVar2->fields)._gizmo;
      if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (pGVar1->fields)._gizmo, pGVar5 == (Gizmo *)0x0)
         ) goto code_?;
      other = (pGVar5->fields)._hoverPriority2D;
      this_00 = (pGVar4->fields)._hoverPriority2D;
    }
    else {
      if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (h1->fields)._gizmo, pGVar5 == (Gizmo *)0x0))
      goto code_?;
      bVar6 = Priority::Priority_op_Equality
                         ((pGVar4->fields)._hoverPriority3D,(pGVar5->fields)._hoverPriority3D,
                          (MethodInfo *)0x0);
      if (bVar6 != 0) {
        SStack_18.m_value = (pGVar2->fields)._hoverEnter3D;
        iVar17 = mscorlib.dll::System::Single::Single_CompareTo_1
                           (&SStack_18,(pGVar1->fields)._hoverEnter3D,(MethodInfo *)0x0);
        return iVar17;
      }
      pGVar4 = (pGVar2->fields)._gizmo;
      if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (pGVar1->fields)._gizmo, pGVar5 == (Gizmo *)0x0)
         ) goto code_?;
      other = (pGVar5->fields)._hoverPriority3D;
      this_00 = (pGVar4->fields)._hoverPriority3D;
    }
  }
  else {
    if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (h1->fields)._gizmo, pGVar5 == (Gizmo *)0x0))
    goto code_?;
    bVar6 = Priority::Priority_op_Equality
                       ((pGVar4->fields)._genericHoverPriority,
                        (pGVar5->fields)._genericHoverPriority,(MethodInfo *)0x0);
    pGVar4 = (pGVar2->fields)._gizmo;
    if (bVar6 != 0) {
      if ((pGVar4 != (Gizmo *)0x0) &&
         (pGVar19 = (pGVar4->fields)._transform, pGVar19 != (GizmoTransform *)0x0)) {
        uVar20 = (pGVar19->fields)._position3D.x;
        uVar21 = (pGVar19->fields)._position3D.y;
        uVar22 = (this->fields).hoverRay.m_Origin.x;
        uVar23 = (this->fields).hoverRay.m_Origin.y;
        fVar11 = (pGVar19->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
        pGVar4 = (pGVar1->fields)._gizmo;
        h0 = (GizmoHandleHoverData *)
             (((float)uVar21 - (float)uVar23) * ((float)uVar21 - (float)uVar23) +
              ((float)uVar20 - (float)uVar22) * ((float)uVar20 - (float)uVar22) + fVar11 * fVar11);
        if ((pGVar4 != (Gizmo *)0x0) &&
           (pGVar19 = (pGVar4->fields)._transform, pGVar19 != (GizmoTransform *)0x0)) {
          uVar24 = (pGVar19->fields)._position3D.x;
          uVar25 = (pGVar19->fields)._position3D.y;
          uVar26 = (this->fields).hoverRay.m_Origin.x;
          uVar27 = (this->fields).hoverRay.m_Origin.y;
          fVar11 = (pGVar19->fields)._position3D.z - (this->fields).hoverRay.m_Origin.z;
          iVar17 = mscorlib.dll::System::Single::Single_CompareTo_1
                             ((Single *)&h0,
                              ((float)uVar25 - (float)uVar27) * ((float)uVar25 - (float)uVar27) +
                              ((float)uVar24 - (float)uVar26) * ((float)uVar24 - (float)uVar26) +
                              fVar11 * fVar11,(MethodInfo *)0x0);
          return iVar17;
        }
      }
      goto code_?;
    }
    if ((pGVar4 == (Gizmo *)0x0) || (pGVar5 = (pGVar1->fields)._gizmo, pGVar5 == (Gizmo *)0x0))
    goto code_?;
    other = (pGVar5->fields)._genericHoverPriority;
    this_00 = (pGVar4->fields)._genericHoverPriority;
  }
  if (this_00 != (Priority *)0x0) {
    iVar17 = Priority::Priority_CompareTo(this_00,other,(MethodInfo *)0x0);
    return iVar17;
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  iVar17 = (*pcVar28)();
  return iVar17;
}

