
/* Int32 <Render>b__0(Int32, Int32) */

int32_t Assembly-CSharp.dll::RTG::GizmoQuad3DBorder+<>c__DisplayClass39_0::
        GizmoQuad3DBorder_c_DisplayClass39_0__Render_b__0
                  (GizmoQuad3DBorder_c_DisplayClass39_0 *this,int32_t i0,int32_t i1,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxShape3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).__4__this;
  if ((pGVar1 != (GizmoQuad3DBorder *)0x0) &&
     (pGVar2 = (pGVar1->fields)._targetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    pSVar3 = GizmoHandle::GizmoHandle_Get3DShape(pGVar2,i0,(MethodInfo *)0x0);
    pSVar4 = (Shape3D *)0x0;
    pSVar5 = pSVar4;
    if (pSVar3 != (Shape3D *)0x0) {
      bVar6 = (TypeInfo__RTG__BoxShape3D->_1).naturalAligment;
      if (((pSVar3->klass->_1).naturalAligment < bVar6) ||
         (bVar7 = true,
         (pSVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
         (Il2CppClass *)TypeInfo__RTG__BoxShape3D)) {
        bVar7 = false;
      }
      if (bVar7) {
        pSVar5 = pSVar3;
      }
    }
    pGVar1 = (this->fields).__4__this;
    if ((((pGVar1 != (GizmoQuad3DBorder *)0x0) &&
         (pGVar2 = (pGVar1->fields)._targetHandle, pGVar2 != (GizmoHandle *)0x0)) &&
        (pSVar3 = GizmoHandle::GizmoHandle_Get3DShape(pGVar2,i1,(MethodInfo *)0x0),
        pSVar5 != (Shape3D *)0x0)) &&
       (uVar8 = (this->fields).camPos.x, uVar9 = (this->fields).camPos.y,
       fVar10 = (float)*(undefined8 *)((longlong)&pSVar5[2].klass + 4) - (float)uVar8,
       fVar11 = *(float *)((longlong)&pSVar5[2].monitor + 4) - (this->fields).camPos.z,
       fVar12 = *(float *)&pSVar5[2].monitor - (float)uVar9,
       fVar11 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11, pSVar3 != (Shape3D *)0x0)) {
      bVar6 = (TypeInfo__RTG__BoxShape3D->_1).naturalAligment;
      if ((bVar6 <= (pSVar3->klass->_1).naturalAligment) &&
         ((pSVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
          (Il2CppClass *)TypeInfo__RTG__BoxShape3D)) {
        uVar13 = (this->fields).camPos.x;
        uVar14 = (this->fields).camPos.y;
        if ((pSVar3->klass->_1).typeHierarchy
            [(ulonglong)(TypeInfo__RTG__BoxShape3D->_1).naturalAligment - 1] ==
            (Il2CppClass *)TypeInfo__RTG__BoxShape3D) {
          pSVar4 = pSVar3;
        }
        fVar12 = (float)*(undefined8 *)((longlong)&pSVar4[2].klass + 4) - (float)uVar13;
        fVar15 = *(float *)&pSVar4[2].monitor - (float)uVar14;
        fVar10 = *(float *)((longlong)&pSVar4[2].monitor + 4) - (this->fields).camPos.z;
        fVar10 = fVar15 * fVar15 + fVar12 * fVar12 + fVar10 * fVar10;
        if (fVar10 < fVar11) {
          return -1;
        }
        if (fVar10 <= fVar11) {
          if (fVar10 == fVar11) {
            return 0;
          }
          if (0x7f800000 < (uint)ABS(fVar10)) {
            return (0x7f800000 < (uint)ABS(fVar11)) - 1;
          }
        }
        return 1;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
}

