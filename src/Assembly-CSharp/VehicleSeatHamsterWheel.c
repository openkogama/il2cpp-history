
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHamsterWheel::VehicleSeatHamsterWheel_Attach
               (VehicleSeatHamsterWheel *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_HamsterWheelRotationRoot);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Attach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if (((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    ppTVar3 = &(this->fields).oldParent;
    *ppTVar3 = pTVar2;
    func_?(ppTVar3,pTVar2);
    pMVar1 = (avatar->fields).body;
    if ((pMVar1 != (MVBody *)0x0) &&
       (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      fVar5 = pVVar4->y;
      fVar6 = pVVar4->z;
      (this->fields).oldLocalPos.x = pVVar4->x;
      (this->fields).oldLocalPos.y = fVar5;
      (this->fields).oldLocalPos.z = fVar6;
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_HamsterWheelRotationRoot,(MethodInfo *)0x0);
      ppGVar7 = &(this->fields).newParent;
      *ppGVar7 = this_00;
      func_?(ppGVar7,this_00);
      if (*ppGVar7 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (*ppGVar7,(MethodInfo *)0x0);
        pMVar1 = (avatar->fields).body;
        if ((pMVar1 != (MVBody *)0x0) &&
           (pTVar8 = (pMVar1->fields)._._._.transform, pTVar8 != (Transform *)0x0)) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar8,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar2,pTVar8,(MethodInfo *)0x0);
            if (*ppGVar7 != (GameObject *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*ppGVar7,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                if (*ppGVar7 != (GameObject *)0x0) {
                  VStack_9.z = (float)&UNK_?;
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(*ppGVar7,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar2 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->
                                      identityQuaternion,(MethodInfo *)0x0);
                    pMVar1 = (avatar->fields).body;
                    if (pMVar1 != (MVBody *)0x0) {
                      pTVar2 = (pMVar1->fields)._._._.transform;
                      if (*ppGVar7 != (GameObject *)0x0) {
                        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(*ppGVar7,(MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                    (pTVar2,pTVar8,(MethodInfo *)0x0);
                          pMVar1 = (avatar->fields).body;
                          if ((pMVar1 != (MVBody *)0x0) &&
                             (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)
                             ) {
                            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                     Transform_get_localPosition
                                               (&VStack_9,pTVar2,(MethodInfo *)0x0);
                            uVar10 = pVVar4->x;
                            uVar11 = pVVar4->y;
                            value.y = (float)uVar11 - _UNK_?;
                            value.x = (float)uVar10 + 0.0;
                            value.z = pVVar4->z + 0.0;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localPosition(pTVar2,value,(MethodInfo *)0x0);
                            pMVar1 = (avatar->fields).body;
                            if (pMVar1 != (MVBody *)0x0) {
                              this_01 = MVBody::MVBody_get_BlobShadow(pMVar1,(MethodInfo *)0x0);
                              if (this_01 != (AvatarBlobShadowController *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)this_01,0,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHamsterWheel::VehicleSeatHamsterWheel_Detach
               (VehicleSeatHamsterWheel *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,(this->fields).oldParent,(MethodInfo *)0x0);
    pMVar1 = (avatar->fields).body;
    if (pMVar1 != (MVBody *)0x0) {
      pTVar2 = (pMVar1->fields)._._._.transform;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        pMVar1 = (avatar->fields).body;
        if ((pMVar1 != (MVBody *)0x0) &&
           (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,(this->fields).oldLocalPos,(MethodInfo *)0x0);
          obj = (this->fields).newParent;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          pMVar1 = (avatar->fields).body;
          if (pMVar1 != (MVBody *)0x0) {
            this_00 = MVBody::MVBody_get_BlobShadow(pMVar1,(MethodInfo *)0x0);
            if (this_00 != (AvatarBlobShadowController *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,(MethodInfo *)0x0);
              VehicleSeatBase::VehicleSeatBase_Detach
                        ((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
              return;
            }
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


/* VehicleSeatHamsterWheel() */

void Assembly-CSharp.dll::VehicleSeatHamsterWheel::VehicleSeatHamsterWheel__ctor
               (VehicleSeatHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).oldLocalPos.x = (pVVar1->zeroVector).x;
  (this->fields).oldLocalPos.y = fVar2;
  (this->fields).oldLocalPos.z = fVar3;
  (this->fields)._.seatID = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

