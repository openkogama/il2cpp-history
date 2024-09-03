
/* Int32 <Render_SystemCall>b__0(Gizmo, Gizmo) */

int32_t Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass115_0::
        RTGizmosEngine_c_DisplayClass115_0__Render_SystemCall_b__0
                  (RTGizmosEngine_c_DisplayClass115_0 *this,Gizmo *g0,Gizmo *g1,MethodInfo *method)

{
  if ((g0 != (Gizmo *)0x0) && (pGVar1 = (g0->fields)._transform, pGVar1 != (GizmoTransform *)0x0)) {
    uVar2 = (pGVar1->fields)._position3D.x;
    uVar3 = (pGVar1->fields)._position3D.y;
    uVar4 = (this->fields).camPos.x;
    uVar5 = (this->fields).camPos.y;
    fVar6 = (pGVar1->fields)._position3D.z - (this->fields).camPos.z;
    if ((g1 != (Gizmo *)0x0) && (pGVar1 = (g1->fields)._transform, pGVar1 != (GizmoTransform *)0x0))
    {
      uVar7 = (pGVar1->fields)._position3D.x;
      uVar8 = (pGVar1->fields)._position3D.y;
      uVar9 = (this->fields).camPos.x;
      uVar10 = (this->fields).camPos.y;
      fVar11 = (pGVar1->fields)._position3D.z - (this->fields).camPos.z;
      g0 = (Gizmo *)(((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) +
                     ((float)uVar8 - (float)uVar10) * ((float)uVar8 - (float)uVar10) + fVar11 * fVar11
                    );
      iVar12 = mscorlib.dll::System::Single::Single_CompareTo_1
                         ((Single *)&g0,
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

