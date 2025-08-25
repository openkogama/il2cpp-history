
/* Quaternion GetSneakySideToSideRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide_GetSneakySideToSideRotation(Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fStack_1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * 6.2831855 + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar2;
  if (6.2831855 <= fVar2) {
    do {
      fVar2 = fVar2 - 6.2831855;
    } while (6.2831855 <= fVar2);
    (this->fields)._.wrappedTime = fVar2;
  }
  pfVar3 = &(this->fields)._.wrappedTime;
  if (*pfVar3 <= -6.2831855 && *pfVar3 != -6.2831855) {
    fVar2 = (this->fields)._.wrappedTime;
    do {
      fVar2 = fVar2 + 6.2831855;
    } while (fVar2 < -6.2831855);
    (this->fields)._.wrappedTime = fVar2;
  }
  dVar4 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis(&QStack_6,(float)dVar4 * fVar2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar2 = pQVar5->y;
  fVar7 = pQVar5->z;
  fVar8 = pQVar5->w;
  __return_storage_ptr__->x = pQVar5->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* GhostEye+SneakySideToSide() */

void Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide__ctor(GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  (this->fields)._.rotatationPrSecond = 0.5;
  (this->fields)._.direction = 1.0;
  return;
}

