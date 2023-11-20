
/* Single BlockStep(Single, Single) */

float Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_BlockStep
                (TeleportAvatar *this,float t,float steps,MethodInfo *method)

{
  fVar1 = (float10)func_?(t * steps);
  return (float)(fVar1 / (float10)steps);
}


/* IEnumerator DoForSeconds(Single, TeleportAvatar+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_DoForSeconds
          (TeleportAvatar *this,float duration,TeleportAvatar_ActionDelegate *body,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeleportAvatar___DoForSeconds_d__6);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___DoForSeconds_d__6;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].monitor = (MonitorData *)duration;
  value[2].klass = (Object__Class *)body;
  func_?(value + 2,body);
  return (IEnumerator *)value;
}


/* Void EndTeleportation(MVRigidBody) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_EndTeleportation
               (TeleportAvatar *this,MVRigidBody *rigidBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)rigidBody,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (rigidBody == (MVRigidBody *)0x0) goto code_?;
    (*(code *)(rigidBody->klass->vtable).__unknown_3.method)(rigidBody,0);
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)unaff_EDI,
               MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (unaff_EDI,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__TeleportAvatar___Start_d__8);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___Start_d__8;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void <Start>b__8_0(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__8_0
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).avatar;
  fVar1 = (float10)func_?(t * _UNK_?);
  if (this_00 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency
              ((MVAvatar *)this_00,_UNK_? - (float)fVar1 / _UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Start>b__8_1(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__8_1
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).avatar;
  fVar1 = (float10)func_?(t * _UNK_?);
  if (this_00 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency
              ((MVAvatar *)this_00,(float)fVar1 / _UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* TeleportAvatar() */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__ctor
               (TeleportAvatar *this,MethodInfo *method)

{
  (this->fields).teleportTime = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

