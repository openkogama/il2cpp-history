
/* Single BlockStep(Single, Single) */

float Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_BlockStep
                (TeleportAvatar *this,float t,float steps,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = t * steps;
  fVar2 = (float10)func_?((double)fVar1,&dStack_3);
  if (fVar1 < _UNK_?) {
    if ((double)fVar2 != _UNK_?) {
      fVar2 = (float10)func_?((double)(fVar1 - _UNK_?));
      return (float)fVar2 / steps;
    }
    uVar4 = func_?();
    fVar1 = (float)dStack_3;
    if ((uVar4 & 1) != 0) {
      return (fVar1 - _UNK_?) / steps;
    }
  }
  else {
    if ((double)fVar2 != _UNK_?) {
      fVar2 = (float10)func_?((double)(fVar1 + _UNK_?));
      return (float)fVar2 / steps;
    }
    uVar4 = func_?();
    fVar1 = (float)dStack_3;
    if ((uVar4 & 1) != 0) {
      fVar1 = fVar1 + _UNK_?;
    }
  }
  return fVar1 / steps;
}


/* IEnumerator DoForSeconds(Single, TeleportAvatar+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_DoForSeconds
          (TeleportAvatar *this,float duration,TeleportAvatar_ActionDelegate *body,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___DoForSeconds_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)body;
    (this_00->fields).state = (int32_t)duration;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void EndTeleportation(MVRigidBody) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_EndTeleportation
               (TeleportAvatar *this,MVRigidBody *rigidBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)rigidBody,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (rigidBody == (MVRigidBody *)0x0) goto code_?;
    (*(code *)(rigidBody->klass->vtable).__unknown_3.method)(rigidBody,0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_OnAvatarStateChanged
               (TeleportAvatar *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  (this->fields).shouldCancelTeleportation = 1;
  return;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_Start(TeleportAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___Start_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* TeleportAvatar() */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__ctor
               (TeleportAvatar *this,MethodInfo *method)

{
  (this->fields).teleportTime = 2.0;
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

