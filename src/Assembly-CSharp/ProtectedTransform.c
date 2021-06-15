
/* Vector3 get_localPosition() */

Vector3 * Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_localPosition
                    (Vector3 *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_localRotation() */

Quaternion *
Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_localRotation
          (Quaternion *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Vector3 get_localScale() */

Vector3 * Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_localScale
                    (Vector3 *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_position() */

Vector3 * Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_position
                    (Vector3 *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_rotation() */

Quaternion *
Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_rotation
          (Quaternion *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Void set_localPosition(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localPosition
               (ProtectedTransform *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_localPosition_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_localRotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localRotation
               (ProtectedTransform *this,Quaternion value,MethodInfo *method)

{
  fVar1 = value.x;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = MathFunctions::MathFunctions_IsQuaternionFloatsValid(value,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_localRotation_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    auVar3._8_4_ = 0;
    auVar3._0_8_ = value._8_8_;
    auVar3 = auVar3 << 0x20;
    fVar4 = (float)auVar3._0_4_;
    this = (ProtectedTransform *)auVar3._4_4_;
    value.x = (float)auVar3._8_4_;
    value_00.x = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_localScale(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localScale
               (ProtectedTransform *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_localScale_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_position(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_position
               (ProtectedTransform *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_position_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_rotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_rotation
               (ProtectedTransform *this,Quaternion value,MethodInfo *method)

{
  fVar1 = value.x;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar2 = MathFunctions::MathFunctions_IsQuaternionFloatsValid(value,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_rotation_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    auVar3._8_4_ = 0;
    auVar3._0_8_ = value._8_8_;
    auVar3 = auVar3 << 0x20;
    fVar4 = (float)auVar3._0_4_;
    this = (ProtectedTransform *)auVar3._4_4_;
    value.x = (float)auVar3._8_4_;
    value_00.x = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

