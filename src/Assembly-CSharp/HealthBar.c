
/* Void SetScaleFromHealth(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_SetScaleFromHealth
               (HealthBar *this,float value,MethodInfo *method)

{
  pTVar1 = (this->fields).healthPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->y;
    fVar4 = value / (this->fields)._MaxHealth_k__BackingField;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    pTVar1 = (this->fields).healthPivot;
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uVar3;
      value_00.x = fVar4;
      value_00.z = pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single get_Health() */

float Assembly-CSharp.dll::HealthBar::HealthBar_get_Health(HealthBar *this,MethodInfo *method)

{
  this_00 = (this->fields).healthPivot;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    return (this->fields)._MaxHealth_k__BackingField * pVVar1->x;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_Oxygen(Single) */

void Assembly-CSharp.dll::HealthBar::HealthBar_set_Oxygen
               (HealthBar *this,float value,MethodInfo *method)

{
  pTVar1 = (this->fields).oxygenPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->y;
    fVar4 = value / _UNK_?;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    pTVar1 = (this->fields).oxygenPivot;
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uVar3;
      value_00.x = fVar4;
      value_00.z = pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

