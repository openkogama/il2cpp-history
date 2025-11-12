
/* Quaternion get_localRotation() */

Quaternion *
Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_localRotation
          (Quaternion *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Vector3 get_localScale() */

Vector3 * Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_localScale
                    (Vector3 *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Quaternion get_rotation() */

Quaternion *
Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_get_rotation
          (Quaternion *__return_storage_ptr__,ProtectedTransform *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void set_localPosition(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localPosition
               (ProtectedTransform *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_localPosition_invalid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = value->x;
  uStack_1._4_4_ = value->y;
  if (((((0x7f800000 < ((undefined4)uStack_1 & 0x7fffffff)) ||
        (0x7f800000 < (uStack_1._4_4_ & 0x7fffffff))) || (0x7f800000 < (uint)ABS(value->z))) ||
      ((((undefined4)uStack_1 & 0x7fffffff) == 0x7f800000 ||
       ((uStack_1._4_4_ & 0x7fffffff) == 0x7f800000)))) || (ABS(value->z) == INFINITY)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_localPosition_invalid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar3 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_1 = pSVar2;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0);
    return;
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fStack_5 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar6,&uStack_1);
  return;
}


/* Void set_localRotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localRotation
               (ProtectedTransform *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_localRotation_invalid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStack_1[0] = *(String **)value;
  apSStack_1[1]._0_4_ = value->z;
  apSStack_1[1]._4_4_ = value->w;
  bVar2 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                    ((Quaternion *)apSStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = StringLiteral_localRotation_invalid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    apSStack_1[0] = pSVar3;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0);
    return;
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  apSStack_1[0] = *(String **)value;
  apSStack_1[1]._0_4_ = value->z;
  apSStack_1[1]._4_4_ = value->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar6,apSStack_1);
  return;
}


/* Void set_localScale(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_localScale
               (ProtectedTransform *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_localScale_invalid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = value->x;
  uStack_1._4_4_ = value->y;
  if (((((0x7f800000 < ((undefined4)uStack_1 & 0x7fffffff)) ||
        (0x7f800000 < (uStack_1._4_4_ & 0x7fffffff))) || (0x7f800000 < (uint)ABS(value->z))) ||
      ((((undefined4)uStack_1 & 0x7fffffff) == 0x7f800000 ||
       ((uStack_1._4_4_ & 0x7fffffff) == 0x7f800000)))) || (ABS(value->z) == INFINITY)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_localScale_invalid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar3 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_1 = pSVar2;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0);
    return;
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fStack_5 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar6,&uStack_1);
  return;
}


/* Void set_position(Vector3) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_position
               (ProtectedTransform *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_position_invalid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = value->x;
  uStack_1._4_4_ = value->y;
  if (((((0x7f800000 < ((undefined4)uStack_1 & 0x7fffffff)) ||
        (0x7f800000 < (uStack_1._4_4_ & 0x7fffffff))) || (0x7f800000 < (uint)ABS(value->z))) ||
      ((((undefined4)uStack_1 & 0x7fffffff) == 0x7f800000 ||
       ((uStack_1._4_4_ & 0x7fffffff) == 0x7f800000)))) || (ABS(value->z) == INFINITY)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_position_invalid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar3 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_1 = pSVar2;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0);
    return;
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fStack_5 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar6,&uStack_1);
  return;
}


/* Void set_rotation(Quaternion) */

void Assembly-CSharp.dll::ProtectedTransform::ProtectedTransform_set_rotation
               (ProtectedTransform *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rotation_invalid);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStack_1[0] = *(String **)value;
  apSStack_1[1]._0_4_ = value->z;
  apSStack_1[1]._4_4_ = value->w;
  bVar2 = MathFunctions::MathFunctions_IsQuaternionFloatsValid
                    ((Quaternion *)apSStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = StringLiteral_rotation_invalid;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    apSStack_1[0] = pSVar3;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0);
    return;
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  apSStack_1[0] = *(String **)value;
  apSStack_1[1]._0_4_ = value->z;
  apSStack_1[1]._4_4_ = value->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar6,apSStack_1);
  return;
}

