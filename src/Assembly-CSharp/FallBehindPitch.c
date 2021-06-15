
/* Single DoFallBehind(Single, Vector3, Single) */

float Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_DoFallBehind
                (FallBehindPitch *this,float currentPitch,Vector3 position,float basePitch,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  puVar3 = (undefined *)MathFunctions::MathFunctions_NormalizeAngle(currentPitch,(MethodInfo *)0x0);
  if (_UNK_? < (float)puVar3) {
    puVar3 = (undefined *)((float)puVar3 - _UNK_?);
  }
  if ((float)puVar3 == basePitch) {
    return (float)puVar3;
  }
  puStack_4 = (undefined *)(this->fields).prevPosition.x;
  unique0x0000a404 = (this->fields).prevPosition.y;
  fVar5 = (this->fields).prevPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  b.z = fVar5;
  b.x = (float)puStack_4;
  b.y = stack0xfffffff4;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffec,position,b,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar6->x;
  uStack_2._4_4_ = pVVar6->y;
  fStack_1 = pVVar6->z;
  fVar7 = (float10)func_?(&uStack_2,0);
  fVar8 = (float10)_UNK_?;
  (this->fields).prevPosition.x = position.x;
  (this->fields).prevPosition.y = position.y;
  (this->fields).prevPosition.z = position.z;
  if ((float)puVar3 < basePitch) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    register0x00001200 = (float)(fVar7 * fVar8) + basePitch;
    join_0x00001100_4_ =
         UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                   (register0x00001200,basePitch,(MethodInfo *)0x0);
    return join_0x00001100_4_;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    puVar3 = &UNK_?;
    func_?();
  }
  register0x00001200 = (float)puVar3 - (float)(fVar7 * fVar8);
  join_0x00001100_4_ =
       UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                 (register0x00001200,basePitch,(MethodInfo *)0x0);
  return join_0x00001100_4_;
}


/* Quaternion FallBehind(Quaternion, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_FallBehind
          (Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion rotation,
          Vector3 position,float basePitch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&uStack_2,&rotation,0);
  QStack_3._4_8_ = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_5 = 0.0;
  uStack_2 = 0;
  VStack_6.z = MathFunctions::MathFunctions_NormalizeAngle(QStack_3.y,(MethodInfo *)0x0);
  fVar7 = VStack_6.z;
  if (_UNK_? < VStack_6.z) {
    fVar7 = VStack_6.z - _UNK_?;
  }
  fStack_8 = fVar7;
  if (fVar7 != basePitch) {
    VStack_6.y = (this->fields).prevPosition.x;
    VStack_6.z = (this->fields).prevPosition.y;
    fVar7 = (this->fields).prevPosition.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    b.z = fVar7;
    b.x = VStack_6.y;
    b.y = VStack_6.z;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_6,position,b,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar9->x;
    uStack_2._4_4_ = pVVar9->y;
    fStack_5 = pVVar9->z;
    fVar10 = (float10)func_?(&uStack_2,0);
    fVar11 = (float10)_UNK_?;
    (this->fields).prevPosition.x = position.x;
    (this->fields).prevPosition.y = position.y;
    fVar7 = (float)(fVar10 * fVar11);
    (this->fields).prevPosition.z = position.z;
    VStack_6.z = fVar7;
    if (basePitch <= fStack_8) {
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                        (fStack_8 - VStack_6.z,basePitch,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (VStack_6.z + fStack_8,basePitch,(MethodInfo *)0x0);
    }
  }
  QStack_3.y = fVar7;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  euler.y = QStack_3.z;
  euler.x = QStack_3.y;
  euler.z = fVar4;
  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     (&QStack_3,euler,(MethodInfo *)0x0);
  fVar4 = pQVar12->y;
  fVar7 = pQVar12->z;
  fVar13 = pQVar12->w;
  __return_storage_ptr__->x = pQVar12->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar13;
  return __return_storage_ptr__;
}


/* Void SetCameraRotatePos(Vector3) */

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_SetCameraRotatePos
               (FallBehindPitch *this,Vector3 position,MethodInfo *method)

{
  (this->fields).prevCameraRotatedPosition.x = position.x;
  (this->fields).prevCameraRotatedPosition.y = position.y;
  (this->fields).prevCameraRotatedPosition.z = position.z;
  (this->fields).state = 1;
  return;
}


