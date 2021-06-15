
/* Quaternion FromEuler(Vector3) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_FromEuler
          (Quaternion *__return_storage_ptr__,Vector3 eulerAngles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  uStack_1._4_4_ = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)auStack_3,eulerAngles,uStack_1._4_4_,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  dVar7 = (double)(float)uVar4 * _UNK_?;
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  uStack_1 = dVar7;
  func_?();
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  dStack_9 = dVar7;
  func_?();
  dVar7 = (double)(float)uVar5 * _UNK_?;
  uStack_8._0_4_ = SUB84(uStack_1,0);
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  uStack_1 = dVar7;
  func_?();
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  dStack_10 = dVar7;
  func_?();
  dVar11 = (double)fVar6 * _UNK_?;
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  dVar7 = dVar11;
  func_?();
  uStack_8 = (double)CONCAT44(&UNK_?,(undefined4)uStack_8);
  unique0x10000380 = dVar7;
  func_?();
  dVar7 = uStack_1 * uStack_8;
  uStack_8 = (double)((ulonglong)uStack_8 & 0xffffffff);
  dVar12 = dStack_10 * uStack_8;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->w = 0.0;
  dVar13 = dVar7 * stack0xffffffd4;
  uStack_8 = (double)(ulonglong)
                      (uint)(float)(dStack_10 * dStack_9 * stack0xffffffd4 - dVar7 * dVar11);
  dVar7 = dVar12 * stack0xffffffd4;
  fStack_14 = (float)(uStack_1 * dStack_9 * stack0xffffffd4 - dVar12 * dVar11);
  auStack_3._4_4_ = (float)(dVar7 + uStack_1 * dStack_9 * dVar11);
  auStack_3._0_4_ = (undefined4)(dStack_10 * dStack_9 * dVar11 + dVar13);
  func_?(__return_storage_ptr__);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  q1.y = quaternion.y;
  q1.x = quaternion.x;
  q1.z = quaternion.z;
  q1.w = quaternion.w;
  pVVar1 = QuaternionCompression_ToEuler((Vector3 *)&quaternion.y,q1,(MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (cRam_? == '\0') {
    quaternion.x = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
    quaternion.x = (float)TypeInfo__MV__WorldObject__QuaternionCompression;
    func_?();
  }
  for (; _UNK_? < fVar2; fVar2 = fVar2 - _UNK_?) {
  }
  for (; fVar2 < 0.0; fVar2 = fVar2 + _UNK_?) {
  }
  for (; _UNK_? < fVar3; fVar3 = fVar3 - _UNK_?) {
  }
  for (; fVar3 < 0.0; fVar3 = fVar3 + _UNK_?) {
  }
  for (; _UNK_? < fVar4; fVar4 = fVar4 - _UNK_?) {
  }
  for (; fVar4 < 0.0; fVar4 = fVar4 + _UNK_?) {
  }
  quaternion.w = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->
                 degreesToByteFactor;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    quaternion.x = (float)TypeInfo__UnityEngine__Vector3;
    func_?();
  }
  quaternion.x = 0.0;
  a.y = fVar3;
  a.x = fVar2;
  a.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a,quaternion.w,(MethodInfo *)0x0);
  quaternion.x = 4.2039e-45;
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  quaternion.w = pVVar1->z;
  quaternion.y = (float)uVar5;
  quaternion.z = (float)uVar6;
  pBVar7 = (Byte__Array *)func_?();
  if (pBVar7 == (Byte__Array *)0x0) {
    uStack8 = 0;
    func_?();
code_?:
    uStack8 = 0;
    puStack9 = (undefined *)0x0;
    func_?();
    quaternion.w = (float)&UNK_?;
    func_?();
  }
  else {
    if (pBVar7->max_length == 0) goto code_?;
    pBVar7->vector[0] = (uint8_t)(int)quaternion.y;
    if (1 < pBVar7->max_length) {
      pBVar7->vector[1] = (uint8_t)(int)quaternion.z;
      if (2 < pBVar7->max_length) {
        pBVar7->vector[2] = (uint8_t)(int)quaternion.w;
        return pBVar7;
      }
      goto code_?;
    }
  }
  uStack8 = 0;
  puStack9 = (undefined *)0x0;
  func_?();
  quaternion.w = (float)&UNK_?;
  func_?();
code_?:
  uStack8 = 0;
  puStack9 = (undefined *)0x0;
  func_?();
  quaternion.w = (float)&UNK_?;
  func_?();
  pcVar10 = (code *)swi(3);
  pBVar7 = (Byte__Array *)(*pcVar10)();
  return pBVar7;
}


/* Vector3 ToEuler(Quaternion) */

