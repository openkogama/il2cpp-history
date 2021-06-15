
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_Enter
               (DeadCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)camController,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    this_01 = (Component_1 *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                         (MethodInfo *)0x0);
    if (this_01 != (Component_1 *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_00,*pVVar2,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar1 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_StartTransitionCam(pMVar1,0.5,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateCamera
               (DeadCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  this_00 = (PrefabPool *)(this->fields).avatarLocal;
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,(Transform *)this_01,(MethodInfo *)0x0);
      uVar2._0_4_ = (this->fields).avatarLocalLookAtOffset.x;
      uVar2._4_4_ = (this->fields).avatarLocalLookAtOffset.y;
      VVar3 = *pVVar1;
      fVar4 = (this->fields).avatarLocalLookAtOffset.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_00.z = fVar4;
      b_00.x = (float)(int)uVar2;
      b_00.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe0,VVar3,b_00,(MethodInfo *)0x0);
      bVar5 = cRam_? == '\0';
      fVar6 = pVVar1->y;
      fVar4 = pVVar1->z;
      (this->fields).lookAtPos.x = pVVar1->x;
      (this->fields).lookAtPos.y = fVar6;
      (this->fields).lookAtPos.z = fVar4;
      if (bVar5) {
        func_?();
        cRam_? = '\x01';
      }
      VVar3 = (this->fields).lookAtPos;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar1->x;
        uVar8._4_4_ = pVVar1->y;
        fVar4 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        b.z = fVar4;
        b.x = (float)(int)uVar8;
        b.y = (float)(int)((ulonglong)uVar8 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffd4,VVar3,b,(MethodInfo *)0x0);
        puVar9 = (undefined8 *)func_?();
        fVar4 = *(float *)(puVar9 + 1);
        uVar2._0_4_ = (undefined4)*puVar9;
        uVar2._4_4_ = (undefined4)((ulonglong)*puVar9 >> 0x20);
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        VVar3.y = (float)uVar2._4_4_;
        VVar3.x = (float)(undefined4)uVar2;
        VVar3.z = fVar4;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffd0,VVar3,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar7,*pQVar10,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
            if (targetTransform != (ProtectedTransform *)0x0) {
              ProtectedTransform::ProtectedTransform_set_position
                        (targetTransform,*pVVar1,(MethodInfo *)0x0);
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                   ((Quaternion *)&stack0xffffffd0,pTVar7,(MethodInfo *)0x0);
                ProtectedTransform::ProtectedTransform_set_rotation
                          (targetTransform,*pQVar10,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateRotation(DeadCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VVar1 = (this->fields).lookAtPos;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
    b = *pVVar3;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffd4,VVar1,b,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)func_?(&stack0xffffffd4);
    VVar1 = *pVVar3;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffd0,VVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,*pQVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