/* Quaternion Update(Quaternion, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_Update
          (Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion rotation,
          Vector3 position,float basePitch,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  iVar3 = (this->fields).state;
  if (iVar3 != 1) {
    if (iVar3 != 0) {
      this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(this_00,StringLiteral_Unknown_state,(MethodInfo *)0x0);
      func_?(this_00,0,
                      MethodInfo__FallBehindPitch__Update_UnityEngine__Quaternion__UnityEngine__Vector3__float_
                     );
      pcVar4 = (code *)swi(3);
      pQVar5 = (Quaternion *)(*pcVar4)();
      return pQVar5;
    }
    fStack_6 = rotation.x;
    fStack_7 = rotation.y;
    fStack_8 = rotation.z;
    fStack_9 = rotation.w;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    puVar10 = (undefined8 *)func_?(auStack_11,&fStack_6,0);
    unique0x0000a400 = *puVar10;
    fVar12 = *(float *)(puVar10 + 1);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fStack_13 = 0.0;
    uStack_14 = 0;
    fVar15 = MathFunctions::MathFunctions_NormalizeAngle((float)auStack_16._4_4_,(MethodInfo *)0x0);
    if (_UNK_? < fVar15) {
      fVar15 = fVar15 - _UNK_?;
    }
    if (fVar15 != basePitch) {
      uStack_17._0_4_ = (this->fields).prevPosition.x;
      uStack_17._4_4_ = (this->fields).prevPosition.y;
      fVar18 = (this->fields).prevPosition.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      b.z = fVar18;
      b.x = (float)(undefined4)uStack_17;
      b.y = uStack_17._4_4_;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_20,position,b,(MethodInfo *)0x0);
      uStack_14._0_4_ = pVVar19->x;
      uStack_14._4_4_ = pVVar19->y;
      fStack_13 = pVVar19->z;
      fVar21 = (float10)func_?(&uStack_14,0);
      fVar22 = (float10)_UNK_?;
      (this->fields).prevPosition.x = position.x;
      (this->fields).prevPosition.y = position.y;
      uStack_17 = CONCAT44((float)(fVar21 * fVar22),(undefined4)uStack_17);
      (this->fields).prevPosition.z = position.z;
      if (basePitch <= fVar15) {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                           (fVar15 - uStack_17._4_4_,basePitch,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                           (uStack_17._4_4_ + fVar15,basePitch,(MethodInfo *)0x0);
      }
    }
    auStack_16._4_4_ = fVar15;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    euler.y = fStack_23;
    euler.x = (float)auStack_16._4_4_;
    euler.z = fVar12;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                       ((Quaternion *)auStack_16,euler,(MethodInfo *)0x0);
    fVar12 = pQVar5->y;
    fVar15 = pQVar5->z;
    fVar18 = pQVar5->w;
    __return_storage_ptr__->x = pQVar5->x;
    __return_storage_ptr__->y = fVar12;
    __return_storage_ptr__->z = fVar15;
    __return_storage_ptr__->w = fVar18;
    return __return_storage_ptr__;
  }
  uStack_17._0_4_ = (this->fields).prevCameraRotatedPosition.x;
  uStack_17._4_4_ = (this->fields).prevCameraRotatedPosition.y;
  fVar12 = (this->fields).prevCameraRotatedPosition.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar12;
  a.x = (float)(undefined4)uStack_17;
  a.y = uStack_17._4_4_;
  pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)(auStack_16 + 4),a,position,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar19->x;
  uStack_1._4_4_ = pVVar19->y;
  fStack_2 = pVVar19->z;
  fVar22 = (float10)func_?(&uStack_1,0);
  if (_UNK_? < (float)fVar22) {
    (this->fields).prevPosition.x = position.x;
    (this->fields).prevPosition.y = position.y;
    (this->fields).prevPosition.z = position.z;
    (this->fields).state = 0;
  }
  __return_storage_ptr__->x = rotation.x;
  __return_storage_ptr__->y = rotation.y;
  __return_storage_ptr__->z = rotation.z;
  __return_storage_ptr__->w = rotation.w;
  return __return_storage_ptr__;
}


/* FallBehindPitch() */

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch__ctor
               (FallBehindPitch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).prevCameraRotatedPosition.x = pVVar1->x;
  (this->fields).prevCameraRotatedPosition.y = fVar2;
  (this->fields).prevCameraRotatedPosition.z = fVar3;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_4);
  return;
}

