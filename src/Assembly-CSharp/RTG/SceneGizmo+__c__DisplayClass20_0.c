
/* Int32 <OnGizmoRender>b__0(SceneGizmoCap, SceneGizmoCap) */

int32_t Assembly-CSharp.dll::RTG::SceneGizmo+<>c__DisplayClass20_0::
        SceneGizmo_c_DisplayClass20_0__OnGizmoRender_b__0
                  (SceneGizmo_c_DisplayClass20_0 *this,SceneGizmoCap *h0,SceneGizmoCap *h1,
                  MethodInfo *method)

{
  if ((h0 != (SceneGizmoCap *)0x0) && (pGVar1 = (h0->fields)._cap, pGVar1 != (GizmoCap3D *)0x0)) {
    pVVar2 = GizmoCap3D::GizmoCap3D_get_Position
                        ((Vector3 *)&stack0xffffffe0,pGVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    uVar5 = (this->fields).cameraPos.x;
    uVar6 = (this->fields).cameraPos.y;
    fVar7 = pVVar2->z - (this->fields).cameraPos.z;
    if ((h1 != (SceneGizmoCap *)0x0) && (pGVar1 = (h1->fields)._cap, pGVar1 != (GizmoCap3D *)0x0)) {
      pVVar2 = GizmoCap3D::GizmoCap3D_get_Position
                          ((Vector3 *)&stack0xffffffec,pGVar1,(MethodInfo *)0x0);
      uVar8 = pVVar2->x;
      uVar9 = pVVar2->y;
      uVar10 = (this->fields).cameraPos.x;
      uVar11 = (this->fields).cameraPos.y;
      fVar12 = pVVar2->z - (this->fields).cameraPos.z;
      SStack_13.m_value =
           ((float)uVar9 - (float)uVar11) * ((float)uVar9 - (float)uVar11) +
           ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) + fVar12 * fVar12;
      iVar14 = mscorlib.dll::System::Single::Single_CompareTo_1
                         (&SStack_13,
                          ((float)uVar4 - (float)uVar6) * ((float)uVar4 - (float)uVar6) +
                          ((float)uVar3 - (float)uVar5) * ((float)uVar3 - (float)uVar5) +
                          fVar7 * fVar7,(MethodInfo *)0x0);
      return iVar14;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  iVar14 = (*pcVar15)();
  return iVar14;
}

