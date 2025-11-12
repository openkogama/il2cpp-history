
/* PlaneDescriptor(PlaneId, PlaneQuadrantId) */

void Assembly-CSharp.dll::RTG::PlaneDescriptor::PlaneDescriptor__ctor
               (PlaneDescriptor *this,PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->_id = planeId;
  this->_quadrant = planeQuadrant;
  if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
                     (planeId,planeQuadrant,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  this->_firstAxisDescriptor = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->_firstAxisDescriptor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar1 = PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
                     (planeId,planeQuadrant,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  this->_secondAxisDescriptor = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->_secondAxisDescriptor >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Int32 get_FirstAxisIndex() */

int32_t Assembly-CSharp.dll::RTG::PlaneDescriptor::PlaneDescriptor_get_FirstAxisIndex
                  (PlaneDescriptor *this,MethodInfo *method)

{
  if (this->_firstAxisDescriptor != (AxisDescriptor *)0x0) {
    return (this->_firstAxisDescriptor->fields)._index;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* AxisSign get_FirstAxisSign() */

AxisSign__Enum
Assembly-CSharp.dll::RTG::PlaneDescriptor::PlaneDescriptor_get_FirstAxisSign
          (PlaneDescriptor *this,MethodInfo *method)

{
  if (this->_firstAxisDescriptor != (AxisDescriptor *)0x0) {
    return (this->_firstAxisDescriptor->fields)._sign;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  AVar2 = (*pcVar1)();
  return AVar2;
}


/* Int32 get_SecondAxisIndex() */

int32_t Assembly-CSharp.dll::RTG::PlaneDescriptor::PlaneDescriptor_get_SecondAxisIndex
                  (PlaneDescriptor *this,MethodInfo *method)

{
  if (this->_secondAxisDescriptor != (AxisDescriptor *)0x0) {
    return (this->_secondAxisDescriptor->fields)._index;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

