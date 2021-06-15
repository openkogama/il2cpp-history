
/* Void ResetPosition(Vector3) */

void Assembly-CSharp.dll::AvatarEditModeCamera::AvatarEditModeCamera_ResetPosition
               (AvatarEditModeCamera *this,Vector3 lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (TypeInfo__AvatarEditModeCamera->static_fields->__f__am_cache0 ==
      (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__AvatarEditModeCamera___ResetPosition_m__0_MVWorldObjectClient_,
               MethodInfo__System__Func<MVWorldObjectClient,_bool>__Func_System__Object__void__);
    TypeInfo__AvatarEditModeCamera->static_fields->__f__am_cache0 =
         (Func_2_MVWorldObjectClient_Boolean_ *)this_01;
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                       (this_00,TypeInfo__AvatarEditModeCamera->static_fields->__f__am_cache0,
                        (MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      this_02 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVSpawnPointBlue__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__MVSpawnPointBlue)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_02 = (MVWorldObjectClient *)0x0;
      if (bVar3) {
        this_02 = pMVar1;
      }
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Convert_this_to_build_mode_avata,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.avatarLocal;
    if (this_02 != (MVWorldObjectClient *)0x0) {
      pVVar5 = (Vector3 *)
               (*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)
                         (&stack0xffffffe4,this_02,
                          (this_02->klass->vtable).set_WorldPosition.methodPtr);
      a = *pVVar5;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe4,a,*pVVar5,(MethodInfo *)0x0);
      if (pMVar4 != (MVBuildModeAvatarLocal *)0x0) {
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        (*(code *)(pMVar4->klass->vtable).set_WorldPosition.method)
                  (pMVar4,uVar6,uVar7,pVVar5->z,
                   (pMVar4->klass->vtable).get_WorldRotation_1.methodPtr);
        pMVar4 = (this->fields)._.avatarLocal;
        pQVar8 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                           ((Quaternion *)&stack0xffffffe0,this_02,(MethodInfo *)0x0);
        if (pMVar4 != (MVBuildModeAvatarLocal *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)pMVar4,*pQVar8,(MethodInfo *)0x0);
          JetPackCamera::JetPackCamera_FocusOnPosition
                    ((JetPackCamera *)this,lookAtPosition,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean <ResetPosition>m__0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeCamera::AvatarEditModeCamera__ResetPosition_m__0
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointBlue__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVSpawnPointBlue)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

