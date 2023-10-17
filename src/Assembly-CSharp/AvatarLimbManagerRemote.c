
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
  pAVar1 = (AvatarLimbManager_AvatarLookDirectionHandler *)
           func_?(TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler);
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pAVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields)._.lookDirectionHandler = pAVar1;
    func_?(&(this->fields)._.lookDirectionHandler,pAVar1);
    pAVar1 = (this->fields)._.lookDirectionHandler;
    if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
      (pAVar1->fields).avatarWO = avatarWO;
      func_?(&(pAVar1->fields).avatarWO,avatarWO);
      pAVar2 = (AvatarLimbManager_LimbRotator *)
               func_?(TypeInfo__AvatarLimbManager__LimbRotator);
      if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
        (pAVar2->fields).isActive = 1;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pAVar2,ExceptionArgument__Enum_obj,unaff_EDI);
        (this->fields)._.limbRotator = pAVar2;
        func_?(&(this->fields)._.limbRotator,pAVar2);
        pAVar2 = (this->fields)._.limbRotator;
        if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
                    (pAVar2,avatarWO,body,(AvatarLimbManager *)this,(MethodInfo *)0x0);
          pAVar3 = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)
                   func_?(
                                  TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote
                                  );
          if (pAVar3 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
            (pAVar3->fields)._.shouldLean = 1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)pAVar3,ExceptionArgument__Enum_obj,unaff_EDI);
            (this->fields).headRotationHandler = pAVar3;
            func_?(&(this->fields).headRotationHandler,pAVar3);
            pAVar3 = (this->fields).headRotationHandler;
            if (pAVar3 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
              (*(pAVar3->klass->vtable).Initialize.methodPtr)
                        (pAVar3,this,(this->fields)._.limbRotator,
                         (this->fields)._.lookDirectionHandler,
                         (pAVar3->klass->vtable).Initialize.method);
              pAVar4 = (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)
                       func_?(
                                      TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote
                                      );
              if (pAVar4 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
                (pAVar4->fields)._.pointingDuration = 0.8;
                (pAVar4->fields)._.shouldPoint = 1;
                (pAVar4->fields)._.isActive = 1;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)pAVar4,ExceptionArgument__Enum_obj,unaff_EDI);
                (this->fields).pointingHandler = pAVar4;
                func_?(&(this->fields).pointingHandler,pAVar4);
                pAVar4 = (this->fields).pointingHandler;
                if (pAVar4 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
                  (*(pAVar4->klass->vtable).Initialize.methodPtr)
                            (pAVar4,this,(this->fields)._.limbRotator,enabledChangeHandler,
                             (pAVar4->klass->vtable).Initialize.method);
                  pAVar5 = (AvatarLimbManager_AvatarEmoteHandler *)
                           func_?(TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
                  if (pAVar5 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                                     );
                      func_?(&
                                      TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                                     );
                      cRam_? = '\x01';
                    }
                    this_00 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)
                              func_?(
                                             TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                                             );
                    if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
                      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                                ((ParameterOverride_1_System_Object_ *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                                );
                      method_00 = (MethodInfo *)&(pAVar5->fields).emoteDatas;
                      (pAVar5->fields).emoteDatas = this_00;
                      func_?(method_00,this_00);
                      (pAVar5->fields).isActive = 1;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                ((Object *)pAVar5,ExceptionArgument__Enum_obj,method_00);
                      (this->fields)._.emoteHandler = pAVar5;
                      func_?(&(this->fields)._.emoteHandler,pAVar5);
                      pAVar5 = (this->fields)._.emoteHandler;
                      if (pAVar5 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
                        AvatarLimbManager+AvatarEmoteHandler::
                        AvatarLimbManager_AvatarEmoteHandler_Initialize
                                  (pAVar5,(AvatarLimbManager *)this,
                                   (this->fields)._.lookDirectionHandler,
                                   (AvatarLimbManager_AvatarPointingHandler *)
                                   (this->fields).pointingHandler,
                                   (AvatarLimbManager_AvatarHeadRotationHandler *)
                                   (this->fields).headRotationHandler,(this->fields)._.limbRotator,
                                   enabledChangeHandler,(MethodInfo *)0x0);
                        pAVar5 = (this->fields)._.emoteHandler;
                        if (pAVar5 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
                          pAVar6 = (pAVar5->fields).OnEmoteStart;
                          this_01 = (Action_1_Object_ *)
                                    func_?(TypeInfo__System__Action<System::String>);
                          if (this_01 != (Action_1_Object_ *)0x0) {
                            mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                                      (this_01,(Object *)this,
                                       MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
                                       (MethodInfo *)0x0);
                            pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                               ((Delegate *)pAVar6,(Delegate *)this_01,
                                                (MethodInfo *)0x0);
                            if (pDVar7 == (Delegate *)0x0) {
                              (pAVar5->fields).OnEmoteStart = (Action_1_String_ *)0x0;
                            }
                            else {
                              pAVar6 = (Action_1_String_ *)func_?();
                              if (pAVar6 == (Action_1_String_ *)0x0) goto code_?;
                              (pAVar5->fields).OnEmoteStart = pAVar6;
                              iVar8 = func_?();
                              if (iVar8 == 0) goto code_?;
                            }
                            func_?();
                            pAVar9 = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)
                                      func_?();
                            if (pAVar9 !=
                                (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0) {
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                        ((Object *)pAVar9,ExceptionArgument__Enum_obj,unaff_EDI);
                              (this->fields).dataManager = pAVar9;
                              func_?(&(this->fields).dataManager,pAVar9);
                              pAVar9 = (this->fields).dataManager;
                              if (pAVar9 !=
                                  (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0) {
                                AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
                                AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
                                          (pAVar9,limbRotationRuntimeData,this,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      goto code_?;
    }
  }
  MVWorldObject.dll::MV::WorldObject::QuaternionCompression::QuaternionCompression_ToQuaternion
            ((Quaternion *)&stack0xffffffe0,eulerAnglesByteRange,(MethodInfo *)0x0);
  iVar2 = func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  fVar3 = *(float *)(iVar2 + 4);
  pfVar4 = (float *)func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  AvatarLimbManagerRemote_UpdateHeadRotationRemotely(this,fVar3,*pfVar4,(MethodInfo *)0x0);
  iVar2 = func_?(&stack0xfffffff0,&stack0xffffffe0);
  fVar3 = *(float *)(iVar2 + 4);
  pfVar4 = (float *)func_?(&stack0xfffffff0,&stack0xffffffe0,0);
  this_00 = (this->fields).pointingHandler;
  if (this_00 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
    AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
              (this_00,fVar3,*pfVar4,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
        (*(pAVar4->klass->vtable).StopEmote.methodPtr)();
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pAVar1->fields).emoteDatas;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,(Object *)emoteType,
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
          (*(code *)((pOVar3[1].klass)->_0).image[5].assembly)();
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
        (*(pAVar4->klass->vtable).UpdateEmotes.methodPtr)();
        pAVar5 = (this->fields).headRotationHandler;
        if (pAVar5 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
          (*(pAVar5->klass->vtable).UpdateRotation.methodPtr)();
          pAVar6 = (this->fields).pointingHandler;
          if (pAVar6 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
            (*(pAVar6->klass->vtable).UpdatePointing.methodPtr)(pAVar6,uVar3);
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


/* Void UpdatePointingRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,MethodInfo *method)

{
  this_00 = (this->fields).pointingHandler;
  if (this_00 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
    AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
              (this_00,yaw,pitch,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

