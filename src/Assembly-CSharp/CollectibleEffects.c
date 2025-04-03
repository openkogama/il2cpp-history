
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
  iVar1 = (this->fields).state;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    dVar3 = (double)(fVar2 * _UNK_?);
    func_?();
    fVar2 = (float)dVar3 * _UNK_? + _UNK_?;
    fVar2 = fVar2 + fVar2;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      value.y = fVar2;
      value.x = fVar2;
      value.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar5->upVector).x;
      fVar6 = (pVVar5->upVector).y;
      fVar7 = (pVVar5->upVector).z;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        axis.y = fVar6;
        axis.x = fVar2;
        axis.z = fVar7;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (pTVar4,axis,fVar8 * (this->fields).rotationSpeed * _UNK_?,
                   Space__Enum_Self,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
      if (pVVar9->x <= _UNK_?) {
        return;
      }
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      fVar2 = 0.0;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar2 = (fVar2 - (this->fields).reshowingStartTime) * _UNK_?;
      fVar2 = fVar2 + fVar2;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
    }
    if (pTVar4 != (Transform *)0x0) {
      value_00.y = fVar2;
      value_00.x = fVar2;
      value_00.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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

