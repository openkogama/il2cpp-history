
/* Void Update() */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_Update(ShieldBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousShieldValue;
  fVar3 = (this->fields).interpolateTowardsShield;
  (this->fields).elapsedInterpolationTime = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,fVar3,fVar2,(MethodInfo *)0x0);
  pTVar4 = (this->fields).shieldPivot;
  (this->fields).previousShieldValue = fVar1;
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
    fVar1 = fVar1 / _UNK_?;
    fVar3 = pVVar5->z;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar1,(MethodInfo *)0x0);
    pTVar4 = (this->fields).shieldPivot;
    if (pTVar4 != (Transform *)0x0) {
      value.y = fVar1;
      value.x = fVar2;
      value.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value,(MethodInfo *)0x0);
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
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    return (float)uVar3 * _UNK_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void set_Shield(Single) */

void Assembly-CSharp.dll::ShieldBar::ShieldBar_set_Shield
               (ShieldBar *this,float value,MethodInfo *method)

{
  (this->fields).interpolateTowardsShield = value;
  (this->fields).elapsedInterpolationTime = 0.0;
  return;
}

