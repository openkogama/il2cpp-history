
/* Quaternion GetEyeRollRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * 6.2831855 + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar1;
  if (6.2831855 <= fVar1) {
    do {
      fVar1 = fVar1 - 6.2831855;
    } while (6.2831855 <= fVar1);
    (this->fields)._.wrappedTime = fVar1;
  }
  pfVar2 = &(this->fields)._.wrappedTime;
  if (*pfVar2 <= -6.2831855 && *pfVar2 != -6.2831855) {
    fVar1 = (this->fields)._.wrappedTime;
    do {
      fVar1 = fVar1 + 6.2831855;
    } while (fVar1 < -6.2831855);
    (this->fields)._.wrappedTime = fVar1;
  }
  dVar3 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar1 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xffffffd8,(float)dVar3 * fVar1,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar5 = pQVar4->x;
  fVar6 = pQVar4->y;
  fVar7 = pQVar4->z;
  fVar8 = pQVar4->w;
  dVar3 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar1 = (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xffffffc8,(float)dVar3 * fVar1,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar9 = pQVar4->x;
  fVar10 = pQVar4->y;
  fVar11 = pQVar4->z;
  fVar12 = pQVar4->w;
  fVar13 = pQVar4->x;
  fVar1 = pQVar4->x;
  __return_storage_ptr__->x = (fVar5 * fVar12 + fVar8 * fVar9 + fVar7 * fVar10) - fVar6 * fVar11;
  __return_storage_ptr__->y = (fVar6 * fVar12 + fVar8 * fVar10 + fVar5 * fVar11) - fVar7 * fVar13;
  __return_storage_ptr__->z = (fVar8 * fVar11 + fVar7 * fVar12 + fVar6 * fVar1) - fVar5 * fVar10;
  __return_storage_ptr__->w = ((fVar8 * fVar12 - fVar5 * fVar9) - fVar6 * fVar10) - fVar7 * fVar11;
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

