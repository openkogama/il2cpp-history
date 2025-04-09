
/* Int32 <GetRenderSortedCaps>b__0(GizmoCap3D, GizmoCap3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoCap3DCollection+<>c__DisplayClass15_0::
        GizmoCap3DCollection_c_DisplayClass15_0__GetRenderSortedCaps_b__0
                  (GizmoCap3DCollection_c_DisplayClass15_0 *this,GizmoCap3D *c0,GizmoCap3D *c1,
                  MethodInfo *method)

{
  if ((c0 != (GizmoCap3D *)0x0) &&
     (pGVar1 = (c0->fields)._transform, pGVar1 != (GizmoTransform *)0x0)) {
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    uVar4 = (this->fields).cameraPos.x;
    uVar5 = (this->fields).cameraPos.y;
    fVar6 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z;
    if ((c1 != (GizmoCap3D *)0x0) &&
       (pGVar1 = (c1->fields)._transform, pGVar1 != (GizmoTransform *)0x0)) {
      uVar7 = (pGVar1->fields)._position3D.x;
      uVar8 = (pGVar1->fields)._position3D.y;
      uVar9 = (this->fields).cameraPos.x;
      uVar10 = (this->fields).cameraPos.y;
      fVar11 = (pGVar1->fields)._position3D.z - (this->fields).cameraPos.z;
      c0 = (GizmoCap3D *)
           (((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) +
            ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) + fVar11 * fVar11);
      iVar12 = mscorlib.dll::System::Single::Single_CompareTo_1
                         ((Single *)&c0,
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

