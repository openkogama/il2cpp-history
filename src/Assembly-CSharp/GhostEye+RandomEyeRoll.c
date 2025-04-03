
/* Quaternion GetEyeRollRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fStack_1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * 6.2831855 + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar2;
  while (6.2831855 <= fVar2) {
    fVar2 = (this->fields)._.wrappedTime - 6.2831855;
    (this->fields)._.wrappedTime = fVar2;
  }
  pfVar3 = &(this->fields)._.wrappedTime;
  if (*pfVar3 <= -6.2831855 && *pfVar3 != -6.2831855) {
    do {
      fVar2 = (this->fields)._.wrappedTime + 6.2831855;
      (this->fields)._.wrappedTime = fVar2;
    } while (fVar2 < -6.2831855);
  }
  dVar4 = (double)(this->fields)._.wrappedTime;
  func_?();
  fStack_1 = (float)dVar4 * (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis(&QStack_6,fStack_1,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fStack_7 = pQVar5->x;
  fStack_8 = pQVar5->y;
  fStack_9 = pQVar5->z;
  fStack_10 = pQVar5->w;
  dVar4 = (double)(this->fields)._.wrappedTime;
  func_?();
  fStack_1 = (float)dVar4 * (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xffffffb0,fStack_1,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar11 = pQVar5->y;
  fVar12 = pQVar5->z;
  fVar13 = pQVar5->w;
  fVar2 = pQVar5->x;
  fVar14 = pQVar5->x;
  fVar15 = pQVar5->x;
  __return_storage_ptr__->x = (fVar13 * fStack_7 + fStack_10 * pQVar5->x + fStack_9 * fVar11) - fVar12 * fStack_8;
  __return_storage_ptr__->y = (fVar13 * fStack_8 + fStack_10 * fVar11 + fVar12 * fStack_7) - fStack_9 * fVar2;
  __return_storage_ptr__->z = (fVar13 * fStack_9 + fStack_10 * fVar12 + fStack_8 * fVar14) - fVar11 * fStack_7;
  __return_storage_ptr__->w = ((fStack_10 * fVar13 - fStack_7 * fVar15) - fStack_8 * fVar11) - fStack_9 * fVar12;
  return __return_storage_ptr__;
}


/* Single GetPitch() */

float Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitch(GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields)._.wrappedTime;
  func_?();
  return (float)dVar1 * (this->fields)._.radiusPitch;
}


/* Quaternion GetPitchRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitchRotation(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis(&QStack_4,(float)dVar1 * fVar2,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
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

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_Update(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,GhostEye *ghostEye,MethodInfo *method)

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

