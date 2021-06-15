
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_Initialize
               (AvatarLimbManagerRemote *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  method_01 = TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote;
  this_00 = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)func_?();
  *(undefined1 *)&((Vector3 *)&(this_00->fields)._.shouldLean)->x = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_01);
  (this->fields).headRotationHandler = this_00;
  (*(code *)(this_00->klass->vtable).Initialize.method)
            (this_00,this,(this->fields)._.limbRotator,(this->fields)._.lookDirectionHandler,
             (this_00->klass->vtable).UpdateRotation.methodPtr);
  method_00 = TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote;
  this_01 = (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)func_?();
  (this_01->fields)._.pointingDuration = 0.8;
  (this_01->fields)._.shouldPoint = 1;
  (this_01->fields)._.isActive = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_01,0.0,(MethodInfo *)method_00);
  (this->fields).pointingHandler = this_01;
  (*(code *)(this_01->klass->vtable).Initialize.method)();
  pAVar1 = (AvatarLimbManager_AvatarEmoteHandler *)func_?();
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
            (pAVar1,(MethodInfo *)0x0);
  (this->fields)._.emoteHandler = pAVar1;
  if (pAVar1 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
    limbRotationRuntimeData_00 = (LimbRotationRuntimeData *)(this->fields)._.limbRotator;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar1,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (AvatarLimbManager_LimbRotator *)limbRotationRuntimeData_00,enabledChangeHandler,
               (MethodInfo *)0x0);
    pAVar1 = (this->fields)._.emoteHandler;
    if (pAVar1 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
      pAVar2 = (pAVar1->fields).OnEmoteStart;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
                 MethodInfo__System__Action<System::String>__Action_System__Object__void__);
      pAVar3 = (Action_1_String_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar2 = (Action_1_String_ *)0x0;
      if (pAVar3 != (Action_1_String_ *)0x0) {
        if (pAVar3->klass == TypeInfo__System__Action<System::String>) {
          pAVar2 = pAVar3;
        }
        if (pAVar2 == (Action_1_String_ *)0x0) goto code_?;
      }
      (pAVar1->fields).OnEmoteStart = pAVar2;
      this_03 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)this_02);
      (this->fields).dataManager = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)this_03;
      if (this_03 != (ScaleAnimationBase *)0x0) {
        AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
        AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
                  ((AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)this_03,
                   limbRotationRuntimeData_00,this,(MethodInfo *)0x0);
        return;
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


/* Void OnHeadRotationDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_OnHeadRotationDataChange
               (AvatarLimbManagerRemote *this,Object *newHeadRotationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  pBVar1 = TypeInfo__System__Byte;
  if (newHeadRotationData == (Object *)0x0) {
    eulerAnglesByteRange = (Byte__Array *)0x0;
  }
  else {
    eulerAnglesByteRange =
         (Byte__Array *)func_?(newHeadRotationData,TypeInfo__System__Byte);
    if (eulerAnglesByteRange == (Byte__Array *)0x0) {
      func_?(newHeadRotationData,pBVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
            (&QStack_3,eulerAnglesByteRange,(MethodInfo *)0x0);
  puVar4 = (undefined8 *)func_?(&uStack_5,&stack0xffffffc4,0);
  uStack_6 = *puVar4;
  puVar4 = (undefined8 *)func_?(&QStack_3.y,&stack0xffffffc4,0);
  uStack_5 = *puVar4;
  AvatarLimbManagerRemote_UpdateHeadRotationRemotely
            (this,uStack_6._4_4_,(float)uStack_5,(MethodInfo *)0x0);
  return;
}


/* Void OnPointRotationDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_OnPointRotationDataChange
               (AvatarLimbManagerRemote *this,Object *newPointRotationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
  }
  pBVar1 = TypeInfo__System__Byte;
  if (newPointRotationData == (Object *)0x0) {
    eulerAnglesByteRange = (Byte__Array *)0x0;
  }
  else {
    eulerAnglesByteRange =
         (Byte__Array *)func_?(newPointRotationData,TypeInfo__System__Byte);
    if (eulerAnglesByteRange == (Byte__Array *)0x0) {
      func_?(newPointRotationData,pBVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
            ((Quaternion *)&stack0xffffffd4,eulerAnglesByteRange,(MethodInfo *)0x0);
  puVar3 = (undefined8 *)func_?(&uStack_4,&stack0xffffffc4,0);
  uStack_5 = *puVar3;
  puVar3 = (undefined8 *)func_?(auStack_6,&stack0xffffffc4,0);
  uStack_4 = *puVar3;
  AvatarLimbManagerRemote_UpdateHeadRotationRemotely
            (this,uStack_5._4_4_,(float)uStack_4,(MethodInfo *)0x0);
  puVar3 = (undefined8 *)func_?(auStack_6,&stack0xffffffc4);
  uStack_4 = *puVar3;
  puVar3 = (undefined8 *)func_?(auStack_6,&stack0xffffffc4,0);
  uStack_5 = *puVar3;
  AvatarLimbManagerRemote_UpdatePointingRemotely
            (this,uStack_4._4_4_,(float)uStack_5,(MethodInfo *)0x0);
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_StartEmote
               (AvatarLimbManagerRemote *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  this_00 = (this->fields)._.emoteHandler;
  if (this_00 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((char)emoteType != '\0') {
    this_01 = (this_00->fields).emoteDatas;
    if (this_01 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)this_01,emoteType,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this_00->fields).isActive == 0) {
      return;
    }
    pAVar2 = (this_00->fields).currentRunningEmoteData;
    if (pAVar2 != (AvatarLimbManager_EmoteData *)0x0) {
      if (pOVar1 == (Object *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(short *)&pOVar1[1].monitor <= (pAVar2->fields).priority) {
        return;
      }
      pAVar4 = (pAVar2->fields).emote;
      if (pAVar4 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      (*(code *)(pAVar4->klass->vtable).StopEmote.method)(pAVar4,pAVar4->klass[1]._0.image);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              (this_00,emoteType,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateHeadRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::
     AvatarLimbManagerRemote_UpdateHeadRotationRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,MethodInfo *method)

{
  this_00 = (this->fields).headRotationHandler;
  if (this_00 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
    AvatarLimbManager+AvatarHeadRotationHandler::
    AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer
              ((AvatarLimbManager_AvatarHeadRotationHandler *)this_00,(MethodInfo *)0x0);
    uStack_1 = 0;
    uStack_2 = 0;
    func_?(&uStack_2,0,yaw,0,0);
    pQVar3 = &(this_00->fields).remoteYawRotation;
    func_?(pQVar3,(int)uStack_2,(int)((ulonglong)uStack_2 >> 0x20),uStack_1,0);
    pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
             AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                       ((Quaternion *)&stack0xffffffd4,
                        (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,*pQVar3,
                        (MethodInfo *)0x0);
    fVar5 = pQVar4->y;
    fVar6 = pQVar4->z;
    fVar7 = pQVar4->w;
    pQVar3->x = pQVar4->x;
    (this_00->fields).remoteYawRotation.y = fVar5;
    (this_00->fields).remoteYawRotation.z = fVar6;
    (this_00->fields).remoteYawRotation.w = fVar7;
    func_?();
    pQVar3 = &(this_00->fields).remotePitchRotation;
    func_?();
    pQVar4 = AvatarLimbManager+AvatarHeadRotationHandler::
             AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                       ((Quaternion *)&stack0xffffffd4,
                        (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,*pQVar3,
                        (MethodInfo *)0x0);
    fVar5 = pQVar4->y;
    fVar6 = pQVar4->z;
    fVar7 = pQVar4->w;
    pQVar3->x = pQVar4->x;
    (this_00->fields).remotePitchRotation.y = fVar5;
    (this_00->fields).remotePitchRotation.z = fVar6;
    (this_00->fields).remotePitchRotation.w = fVar7;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateLimbRotations
               (AvatarLimbManagerRemote *this,Vector3 lookDirection,MethodInfo *method)

{
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(pAVar1,lookDirection,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.lookDirectionHandler;
    if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
      uVar2._0_4_ = (pAVar1->fields).localLookDirection.x;
      uVar2._4_4_ = (pAVar1->fields).localLookDirection.y;
      pAVar3 = (this->fields)._.emoteHandler;
      if (pAVar3 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        (*(code *)(pAVar3->klass->vtable).UpdateEmotes.method)();
        pAVar4 = (this->fields).headRotationHandler;
        if (pAVar4 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
          (*(code *)(pAVar4->klass->vtable).UpdateRotation.method)();
          pAVar5 = (this->fields).pointingHandler;
          if (pAVar5 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
            (*(code *)(pAVar5->klass->vtable).UpdatePointing.method)(pAVar5,uVar2);
            AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
                      ((AvatarLimbManager *)this,(MethodInfo *)0x0);
            this_00 = (this->fields)._.limbRotator;
            if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
              AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
                        (this_00,(MethodInfo *)0x0);
              return;
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


/* Void UpdatePointingRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,MethodInfo *method)

{
  this_00 = (this->fields).pointingHandler;
  if (this_00 == (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  if ((this_00->fields)._.isActive == 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_7,(MethodInfo *)0x0);
  fStack_2 = pQVar6->x;
  fStack_3 = pQVar6->y;
  fStack_4 = pQVar6->z;
  fStack_5 = pQVar6->w;
  puVar8 = (undefined8 *)func_?(&uStack_9,&fStack_2,0);
  QStack_7._4_8_ = *puVar8;
  QStack_7.w = *(float *)(puVar8 + 1);
  if (yaw == QStack_7.z) {
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
              (&QStack_7,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    QStack_7._4_8_ = *puVar8;
    QStack_7.w = *(float *)(puVar8 + 1);
    if (pitch == QStack_7.y) {
      (this_00->fields)._.shouldPoint = 0;
      AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
                ((AvatarLimbManager_AvatarPointingHandler *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_10 = 0;
  uStack_9 = 0;
  func_?(&uStack_9,0,yaw,0);
  func_?(&(this_00->fields).remoteYawRotation,uStack_9,uStack_10);
  QStack_7.w = 0.0;
  QStack_7.y = 0.0;
  QStack_7.z = 0.0;
  func_?(&QStack_7.y,pitch,0,0);
  func_?(&(this_00->fields).remotePitchRotation,QStack_7._4_8_,QStack_7.w);
  (this_00->fields)._.elapsedPointingTime = (this_00->fields)._.pointingDuration;
  (this_00->fields)._.shouldPoint = 1;
  return;
}

