
/* Int32 <Render>b__0(Int32, Int32) */

int32_t Assembly-CSharp.dll::RTG::GizmoQuad3DBorder+<>c__DisplayClass39_0::
        GizmoQuad3DBorder_c_DisplayClass39_0__Render_b__0
                  (GizmoQuad3DBorder_c_DisplayClass39_0 *this,int32_t i0,int32_t i1,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxShape3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).__4__this;
  if ((pGVar1 != (GizmoQuad3DBorder *)0x0) &&
     (pGVar2 = (pGVar1->fields)._targetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    pSVar3 = GizmoHandle::GizmoHandle_Get3DShape(pGVar2,i0,(MethodInfo *)0x0);
    if (pSVar3 == (Shape3D *)0x0) {
      pSVar4 = (Shape3D *)0x0;
    }
    else {
      bVar5 = (TypeInfo__RTG__BoxShape3D->_1).naturalAligment;
      if (((pSVar3->klass->_1).naturalAligment < bVar5) ||
         ((pSVar3->klass->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__RTG__BoxShape3D)
         ) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pSVar4 = (Shape3D *)0x0;
      if (bVar6) {
        pSVar4 = pSVar3;
      }
    }
    pGVar1 = (this->fields).__4__this;
    if ((pGVar1 != (GizmoQuad3DBorder *)0x0) &&
       (pGVar2 = (pGVar1->fields)._targetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      pSVar3 = GizmoHandle::GizmoHandle_Get3DShape(pGVar2,i1,(MethodInfo *)0x0);
      if (pSVar4 != (Shape3D *)0x0) {
        uVar7 = (this->fields).camPos.x;
        uVar8 = (this->fields).camPos.y;
        pSStack_9 = pSVar4[3].klass;
        pMStack_10 = pSVar4[3].monitor;
        fVar11 = (float)pSVar4[4].klass - (this->fields).camPos.z;
        if (pSVar3 != (Shape3D *)0x0) {
          bVar5 = (TypeInfo__RTG__BoxShape3D->_1).naturalAligment;
          if ((bVar5 <= (pSVar3->klass->_1).naturalAligment) &&
             (ppIVar12 = (pSVar3->klass->_1).typeHierarchy,
             ppIVar12[bVar5 - 1] == (Il2CppClass *)TypeInfo__RTG__BoxShape3D)) {
            pSVar4 = (Shape3D *)0x0;
            if (ppIVar12[bVar5 - 1] == (Il2CppClass *)TypeInfo__RTG__BoxShape3D) {
              pSVar4 = pSVar3;
            }
            uVar13 = (this->fields).camPos.x;
            uVar14 = (this->fields).camPos.y;
            fVar15 = (float)pSVar4[3].klass - (float)uVar13;
            fVar16 = (float)pSVar4[3].monitor - (float)uVar14;
            fVar17 = (float)pSVar4[4].klass - (this->fields).camPos.z;
            SStack_18.m_value = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
            iVar19 = mscorlib.dll::System::Single::Single_CompareTo_1
                               (&SStack_18,
                                ((float)pMStack_10 - (float)uVar8) *
                                ((float)pMStack_10 - (float)uVar8) +
                                ((float)pSStack_9 - (float)uVar7) *
                                ((float)pSStack_9 - (float)uVar7) + fVar11 * fVar11,
                                (MethodInfo *)0x0);
            return iVar19;
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  iVar19 = (*pcVar20)();
  return iVar19;
}

