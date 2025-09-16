
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
      pAVar6 = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)pAVar6,(MethodInfo *)0x0);
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
    AvatarLimbManagerRemote+AvatarHeadRotationHandlerRemote::
    AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote_SetRotationRemotely
              (this_00,yaw,pitch,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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


/* Void UpdatePointingRemotely(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,bool isPointingWeapon,
               MethodInfo *method)

{
  this_00 = (this->fields).pointingHandler;
  if (this_00 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
    AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
              (this_00,yaw,pitch,isPointingWeapon,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

