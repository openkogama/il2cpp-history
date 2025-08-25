
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
    func_?(&TypeInfo__TeleportAvatar___DoForSeconds_d__14);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___DoForSeconds_d__14;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  pMVar2 = (this->fields).avatar;
  if (pMVar2 != (MVAvatarLocal *)0x0) {
    pPVar3 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar2,(MethodInfo *)0x0);
    if (pPVar3 != (PickupItem *)0x0) {
      (pPVar3->fields)._AbleToFire_k__BackingField = 1;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar2 = (this->fields).avatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                  (this_01,(this->fields)._TeleporterOrigin_k__BackingField,
                   (pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
        pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if (pSVar4 != (SpawnRoleDataMediator *)0x0) {
          this_00 = (pSVar4->fields).SpawnRoleModeTypeWrapper;
          this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_02,(Object *)this,
                     MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                     ,(MethodInfo *)0x0);
          if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
            SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                      (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_Start(TeleportAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeleportAvatar___Start_d__16);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeleportAvatar___Start_d__16;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void <Start>b__16_0(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__16_0
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).avatar;
  fVar1 = (float10)func_?(t * _UNK_?);
  if (this_00 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency
              ((MVAvatar *)this_00,_UNK_? - (float)(fVar1 / (float10)_UNK_?),
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Start>b__16_1(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__16_1
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).avatar;
  fVar1 = (float10)func_?(t * _UNK_?);
  if (this_00 != (MVAvatarLocal *)0x0) {
    MVAvatar::MVAvatar_set_SetTransparency
              ((MVAvatar *)this_00,(float)(fVar1 / (float10)_UNK_?),(MethodInfo *)0x0);
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
  (this->fields)._TeleporterOrigin_k__BackingField = -1;
  (this->fields)._TeleporterDestination_k__BackingField = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

