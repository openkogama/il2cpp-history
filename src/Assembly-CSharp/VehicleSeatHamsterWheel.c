
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHamsterWheel::VehicleSeatHamsterWheel_Attach
               (VehicleSeatHamsterWheel *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Attach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if (avatar != (MVAvatar *)0x0) {
    pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVPointLightObject *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           ((Transform *)pMVar2,(MethodInfo *)0x0);
        (this->fields).oldParent = pTVar3;
        pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
          pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVPointLightObject *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xfffffff0,(Transform *)pMVar2,(MethodInfo *)0x0);
            fVar6 = pVVar5->y;
            fVar7 = pVVar5->z;
            (this->fields).oldLocalPos.x = pVVar5->x;
            (this->fields).oldLocalPos.y = fVar6;
            (this->fields).oldLocalPos.z = fVar7;
            pGVar8 = (GameObject *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar8,StringLiteral_HamsterWheelRotationRoot,(MethodInfo *)0x0);
            (this->fields).newParent = pGVar8;
            if (pGVar8 != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar8,(MethodInfo *)0x0);
              pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
              if (pPVar1 != (PrefabPool *)0x0) {
                pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
                if (pMVar2 != (MVPointLightObject *)0x0) {
                  value = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                    ((Transform *)pMVar2,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                              (pTVar3,value,(MethodInfo *)0x0);
                    pGVar8 = (this->fields).newParent;
                    if (pGVar8 != (GameObject *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Vector3);
                      }
                      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
                      if (pTVar3 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition(pTVar3,*pVVar5,(MethodInfo *)0x0);
                        pGVar8 = (this->fields).newParent;
                        if (pGVar8 != (GameObject *)0x0) {
                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Quaternion);
                          }
                          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                   Quaternion_get_identity
                                             ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
                          if (pTVar3 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localRotation(pTVar3,*pQVar9,(MethodInfo *)0x0);
                            pPVar1 = (PrefabPool *)
                                     MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
                            if (pPVar1 != (PrefabPool *)0x0) {
                              pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                                 (pPVar1,(MethodInfo *)0x0);
                              pGVar8 = (this->fields).newParent;
                              if (pGVar8 != (GameObject *)0x0) {
                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                         GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                                if (pMVar2 != (MVPointLightObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_parent((Transform *)pMVar2,pTVar3,(MethodInfo *)0x0)
                                  ;
                                  pPVar1 = (PrefabPool *)
                                           MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
                                  if (pPVar1 != (PrefabPool *)0x0) {
                                    uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
                                    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                                       (pPVar1,(MethodInfo *)0x0);
                                    if (pMVar2 != (MVPointLightObject *)0x0) {
                                      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                               Transform_get_localPosition
                                                         ((Vector3 *)&stack0xffffffd8,
                                                          (Transform *)pMVar2,(MethodInfo *)0x0);
                                      fVar7 = pVVar5->z;
                                      puVar10 = &uStack_4;
                                      fVar6 = 0.0;
                                      uStack_4 = 0;
                                      fVar11 = 0.0;
                                      func_?();
                                      a.y = fVar11;
                                      a.x = (float)puVar10;
                                      a.z = fVar7;
                                      b.z = fVar6;
                                      b.x = (float)(undefined4)uStack_4;
                                      b.y = (float)uStack_4._4_4_;
                                      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                               Vector3_op_Addition((Vector3 *)&stack0xffffffd8,a,b,
                                                                   (MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_localPosition
                                                ((Transform *)pMVar2,*pVVar5,(MethodInfo *)0x0);
                                      this_00 = MVAvatar::MVAvatar_get_Body
                                                          (avatar,(MethodInfo *)0x0);
                                      if (this_00 != (MVBody *)0x0) {
                                        uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
                                        this_01 = MVBody::MVBody_get_BlobShadow
                                                            (this_00,(MethodInfo *)0x0);
                                        if (this_01 != (AvatarBlobShadowController *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                          Behaviour_set_enabled
                                                    ((Behaviour *)this_01,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (avatar != (MVAvatar *)0x0) {
    pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVPointLightObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  ((Transform *)pMVar2,(this->fields).oldParent,(MethodInfo *)0x0);
        pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
          if (pMVar2 != (MVPointLightObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      ((Transform *)pMVar2,*pQVar3,(MethodInfo *)0x0);
            pPVar1 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
            if (pPVar1 != (PrefabPool *)0x0) {
              pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
              if (pMVar2 != (MVPointLightObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          ((Transform *)pMVar2,(this->fields).oldLocalPos,(MethodInfo *)0x0);
                obj = (this->fields).newParent;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)obj,(MethodInfo *)0x0);
                this_00 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
                if (this_00 != (MVBody *)0x0) {
                  this_01 = MVBody::MVBody_get_BlobShadow(this_00,(MethodInfo *)0x0);
                  if (this_01 != (AvatarBlobShadowController *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)this_01,1,(MethodInfo *)0x0);
                    VehicleSeatBase::VehicleSeatBase_Detach
                              ((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* VehicleSeatHamsterWheel() */

void Assembly-CSharp.dll::VehicleSeatHamsterWheel::VehicleSeatHamsterWheel__ctor
               (VehicleSeatHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).oldLocalPos.x = pVVar1->x;
  (this->fields).oldLocalPos.y = fVar3;
  (this->fields).oldLocalPos.z = fVar4;
  (this->fields)._.seatID = -1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

