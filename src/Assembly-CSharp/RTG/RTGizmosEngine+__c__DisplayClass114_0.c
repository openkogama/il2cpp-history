
/* Int32 <GetGizmoHandleHoverData>b__0(GizmoHandleHoverData, GizmoHandleHoverData) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass114_0::
        RTGizmosEngine_c_DisplayClass114_0__GetGizmoHandleHoverData_b__0
                  (RTGizmosEngine_c_DisplayClass114_0 *this,GizmoHandleHoverData *h0,
                  GizmoHandleHoverData *h1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  if (h0 != (GizmoHandleHoverData *)0x0) {
    pGVar1 = (this->fields).gizmo;
    if (pGVar1 != (Gizmo *)0x0) {
      pIVar2 = Gizmo::Gizmo_GetHandleById_SystemCall
                          (pGVar1,(h0->fields)._handleId,(MethodInfo *)0x0);
      if ((h1 != (GizmoHandleHoverData *)0x0) &&
         (pGVar1 = (this->fields).gizmo, pGVar1 != (Gizmo *)0x0)) {
        pIVar3 = Gizmo::Gizmo_GetHandleById_SystemCall
                            (pGVar1,(h1->fields)._handleId,(MethodInfo *)0x0);
        iVar4 = (h0->fields)._handleDimension;
        if (iVar4 == (h1->fields)._handleDimension) {
          if (pIVar2 != (IGizmoHandle *)0x0) {
            if (iVar4 == 1) {
              pPVar5 = (Priority *)func_?(5,TypeInfo__RTG__IGizmoHandle,pIVar2);
              if (pIVar3 != (IGizmoHandle *)0x0) {
                pPVar6 = (Priority *)func_?(5,TypeInfo__RTG__IGizmoHandle,pIVar3);
                bVar7 = Priority::Priority_op_Equality(pPVar5,pPVar6,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  uVar8 = (this->fields).screenRayOrigin.x;
                  uVar9 = (this->fields).screenRayOrigin.y;
                  uVar10 = (h0->fields)._hoverPoint.x;
                  uVar11 = (h0->fields)._hoverPoint.y;
                  fVar12 = (this->fields).screenRayOrigin.z - (h0->fields)._hoverPoint.z;
                  uVar13 = (this->fields).screenRayOrigin.x;
                  uVar14 = (this->fields).screenRayOrigin.y;
                  uVar15 = (h1->fields)._hoverPoint.x;
                  uVar16 = (h1->fields)._hoverPoint.y;
                  SStack_17.m_value =
                       ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) +
                       ((float)uVar9 - (float)uVar11) * ((float)uVar9 - (float)uVar11) +
                       fVar12 * fVar12;
                  fVar12 = (this->fields).screenRayOrigin.z - (h1->fields)._hoverPoint.z;
                  iVar18 = mscorlib.dll::System::Single::Single_CompareTo_1
                                     (&SStack_17,
                                      ((float)uVar14 - (float)uVar16) * ((float)uVar14 - (float)uVar16)
                                      + ((float)uVar13 - (float)uVar15) *
                                        ((float)uVar13 - (float)uVar15) + fVar12 * fVar12,
                                      (MethodInfo *)0x0);
                  return iVar18;
                }
                pPVar5 = (Priority *)func_?(5,TypeInfo__RTG__IGizmoHandle,pIVar2);
                pPVar6 = (Priority *)func_?(5,TypeInfo__RTG__IGizmoHandle,pIVar3);
                if (pPVar5 != (Priority *)0x0) {
                  iVar18 = Priority::Priority_CompareTo(pPVar5,pPVar6,(MethodInfo *)0x0);
                  return iVar18;
                }
              }
            }
            else {
              pPVar5 = (Priority *)func_?(6,TypeInfo__RTG__IGizmoHandle,pIVar2);
              if (pIVar3 != (IGizmoHandle *)0x0) {
                pPVar6 = (Priority *)func_?(6,TypeInfo__RTG__IGizmoHandle,pIVar3);
                bVar7 = Priority::Priority_op_Equality(pPVar5,pPVar6,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  SStack_19.m_value = (h0->fields)._hoverEnter3D;
                  iVar18 = mscorlib.dll::System::Single::Single_CompareTo_1
                                     (&SStack_19,(h1->fields)._hoverEnter3D,(MethodInfo *)0x0);
                  return iVar18;
                }
                pPVar5 = (Priority *)func_?(6,TypeInfo__RTG__IGizmoHandle,pIVar2);
                pPVar6 = (Priority *)func_?(6,TypeInfo__RTG__IGizmoHandle,pIVar3);
                if (pPVar5 != (Priority *)0x0) {
                  iVar18 = Priority::Priority_CompareTo(pPVar5,pPVar6,(MethodInfo *)0x0);
                  return iVar18;
                }
              }
            }
          }
        }
        else if (pIVar2 != (IGizmoHandle *)0x0) {
          pPVar5 = (Priority *)func_?(4,TypeInfo__RTG__IGizmoHandle,pIVar2);
          if (pIVar3 != (IGizmoHandle *)0x0) {
            pPVar6 = (Priority *)func_?(4,TypeInfo__RTG__IGizmoHandle,pIVar3);
            bVar7 = Priority::Priority_op_Equality(pPVar5,pPVar6,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              return (uint)((h0->fields)._handleDimension != 1) * 2 + -1;
            }
            pPVar5 = (Priority *)func_?(4,TypeInfo__RTG__IGizmoHandle,pIVar2);
            pPVar6 = (Priority *)func_?(4,TypeInfo__RTG__IGizmoHandle,pIVar3);
            if (pPVar5 != (Priority *)0x0) {
              iVar18 = Priority::Priority_CompareTo(pPVar5,pPVar6,(MethodInfo *)0x0);
              return iVar18;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  iVar18 = (*pcVar20)();
  return iVar18;
}

