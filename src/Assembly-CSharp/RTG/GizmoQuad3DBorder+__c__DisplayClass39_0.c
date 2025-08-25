
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
      if (((pSVar3->klass->_1).naturalAligment < (TypeInfo__RTG__BoxShape3D->_1).naturalAligment)
         || ((pSVar3->klass->_1).typeHierarchy[(TypeInfo__RTG__BoxShape3D->_1).naturalAligment - 1]
             != (Il2CppClass *)TypeInfo__RTG__BoxShape3D)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pSVar4 = (Shape3D *)0x0;
      if (bVar5) {
        pSVar4 = pSVar3;
      }
    }
    pGVar1 = (this->fields).__4__this;
    if ((pGVar1 != (GizmoQuad3DBorder *)0x0) &&
       (pGVar2 = (pGVar1->fields)._targetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      pSVar3 = GizmoHandle::GizmoHandle_Get3DShape(pGVar2,i1,(MethodInfo *)0x0);
      if (pSVar4 != (Shape3D *)0x0) {
        uVar6 = (this->fields).camPos.x;
        uVar7 = (this->fields).camPos.y;
        pSStack_8 = pSVar4[3].klass;
        pMStack_9 = pSVar4[3].monitor;
        fVar10 = (float)pSVar4[4].klass - (this->fields).camPos.z;
        if (pSVar3 != (Shape3D *)0x0) {
          if (((TypeInfo__RTG__BoxShape3D->_1).naturalAligment <=
               (pSVar3->klass->_1).naturalAligment) &&
             (ppIVar11 = (pSVar3->klass->_1).typeHierarchy,
             ppIVar11[(TypeInfo__RTG__BoxShape3D->_1).naturalAligment - 1] ==
             (Il2CppClass *)TypeInfo__RTG__BoxShape3D)) {
            pSVar4 = (Shape3D *)0x0;
            if (ppIVar11[(TypeInfo__RTG__BoxShape3D->_1).naturalAligment - 1] ==
                (Il2CppClass *)TypeInfo__RTG__BoxShape3D) {
              pSVar4 = pSVar3;
            }
            uVar12 = (this->fields).camPos.x;
            uVar13 = (this->fields).camPos.y;
            fVar14 = (float)pSVar4[3].klass - (float)uVar12;
            fVar15 = (float)pSVar4[3].monitor - (float)uVar13;
            fVar16 = (float)pSVar4[4].klass - (this->fields).camPos.z;
            SStack_17.m_value = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
            iVar18 = mscorlib.dll::System::Single::Single_CompareTo_1
                               (&SStack_17,
                                ((float)pMStack_9 - (float)uVar7) *
                                ((float)pMStack_9 - (float)uVar7) +
                                ((float)pSStack_8 - (float)uVar6) *
                                ((float)pSStack_8 - (float)uVar6) + fVar10 * fVar10,
                                (MethodInfo *)0x0);
            return iVar18;
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  iVar18 = (*pcVar19)();
  return iVar18;
}

