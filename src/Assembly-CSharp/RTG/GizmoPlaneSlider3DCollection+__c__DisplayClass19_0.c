
/* Int32 <GetRenderSortedSliders>b__0(GizmoPlaneSlider3D, GizmoPlaneSlider3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DCollection+<>c__DisplayClass19_0::
        GizmoPlaneSlider3DCollection_c_DisplayClass19_0__GetRenderSortedSliders_b__0
                  (GizmoPlaneSlider3DCollection_c_DisplayClass19_0 *this,GizmoPlaneSlider3D *s0,
                  GizmoPlaneSlider3D *s1,MethodInfo *method)

{
  if ((s0 != (GizmoPlaneSlider3D *)0x0) &&
     (pGVar1 = (s0->fields)._transform, pGVar1 != (GizmoTransform *)0x0)) {
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    uVar4 = (this->fields).cameraPos.x;
    uVar5 = (this->fields).cameraPos.y;
    fVar6 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z;
    if ((s1 != (GizmoPlaneSlider3D *)0x0) &&
       (pGVar1 = (s1->fields)._transform, pGVar1 != (GizmoTransform *)0x0)) {
      uVar7 = (pGVar1->fields)._position3D.x;
      uVar8 = (pGVar1->fields)._position3D.y;
      uVar9 = (this->fields).cameraPos.x;
      uVar10 = (this->fields).cameraPos.y;
      fVar11 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z;
      s0 = (GizmoPlaneSlider3D *)
           (((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) +
            ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) + fVar11 * fVar11);
      iVar12 = mscorlib.dll::System::Single::Single_CompareTo_1
                         ((Single *)&s0,
                          ((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) +
                          ((float)uVar3 - (float)uVar5) * ((float)uVar3 - (float)uVar5) +
                          fVar6 * fVar6,(MethodInfo *)0x0);
      return iVar12;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  iVar12 = (*pcVar13)();
  return iVar12;
}

