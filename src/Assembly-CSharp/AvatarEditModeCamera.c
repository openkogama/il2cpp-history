
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
    unaff_ESI = (MVWorldObjectClient *)TypeInfo__AvatarEditModeCamera____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_01,(Object *)unaff_ESI,
               MethodInfo__AvatarEditModeCamera____c___ResetPosition_b__2_0_MVWorldObjectClient_,
               (MethodInfo *)0x0);
    TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0 = this_01;
    func_?(&TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0,this_01);
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                          (this_00,this_01,(MethodInfo *)0x0);
    if ((unaff_ESI != (MVWorldObjectClient *)0x0) &&
       (((unaff_ESI->klass->_1).naturalAligment < (TypeInfo__MVSpawnPointBlue->_1).naturalAligment
        || ((MVSpawnPointBlue__Class *)
            (unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MVSpawnPointBlue->_1).naturalAligment - 1] != TypeInfo__MVSpawnPointBlue))))
    goto code_?;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Convert_this_to_build_mode_avata,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.avatarLocal;
    if (unaff_ESI != (MVWorldObjectClient *)0x0) {
      puVar2 = (undefined8 *)
               (*(code *)(unaff_ESI->klass->vtable).get_WorldPosition_1.method)
                         (&uStack_3,unaff_ESI,
                          (unaff_ESI->klass->vtable).set_WorldPosition.methodPtr);
      fVar4 = *(float *)(puVar2 + 1);
      fVar5 = (float)*puVar2;
      fVar6 = (float)((ulonglong)*puVar2 >> 0x20);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_3._0_4_ = (pVVar7->upVector).x;
      uStack_3._4_4_ = (pVVar7->upVector).y;
      fStack_8 = (pVVar7->upVector).z;
      if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
        (*(code *)(pMVar1->klass->vtable).set_WorldPosition.method)
                  (pMVar1,fVar5 + (float)(undefined4)uStack_3,(float)uStack_3._4_4_ + fVar6,
                   fStack_8 + fVar4,(pMVar1->klass->vtable).get_WorldRotation_1.methodPtr);
        pMVar1 = (this->fields)._.avatarLocal;
        pQVar9 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                           ((Quaternion *)&stack0xffffffe0,unaff_ESI,(MethodInfo *)0x0);
        if (pMVar1 != (MVBuildModeAvatarLocal *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)pMVar1,*pQVar9,(MethodInfo *)0x0);
          JetPackCamera::JetPackCamera_FocusOnPosition
                    ((JetPackCamera *)this,lookAtPosition,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AvatarEditModeCamera() */

void Assembly-CSharp.dll::AvatarEditModeCamera::AvatarEditModeCamera__ctor
               (AvatarEditModeCamera *this,MethodInfo *method)

{
  (this->fields)._.sensitivityX = 15.0;
  (this->fields)._.sensitivityY = 15.0;
  (this->fields)._.aroundXInertia = 0.5;
  (this->fields)._.aroundYInertiaMouseControlled = 0.5;
  (this->fields)._.aroundYInertiaAvatarControlled = 1.0;
  (this->fields)._.minimumY = -60.0;
  (this->fields)._.maximumY = 60.0;
  (this->fields)._.scrollSpeed = 0.5;
  (this->fields)._.xMinLimit = -0x57;
  (this->fields)._.xMaxLimit = 0x57;
  (this->fields)._.rotationSmoothTime = 0.1;
  (this->fields)._._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

