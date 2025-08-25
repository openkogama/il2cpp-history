
/* Quaternion GetSneakySideToSideRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+SneakySideToSide::
GhostEye_SneakySideToSide_GetSneakySideToSideRotation
          (Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  fVar3 = fStack_1 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond *
          _UNK_? + (this->fields)._.wrappedTime;
  bVar4 = _UNK_? <= fVar3;
  (this->fields)._.wrappedTime = fVar3;
  if (bVar4) {
    do {
      fVar3 = fVar3 - fVar2;
    } while (fVar2 <= fVar3);
    (this->fields)._.wrappedTime = fVar3;
  }
  pfVar5 = &(this->fields)._.wrappedTime;
  if (*pfVar5 <= _UNK_? && _UNK_? != *pfVar5) {
    fVar3 = (this->fields)._.wrappedTime;
    do {
      fVar3 = fVar3 + fVar2;
    } while (fVar3 < _UNK_?);
    (this->fields)._.wrappedTime = fVar3;
  }
  dVar6 = (double)(this->fields)._.wrappedTime;
  func_?();
  fVar2 = (this->fields)._.radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_8,(float)dVar6 * fVar2,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar2 = pQVar7->y;
  fVar3 = pQVar7->z;
  fVar9 = pQVar7->w;
  __return_storage_ptr__->x = pQVar7->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar9;
  return __return_storage_ptr__;
}


/* GhostEye+SneakySideToSide() */

void Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide__ctor
               (GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  (this->fields)._.rotatationPrSecond = 0.5;
  (this->fields)._.direction = 1.0;
  return;
}

