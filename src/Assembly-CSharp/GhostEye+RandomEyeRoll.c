
/* Quaternion GetEyeRollRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  fVar1 = fVar1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * _UNK_?
           + (this->fields)._.wrappedTime;
  bVar3 = _UNK_? <= fVar1;
  (this->fields)._.wrappedTime = fVar1;
  if (bVar3) {
    do {
      fVar1 = fVar1 - fVar2;
    } while (fVar2 <= fVar1);
    (this->fields)._.wrappedTime = fVar1;
  }
  pfVar4 = &(this->fields)._.wrappedTime;
  if (*pfVar4 <= _UNK_? && _UNK_? != *pfVar4) {
    fVar1 = (this->fields)._.wrappedTime;
    do {
      fVar1 = fVar1 + fVar2;
    } while (fVar1 < _UNK_?);
    (this->fields)._.wrappedTime = fVar1;
  }
  dVar5 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffd8,(float)dVar5 * fVar2,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  fVar1 = pQVar6->x;
  fVar7 = pQVar6->y;
  fVar8 = pQVar6->z;
  fVar9 = pQVar6->w;
  dVar5 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffc8,(float)dVar5 * fVar2,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar10 = pQVar6->x;
  fVar11 = pQVar6->y;
  fVar12 = pQVar6->z;
  fVar13 = pQVar6->w;
  fVar14 = pQVar6->x;
  fVar2 = pQVar6->x;
  __return_storage_ptr__->x = (fVar1 * fVar13 + fVar9 * fVar10 + fVar8 * fVar11) - fVar7 * fVar12;
  __return_storage_ptr__->y = (fVar7 * fVar13 + fVar9 * fVar11 + fVar1 * fVar12) - fVar8 * fVar14;
  __return_storage_ptr__->z = (fVar9 * fVar12 + fVar8 * fVar13 + fVar7 * fVar2) - fVar1 * fVar11;
  __return_storage_ptr__->w = ((fVar9 * fVar13 - fVar1 * fVar10) - fVar7 * fVar11) - fVar8 * fVar12;
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

