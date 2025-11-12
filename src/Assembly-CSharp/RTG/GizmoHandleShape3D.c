
/* GizmoHandleShape3D(Shape3D) */

void Assembly-CSharp.dll::RTG::GizmoHandleShape3D::GizmoHandleShape3D__ctor
               (GizmoHandleShape3D *this,Shape3D *shape,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  (this->fields)._shape = shape;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._shape >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

