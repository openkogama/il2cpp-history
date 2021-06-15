
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_Activate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
      cVar2 = '\0';
      goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 != (IEditModeUI *)0x0) {
      cVar2 = func_?();
      goto code_?;
    }
  }
  else {
    cVar2 = '\x01';
code_?:
    MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
              ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
    pMVar4 = (this->fields)._.mvAvatar;
    if ((pMVar4 != (MVAvatarLocal *)0x0) &&
       (pPVar5 = (PrefabPool *)(pMVar4->fields)._.body, pPVar5 != (PrefabPool *)0x0)) {
      pMVar6 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar5,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively_3
                ((Transform *)pMVar6,StringLiteral_Player,StringLiteral_CamRotateTarget,
                 (MethodInfo *)0x0);
      if (cVar2 != '\0') {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (pMVar7,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar8 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar8 != (IPlayModeUI *)0x0) {
        func_?();
        pMVar4 = (this->fields)._.mvAvatar;
        if ((pMVar4 != (MVAvatarLocal *)0x0) &&
           (pPVar5 = (PrefabPool *)(pMVar4->fields)._.body, pPVar5 != (PrefabPool *)0x0)) {
          pMVar6 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar5,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                              ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
          uVar10._0_4_ = pVVar9->x;
          uVar10._4_4_ = pVVar9->y;
          fVar11 = pVVar9->z;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          axis.z = fVar11;
          axis.x = (float)(int)uVar10;
          axis.y = (float)(int)((ulonglong)uVar10 >> 0x20);
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                              ((Quaternion *)&stack0xffffffe4,180.0,axis,(MethodInfo *)0x0);
          if (pMVar6 != (MVPointLightObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      ((Transform *)pMVar6,*pQVar12,(MethodInfo *)0x0);
            pMVar4 = (this->fields)._.mvAvatar;
            if (pMVar4 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar4,(MethodInfo *)0x0);
              pMVar4 = (this->fields)._.mvAvatar;
              if (pMVar4 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar4,(MethodInfo *)0x0);
                pMVar4 = (this->fields)._.mvAvatar;
                if (pMVar4 != (MVAvatarLocal *)0x0) {
                  this_01 = (AvatarUIHandlerRemote *)
                            MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar4,(MethodInfo *)0x0);
                  if (this_01 != (AvatarUIHandlerRemote *)0x0) {
                    pSVar13 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                        (this_01,(MethodInfo *)0x0);
                    if (pSVar13 != (ShieldBar *)0x0) {
                      func_?();
                      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                          ((MethodInfo *)0x0);
                      if (pMVar7 != (MainCameraManager *)0x0) {
                        pMVar14 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                            (pMVar7,(MethodInfo *)0x0);
                        if (pMVar14 == (MVCameraBase *)0x0) {
                          this_02 = (MVCameraBase *)0x0;
                        }
                        else {
                          bVar15 = (TypeInfo__LobbyStateCamera->_1).naturalAligment;
                          if (((pMVar14->klass->_1).naturalAligment < bVar15) ||
                             ((pMVar14->klass->_1).typeHierarchy[bVar15 - 1] !=
                              (Il2CppClass *)TypeInfo__LobbyStateCamera)) {
                            bVar16 = false;
                          }
                          else {
                            bVar16 = true;
                          }
                          this_02 = (MVCameraBase *)0x0;
                          if (bVar16) {
                            this_02 = pMVar14;
                          }
                          if (this_02 == (MVCameraBase *)0x0) goto code_?;
                        }
                        pMVar4 = (this->fields)._.mvAvatar;
                        if ((pMVar4 != (MVAvatarLocal *)0x0) &&
                           (pTVar17 = (pMVar4->fields)._._._.transform, pTVar17 != (Transform *)0x0)
                           ) {
                          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_rotation
                                              ((Quaternion *)&stack0xffffffe4,pTVar17,
                                               (MethodInfo *)0x0);
                          fVar11 = pQVar12->x;
                          fVar18 = pQVar12->y;
                          fVar19 = pQVar12->z;
                          fVar20 = pQVar12->w;
                          if (this_02 != (MVCameraBase *)0x0) {
                            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)this_02,(MethodInfo *)0x0);
                            if (pTVar17 != (Transform *)0x0) {
                              value.y = fVar18;
                              value.x = fVar11;
                              value.z = fVar19;
                              value.w = fVar20;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_rotation(pTVar17,value,(MethodInfo *)0x0);
                              pMVar4 = (this->fields)._.mvAvatar;
                              if ((pMVar4 != (MVAvatarLocal *)0x0) &&
                                 (this_00 = (pMVar4->fields)._.body, this_00 != (MVBody *)0x0)) {
                                MVBody::MVBody_set_Visible(this_00,1,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_DeActivate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pPVar2 = (PrefabPool *)(pMVar1->fields)._.body, pPVar2 != (PrefabPool *)0x0)) {
    pMVar3 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)(auStack_5 + 4),(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    axis.z = fVar7;
    axis.x = (float)(undefined4)uStack_6;
    axis.y = (float)uStack_6._4_4_;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)auStack_5,0.0,axis,(MethodInfo *)0x0);
    if (pMVar3 != (MVPointLightObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                ((Transform *)pMVar3,*pQVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pPVar2 = (PrefabPool *)(pMVar1->fields)._.body, pPVar2 != (PrefabPool *)0x0)) {
          pMVar3 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_3
                    ((Transform *)pMVar3,StringLiteral_CamRotateTarget,StringLiteral_Player,
                     (MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            this_01 = (AvatarUIHandlerRemote *)
                      MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if (this_01 != (AvatarUIHandlerRemote *)0x0) {
              pSVar9 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                 (this_01,(MethodInfo *)0x0);
              if (pSVar9 != (ShieldBar *)0x0) {
                func_?(6,TypeInfo__IAvatarCameraController,pSVar9,6);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

