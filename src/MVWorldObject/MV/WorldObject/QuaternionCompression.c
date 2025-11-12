
/* Quaternion FromEuler(Vector3) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_FromEuler
          (Quaternion *__return_storage_ptr__,Vector3 *eulerAngles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  pMVar1 = TypeInfo__System__Math;
  uVar2 = eulerAngles->x;
  uVar3 = eulerAngles->y;
  fVar4 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg;
  eulerAngles->x = fVar4 * (float)uVar2;
  eulerAngles->y = fVar4 * (float)uVar3;
  eulerAngles->z = fVar4 * eulerAngles->z;
  fVar4 = eulerAngles->y;
  fVar5 = eulerAngles->z;
  fVar6 = eulerAngles->x;
  if (*(int *)&(pMVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar7 = _UNK_?;
  dVar8 = (double)FUN_?((double)fVar6 * _UNK_?);
  dVar9 = (double)FUN_?((double)fVar6 * dVar7);
  dVar10 = (double)FUN_?((double)fVar4 * dVar7);
  dVar11 = (double)FUN_?((double)fVar4 * dVar7);
  dVar12 = (double)FUN_?((double)fVar5 * dVar7);
  dVar7 = (double)FUN_?((double)fVar5 * dVar7);
  __return_storage_ptr__->y = (float)(dVar11 * dVar8 * dVar7 + dVar10 * dVar9 * dVar12);
  __return_storage_ptr__->z = (float)(dVar11 * dVar8 * dVar12 - dVar10 * dVar9 * dVar7);
  __return_storage_ptr__->w = (float)(dVar10 * dVar8 * dVar12 - dVar11 * dVar9 * dVar7);
  __return_storage_ptr__->x = (float)(dVar10 * dVar8 * dVar7 + dVar11 * dVar9 * dVar12);
  return __return_storage_ptr__;
}


/* Single NormalizeAngle(Single) */

float MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
      QuaternionCompression_NormalizeAngle(float angle,MethodInfo *method)

{
  for (; _UNK_? < angle; angle = angle + _UNK_?) {
  }
  for (; angle < 0.0; angle = angle + _UNK_?) {
  }
  return angle;
}


/* Vector3 NormalizeAngles(Vector3) */

