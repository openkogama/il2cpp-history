
/* Void SetScaleFromHealth(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_SetScaleFromHealth
               (HealthBar *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).healthPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = (this->fields)._MaxHealth_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_3.x = (float)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                      (value / fVar6,(MethodInfo *)0x0);
    pTVar1 = (this->fields).healthPivot;
    uStack_4 = CONCAT44(uStack_4._4_4_,fVar6);
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uStack_4._4_4_;
      value_00.x = fVar6;
      value_00.z = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single get_Health() */

float Assembly-CSharp.dll::HealthBar::HealthBar_get_Health(HealthBar *this,MethodInfo *method)

{
  this_00 = (this->fields).healthPivot;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    return (this->fields)._MaxHealth_k__BackingField * (float)uVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void set_Health(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_set_Health
               (HealthBar *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).healthPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = (this->fields)._MaxHealth_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_3.x = (float)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                      (value / fVar6,(MethodInfo *)0x0);
    pTVar1 = (this->fields).healthPivot;
    uStack_4 = CONCAT44(uStack_4._4_4_,fVar6);
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uStack_4._4_4_;
      value_00.x = fVar6;
      value_00.z = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_MaxHealth(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_set_MaxHealth
               (HealthBar *this,float value,MethodInfo *method)

{
  (this->fields)._MaxHealth_k__BackingField = value;
  return;
}


/* Void set_Oxygen(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_set_Oxygen
               (HealthBar *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).oxygenPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_3.x = (float)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                      (value / _UNK_?,(MethodInfo *)0x0);
    pTVar1 = (this->fields).oxygenPivot;
    uStack_4 = CONCAT44(uStack_4._4_4_,fVar6);
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uStack_4._4_4_;
      value_00.x = fVar6;
      value_00.z = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

