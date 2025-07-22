
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler);
    func_?(&TypeInfo__AvatarLimbManager__LimbRotator);
    cRam_? = '\x01';
  }
  (this->fields)._.avatarWO = avatarWO;
  func_?(&(this->fields)._.avatarWO,avatarWO);
  method_02 = TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler;
  pAVar1 = (AvatarLimbManager_AvatarLookDirectionHandler *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pAVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  (this->fields)._.lookDirectionHandler = pAVar1;
  func_?(&(this->fields)._.lookDirectionHandler,pAVar1);
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
code_?:
    func_?();
  }
  else {
    (pAVar1->fields).avatarWO = avatarWO;
    func_?(&(pAVar1->fields).avatarWO,avatarWO);
    method_03 = TypeInfo__AvatarLimbManager__LimbRotator;
    pAVar2 = (AvatarLimbManager_LimbRotator *)func_?();
    (pAVar2->fields).isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    (this->fields)._.limbRotator = pAVar2;
    func_?(&(this->fields)._.limbRotator,pAVar2);
    pAVar2 = (this->fields)._.limbRotator;
    if (pAVar2 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
              (pAVar2,avatarWO,body,(AvatarLimbManager *)this,(MethodInfo *)0x0);
    method_05 = TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote;
    pAVar3 = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)func_?();
    (pAVar3->fields)._.shouldLean = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_05);
    (this->fields).headRotationHandler = pAVar3;
    func_?(&(this->fields).headRotationHandler,pAVar3);
    pAVar3 = (this->fields).headRotationHandler;
    if (pAVar3 == (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0)
    goto code_?;
    (*(code *)(pAVar3->klass->vtable).Initialize.method)
              (pAVar3,this,(this->fields)._.limbRotator,(this->fields)._.lookDirectionHandler,
               (pAVar3->klass->vtable).UpdateRotation.methodPtr);
    method_01 = TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote;
    pAVar4 = (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)func_?();
    (pAVar4->fields)._.pointingDuration = 0.8;
    (pAVar4->fields)._.pointState = 1;
    (pAVar4->fields)._.isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields).pointingHandler = pAVar4;
    func_?(&(this->fields).pointingHandler,pAVar4);
    pAVar4 = (this->fields).pointingHandler;
    if (pAVar4 == (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) goto code_?;
    (*(code *)(pAVar4->klass->vtable).Initialize.method)
              (pAVar4,this,(this->fields)._.limbRotator,enabledChangeHandler,
               (pAVar4->klass->vtable).UpdatePointing.methodPtr);
    pAVar5 = (AvatarLimbManager_AvatarEmoteHandler *)
             func_?(TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
              );
    method_04 = (MethodInfo *)&(pAVar5->fields).emoteDatas;
    (pAVar5->fields).emoteDatas = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)this_00;
    func_?(method_04,this_00);
    (pAVar5->fields).isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar5,ExceptionArgument__Enum_obj,method_04);
    (this->fields)._.emoteHandler = pAVar5;
    func_?(&(this->fields)._.emoteHandler,pAVar5);
    pAVar5 = (this->fields)._.emoteHandler;
    if (pAVar5 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar5,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,enabledChangeHandler,(MethodInfo *)0x0);
    pAVar5 = (this->fields)._.emoteHandler;
    if (pAVar5 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    a = (pAVar5->fields).OnEmoteStart;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::String>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar7 = TypeInfo__System__Action<System::String>;
    if (pDVar6 == (Delegate *)0x0) {
      (pAVar5->fields).OnEmoteStart = (Action_1_String_ *)0x0;
code_?:
      func_?();
      method_00 = TypeInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote;
      pAVar8 = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pAVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields).dataManager = pAVar8;
      func_?();
      pAVar8 = (this->fields).dataManager;
      if (pAVar8 != (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0) {
        AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
        AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
                  (pAVar8,limbRotationRuntimeData,this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pvVar9 = (void *)func_?();
    if (pvVar9 == (void *)0x0) goto code_?;
    (pAVar7->_0).this_arg.data.dummy = pvVar9;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_StartEmote
               (AvatarLimbManagerRemote *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  pAVar1 = (this->fields)._.emoteHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
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
              mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
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
  uVar8 = func_?(&stack0xfffffff0);
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
    AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer
              ((AvatarLimbManager_AvatarHeadRotationHandler *)this_00,(MethodInfo *)0x0);
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
  pAVar1 = this;
  pAVar2 = (this->fields)._.lookDirectionHandler;
  if (pAVar2 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(pAVar2,lookDirection,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._.lookDirectionHandler;
    if (pAVar2 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
      uVar3._0_4_ = (pAVar2->fields).localLookDirection.x;
      uVar3._4_4_ = (pAVar2->fields).localLookDirection.y;
      pAVar4 = (this->fields)._.emoteHandler;
      if (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        (*(code *)(pAVar4->klass->vtable).UpdateEmotes.method)();
        pAVar5 = (this->fields).headRotationHandler;
        if (pAVar5 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
          (*(code *)(pAVar5->klass->vtable).UpdateRotation.method)();
          pAVar6 = (this->fields).pointingHandler;
          if (pAVar6 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
            (*(code *)(pAVar6->klass->vtable).UpdatePointing.method)(pAVar6,uVar3);
            pMVar7 = (this->fields)._.avatarWO;
            if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
               (pTVar8 = (pMVar7->fields).transform, pTVar8 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffec,pTVar8,(MethodInfo *)0x0);
              iVar9 = func_?();
              this = *(AvatarLimbManagerRemote **)(iVar9 + 4);
              if (_UNK_? < (float)this) {
                this = (AvatarLimbManagerRemote *)(_UNK_? - ((float)this - _UNK_?));
              }
              iVar9 = func_?();
              fVar10 = *(float *)(iVar9 + 4);
              if (_UNK_? < fVar10) {
                fVar10 = _UNK_? - (fVar10 - _UNK_?);
              }
              if ((_UNK_? < (float)((uint)((float)this - fVar10) & _UNK_?)) &&
                 ((pAVar1->fields)._.OnAvatarRotate != (Action *)0x0)) {
                (*(((pAVar1->fields)._.OnAvatarRotate)->fields)._._.invoke_impl)();
              }
              pMVar7 = (pAVar1->fields)._.avatarWO;
              if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
                 (pTVar8 = (pMVar7->fields).transform, pTVar8 != (Transform *)0x0)) {
                pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                    ((Quaternion *)&stack0xffffffec,pTVar8,(MethodInfo *)0x0);
                fVar10 = pQVar11->y;
                fVar12 = pQVar11->z;
                fVar13 = pQVar11->w;
                this_00 = (pAVar1->fields)._.limbRotator;
                (pAVar1->fields)._.previousTransformRotation.x = pQVar11->x;
                (pAVar1->fields)._.previousTransformRotation.y = fVar10;
                (pAVar1->fields)._.previousTransformRotation.z = fVar12;
                (pAVar1->fields)._.previousTransformRotation.w = fVar13;
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
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdatePointingRemotely(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,bool isPointingWeapon,
               MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 == (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pAVar1->fields)._.isActive != 0) {
    if (isPointingWeapon == 0) {
      (pAVar1->fields)._.pointState = 1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      QStack_4.x = (pQVar3->identityQuaternion).x;
      QStack_4.y = (pQVar3->identityQuaternion).y;
      QStack_4.z = (pQVar3->identityQuaternion).z;
      QStack_4.w = (pQVar3->identityQuaternion).w;
      iVar5 = func_?(auStack_6,&QStack_4,0);
      if (yaw == *(float *)(iVar5 + 4)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
        QStack_4.x = (pQVar3->identityQuaternion).x;
        QStack_4.y = (pQVar3->identityQuaternion).y;
        QStack_4.z = (pQVar3->identityQuaternion).z;
        QStack_4.w = (pQVar3->identityQuaternion).w;
        pfVar7 = (float *)func_?(auStack_6,&QStack_4,0);
        if (pitch == *pfVar7) {
          (pAVar1->fields)._.pointState = 0;
          return;
        }
      }
    }
    else {
      (pAVar1->fields)._.pointState = isPointingWeapon + 1;
    }
    uStack_8 = 0;
    auVar9._4_8_ = 0;
    auVar9._0_4_ = yaw * _UNK_?;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_4,(Vector3)(auVar9 << 0x20),(MethodInfo *)0x0);
    fVar11 = pitch * _UNK_?;
    uStack_8 = 0;
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    fVar14 = pQVar10->w;
    (pAVar1->fields).remoteYawRotation.x = pQVar10->x;
    (pAVar1->fields).remoteYawRotation.y = fVar12;
    (pAVar1->fields).remoteYawRotation.z = fVar13;
    (pAVar1->fields).remoteYawRotation.w = fVar14;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = fVar11;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    fVar14 = pQVar10->w;
    (pAVar1->fields).remotePitchRotation.x = pQVar10->x;
    (pAVar1->fields).remotePitchRotation.y = fVar12;
    (pAVar1->fields).remotePitchRotation.z = fVar13;
    (pAVar1->fields).remotePitchRotation.w = fVar14;
    (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
  }
  return;
}

