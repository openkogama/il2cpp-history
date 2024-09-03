
/* Void SetState(MVCollectible+CollectibleClientState) */

void Assembly-CSharp.dll::CollectibleEffects::CollectibleEffects_SetState
               (CollectibleEffects *this,
               MVCollectible_CollectibleClientState__Enum collectibleClientState,MethodInfo *method)

{
  (this->fields).state = collectibleClientState;
  if (collectibleClientState == MVCollectible_CollectibleClientState__Enum_ReShowing) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).reshowingStartTime = fVar1;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CollectibleEffects::CollectibleEffects_Update
               (CollectibleEffects *this,MethodInfo *method)

{
  if (((this->fields).state == 0) || ((this->fields).state == 3)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    dVar2 = (double)(fVar1 * _UNK_?);
    func_?();
    fVar1 = (float)dVar2 * _UNK_? + _UNK_?;
    fVar1 = fVar1 + fVar1;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar3,value,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar1 = (pVVar4->upVector).x;
      fVar5 = (pVVar4->upVector).y;
      fVar6 = (pVVar4->upVector).z;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      if (pTVar3 != (Transform *)0x0) {
        axis.y = fVar5;
        axis.x = fVar1;
        axis.z = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (pTVar3,axis,fVar7 * (this->fields).rotationSpeed * _UNK_?,Space__Enum_Self
                   ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((this->fields).state == 1) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
      if (pVVar8->x <= _UNK_?) {
        return;
      }
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      fVar1 = 0.0;
    }
    else {
      if ((this->fields).state != 2) {
        return;
      }
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar1 = (fVar1 - (this->fields).reshowingStartTime) * _UNK_?;
      fVar1 = fVar1 + fVar1;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
    }
    if (pTVar3 != (Transform *)0x0) {
      value_00.y = fVar1;
      value_00.x = fVar1;
      value_00.z = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar3,value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CollectibleEffects() */

void Assembly-CSharp.dll::CollectibleEffects::CollectibleEffects__ctor
               (CollectibleEffects *this,MethodInfo *method)

{
  (this->fields).rotationSpeed = 0.6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

