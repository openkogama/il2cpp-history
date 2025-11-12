
/* Single DoFallBehind(Single, Vector3, Single) */

float Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_DoFallBehind
                (FallBehindPitch *this,float currentPitch,Vector3 *position,float basePitch,
                MethodInfo *method)

{
  fVar1 = (float)FUN_?(CONCAT44(in_XMM1_Db,currentPitch),_UNK_?);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + _UNK_?;
  }
  if (_UNK_? < fVar1) {
    fVar1 = fVar1 - _UNK_?;
  }
  if (fVar1 != basePitch) {
    uVar2 = position->x;
    uVar3 = position->y;
    uVar4 = (this->fields).prevPosition.x;
    uVar5 = (this->fields).prevPosition.y;
    fStack_6 = position->z - (this->fields).prevPosition.z;
    uStack_7 = CONCAT44((float)uVar3 - (float)uVar5,(float)uVar2 - (float)uVar4);
    fVar8 = (float)FUN_?(&uStack_7);
    fVar9 = position->z;
    fVar10 = position->y;
    fVar8 = fVar8 * _UNK_?;
    (this->fields).prevPosition.x = position->x;
    (this->fields).prevPosition.y = fVar10;
    (this->fields).prevPosition.z = fVar9;
    if (fVar1 < basePitch) {
      fVar1 = fVar8 + fVar1;
      if (basePitch <= fVar1) {
        fVar1 = basePitch;
      }
    }
    else {
      fVar1 = fVar1 - fVar8;
      if (fVar1 <= basePitch) {
        fVar1 = basePitch;
      }
    }
  }
  return fVar1;
}


/* Quaternion FallBehind(Quaternion, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_FallBehind
          (Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion *rotation,
          Vector3 *position,float basePitch,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (aVStack_2,rotation,(MethodInfo *)rotation);
  fVar3 = _UNK_?;
  uStack_4._0_4_ = pVVar1->x;
  uStack_4._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (float)FUN_?((undefined4)uStack_4,_UNK_?);
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + fVar3;
  }
  if (_UNK_? < fVar6) {
    fVar6 = fVar6 - fVar3;
  }
  if (fVar6 != basePitch) {
    uVar7 = position->x;
    uVar8 = position->y;
    uVar9 = (this->fields).prevPosition.x;
    uVar10 = (this->fields).prevPosition.y;
    fStack_11 = position->z - (this->fields).prevPosition.z;
    uStack_12 = CONCAT44((float)uVar8 - (float)uVar10,(float)uVar7 - (float)uVar9);
    fVar13 = (float)FUN_?(&uStack_12);
    fVar3 = position->z;
    fVar14 = position->y;
    fVar13 = fVar13 * _UNK_?;
    (this->fields).prevPosition.x = position->x;
    (this->fields).prevPosition.y = fVar14;
    (this->fields).prevPosition.z = fVar3;
    if (basePitch <= fVar6) {
      fVar6 = fVar6 - fVar13;
      if (fVar6 <= basePitch) {
        fVar6 = basePitch;
      }
    }
    else {
      fVar6 = fVar13 + fVar6;
      if (basePitch <= fVar6) {
        fVar6 = basePitch;
      }
    }
  }
  fStack_11 = fVar5 * _UNK_?;
  uStack_12 = CONCAT44(uStack_4._4_4_ * _UNK_?,fVar6 * _UNK_?);
  uStack_4 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    pQVar18 = (Quaternion *)(*pcVar16)();
    return pQVar18;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_12,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = uStack_4._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_15;
  __return_storage_ptr__->w = (float)uStack_15._4_4_;
  return __return_storage_ptr__;
}


/* Void SetCameraRotatePos(Vector3) */

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_SetCameraRotatePos
               (FallBehindPitch *this,Vector3 *position,MethodInfo *method)

{
  fVar1 = position->y;
  fVar2 = position->z;
  (this->fields).prevCameraRotatedPosition.x = position->x;
  (this->fields).prevCameraRotatedPosition.y = fVar1;
  (this->fields).prevCameraRotatedPosition.z = fVar2;
  (this->fields).state = 1;
  return;
}


/* Quaternion Update(Quaternion, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch_Update
          (Quaternion *__return_storage_ptr__,FallBehindPitch *this,Quaternion *rotation,
          Vector3 *position,float basePitch,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if (iVar1 == 0) {
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    VStack_2.z = position->z;
    QStack_3.x = rotation->x;
    QStack_3.y = rotation->y;
    QStack_3.z = rotation->z;
    QStack_3.w = rotation->w;
    pQVar4 = FallBehindPitch_FallBehind
                       (&QStack_5,this,&QStack_3,&VStack_2,basePitch,(MethodInfo *)0x0);
    fVar6 = pQVar4->x;
    fVar7 = pQVar4->y;
    fVar8 = pQVar4->z;
    fVar9 = pQVar4->w;
  }
  else {
    if (iVar1 != 1) {
      uVar10 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar10);
      message = (String *)func_?(&StringLiteral_Unknown_state);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      uVar10 = func_?(&
                                  MethodInfo__FallBehindPitch__Update_UnityEngine__Quaternion__UnityEngine__Vector3__float_
                                 );
      FUN_?(this_00,uVar10);
      pcVar11 = (code *)swi(3);
      pQVar4 = (Quaternion *)(*pcVar11)();
      return pQVar4;
    }
    uVar12 = (this->fields).prevCameraRotatedPosition.x;
    uVar13 = (this->fields).prevCameraRotatedPosition.y;
    uVar14 = position->x;
    uVar15 = position->y;
    VStack_2.z = (this->fields).prevCameraRotatedPosition.z - position->z;
    VStack_2.y = (float)uVar13 - (float)uVar15;
    VStack_2.x = (float)uVar12 - (float)uVar14;
    fVar6 = (float)FUN_?(&VStack_2);
    if (TypeRef__System__Activator__T._0_4_ < fVar6) {
      fVar7 = position->y;
      fVar6 = position->z;
      (this->fields).prevPosition.x = position->x;
      (this->fields).prevPosition.y = fVar7;
      (this->fields).prevPosition.z = fVar6;
      (this->fields).state = 0;
    }
    fVar6 = rotation->x;
    fVar7 = rotation->y;
    fVar8 = rotation->z;
    fVar9 = rotation->w;
  }
  __return_storage_ptr__->x = fVar6;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar8;
  __return_storage_ptr__->w = fVar9;
  return __return_storage_ptr__;
}


/* FallBehindPitch() */

void Assembly-CSharp.dll::FallBehindPitch::FallBehindPitch__ctor
               (FallBehindPitch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
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

