
/* Quaternion GetSneakySideToSideRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide_GetSneakySideToSideRotation(Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = (this->fields)._.direction * fVar1 * (this->fields)._.rotatationPrSecond * 6.2831855 + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar1;
  while (6.2831855 <= fVar1) {
    fVar1 = (this->fields)._.wrappedTime - 6.2831855;
    (this->fields)._.wrappedTime = fVar1;
  }
  while (fVar1 < -6.2831855) {
    fVar1 = (this->fields)._.wrappedTime + 6.2831855;
    (this->fields)._.wrappedTime = fVar1;
  }
  pQVar2 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation((Quaternion *)&stack0xffffffe8,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* GhostEye+SneakySideToSide() */

void Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide__ctor(GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  (this->fields)._.rotatationPrSecond = 0.5;
  (this->fields)._.direction = 1.0;
  return;
}