Vector3 * MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToEuler
                    (Vector3 *__return_storage_ptr__,Quaternion q1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  dStack_2 = (double)(q1.w * q1.w);
  dStack_3 = (double)(q1.x * q1.x);
  dStack_4 = (double)(q1.y * q1.y);
  dStack_5 = (double)(q1.z * q1.z);
  dStack_6 = dStack_4 + dStack_3 + dStack_5 + dStack_2;
  dStack_7 = (double)(q1.y * q1.x + q1.z * q1.w);
  if (dStack_6 * _UNK_? < dStack_7) {
    uStack_8 = 0;
    q1._8_8_ = (BADTYPE)q1.w;
    fVar9 = (float10)func_?();
    uVar10 = 0;
    q1._8_8_ = (BADTYPE)fVar9;
    dVar11 = (double)q1._8_8_ + (double)q1._8_8_;
    uVar12 = 0;
    uVar13 = 0x3fc90fdb;
  }
  else {
    uVar10 = 0;
    uStack_8 = 0;
    if (dStack_6 * _UNK_? <= dStack_7) {
      dStack_14 = (double)q1.y;
      dStack_15 = (double)q1.x + (double)q1.x;
      uStack_16 = (((double)CONCAT44((uint)((ulonglong)dStack_3 >> 0x20) ^ _UNK_?,
                                    SUB84(dStack_3,0) ^ _UNK_?) + dStack_4) - dStack_5) +
                 dStack_2;
      fVar9 = (float10)func_?();
      uStack_16 = (double)CONCAT44((float)fVar9,(undefined4)uStack_16);
      dVar11 = (dStack_7 + dStack_7) / dStack_6;
      func_?((float)fVar9);
      q1._8_8_ = ((dStack_3 - dStack_4) - dStack_5) + dStack_2;
      fVar9 = (float10)func_?((float)dVar11);
      q1.w = (float)fVar9;
      func_?(&uStack_8,q1.w);
      if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
      }
      q1.w = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->degToRad;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fStack_1;
      a.x = (float)(undefined4)uStack_8;
      a.y = (float)uStack_8._4_4_;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&q1.y,a,q1.w,(MethodInfo *)0x0);
      fVar18 = pVVar17->y;
      fVar19 = pVVar17->z;
      __return_storage_ptr__->x = pVVar17->x;
      __return_storage_ptr__->y = fVar18;
      __return_storage_ptr__->z = fVar19;
      return __return_storage_ptr__;
    }
    uVar12 = 0;
    uVar13 = 0xbfc90fdb;
    q1._8_8_ = (BADTYPE)q1.w;
    fVar9 = (float10)func_?(0xbfc90fdb,0,0);
    q1._8_8_ = (BADTYPE)fVar9;
    dVar11 = (double)q1._8_8_ * _UNK_?;
  }
  func_?(&uStack_8,(float)dVar11,uVar13,uVar12,uVar10);
  __return_storage_ptr__->x = (float)(undefined4)uStack_8;
  __return_storage_ptr__->y = (float)uStack_8._4_4_;
  __return_storage_ptr__->z = fStack_1;
  return __return_storage_ptr__;
}


/* Quaternion ToQuaternion(Byte[]) */

Quaternion *
MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
          (Quaternion *__return_storage_ptr__,Byte__Array *eulerAnglesByteRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eulerAnglesByteRange == (Byte__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    uVar2 = eulerAnglesByteRange->max_length;
    if (uVar2 == 0) goto code_?;
    if (1 < uVar2) {
      if (2 < uVar2) {
        func_?(&stack0xffffffb4,(float)eulerAnglesByteRange->vector[0],
                        (float)eulerAnglesByteRange->vector[1],
                        (float)eulerAnglesByteRange->vector[2]);
        if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
          func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
        }
        fVar3 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->byteToDegreeFactor;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_5,(Vector3)ZEXT812(0),fVar3,(MethodInfo *)0x0);
        dStack_6._0_4_ = pVVar4->x;
        dStack_6._4_4_ = pVVar4->y;
        fVar3 = pVVar4->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
          func_?();
        }
        d = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->radToDeg;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar3;
        a._0_8_ = dStack_6;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffa8,a,d,(MethodInfo *)0x0);
        uVar7 = pVVar4->x;
        uVar8 = pVVar4->y;
        VStack_5.z = pVVar4->z;
        dVar9 = (double)(float)uVar7 * _UNK_?;
        VStack_5.x = (float)uVar7;
        VStack_5.y = (float)uVar8;
        dStack_6 = dVar9;
        func_?();
        dStack_10 = dVar9;
        func_?();
        dVar9 = (double)VStack_5.y * _UNK_?;
        uStack_11 = dStack_6;
        dStack_6 = dVar9;
        func_?();
        dStack_12 = dVar9;
        func_?();
        dVar9 = (double)VStack_5.z * _UNK_?;
        dStack_13 = dStack_6;
        dStack_6 = dVar9;
        func_?();
        VStack_5.y = SUB84(dVar9,0);
        VStack_5.z = (float)((ulonglong)dVar9 >> 0x20);
        dVar14 = dStack_6;
        func_?();
        dVar9 = (double)CONCAT44(VStack_5.z,VStack_5.y);
        dVar15 = dStack_13 * uStack_11;
        dVar16 = dStack_12 * uStack_11;
        puStack_17 = (undefined *)0x0;
        fStack_18 = 0.0;
        uStack_11 = 0.0;
        VStack_5.z = (float)(dStack_12 * dStack_10 * dVar9 - dVar15 * dVar14);
        VStack_5.y = (float)(dStack_13 * dStack_10 * dVar9 - dVar16 * dVar14);
        VStack_5.x = (float)(dVar16 * dVar9 + dStack_13 * dStack_10 * dVar14);
        func_?();
        __return_storage_ptr__->x = (float)puStack_17;
        __return_storage_ptr__->y = fStack_18;
        __return_storage_ptr__->z = (float)uStack_11;
        __return_storage_ptr__->w = uStack_11._4_4_;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar19 = (code *)swi(3);
  pQVar20 = (Quaternion *)(*pcVar19)();
  return pQVar20;
}


/* QuaternionCompression() */

void MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields;
  pQVar1->degreesToByteFactor = 0.7111111;
  pQVar1->byteToDegreeFactor = 1.40625;
  pQVar1->degToRad = 57.29578;
  pQVar1->radToDeg = 0.017453292;
  return;
}

