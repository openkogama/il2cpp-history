
/* Single DoFallBehind(Single, Vector3, Single) */

float Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_DoFallBehind(FallBehindPitch *this,float currentPitch,Vector3 position,float basePitch,MethodInfo *method)

{
  fStack_1 = MathFunctions::MathFunctions_NormalizeAngle(currentPitch,(MethodInfo *)0x0);
  if (180.0 < fStack_1) {
    fStack_1 = fStack_1 - 360.0;
  }
  if (fStack_1 != basePitch) {
    uVar2 = (this->fields).prevPosition.x;
    uVar3 = (this->fields).prevPosition.y;
    fStack_4 = position.z - (this->fields).prevPosition.z;
    uStack_5 = CONCAT44(position.y - (float)uVar3,position.x - (float)uVar2);
    fVar6 = (float10)func_?(&uStack_5,0);
    (this->fields).prevPosition.x = (float)(int)position._0_8_;
    (this->fields).prevPosition.y = (float)(int)((ulonglong)position._0_8_ >> 0x20);
    (this->fields).prevPosition.z = position.z;
    if (fStack_1 < basePitch) {
      fStack_1 = (float)(fVar6 * (float10)3.0) + fStack_1;
      if (basePitch <= fStack_1) {
        fStack_1 = basePitch;
      }
      return fStack_1;
    }
    fStack_1 = fStack_1 - (float)(fVar6 * (float10)3.0);
    if (fStack_1 <= basePitch) {
      fStack_1 = basePitch;
    }
    return fStack_1;
  }
  return fStack_1;
}


/* Quaternion FallBehind(Quaternion, Vector3, Single) */

Quaternion * Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_FallBehind(Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion rotation,Vector3 position,float basePitch,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&rotation,0);
  uStack_3 = *puVar1;
  fStack_4 = *(float *)(puVar1 + 1);
  fStack_5 = MathFunctions::MathFunctions_NormalizeAngle((float)uStack_3,(MethodInfo *)0x0);
  fStack_6 = fStack_5;
  if (180.0 < fStack_5) {
    fStack_6 = fStack_5 - 360.0;
  }
  fVar7 = fStack_6;
  if (fStack_6 != basePitch) {
    uVar8 = (this->fields).prevPosition.x;
    uVar9 = (this->fields).prevPosition.y;
    QStack_10.x = position.x;
    QStack_10.y = 0.0;
    QStack_10.z = 0.0;
    QStack_10.w = 0.0;
    fStack_11 = position.z - (this->fields).prevPosition.z;
    uStack_12 = CONCAT44(position.y - (float)uVar9,position.x - (float)uVar8);
    fStack_13 = fStack_11;
    fVar14 = (float10)func_?(&uStack_12,0);
    (this->fields).prevPosition.x = QStack_10.x;
    (this->fields).prevPosition.y = position.y;
    (this->fields).prevPosition.z = position.z;
    fStack_5 = (float)(fVar14 * (float10)3.0);
    if (basePitch <= fStack_6) {
      fVar7 = fStack_6 - fStack_5;
      if (fStack_6 - fStack_5 <= basePitch) {
        fVar7 = basePitch;
      }
    }
    else {
      fVar7 = fStack_5 + fStack_6;
      if (basePitch <= fStack_5 + fStack_6) {
        fVar7 = basePitch;
      }
    }
  }
  fStack_11 = fStack_4 * 0.017453292;
  euler.y = uStack_3._4_4_ * 0.017453292;
  euler.x = fVar7 * 0.017453292;
  euler.z = fStack_11;
  pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad(&QStack_10,euler,(MethodInfo *)0x0);
  fVar7 = pQVar15->y;
  fVar16 = pQVar15->z;
  fVar17 = pQVar15->w;
  __return_storage_ptr__->x = pQVar15->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar16;
  __return_storage_ptr__->w = fVar17;
  return __return_storage_ptr__;
}


/* Void SetCameraRotatePos(Vector3) */

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_SetCameraRotatePos(FallBehindPitch *this,Vector3 position,MethodInfo *method)

