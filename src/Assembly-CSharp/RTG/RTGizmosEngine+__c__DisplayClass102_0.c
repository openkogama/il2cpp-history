
/* Int32 <GetGizmoHandleHoverData>b__0(GizmoHandleHoverData, GizmoHandleHoverData) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass102_0::
        RTGizmosEngine_c_DisplayClass102_0__GetGizmoHandleHoverData_b__0
                  (RTGizmosEngine_c_DisplayClass102_0 *this,GizmoHandleHoverData *h0,
                  GizmoHandleHoverData *h1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoHandle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((h0 != (GizmoHandleHoverData *)0x0) && (pGVar1 = (this->fields).gizmo, pGVar1 != (Gizmo *)0x0)
     ) {
    pGVar2 = (pGVar1->fields)._handles;
    iVar3 = (h0->fields)._handleId;
    if (pGVar2 != (GizmoHandleCollection *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar4 = (pGVar2->fields)._idToHandle;
      if (((pDVar4 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) &&
          (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,iVar3,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                               ), h1 != (GizmoHandleHoverData *)0x0)) &&
         (pGVar1 = (this->fields).gizmo, pGVar1 != (Gizmo *)0x0)) {
        pGVar2 = (pGVar1->fields)._handles;
        iVar3 = (h1->fields)._handleId;
        if (pGVar2 != (GizmoHandleCollection *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar4 = (pGVar2->fields)._idToHandle;
          if (pDVar4 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,iVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                                );
            if ((h0->fields)._handleDimension == (h1->fields)._handleDimension) {
              if (pOVar5 == (Object *)0x0) goto code_?;
              if ((h0->fields)._handleDimension == 1) {
                lVar7 = FUN_?(5);
                if (((pOVar6 == (Object *)0x0) || (lVar8 = FUN_?(), lVar7 == 0)) ||
                   (lVar8 == 0)) goto code_?;
                if (*(int *)(lVar7 + 0x10) == *(int *)(lVar8 + 0x10)) {
                  uVar9 = (h0->fields)._hoverPoint.x;
                  uVar10 = (h0->fields)._hoverPoint.y;
                  uVar11 = (this->fields).screenRayOrigin.x;
                  fVar12 = (this->fields).screenRayOrigin.z - (h0->fields)._hoverPoint.z;
                  fVar13 = (this->fields).screenRayOrigin.y - (float)uVar10;
                  uVar14 = (this->fields).screenRayOrigin.x;
                  fVar13 = fVar13 * fVar13 +
                           ((float)uVar11 - (float)uVar9) * ((float)uVar11 - (float)uVar9) +
                           fVar12 * fVar12;
                  uVar15 = (h1->fields)._hoverPoint.x;
                  uVar16 = (h1->fields)._hoverPoint.y;
                  fVar12 = (this->fields).screenRayOrigin.z - (h1->fields)._hoverPoint.z;
                  fVar17 = (this->fields).screenRayOrigin.y - (float)uVar16;
                  fVar12 = fVar17 * fVar17 +
                           ((float)uVar14 - (float)uVar15) * ((float)uVar14 - (float)uVar15) +
                           fVar12 * fVar12;
                  if (fVar13 < fVar12) {
                    return -1;
                  }
                  if (fVar12 < fVar13) {
                    return 1;
                  }
                  if (fVar13 == fVar12) {
                    return 0;
                  }
                  fVar13 = ABS(fVar13);
                  goto joined_?;
                }
                lVar7 = FUN_?(5,*(int *)(lVar8 + 0x10),pOVar5);
                uVar18 = 5;
              }
              else {
                lVar7 = FUN_?(6);
                if (((pOVar6 == (Object *)0x0) || (lVar8 = FUN_?(), lVar7 == 0)) ||
                   (lVar8 == 0)) goto code_?;
                if (*(int *)(lVar7 + 0x10) == *(int *)(lVar8 + 0x10)) {
                  fVar12 = (h1->fields)._hoverEnter3D;
                  fVar13 = (h0->fields)._hoverEnter3D;
                  if (fVar13 < fVar12) {
                    return -1;
                  }
                  if (fVar12 < fVar13) {
                    return 1;
                  }
                  if (fVar13 == fVar12) {
                    return 0;
                  }
                  fVar13 = ABS(fVar13);
joined_?:
                  if ((uint)fVar13 < 0x7f800001) {
                    return 1;
                  }
                  return (0x7f800000 < (uint)ABS(fVar12)) - 1;
                }
                lVar7 = FUN_?(6,*(int *)(lVar8 + 0x10),pOVar5);
                uVar18 = 6;
              }
            }
            else {
              if ((((pOVar5 == (Object *)0x0) ||
                   (lVar7 = FUN_?(4), pOVar6 == (Object *)0x0)) ||
                  (lVar8 = FUN_?(4), lVar7 == 0)) || (lVar8 == 0))
              goto code_?;
              if (*(int *)(lVar7 + 0x10) == *(int *)(lVar8 + 0x10)) {
                if ((h0->fields)._handleDimension != 1) {
                  return 1;
                }
                return -1;
              }
              lVar7 = FUN_?(4,*(int *)(lVar8 + 0x10),pOVar5);
              uVar18 = 4;
            }
            lVar8 = FUN_?(uVar18);
            if ((lVar7 != 0) && (lVar8 != 0)) {
              if (*(int *)(lVar7 + 0x10) < *(int *)(lVar8 + 0x10)) {
                return -1;
              }
              return (uint)(*(int *)(lVar8 + 0x10) < *(int *)(lVar7 + 0x10));
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  iVar3 = (*pcVar19)();
  return iVar3;
}

