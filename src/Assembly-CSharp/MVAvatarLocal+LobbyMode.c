
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_Activate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum fromMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
      cVar2 = '\0';
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      cVar2 = func_?();
      goto code_?;
    }
  }
  else {
    cVar2 = '\x01';
code_?:
    MVAvatarLocal+AvatarMode::MVAvatarLocal_AvatarMode_SetModeTypes
              ((MVAvatarLocal_AvatarMode *)this,(MethodInfo *)fromMode);
    pMVar3 = (this->fields)._.mvAvatar;
    if ((pMVar3 != (MVAvatarLocal *)0x0) &&
       (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
      LayerUtil::LayerUtil_SetLayerRecursively_3
                ((pMVar4->fields)._._._.transform,StringLiteral_Player,StringLiteral_CamRotateTarget
                 ,(MethodInfo *)0x0);
      if (cVar2 != '\0') {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar5 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (pMVar5,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?();
        pMVar3 = (this->fields)._.mvAvatar;
        if ((pMVar3 != (MVAvatarLocal *)0x0) &&
           (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
          pTVar6 = (pMVar4->fields)._._._.transform;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                             ((Quaternion *)&stack0xffffffec,180.0,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar6,*pQVar7,(MethodInfo *)0x0);
            pMVar3 = (this->fields)._.mvAvatar;
            if (pMVar3 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar3,(MethodInfo *)0x0);
              pMVar3 = (this->fields)._.mvAvatar;
              if (pMVar3 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar3,(MethodInfo *)0x0);
                pMVar3 = (this->fields)._.mvAvatar;
                if (pMVar3 != (MVAvatarLocal *)0x0) {
                  pAVar8 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar3,(MethodInfo *)0x0);
                  if ((pAVar8 != (AvatarLocal *)0x0) &&
                     ((pAVar8->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
                    func_?();
                    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                       ((MethodInfo *)0x0);
                    if (pMVar5 != (MainCameraManager *)0x0) {
                      this_00 = (LobbyStateCamera *)
                                MainCameraManager::MainCameraManager_get_CurrentCamera
                                          (pMVar5,(MethodInfo *)0x0);
                      pMVar3 = (this->fields)._.mvAvatar;
                      if ((pMVar3 != (MVAvatarLocal *)0x0) &&
                         (pTVar6 = (pMVar3->fields)._._._.transform, pTVar6 != (Transform *)0x0)) {
                        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_rotation
                                           ((Quaternion *)&stack0xffffffec,pTVar6,(MethodInfo *)0x0)
                        ;
                        if (this_00 != (LobbyStateCamera *)0x0) {
                          if (((this_00->klass->_1).naturalAligment <
                               (TypeInfo__LobbyStateCamera->_1).naturalAligment) ||
                             ((this_00->klass->_1).typeHierarchy
                              [(TypeInfo__LobbyStateCamera->_1).naturalAligment - 1] !=
                              (Il2CppClass *)TypeInfo__LobbyStateCamera)) goto code_?;
                          LobbyStateCamera::LobbyStateCamera_SetRotation
                                    (this_00,*pQVar7,(MethodInfo *)0x0);
                          pMVar3 = (this->fields)._.mvAvatar;
                          if ((pMVar3 != (MVAvatarLocal *)0x0) &&
                             (pMVar4 = (pMVar3->fields)._.body, pMVar4 != (MVBody *)0x0)) {
                            MVBody::MVBody_set_Visible(pMVar4,1,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+LobbyMode::MVAvatarLocal_LobbyMode_DeActivate
               (MVAvatarLocal_LobbyMode *this,AvatarRuntimeState__Enum toMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) {
    this_00 = (pMVar2->fields)._._._.transform;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffec,0.0,
                        TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_00,*pQVar3,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_01,MaskMode__Enum_Default,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) {
          LayerUtil::LayerUtil_SetLayerRecursively_3
                    ((pMVar2->fields)._._._.transform,StringLiteral_CamRotateTarget,
                     StringLiteral_Player,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            pAVar4 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
            if ((pAVar4 != (AvatarLocal *)0x0) &&
               (pIStack5 = (pAVar4->fields).avatarCameraController,
               pIStack5 != (IAvatarCameraController *)0x0)) {
              uStack6 = 6;
              func_?();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

