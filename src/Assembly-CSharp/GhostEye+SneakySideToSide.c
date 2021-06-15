
/* Quaternion GetSneakySideToSideRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+SneakySideToSide::
GhostEye_SneakySideToSide_GetSneakySideToSideRotation
          (Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  fVar1 = (this->fields)._.direction * fVar1 * (this->fields)._.rotatationPrSecond * _UNK_? +
          (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar1;
  fVar3 = _UNK_?;
  while (_UNK_? = fVar3, fVar2 <= fVar1) {
    fVar1 = (this->fields)._.wrappedTime - fVar2;
    (this->fields)._.wrappedTime = fVar1;
    fVar3 = _UNK_?;
  }
  while (fVar1 < fVar3) {
    fVar1 = (this->fields)._.wrappedTime + fVar2;
    (this->fields)._.wrappedTime = fVar1;
  }
  pQVar4 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
                     ((Quaternion *)&stack0xffffffe8,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar1 = pQVar4->y;
  fVar3 = pQVar4->z;
  fVar2 = pQVar4->w;
  __return_storage_ptr__->x = pQVar4->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar2;
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