{
  (this->fields).prevCameraRotatedPosition.x = position.x;
  (this->fields).prevCameraRotatedPosition.y = position.y;
  (this->fields).prevCameraRotatedPosition.z = position.z;
  (this->fields).state = 1;
  return;
}


/* Quaternion Update(Quaternion, Vector3, Single) */

Quaternion * Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_Update(Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion rotation,Vector3 position,float basePitch,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if (iVar1 == 0) {
    fStack_2 = rotation.x;
    fStack_3 = rotation.y;
    fStack_4 = rotation.z;
    fStack_5 = rotation.w;
    puVar6 = (undefined8 *)func_?(auStack_7,&fStack_2,0);
    uStack_8 = *puVar6;
    fStack_9 = *(float *)(puVar6 + 1);
    fStack_10 = MathFunctions::MathFunctions_NormalizeAngle((float)uStack_8,(MethodInfo *)0x0);
    fStack_11 = fStack_10;
    if (180.0 < fStack_10) {
      fStack_11 = fStack_10 - 360.0;
    }
    fVar12 = fStack_11;
    if (fStack_11 != basePitch) {
      uVar13 = (this->fields).prevPosition.x;
      uVar14 = (this->fields).prevPosition.y;
      QStack_15.x = position.x;
      QStack_15.y = 0.0;
      QStack_15.z = 0.0;
      QStack_15.w = 0.0;
      fStack_5 = position.z - (this->fields).prevPosition.z;
      uStack_16 = CONCAT44(position.y - (float)uVar14,position.x - (float)uVar13);
      fStack_17 = fStack_5;
      fVar18 = (float10)func_?(&uStack_16,0);
      (this->fields).prevPosition.x = QStack_15.x;
      (this->fields).prevPosition.y = position.y;
      (this->fields).prevPosition.z = position.z;
      fStack_10 = (float)(fVar18 * (float10)3.0);
      if (basePitch <= fStack_11) {
        fVar12 = fStack_11 - fStack_10;
        if (fStack_11 - fStack_10 <= basePitch) {
          fVar12 = basePitch;
        }
      }
      else {
        fVar12 = fStack_10 + fStack_11;
        if (basePitch <= fStack_10 + fStack_11) {
          fVar12 = basePitch;
        }
      }
    }
    fStack_5 = fStack_9 * 0.017453292;
    euler.y = uStack_8._4_4_ * 0.017453292;
    euler.x = fVar12 * 0.017453292;
    euler.z = fStack_5;
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad(&QStack_15,euler,(MethodInfo *)0x0);
    fVar12 = pQVar19->y;
    fVar20 = pQVar19->z;
    fVar21 = pQVar19->w;
    __return_storage_ptr__->x = pQVar19->x;
    __return_storage_ptr__->y = fVar12;
    __return_storage_ptr__->z = fVar20;
    __return_storage_ptr__->w = fVar21;
    return __return_storage_ptr__;
  }
  if (iVar1 != 1) {
    uVar22 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar22);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Unknown_state);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar22 = func_?(&MethodInfo__FallBehindPitch__Update_UnityEngine__Quaternion__UnityEngine__Vector3__float_);
    func_?(this_00,uVar22);
    pcVar23 = (code *)swi(3);
    pQVar19 = (Quaternion *)(*pcVar23)();
    return pQVar19;
  }
  uVar24 = (this->fields).prevCameraRotatedPosition.x;
  uVar25 = (this->fields).prevCameraRotatedPosition.y;
  fStack_5 = (this->fields).prevCameraRotatedPosition.z - position.z;
  uStack_8 = CONCAT44((float)uVar25 - position.y,(float)uVar24 - position.x);
  fStack_9 = fStack_5;
  fVar18 = (float10)func_?(&uStack_8,0);
  if (2.0 < (float)fVar18) {
    (this->fields).prevPosition.x = (float)(int)position._0_8_;
    (this->fields).prevPosition.y = (float)(int)((ulonglong)position._0_8_ >> 0x20);
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

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch__ctor(FallBehindPitch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).prevCameraRotatedPosition.x = (pVVar1->zeroVector).x;
  (this->fields).prevCameraRotatedPosition.y = fVar2;
  (this->fields).prevCameraRotatedPosition.z = fVar3;
  return;
}

