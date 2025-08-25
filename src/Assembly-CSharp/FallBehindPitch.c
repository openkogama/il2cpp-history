
/* Single DoFallBehind(Single, Vector3, Single) */

float Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_DoFallBehind
                (FallBehindPitch *this,float currentPitch,Vector3 position,float basePitch,
                MethodInfo *method)

{
  fStack_1 = MathFunctions::MathFunctions_NormalizeAngle(currentPitch,(MethodInfo *)0x0);
  if (_UNK_? < fStack_1) {
    fStack_1 = fStack_1 - _UNK_?;
  }
  if (fStack_1 != basePitch) {
    uVar2 = (this->fields).prevPosition.x;
    uVar3 = (this->fields).prevPosition.y;
    fStack_4 = position.z - (this->fields).prevPosition.z;
    uStack_5 = CONCAT44(position.y - (float)uVar3,position.x - (float)uVar2);
    fVar6 = (float10)func_?(&uStack_5,0);
    fVar7 = (float10)_UNK_?;
    (this->fields).prevPosition.x = (float)(int)position._0_8_;
    (this->fields).prevPosition.y = (float)(int)((ulonglong)position._0_8_ >> 0x20);
    (this->fields).prevPosition.z = position.z;
    if (fStack_1 < basePitch) {
      fStack_1 = (float)(fVar6 * fVar7) + fStack_1;
      if (basePitch <= fStack_1) {
        fStack_1 = basePitch;
      }
      return fStack_1;
    }
    fStack_1 = fStack_1 - (float)(fVar6 * fVar7);
    if (fStack_1 <= basePitch) {
      fStack_1 = basePitch;
    }
    return fStack_1;
  }
  return fStack_1;
}


/* Quaternion FallBehind(Quaternion, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_FallBehind
          (Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion rotation,
          Vector3 position,float basePitch,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&rotation,0);
  uStack_3 = *puVar1;
  fStack_4 = *(float *)(puVar1 + 1);
  fStack_5 = MathFunctions::MathFunctions_NormalizeAngle((float)uStack_3,(MethodInfo *)0x0);
  fStack_6 = fStack_5;
  if (_UNK_? < fStack_5) {
    fStack_6 = fStack_5 - _UNK_?;
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
    fVar15 = (float10)_UNK_?;
    (this->fields).prevPosition.x = QStack_10.x;
    (this->fields).prevPosition.y = position.y;
    (this->fields).prevPosition.z = position.z;
    fStack_5 = (float)(fVar14 * fVar15);
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
  fStack_11 = fStack_4 * _UNK_?;
  euler.y = uStack_3._4_4_ * _UNK_?;
  euler.x = fVar7 * _UNK_?;
  euler.z = fStack_11;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_10,euler,(MethodInfo *)0x0);
  fVar7 = pQVar16->y;
  fVar17 = pQVar16->z;
  fVar18 = pQVar16->w;
  __return_storage_ptr__->x = pQVar16->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar17;
  __return_storage_ptr__->w = fVar18;
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
  iVar1 = (this->fields).state;
  if (iVar1 == 0) {
    fStack_2 = rotation.x;
    uStack_3 = rotation._4_8_;
    fStack_4 = rotation.w;
    puVar5 = (undefined8 *)func_?(auStack_6,&fStack_2,0);
    uStack_3 = *puVar5;
    fStack_4 = *(float *)(puVar5 + 1);
    fStack_7 = MathFunctions::MathFunctions_NormalizeAngle((float)uStack_3,(MethodInfo *)0x0);
    fStack_8 = fStack_7;
    if (_UNK_? < fStack_7) {
      fStack_8 = fStack_7 - _UNK_?;
    }
    fVar9 = fStack_8;
    if (fStack_8 != basePitch) {
      uVar10 = (this->fields).prevPosition.x;
      uVar11 = (this->fields).prevPosition.y;
      QStack_12.x = position.x;
      QStack_12.y = 0.0;
      QStack_12.z = 0.0;
      QStack_12.w = 0.0;
      fStack_13 = position.z - (this->fields).prevPosition.z;
      uStack_14 = CONCAT44(position.y - (float)uVar11,position.x - (float)uVar10);
      fStack_15 = fStack_13;
      fVar16 = (float10)func_?(&uStack_14,0);
      fVar17 = (float10)_UNK_?;
      (this->fields).prevPosition.x = QStack_12.x;
      (this->fields).prevPosition.y = position.y;
      (this->fields).prevPosition.z = position.z;
      fStack_7 = (float)(fVar16 * fVar17);
      if (basePitch <= fStack_8) {
        fVar9 = fStack_8 - fStack_7;
        if (fStack_8 - fStack_7 <= basePitch) {
          fVar9 = basePitch;
        }
      }
      else {
        fVar9 = fStack_7 + fStack_8;
        if (basePitch <= fStack_7 + fStack_8) {
          fVar9 = basePitch;
        }
      }
    }
    fStack_13 = fStack_4 * _UNK_?;
    euler.y = uStack_3._4_4_ * _UNK_?;
    euler.x = fVar9 * _UNK_?;
    euler.z = fStack_13;
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_12,euler,(MethodInfo *)0x0);
    fVar9 = pQVar18->y;
    fVar19 = pQVar18->z;
    fVar20 = pQVar18->w;
    __return_storage_ptr__->x = pQVar18->x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar19;
    __return_storage_ptr__->w = fVar20;
    return __return_storage_ptr__;
  }
  if (iVar1 != 1) {
    uVar21 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar21);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Unknown_state);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar21 = func_?(&
                             MethodInfo__FallBehindPitch__Update_UnityEngine__Quaternion__UnityEngine__Vector3__float_
                            );
    func_?(this_00,uVar21);
    pcVar22 = (code *)swi(3);
    pQVar18 = (Quaternion *)(*pcVar22)();
    return pQVar18;
  }
  uVar23 = (this->fields).prevCameraRotatedPosition.x;
  uVar24 = (this->fields).prevCameraRotatedPosition.y;
  fStack_13 = (this->fields).prevCameraRotatedPosition.z - position.z;
  uStack_3 = CONCAT44((float)uVar24 - position.y,(float)uVar23 - position.x);
  fStack_4 = fStack_13;
  fVar17 = (float10)func_?(&uStack_3,0);
  if (_UNK_? < (float)fVar17) {
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

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch__ctor
               (FallBehindPitch *this,MethodInfo *method)

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

