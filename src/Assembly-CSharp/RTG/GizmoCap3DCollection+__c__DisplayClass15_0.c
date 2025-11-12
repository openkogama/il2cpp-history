
/* Int32 <GetRenderSortedCaps>b__0(GizmoCap3D, GizmoCap3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoCap3DCollection+<>c__DisplayClass15_0::
        GizmoCap3DCollection_c_DisplayClass15_0__GetRenderSortedCaps_b__0
                  (GizmoCap3DCollection_c_DisplayClass15_0 *this,GizmoCap3D *c0,GizmoCap3D *c1,
                  MethodInfo *method)

{
  if ((((c0 == (GizmoCap3D *)0x0) ||
       (pGVar1 = (c0->fields)._transform, pGVar1 == (GizmoTransform *)0x0)) ||
      (uVar2 = (this->fields).cameraPos.x, uVar3 = (this->fields).cameraPos.y,
      uVar4 = (pGVar1->fields)._position3D.x,
      fVar5 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z,
      fVar6 = (pGVar1->fields)._position3D.y - (float)uVar3,
      fVar5 = fVar6 * fVar6 + ((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
               fVar5 * fVar5, c1 == (GizmoCap3D *)0x0)) ||
     (pGVar1 = (c1->fields)._transform, pGVar1 == (GizmoTransform *)0x0)) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    iVar8 = (*pcVar7)();
    return iVar8;
  }
  uVar9 = (this->fields).cameraPos.x;
  uVar10 = (this->fields).cameraPos.y;
  uVar11 = (pGVar1->fields)._position3D.x;
  fVar6 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z;
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

