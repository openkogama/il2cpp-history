
/* Int32 <Render_SystemCall>b__0(Gizmo, Gizmo) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass106_0::
        RTGizmosEngine_c_DisplayClass106_0__Render_SystemCall_b__0
                  (RTGizmosEngine_c_DisplayClass106_0 *this,Gizmo *g0,Gizmo *g1,MethodInfo *method)

{
  if ((((g0 == (Gizmo *)0x0) || (pGVar1 = (g0->fields)._transform, pGVar1 == (GizmoTransform *)0x0))
      || (uVar2 = (this->fields).camPos.x, uVar3 = (this->fields).camPos.y,
         uVar4 = (pGVar1->fields)._position3D.x,
         fVar5 = (pGVar1->fields)._position3D.z - (this->fields).camPos.z,
         fVar6 = (pGVar1->fields)._position3D.y - (float)uVar3,
         fVar5 = fVar6 * fVar6 + ((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
                  fVar5 * fVar5, g1 == (Gizmo *)0x0)) ||
     (pGVar1 = (g1->fields)._transform, pGVar1 == (GizmoTransform *)0x0)) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    iVar8 = (*pcVar7)();
    return iVar8;
  }
  uVar9 = (this->fields).camPos.x;
  uVar10 = (this->fields).camPos.y;
  uVar11 = (pGVar1->fields)._position3D.x;
  fVar6 = (pGVar1->fields)._position3D.z - (this->fields).camPos.z;
  fVar12 = (pGVar1->fields)._position3D.y - (float)uVar10;
  fVar6 = fVar12 * fVar12 + ((float)uVar11 - (float)uVar9) * ((float)uVar11 - (float)uVar9) +
           fVar6 * fVar6;
  if (fVar6 < fVar5) {
    return -1;
  }
  if (fVar6 <= fVar5) {
    if (fVar6 == fVar5) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar6)) {
      return (0x7f800000 < (uint)ABS(fVar5)) - 1;
    }
  }
  return 1;
}

