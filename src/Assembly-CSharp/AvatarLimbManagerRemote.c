
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_Initialize
               (AvatarLimbManagerRemote *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
    func_?(&TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote);
    func_?(&TypeInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote);
    func_?(&MethodInfo__AvatarLimbManager__OnStartEmote_System__String_);
    func_?(&TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote);
    cRam_? = '\x01';
  }
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  pAVar1 = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)
           func_?(TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote);
  MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
            ((LogicEvaluateInputSignalsAnd *)pAVar1,(MethodInfo *)0x0);
  (this->fields).headRotationHandler = pAVar1;
  func_?(&(this->fields).headRotationHandler,pAVar1);
  pAVar1 = (this->fields).headRotationHandler;
  if (pAVar1 == (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
code_?:
    func_?();
  }
  else {
    (*(code *)(pAVar1->klass->vtable).Initialize.method)(pAVar1);
    pAVar2 = (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)
             func_?(TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote);
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler__ctor
              ((AvatarLimbManager_AvatarPointingHandler *)pAVar2,(MethodInfo *)0x0);
    (this->fields).pointingHandler = pAVar2;
    func_?(&(this->fields).pointingHandler,pAVar2);
    pAVar2 = (this->fields).pointingHandler;
    if (pAVar2 == (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) goto code_?;
    (*(code *)(pAVar2->klass->vtable).Initialize.method)(pAVar2);
    pAVar3 = (AvatarLimbManager_AvatarEmoteHandler *)
             func_?(TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              (pAVar3,(MethodInfo *)0x0);
    (this->fields)._.emoteHandler = pAVar3;
    func_?(&(this->fields)._.emoteHandler,pAVar3);
    pAVar3 = (this->fields)._.emoteHandler;
    if (pAVar3 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar3,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,enabledChangeHandler,(MethodInfo *)0x0);
    pAVar3 = (this->fields)._.emoteHandler;
    if (pAVar3 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    pAVar4 = (pAVar3->fields).OnEmoteStart;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pAVar3->fields).OnEmoteStart = (Action_1_String_ *)0x0;
code_?:
      func_?();
      method_00 = TypeInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote;
      pAVar6 = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pAVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields).dataManager = pAVar6;
      func_?();
      pAVar6 = (this->fields).dataManager;
      if (pAVar6 != (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0) {
        AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
        AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
                  (pAVar6,(LimbRotationRuntimeData *)&UNK_?,this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pAVar4 = (Action_1_String_ *)func_?();
    if (pAVar4 == (Action_1_String_ *)0x0) goto code_?;
    (pAVar3->fields).OnEmoteStart = pAVar4;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnHeadRotationDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_OnHeadRotationDataChange
               (AvatarLimbManagerRemote *this,Object *newHeadRotationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
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
            ((Quaternion *)&stack0xffffffe0,eulerAnglesByteRange,(MethodInfo *)0x0);
  iVar3 = func_?(auStack_4,&stack0xffffffe0,0);
  yaw = *(float *)(iVar3 + 4);
  pfVar5 = (float *)func_?(auStack_4,&stack0xffffffe0,0);
  AvatarLimbManagerRemote_UpdateHeadRotationRemotely(this,yaw,*pfVar5,(MethodInfo *)0x0);
  return;
}


/* Void OnPointRotationDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_OnPointRotationDataChange
               (AvatarLimbManagerRemote *this,Object *newPointRotationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
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
            ((Quaternion *)&stack0xffffffe0,eulerAnglesByteRange,(MethodInfo *)0x0);
  iVar3 = func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  fVar4 = *(float *)(iVar3 + 4);
  pfVar5 = (float *)func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  AvatarLimbManagerRemote_UpdateHeadRotationRemotely(this,fVar4,*pfVar5,(MethodInfo *)0x0);
  iVar3 = func_?(&stack0xfffffff0,&stack0xffffffe0);
  fVar4 = *(float *)(iVar3 + 4);
  pfVar5 = (float *)func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  AvatarLimbManagerRemote_UpdatePointingRemotely(this,fVar4,*pfVar5,(MethodInfo *)0x0);
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_StartEmote
               (AvatarLimbManagerRemote *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  pAVar1 = (this->fields)._.emoteHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((char)emoteType == '\0') {
      return;
    }
    pDVar2 = (pAVar1->fields).emoteDatas;
    if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      if ((pAVar1->fields).isActive == 0) {
        return;
      }
      if ((pAVar1->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
        if (pOVar3 == (Object *)0x0) goto code_?;
        if (*(short *)&pOVar3[1].monitor <=
            (((pAVar1->fields).currentRunningEmoteData)->fields).priority) {
          return;
        }
        pAVar4 = (((pAVar1->fields).currentRunningEmoteData)->fields).emote;
        if (pAVar4 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
        (*(code *)(pAVar4->klass->vtable).StopEmote.method)();
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pDVar2 = (pAVar1->fields).emoteDatas;
      if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar2,emoteType,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                          );
        if (bVar5 == 0) {
          return;
        }
        pDVar2 = (pAVar1->fields).emoteDatas;
        if (((pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType,
                                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                ), pOVar3 != (Object *)0x0)) &&
           (pOVar3[1].klass != (Object__Class *)0x0)) {
          (*(code *)((pOVar3[1].klass)->_0).image[5].typeCount)();
          pDVar2 = (pAVar1->fields).emoteDatas;
          if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
            pAVar6 = (AvatarLimbManager_EmoteData *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               );
            (pAVar1->fields).currentRunningEmoteData = pAVar6;
            func_?();
            if ((pAVar1->fields).OnEmoteStart != (Action_1_String_ *)0x0) {
              pAVar7 = (pAVar1->fields).OnEmoteStart;
              mscorlib.dll::System::Enum::Enum_ToString
                        ((Enum *)0xffffffff,(MethodInfo *)(emoteType & 0xff));
              (*(pAVar7->fields)._._.invoke_impl)();
            }
            if ((pAVar1->fields).OnEmoteUpdate == (Action_1_Int32_ *)0x0) {
              return;
            }
            (*(((pAVar1->fields).OnEmoteUpdate)->fields)._._.invoke_impl)();
            return;
          }
        }
      }
    }
  }
code_?:
  uVar8 = func_?(&stack0xffffffe4);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer_1
              ((AvatarLimbManager_AvatarHeadRotationHandler *)this_00,EmoteTypes__Enum_None,
               unaff_ESI);
    auVar1._4_8_ = 0;
    auVar1._0_4_ = yaw * _UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    QVar6 = *pQVar2;
    (this_00->fields).remoteYawRotation.x = pQVar2->x;
    (this_00->fields).remoteYawRotation.y = fVar3;
    (this_00->fields).remoteYawRotation.z = fVar4;
    (this_00->fields).remoteYawRotation.w = fVar5;
    pQVar2 = AvatarLimbManager+AvatarHeadRotationHandler::
             AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                       ((Quaternion *)&stack0xffffffec,
                        (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,QVar6,
                        (MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    (this_00->fields).remoteYawRotation.x = pQVar2->x;
    (this_00->fields).remoteYawRotation.y = fVar3;
    (this_00->fields).remoteYawRotation.z = fVar4;
    (this_00->fields).remoteYawRotation.w = fVar5;
    puStack7 = (undefined *)0x0;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = pitch * _UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    QVar6 = *pQVar2;
    (this_00->fields).remotePitchRotation.x = pQVar2->x;
    (this_00->fields).remotePitchRotation.y = fVar3;
    (this_00->fields).remotePitchRotation.z = fVar4;
    (this_00->fields).remotePitchRotation.w = fVar5;
    pQVar2 = AvatarLimbManager+AvatarHeadRotationHandler::
             AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                       ((Quaternion *)&stack0xffffffec,
                        (AvatarLimbManager_AvatarHeadRotationHandler *)this_00,QVar6,
                        (MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    (this_00->fields).remotePitchRotation.x = pQVar2->x;
    (this_00->fields).remotePitchRotation.y = fVar3;
    (this_00->fields).remotePitchRotation.z = fVar4;
    (this_00->fields).remotePitchRotation.w = fVar5;
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
  AvatarLimbManager::AvatarLimbManager_UpdateLimbRotations
            ((AvatarLimbManager *)this,lookDirection,(MethodInfo *)0x0);
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
  if ((this_00->fields)._.isActive != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
    QStack_3.x = (pQVar2->identityQuaternion).x;
    QStack_3.y = (pQVar2->identityQuaternion).y;
    QStack_3.z = (pQVar2->identityQuaternion).z;
    QStack_3.w = (pQVar2->identityQuaternion).w;
    iVar4 = func_?(auStack_5,&QStack_3,0);
    if (yaw == *(float *)(iVar4 + 4)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
      QStack_3.x = (pQVar2->identityQuaternion).x;
      QStack_3.y = (pQVar2->identityQuaternion).y;
      QStack_3.z = (pQVar2->identityQuaternion).z;
      QStack_3.w = (pQVar2->identityQuaternion).w;
      pfVar6 = (float *)func_?(auStack_5,&QStack_3,0);
      if (pitch == *pfVar6) {
        (this_00->fields)._.shouldPoint = 0;
        AvatarLimbManager+AvatarPointingHandler::
        AvatarLimbManager_AvatarPointingHandler_StopPointing
                  ((AvatarLimbManager_AvatarPointingHandler *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
    uStack_7 = 0;
    auVar8._4_8_ = 0;
    auVar8._0_4_ = yaw * _UNK_?;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_3,(Vector3)(auVar8 << 0x20),(MethodInfo *)0x0);
    fVar10 = pitch * _UNK_?;
    uStack_7 = 0;
    fVar11 = pQVar9->y;
    fVar12 = pQVar9->z;
    fVar13 = pQVar9->w;
    (this_00->fields).remoteYawRotation.x = pQVar9->x;
    (this_00->fields).remoteYawRotation.y = fVar11;
    (this_00->fields).remoteYawRotation.z = fVar12;
    (this_00->fields).remoteYawRotation.w = fVar13;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = fVar10;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
    fVar11 = pQVar9->y;
    fVar12 = pQVar9->z;
    fVar13 = pQVar9->w;
    (this_00->fields).remotePitchRotation.x = pQVar9->x;
    (this_00->fields).remotePitchRotation.y = fVar11;
    (this_00->fields).remotePitchRotation.z = fVar12;
    (this_00->fields).remotePitchRotation.w = fVar13;
    (this_00->fields)._.elapsedPointingTime = (this_00->fields)._.pointingDuration;
    (this_00->fields)._.shouldPoint = 1;
    return;
  }
  return;
}