Vector3 * MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
          QuaternionCompression_NormalizeAngles
                    (Vector3 *__return_storage_ptr__,Vector3 *angles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = angles->x;
  if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
    FUN_?();
  }
  for (; fVar2 = _UNK_?, fVar3 = _UNK_?, _UNK_? < fVar1;
      fVar1 = fVar1 + _UNK_?) {
  }
  for (; fVar1 < 0.0; fVar1 = fVar1 + _UNK_?) {
  }
  fVar4 = angles->y;
  angles->x = fVar1;
  for (; fVar3 < fVar4; fVar4 = fVar4 + fVar2) {
  }
  for (; fVar4 < 0.0; fVar4 = fVar4 + fVar3) {
  }
  angles->y = fVar4;
  for (fVar1 = angles->z; fVar3 < fVar1; fVar1 = fVar1 + fVar2) {
  }
  for (; fVar1 < 0.0; fVar1 = fVar1 + fVar3) {
  }
  angles->z = fVar1;
  fVar1 = angles->z;
  fVar3 = angles->y;
  __return_storage_ptr__->x = angles->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Byte[] ToBytes(Quaternion) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToBytes
          (Quaternion *quaternion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_1.x = quaternion->x;
  QStack_1.y = quaternion->y;
  QStack_1.z = quaternion->z;
  QStack_1.w = quaternion->w;
  pVVar2 = QuaternionCompression_ToEuler(aVStack_3,&QStack_1,(MethodInfo *)0x0);
  QStack_1.x = pVVar2->x;
  QStack_1.y = pVVar2->y;
  fVar4 = pVVar2->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  for (fVar5 = QStack_1.x; _UNK_? < fVar5; fVar5 = fVar5 + _UNK_?) {
  }
  for (; fVar5 < 0.0; fVar5 = fVar5 + _UNK_?) {
  }
  for (fVar6 = QStack_1.y; _UNK_? < fVar6; fVar6 = fVar6 + _UNK_?) {
  }
  for (; fVar6 < 0.0; fVar6 = fVar6 + _UNK_?) {
  }
  for (; _UNK_? < fVar4; fVar4 = fVar4 + _UNK_?) {
  }
  for (; fVar4 < 0.0; fVar4 = fVar4 + _UNK_?) {
  }
  fVar7 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degreesToByteFactor;
  pBVar8 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,3);
  if (pBVar8 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    pBVar8 = (Byte__Array *)(*pcVar9)();
    return pBVar8;
  }
  if ((int)pBVar8->max_length != 0) {
    pBVar8->vector[0] = (uint8_t)(int)(fVar7 * fVar5);
    if (1 < (uint)pBVar8->max_length) {
      pBVar8->vector[1] = (uint8_t)(int)(fVar7 * fVar6);
      if (2 < (uint)pBVar8->max_length) {
        pBVar8->vector[2] = (uint8_t)(int)(fVar7 * fVar4);
        return pBVar8;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pBVar8 = (Byte__Array *)(*pcVar9)();
  return pBVar8;
}


/* Vector3 ToEuler(Quaternion) */

Vector3 * MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToEuler
                    (Vector3 *__return_storage_ptr__,Quaternion *q1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  dVar1 = (double)(q1->w * q1->w);
  dVar2 = (double)(q1->x * q1->x);
  dVar3 = (double)(q1->y * q1->y);
  dVar4 = (double)(q1->z * q1->z);
  dVar5 = (double)(q1->w * q1->z + q1->y * q1->x);
  dVar6 = dVar3 + dVar2 + dVar4 + dVar1;
  if (dVar6 * _UNK_? < dVar5) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar6 = (double)func_?((double)q1->x,(double)q1->w);
    dVar6 = dVar6 + dVar6;
    __return_storage_ptr__->y = 1.5707964;
    __return_storage_ptr__->z = 0.0;
  }
  else {
    if (dVar6 * _UNK_? <= dVar5) {
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      dVar7 = (double)func_?(((double)q1->y + (double)q1->y) * (double)q1->w -
                                          ((double)q1->x + (double)q1->x) * (double)q1->z,
                                          ((dVar2 - dVar3) - dVar4) + dVar1);
      dVar6 = (double)func_?((dVar5 + dVar5) / dVar6);
      dVar5 = (double)func_?(((double)q1->x + (double)q1->x) * (double)q1->w -
                                          (double)((q1->y + q1->y) * q1->z),
                                          (((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                                                             _UNK_?,
                                                             SUB84(dVar2,0) ^ _UNK_?) +
                                           dVar3) - dVar4) + dVar1);
      if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__QuaternionCompression);
      }
      fVar8 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degToRad;
      __return_storage_ptr__->x = fVar8 * (float)dVar7;
      __return_storage_ptr__->y = fVar8 * (float)dVar6;
      __return_storage_ptr__->z = fVar8 * (float)dVar5;
      return __return_storage_ptr__;
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar6 = (double)func_?((double)q1->x,(double)q1->w);
    dVar6 = dVar6 * _UNK_?;
    __return_storage_ptr__->y = -1.5707964;
    __return_storage_ptr__->z = 0.0;
  }
  __return_storage_ptr__->x = (float)dVar6;
  return __return_storage_ptr__;
}


/* Quaternion ToQuaternion(Byte[]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
          (Quaternion *__return_storage_ptr__,Byte__Array *eulerAnglesByteRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (eulerAnglesByteRange != (Byte__Array *)0x0) {
    if ((((int)eulerAnglesByteRange->max_length != 0) &&
        (1 < (uint)eulerAnglesByteRange->max_length)) &&
       (2 < (uint)eulerAnglesByteRange->max_length)) {
      bVar1 = eulerAnglesByteRange->vector[0];
      bVar2 = eulerAnglesByteRange->vector[1];
      bVar3 = eulerAnglesByteRange->vector[2];
      if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__QuaternionCompression);
      }
      fVar4 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->byteToDegreeFactor;
      VStack_5.z = fVar4 * (float)bVar3;
      VStack_5.y = fVar4 * (float)bVar2;
      VStack_5.x = fVar4 * (float)bVar1;
      pQVar6 = QuaternionCompression_FromEuler(aQStack_7,&VStack_5,(MethodInfo *)0x0);
      fVar4 = pQVar6->y;
      fVar8 = pQVar6->z;
      fVar9 = pQVar6->w;
      __return_storage_ptr__->x = pQVar6->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar8;
      __return_storage_ptr__->w = fVar9;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    pQVar6 = (Quaternion *)(*pcVar10)();
    return pQVar6;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar10)();
  return pQVar6;
}


/* QuaternionCompression() */

void MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degreesToByteFactor = 0.7111111;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->byteToDegreeFactor = 1.40625;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degToRad = 57.29578;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg = 0.017453292;
  return;
}

