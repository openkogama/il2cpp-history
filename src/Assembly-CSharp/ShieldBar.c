
/* Void Update() */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_Update(ShieldBar *this,MethodInfo *method)

{
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = _UNK_?;
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousShieldValue;
  (this->fields).elapsedInterpolationTime = fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  pTVar4 = (this->fields).shieldPivot;
  fVar1 = ((this->fields).interpolateTowardsShield - fVar1) * fVar2 + fVar1;
  (this->fields).previousShieldValue = fVar1;
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
    uVar6 = pVVar5->y;
    fVar1 = fVar1 / _UNK_?;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    pTVar4 = (this->fields).shieldPivot;
    if (pTVar4 != (Transform *)0x0) {
      value.y = (float)uVar6;
      value.x = fVar1;
      value.z = pVVar5->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single get_Shield() */

float Assembly-CSharp.dll::ShieldBar::ShieldBar_get_Shield(ShieldBar *this,MethodInfo *method)

{
  this_00 = (this->fields).shieldPivot;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    return pVVar1->x * _UNK_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_Shield(Single) */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_set_Shield
               (ShieldBar *this,float value,MethodInfo *method)

{
  (this->fields).interpolateTowardsShield = value;
  (this->fields).elapsedInterpolationTime = 0.0;
  return;
}

