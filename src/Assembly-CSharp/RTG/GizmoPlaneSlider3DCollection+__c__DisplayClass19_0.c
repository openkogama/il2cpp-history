
/* Int32 <GetRenderSortedSliders>b__0(GizmoPlaneSlider3D, GizmoPlaneSlider3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection+<>c__DisplayClass19_0::
        GizmoPlaneSlider3DCollection_c_DisplayClass19_0__GetRenderSortedSliders_b__0
                  (GizmoPlaneSlider3DCollection_c_DisplayClass19_0 *this,GizmoPlaneSlider3D *s0,
                  GizmoPlaneSlider3D *s1,MethodInfo *method)

{
  if ((((s0 == (GizmoPlaneSlider3D *)0x0) ||
       (pGVar1 = (s0->fields)._transform, pGVar1 == (GizmoTransform *)0x0)) ||
      (uVar2 = (this->fields).cameraPos.x, uVar3 = (this->fields).cameraPos.y,
      uVar4 = (pGVar1->fields)._position3D.x,
      fVar5 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z,
      fVar6 = (pGVar1->fields)._position3D.y - (float)uVar3,
      fVar5 = fVar6 * fVar6 + ((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
               fVar5 * fVar5, s1 == (GizmoPlaneSlider3D *)0x0)) ||
     (pGVar1 = (s1->fields)._transform, pGVar1 == (GizmoTransform *)0x0)) {
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

