
/* Void Activate(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Activate
               (MVBuildModeAvatarRemote *this,int32_t idFrom,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_MVBuildModeAvatarRemote_Activate,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).set_Position.method)
            (this,position._0_8_,position.z,(this->klass->vtable).get_Rotation.methodPtr);
  (*(code *)(this->klass->vtable).set_Rotation.method)
            (this,rotation.x,rotation.y,rotation.z,rotation.w,
             (this->klass->vtable).get_Scale.methodPtr);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    this_04 = (TransformNetworkManager *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,(MethodInfo *)0x0)
    ;
    woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (this_04 != (TransformNetworkManager *)0x0) {
      pMVar1 = (MVNetworkListener *)
               TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (this_04,(int32_t)woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkListener *)0x0) {
        bVar2 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
        if (((((MVNetworkObject__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
           ((((MVNetworkObject__Class *)pMVar1->klass)->_1).typeHierarchy[bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVNetworkListener)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        this_05 = (MVNetworkListener *)0x0;
        if (bVar3) {
          this_05 = pMVar1;
        }
        if (this_05 == (MVNetworkListener *)0x0) goto code_?;
        MVNetworkListener::MVNetworkListener_SetToCurrentPosition(this_05,(MethodInfo *)0x0);
      }
      this_00 = (this->fields)._._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,1,(MethodInfo *)0x0);
        this_01 = (this->fields).avatarRemoteBuildMode;
        if (this_01 != (AvatarRemoteBuildMode *)0x0) {
          AvatarRemoteBuildMode::AvatarRemoteBuildMode_Activate(this_01,(MethodInfo *)0x0);
          this_02 = (this->fields).cullingHandler;
          if (this_02 != (DynamicCullingHandler *)0x0) {
            DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
                      (this_02,(this->fields)._._._.gameObject,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DeActivate(Int32) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_DeActivate
               (MVBuildModeAvatarRemote *this,int32_t idTo,MethodInfo *method)

{
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    MVBuildModeAvatarRemote_SetLaserPointerVisibility(this,0,(MethodInfo *)0x0);
    this_01 = (this->fields).avatarRemoteBuildMode;
    if (this_01 != (AvatarRemoteBuildMode *)0x0) {
      AvatarRemoteBuildMode::AvatarRemoteBuildMode_Deactivate(this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).cullingHandler;
      if (this_02 != (DynamicCullingHandler *)0x0) {
        DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling(this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Destroy
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingHandler != (DynamicCullingHandler *)0x0) {
    if (*(CullingSubscriberDynamic **)(in_stack_1 + 8) != (CullingSubscriberDynamic *)0x0) {
      CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
                (*(CullingSubscriberDynamic **)(in_stack_1 + 8),(MethodInfo *)0x0);
      *(undefined4 *)(in_stack_1 + 8) = 0;
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetLookDirection() */

Vector3 * Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_GetLookDirection
                    (Vector3 *__return_storage_ptr__,MVBuildModeAvatarRemote *this,
                    MethodInfo *method)

{
  uStack_1 = 0;
  fStack_2 = 0.0;
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_4,this_00,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar3->x;
    uStack_1._4_4_ = pVVar3->y;
    fStack_2 = pVVar3->z;
    puVar5 = (undefined8 *)func_?(&VStack_4,&uStack_1,0);
    uVar6 = *puVar5;
    fVar7 = *(float *)(puVar5 + 1);
    __return_storage_ptr__->x = (float)(int)uVar6;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
    __return_storage_ptr__->z = fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar8)();
  return pVVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_Initialize
               (MVBuildModeAvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBuildModeAvatar::MVBuildModeAvatar_Initialize((MVBuildModeAvatar *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarRemoteBuildMode;
  pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
  if (this_00 != (AvatarRemoteBuildMode *)0x0) {
    AvatarRemoteBuildMode::AvatarRemoteBuildMode_Initialize
              (this_00,(int32_t)pOVar1,(MVBuildModeAvatar *)this,(MethodInfo *)0x0);
    this_04 = (AvatarLimbManager *)func_?(TypeInfo__AvatarLimbManagerRemote);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
              ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_04,(MethodInfo *)0x0);
    this_01 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields).avatarRemoteBuildMode;
    pMVar2 = (this->fields)._.body;
    (this->fields)._.limbManager = this_04;
    if (this_01 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_01,(MethodInfo *)0x0);
      if (this_04 != (AvatarLimbManager *)0x0) {
        (*(code *)(((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__Class *)this_04->klass)
                  ->vtable).System_Collections_IEnumerator_get_Current.method)
                  (this_04,this,pMVar2,pIVar3,(this->fields)._.limbRotationRuntimeData);
        newAnimation = StringLiteral_Idle;
        pMVar2 = (this->fields)._.body;
        if (pMVar2 != (MVBody *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_05 != (MVNetworkGame *)0x0) {
            timeStamp = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                  (this_05,(MethodInfo *)0x0);
            pMVar4 = (pMVar2->fields).bodyObject;
            if ((pMVar4 != (MVBodyObject *)0x0) &&
               (this_02 = (pMVar4->fields).boneAnimation, this_02 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_StartAnimation
                        (this_02,newAnimation,timeStamp,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._.body;
              if (pMVar2 != (MVBody *)0x0) {
                this_06 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                    ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
                if (this_06 != (CelestialParam *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)this_06,1,(MethodInfo *)0x0);
                  this_03 = (this->fields)._._._.gameObject;
                  if (this_03 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_03,0,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    this_07 = (MVAvatar *)
                              MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (this_07 != (MVAvatar *)0x0) {
                      this_08 = MVAvatar::MVAvatar_get_Shield(this_07,(MethodInfo *)0x0);
                      pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
                                          (MethodInfo *)0x0);
                      if (this_08 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                        this_09 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                            ((MVPlayerContainer *)this_08,(int32_t)pOVar1,
                                             (MethodInfo *)0x0);
                        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items
                                       ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                        if (this_09 != (MVPlayer *)0x0) {
                          MVPlayer::MVPlayer_NotifyAvatarCreated
                                    (this_09,(int32_t)id,(MethodInfo *)0x0);
                          pLVar5 = MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
                                             ((MVBuildModeAvatar *)this,0,(MethodInfo *)0x0);
                          (this->fields).laserPointer = pLVar5;
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetLaserPointerVisibility(Boolean) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote_SetLaserPointerVisibility
               (MVBuildModeAvatarRemote *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).laserPointer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pLVar1 = (this->fields).laserPointer;
  if ((pLVar1 == (LaserPointer *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pLVar1,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)func_?(), pcVar4 == (code *)0x0))
  {
    func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)();
  return;
}


/* MVBuildModeAvatarRemote(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
               (MVBuildModeAvatarRemote *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (DynamicCullingHandler *)func_?(TypeInfo__DynamicCullingHandler);
  DynamicCullingHandler::DynamicCullingHandler__ctor(this_00,3.5,(MethodInfo *)0x0);
  (this->fields).cullingHandler = this_00;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    pGVar1 = (GameObject *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
    MVBuildModeAvatar::MVBuildModeAvatar__ctor
              ((MVBuildModeAvatar *)this,data,pGVar1,worldObjects,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (pGVar1,
                          AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                         );
      (this->fields).avatarRemoteBuildMode = (AvatarRemoteBuildMode *)pUVar2;
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

