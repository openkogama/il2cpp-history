
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).state;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    dVar3 = (double)(fVar2 * _UNK_?);
    func_?();
    fVar2 = (float)dVar3 * _UNK_? + _UNK_?;
    fVar2 = fVar2 + fVar2;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    fStack_5 = 0.0;
    uStack_6 = 0;
    func_?(&uStack_6,fVar2,fVar2,fVar2,0);
    if (pTVar4 != (Transform *)0x0) {
      value.z = fStack_5;
      value.x = (float)(undefined4)uStack_6;
      value.y = (float)uStack_6._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      uVar9 = pVVar7->y;
      fVar2 = pVVar7->z;
      VStack_10.y = (float)uVar8;
      VStack_10.z = (float)uVar9;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      if (pTVar4 != (Transform *)0x0) {
        axis.y = VStack_10.z;
        axis.x = VStack_10.y;
        axis.z = fVar2;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (pTVar4,axis,(this->fields).rotationSpeed * fVar11 * _UNK_?,Space__Enum_Self
                   ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_10,pTVar4,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar7->x;
      uStack_6._4_4_ = pVVar7->y;
      if ((float)(undefined4)uStack_6 <= _UNK_?) {
        return;
      }
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      uStack_6 = uStack_6 & 0xffffffff00000000;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
    }
    VStack_10.y = 0.0;
    VStack_10.x = 0.0;
    VStack_10.z = 0.0;
    func_?(&VStack_10);
    if (pTVar4 != (Transform *)0x0) {
      value_00.y = VStack_10.y;
      value_00.x = VStack_10.x;
      value_00.z = VStack_10.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar4,value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* CollectibleEffects() */

void Assembly-CSharp.dll::CollectibleEffects::CollectibleEffects__ctor
               (CollectibleEffects *this,MethodInfo *method)

{
  (this->fields).rotationSpeed = 0.6;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

