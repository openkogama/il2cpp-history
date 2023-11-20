
/* Quaternion FromEuler(Vector3) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_FromEuler
          (Quaternion *__return_storage_ptr__,Vector3 eulerAngles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  fVar1 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar2 = (double)(eulerAngles.x * fVar1) * _UNK_?;
  func_?();
  dVar3 = (double)(eulerAngles.x * fVar1) * _UNK_?;
  func_?();
  dVar4 = (double)(eulerAngles.y * fVar1) * _UNK_?;
  func_?();
  dVar5 = (double)(eulerAngles.y * fVar1) * _UNK_?;
  func_?();
  dVar6 = (double)(eulerAngles.z * fVar1) * _UNK_?;
  func_?();
  dVar7 = (double)(eulerAngles.z * fVar1) * _UNK_?;
  func_?();
  __return_storage_ptr__->x = (float)(dVar4 * dVar2 * dVar7 + dVar5 * dVar3 * dVar6);
  __return_storage_ptr__->y = (float)(dVar5 * dVar2 * dVar7 + dVar4 * dVar3 * dVar6);
  __return_storage_ptr__->z = (float)(dVar5 * dVar2 * dVar6 - dVar4 * dVar3 * dVar7);
  __return_storage_ptr__->w = (float)(dVar4 * dVar2 * dVar6 - dVar5 * dVar3 * dVar7);
  return __return_storage_ptr__;
}


/* Single NormalizeAngle(Single) */

float MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
      QuaternionCompression_NormalizeAngle(float angle,MethodInfo *method)

{
  for (; _UNK_? < angle; angle = angle - _UNK_?) {
  }
  for (; angle < 0.0; angle = angle + _UNK_?) {
  }
  return angle;
}


/* Vector3 NormalizeAngles(Vector3) */

Vector3 * MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
          QuaternionCompression_NormalizeAngles
                    (Vector3 *__return_storage_ptr__,Vector3 angles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  for (; _UNK_? < angles.x; angles.x = angles.x - _UNK_?) {
  }
  for (; angles.x < 0.0; angles.x = angles.x + _UNK_?) {
  }
  for (; _UNK_? < angles.y; angles.y = angles.y - _UNK_?) {
  }
  for (; angles.y < 0.0; angles.y = angles.y + _UNK_?) {
  }
  for (; _UNK_? < angles.z; angles.z = angles.z - _UNK_?) {
  }
  for (; angles.z < 0.0; angles.z = angles.z + _UNK_?) {
  }
  __return_storage_ptr__->x = angles.x;
  __return_storage_ptr__->y = angles.y;
  __return_storage_ptr__->z = angles.z;
  return __return_storage_ptr__;
}


/* Byte[] ToBytes(Quaternion) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToBytes
          (Quaternion quaternion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  pVVar1 = QuaternionCompression_ToEuler(&VStack_2,quaternion,(MethodInfo *)0x0);
  fVar3 = pVVar1->x;
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  for (; _UNK_? < fVar3; fVar3 = fVar3 - _UNK_?) {
  }
  for (; fVar3 < 0.0; fVar3 = fVar3 + _UNK_?) {
  }
  for (; _UNK_? < fVar4; fVar4 = fVar4 - _UNK_?) {
  }
  for (; fVar4 < 0.0; fVar4 = fVar4 + _UNK_?) {
  }
  for (; _UNK_? < fVar5; fVar5 = fVar5 - _UNK_?) {
  }
  for (; fVar5 < 0.0; fVar5 = fVar5 + _UNK_?) {
  }
  fVar4 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degreesToByteFactor;
  pBStack_6 = TypeInfo__System__Byte;
  pBVar7 = (Byte__Array *)func_?();
  if (pBVar7 == (Byte__Array *)0x0) {
    func_?();
  }
  else if (pBVar7->max_length != 0) {
    pBVar7->vector[0] = (uint8_t)(int)(fVar3 * fVar4);
    if (1 < pBVar7->max_length) {
      pBVar7->vector[1] = (uint8_t)(int)(float)pBStack_6;
      if (2 < pBVar7->max_length) {
        pBVar7->vector[2] = (uint8_t)(int)(float)puStack_8;
        return pBVar7;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar7 = (Byte__Array *)(*pcVar9)();
  return pBVar7;
}


/* Vector3 ToEuler(Quaternion) */

Vector3 * MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToEuler
                    (Vector3 *__return_storage_ptr__,Quaternion q1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  dVar1 = (double)(q1.y * q1.y) + (double)(q1.x * q1.x) + (double)(q1.z * q1.z) +
          (double)(q1.w * q1.w);
  dVar2 = (double)(q1.y * q1.x + q1.z * q1.w);
  if (dVar2 <= dVar1 * _UNK_?) {
    if (dVar1 * _UNK_? <= dVar2) {
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      fVar3 = (float10)func_?();
      dVar1 = (dVar2 + dVar2) / dVar1;
      func_?();
      fVar4 = (float10)func_?();
      if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
      }
      fVar5 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degToRad;
      __return_storage_ptr__->x = (float)fVar3 * fVar5;
      __return_storage_ptr__->y = (float)dVar1 * fVar5;
      __return_storage_ptr__->z = (float)fVar4 * fVar5;
      return __return_storage_ptr__;
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar3 = (float10)func_?();
    dVar1 = (double)fVar3 * _UNK_?;
    __return_storage_ptr__->y = -1.5707964;
    __return_storage_ptr__->z = 0.0;
    __return_storage_ptr__->x = (float)dVar1;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar3 = (float10)func_?();
  __return_storage_ptr__->y = 1.5707964;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->x = (float)((double)fVar3 + (double)fVar3);
  return __return_storage_ptr__;
}


/* Quaternion ToQuaternion(Byte[]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
          (Quaternion *__return_storage_ptr__,Byte__Array *eulerAnglesByteRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if (eulerAnglesByteRange == (Byte__Array *)0x0) {
    func_?();
  }
  else if (((eulerAnglesByteRange->max_length != 0) && (1 < eulerAnglesByteRange->max_length)) &&
          (2 < eulerAnglesByteRange->max_length)) {
    QStack_1.x = (float)eulerAnglesByteRange->vector[0];
    fStack_2 = (float)eulerAnglesByteRange->vector[1];
    fStack_3 = (float)eulerAnglesByteRange->vector[2];
    QStack_1.y = 0.0;
    QStack_1.z = 0.0;
    QStack_1.w = 0.0;
    if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
    }
    fVar4 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->byteToDegreeFactor;
    QStack_1.w = fStack_3 * fVar4;
    eulerAngles.y = fStack_2 * fVar4;
    eulerAngles.x = QStack_1.x * fVar4;
    eulerAngles.z = QStack_1.w;
    pQVar5 = QuaternionCompression_FromEuler(&QStack_1,eulerAngles,(MethodInfo *)0x0);
    fVar4 = pQVar5->y;
    fVar6 = pQVar5->z;
    fVar7 = pQVar5->w;
    __return_storage_ptr__->x = pQVar5->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar6;
    __return_storage_ptr__->w = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pQVar5 = (Quaternion *)(*pcVar8)();
  return pQVar5;
}


/* QuaternionCompression() */

void MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degreesToByteFactor = 0.7111111;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->byteToDegreeFactor = 1.40625;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degToRad = 57.29578;
  TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg = 0.017453292;
  return;
}

