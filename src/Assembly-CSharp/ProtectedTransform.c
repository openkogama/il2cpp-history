
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
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    ppDVar2 = &TypeInfo__UnityEngine__Debug;
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_localPosition_invalid,ppDVar2,uVar1);
    cRam_? = '\x01';
  }
  bVar3 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_localRotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localRotation
               (ProtectedTransform *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_localRotation_invalid);
    cRam_? = '\x01';
  }
  bVar1 = MathFunctions::MathFunctions_IsQuaternionFloatsValid(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_localRotation_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_localScale(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localScale
               (ProtectedTransform *this,Vector3 value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    ppDVar2 = &TypeInfo__UnityEngine__Debug;
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_localScale_invalid,ppDVar2,uVar1);
    cRam_? = '\x01';
  }
  bVar3 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_position(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_position
               (ProtectedTransform *this,Vector3 value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    ppDVar2 = &TypeInfo__UnityEngine__Debug;
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_position_invalid,ppDVar2,uVar1);
    cRam_? = '\x01';
  }
  bVar3 = MathFunctions::MathFunctions_IsVectorFloatsValid(value,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_rotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_rotation
               (ProtectedTransform *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_rotation_invalid);
    cRam_? = '\x01';
  }
  bVar1 = MathFunctions::MathFunctions_IsQuaternionFloatsValid(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_rotation_invalid,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

