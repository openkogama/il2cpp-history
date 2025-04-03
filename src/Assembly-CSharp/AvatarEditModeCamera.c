
/* Void ResetPosition(Vector3) */

void Assembly-CSharp.dll::AvatarEditModeCamera::AvatarEditModeCamera_ResetPosition
               (AvatarEditModeCamera *this,Vector3 lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    func_?(&TypeInfo__MVSpawnPointBlue);
    func_?(&
                    MethodInfo__AvatarEditModeCamera____c___ResetPosition_b__2_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__AvatarEditModeCamera____c);
    func_?(&StringLiteral_Convert_this_to_build_mode_avata);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__AvatarEditModeCamera____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarEditModeCamera____c);
  }
  this_01 = TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0;
  if (this_01 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if ((TypeInfo__AvatarEditModeCamera____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarEditModeCamera____c);
    }
    object = TypeInfo__AvatarEditModeCamera____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_01,(Object *)object,
               MethodInfo__AvatarEditModeCamera____c___ResetPosition_b__2_0_MVWorldObjectClient_,
               (MethodInfo *)0x0);
    TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0 = this_01;
    func_?(&TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0,this_01);
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (this_00,this_01,(MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClient *)0x0) {
      this_02 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar1 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((this_02->klass->_1).naturalAligment < bVar1) ||
         ((MVSpawnPointBlue__Class *)(this_02->klass->_1).typeHierarchy[bVar1 - 1] !=
          TypeInfo__MVSpawnPointBlue)) goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Convert_this_to_build_mode_avata,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.avatarLocal;
    if (this_02 != (MVWorldObjectClient *)0x0) {
      puVar3 = (undefined8 *)
               (*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)
                         (&stack0xffffffd8,this_02,
                          (this_02->klass->vtable).set_WorldPosition.methodPtr);
      uVar4 = *puVar3;
      fVar5 = *(float *)(puVar3 + 1);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar7 = (pVVar6->upVector).x;
      uVar8 = (pVVar6->upVector).y;
      fStack_9 = (float)uVar4;
      fStack_10 = (float)((ulonglong)uVar4 >> 0x20);
      if (pMVar2 != (MVBuildModeAvatarLocal *)0x0) {
        (*(code *)(pMVar2->klass->vtable).set_WorldPosition.method)
                  (pMVar2,fStack_9 + (float)uVar7,fStack_10 + (float)uVar8,
                   (pVVar6->upVector).z + fVar5,
                   (pMVar2->klass->vtable).get_IsTransformDefined.methodPtr);
        pMVar2 = (this->fields)._.avatarLocal;
        pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                            ((Quaternion *)&stack0xffffffd4,this_02,(MethodInfo *)0x0);
        if (pMVar2 != (MVBuildModeAvatarLocal *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)pMVar2,*pQVar11,(MethodInfo *)0x0);
          JetPackCamera::JetPackCamera_FocusOnPosition
                    ((JetPackCamera *)this,lookAtPosition,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

