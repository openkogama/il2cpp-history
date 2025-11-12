
/* XZGridRayHit(Ray, XZGridCell, Single) */

void Assembly-CSharp.dll::RTG::XZGridRayHit::XZGridRayHit__ctor
               (XZGridRayHit *this,Ray *ray,XZGridCell *hitCell,float hitEnter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._hitCell = hitCell;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uVar6 = (ray->m_Direction).x;
  uVar7 = (ray->m_Direction).y;
  (this->fields)._hitEnter = hitEnter;
  auStack_8[0]._0_4_ = (ray->m_Origin).x;
  auStack_8[0]._4_4_ = (ray->m_Origin).y;
  fVar9 = (ray->m_Direction).z;
  fVar10 = (ray->m_Origin).z;
  (this->fields)._hitPoint.x = (float)uVar6 * hitEnter + (float)(undefined4)auStack_8[0];
  (this->fields)._hitPoint.y = (float)uVar7 * hitEnter + (float)auStack_8[0]._4_4_;
  (this->fields)._hitPoint.z = fVar9 * hitEnter + fVar10;
  if ((hitCell == (XZGridCell *)0x0) ||
     (pIVar11 = (hitCell->fields)._parentGrid, pIVar11 == (IXZGrid *)0x0)) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar13 = pIVar11->klass;
  uVar14 = 0;
  uVar15._0_1_ = (pIVar13->_1).rank;
  uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
  if (uVar15 != 0) {
    do {
      if (pIVar13->interfaceOffsets[uVar14].interfaceType == (Il2CppClass *)TypeInfo__RTG__IXZGrid) {
        pVVar16 = &(pIVar13->vtable).get_WorldPlane + pIVar13->interfaceOffsets[uVar14].offset;
        goto code_?;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
  }
  pVVar16 = (VirtualInvokeData *)FUN_?(pIVar11,TypeInfo__RTG__IXZGrid,0);
code_?:
  puVar17 = (undefined8 *)(*pVVar16->methodPtr)(auStack_8,pIVar11,pVVar16->method);
  uVar18 = *puVar17;
  uVar19 = puVar17[1];
  (this->fields)._hitPlane.m_Normal.x = (float)(int)uVar18;
  (this->fields)._hitPlane.m_Normal.y = (float)(int)((ulonglong)uVar18 >> 0x20);
  *(undefined8 *)&(this->fields)._hitPlane.m_Normal.z = uVar19;
  fVar9 = (this->fields)._hitPlane.m_Normal.z;
  (this->fields)._hitNormal.x = (float)(int)uVar18;
  (this->fields)._hitNormal.y = (float)(int)((ulonglong)uVar18 >> 0x20);
  (this->fields)._hitNormal.z = fVar9;
  return;
}


/* Plane get_HitPlane() */

Plane * Assembly-CSharp.dll::RTG::XZGridRayHit::XZGridRayHit_get_HitPlane
                  (Plane *__return_storage_ptr__,XZGridRayHit *this,MethodInfo *method)

{
  fVar1 = (this->fields)._hitPlane.m_Normal.y;
  uVar2 = *(undefined8 *)&(this->fields)._hitPlane.m_Normal.z;
  (__return_storage_ptr__->m_Normal).x = (this->fields)._hitPlane.m_Normal.x;
  (__return_storage_ptr__->m_Normal).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar2;
  return __return_storage_ptr__;
}

