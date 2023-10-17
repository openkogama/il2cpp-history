
/* Quaternion GetEyeRollRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
  ;
  fVar2 = _UNK_?;
  fVar3 = fStack_1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond *
          _UNK_? + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar3;
  fVar4 = _UNK_?;
  while (_UNK_? = fVar4, fVar2 <= fVar3) {
    fVar3 = (this->fields)._.wrappedTime - fVar2;
    (this->fields)._.wrappedTime = fVar3;
    fVar4 = _UNK_?;
  }
  pfVar5 = &(this->fields)._.wrappedTime;
  if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
    do {
      fVar3 = (this->fields)._.wrappedTime + fVar2;
      (this->fields)._.wrappedTime = fVar3;
    } while (fVar3 < fVar4);
  }
  dVar6 = (double)(this->fields)._.wrappedTime;
  func_?();
  fStack_1 = (float)dVar6 * (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_8,fStack_1,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fStack_9 = pQVar7->x;
  fStack_10 = pQVar7->y;
  fStack_11 = pQVar7->z;
  fStack_12 = pQVar7->w;
  dVar6 = (double)(this->fields)._.wrappedTime;
  func_?();
  fStack_1 = (float)dVar6 * (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffb0,fStack_1,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  fVar4 = pQVar7->x;
  fVar2 = pQVar7->x;
  fVar3 = pQVar7->x;
  __return_storage_ptr__->x =
       (fVar15 * fStack_9 + fStack_12 * pQVar7->x + fStack_11 * fVar13) - fVar14 * fStack_10;
  __return_storage_ptr__->y =
       (fVar15 * fStack_10 + fStack_12 * fVar13 + fVar14 * fStack_9) - fStack_11 * fVar4;
  __return_storage_ptr__->z =
       (fVar15 * fStack_11 + fStack_12 * fVar14 + fStack_10 * fVar2) - fVar13 * fStack_9;
  __return_storage_ptr__->w =
       ((fStack_12 * fVar15 - fStack_9 * fVar3) - fStack_10 * fVar13) - fStack_11 * fVar14;
  return __return_storage_ptr__;
}


/* Single GetPitch() */

float Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitch
                (GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields)._.wrappedTime;
  func_?();
  return (float)dVar1 * (this->fields)._.radiusPitch;
}


/* Quaternion GetPitchRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_4,(float)dVar1 * fVar2,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar2 = pQVar3->y;
  fVar5 = pQVar3->z;
  fVar6 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_Update
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  pQVar1 = GhostEye_RandomEyeRoll_GetEyeRollRotation(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

