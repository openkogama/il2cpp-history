
/* Void Update() */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_Update(ShieldBar *this,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousShieldValue;
  (this->fields).elapsedInterpolationTime = fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  pTVar3 = (this->fields).shieldPivot;
  fVar1 = ((this->fields).interpolateTowardsShield - fVar1) * fVar2 + fVar1;
  (this->fields).previousShieldValue = fVar1;
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
    uVar5 = pVVar4->y;
    fVar1 = fVar1 / 100.0;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    pTVar3 = (this->fields).shieldPivot;
    if (pTVar3 != (Transform *)0x0) {
      value.y = (float)uVar5;
      value.x = fVar1;
      value.z = pVVar4->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single get_Shield() */

float Assembly-CSharp.dll::ShieldBar::ShieldBar_get_Shield(ShieldBar *this,MethodInfo *method)

{
  this_00 = (this->fields).shieldPivot;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale(&VStack_2,this_00,(MethodInfo *)0x0);
    return pVVar1->x * 100.0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_Shield(Single) */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_set_Shield(ShieldBar *this,float value,MethodInfo *method)

{
  (this->fields).interpolateTowardsShield = value;
  (this->fields).elapsedInterpolationTime = 0.0;
  return;
}

