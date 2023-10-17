
/* Void AdAction(AdType, AdActionType, AdContext) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
               (MVNetworkGame_OperationRequests *this,AdType__Enum adType,
               AdActionType__Enum actionType,AdContext__Enum adContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  if (actionType == AdActionType__Enum_Start) {
    this_00 = (this->fields).networkGame;
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 == (MVLocalPlayer *)0x0)) goto code_?;
    bVar1 = MVLocalPlayer::MVLocalPlayer_IsPlaying(this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  pDStack_2 = TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>;
  this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    actionType = adType;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&actionType);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)0x29,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)0xde,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pDStack_2 = (Dictionary_2_System_Byte_System_Object___Class *)adContext;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&pDStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)0xbf,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x7b,this_02,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddAvatarToAvatarShopInventory(Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectId,String *name,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0xa6,(Object *)name,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0x36,this_01,(pSVar3->SendReliable).DeliveryMode,uVar4);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddItemToWorld(Int32, Int32, Vector3, Quaternion, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddItemToWorld
               (MVNetworkGame_OperationRequests *this,int32_t itemId,int32_t groupId,
               Vector3 position,Quaternion rotation,bool localOwner,
               bool transferOwnershipToServerOnLeave,bool isPreviewItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x28,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x17,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  if (localOwner == 0) {
    puStack_2 = (undefined *)0x0;
  }
  else {
    this_00 = (this->fields).networkGame;
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
    puStack_2 = (undefined *)(pMVar3->fields)._._ActorNr_k__BackingField;
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x14,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x27,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
            (position,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
            (rotation,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x7d,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  pPVar4 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
  uVar6._1_1_ = (pSVar5->SendReliable).Channel;
  uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
  if (pPVar4 != (PhotonPeer *)0x0) {
    (*(pPVar4->klass->vtable).SendOperation.methodPtr)
              (pPVar4,0x26,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6,
               (pPVar4->klass->vtable).SendOperation.method);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean AddLink(Link) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
               (MVNetworkGame_OperationRequests *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__LogicObjectManager__ValidateLinkStatus);
    func_?(&StringLiteral_Link_invalid_and_rejected__Reaso);
    cRam_? = '\x01';
  }
  pLVar1 = link;
  pIStack_2 = (Il2CppClass *)0x0;
  if (link != (Link *)0x0) {
    linkOutputWoId = (link->fields).outputWOID;
    linkInputWoId = (link->fields).inputWOID;
    worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_00 = (Enum *)MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink
                                (linkOutputWoId,linkInputWoId,
                                 (IWorldObjectManager *)worldObjectManager,1,
                                 (LogicObjectManager_ReportSeverity__Enum *)&pIStack_2,
                                 (MethodInfo *)0x0);
    if (this_00 != (Enum *)0x9) {
      if (this_00 != (Enum *)0x0) {
        if (pIStack_2 == (Il2CppClass *)0x2) {
          pLStack_3 = TypeInfo__LogicObjectManager__ValidateLinkStatus;
          pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar4,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            link = (Link *)TypeInfo__UnityEngine__Debug;
            func_?();
          }
          link = (Link *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar4,(MethodInfo *)0x0);
        }
        if ((pIStack_2 != (Il2CppClass *)0x0) && (pIStack_2 != (Il2CppClass *)0x1)) {
          return 0;
        }
      }
      pLStack_3 = TypeInfo__LogicObjectManager__ValidateLinkStatus;
      method = (MethodInfo *)&pLStack_3;
      link = (Link *)&UNK_?;
      method = (MethodInfo *)
               mscorlib.dll::System::Enum::Enum_ToString((Enum *)method,(MethodInfo *)0x0);
      link = (Link *)StringLiteral_Link_invalid_and_rejected__Reaso;
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Link_invalid_and_rejected__Reaso,(String *)method,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      link = (Link *)(pLVar1->fields).outputWOID;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&link);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x39,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x38,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar6 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
      uVar8._1_1_ = (pSVar7->SendReliable).Channel;
      uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
      if (pPVar6 != (PhotonPeer *)0x0) {
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,9,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                   (pPVar6->klass->vtable).SendOperation.method);
        return 1;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddObjectLink
               (MVNetworkGame_OperationRequests *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__LogicObjectManager__ValidateObjectLinkStatus);
    func_?(&StringLiteral_Link_invalid_and_rejected__Reaso);
    cRam_? = '\x01';
  }
  pSStack_1 = (SendOptions__Class *)0x0;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pOVar2 = link;
  method_00 = (MethodInfo *)
              MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateObjectLink
                        (link,(IWorldObjectManager *)worldObjectManager,
                         (LogicObjectManager_ReportSeverity__Enum *)&pSStack_1,(MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x8) {
    if (pSStack_1 == (SendOptions__Class *)0x2) {
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)0xffffffff,method_00);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
    }
    if ((pSStack_1 == (SendOptions__Class *)0x0) || (pSStack_1 == (SendOptions__Class *)0x1)) {
      link = (ObjectLink *)&stack0xffffffe8;
      method = (MethodInfo *)0x0;
      link = (ObjectLink *)mscorlib.dll::System::Enum::Enum_ToString((Enum *)link,(MethodInfo *)0x0)
      ;
      method = (MethodInfo *)0x0;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Link_invalid_and_rejected__Reaso,(String *)link,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Stack00000018.dummy = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
    }
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (pOVar2 != (ObjectLink *)0x0) {
      link = (ObjectLink *)(pOVar2->fields).objectConnectorWOID;
      pSStack_1 = (SendOptions__Class *)&link;
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x39,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x38,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        pSStack_1 = TypeInfo__ExitGames__Client__Photon__SendOptions;
        func_?();
      }
      if (pPVar5 != (PhotonPeer *)0x0) {
        pSStack_1 = (SendOptions__Class *)(pPVar5->klass->vtable).SendOperation.method;
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)(pPVar5);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddPlanetToPlanet(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddPlanetToPlanet
               (MVNetworkGame_OperationRequests *this,int32_t planetId,int32_t subtreeId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = planetId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x56,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = subtreeId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x22,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddWorldObjectToInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddWorldObjectToInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0x27,this_01,(pSVar3->SendReliable).DeliveryMode,uVar4);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AdminOperation(Byte, Int32, Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AdminOperation
               (MVNetworkGame_OperationRequests *this,uint8_t adminOperationType,int32_t amount,
               int32_t profileId,String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)0xde,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)0x8f,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_02,(Object *)0x58,(Object *)msg,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar3 = *(int **)(unaff_ESI + 0x10);
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x134))(piVar3,0x43);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
               (MVNetworkGame_OperationRequests *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    pDStack_2 = (Dictionary_2_System_Object_System_Object_ *)
                MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                          (this_00,seatBase,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (MVNetworkGame_OperationRequests *)CONCAT13(4,this._0_3_);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      iStack_4 = seatOwnerWoID;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      seatBase = (VehicleSeatBase *)((uint)seatBase & 0xffffff);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&seatBase + 3);
      iStack_6 = worldObjectID;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pDStack_2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDStack_2,(Object *)0x48,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar7 = (pMVar1->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
        uVar9._1_1_ = (pSVar8->SendReliable).Channel;
        uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
        if (pPVar7 != (PhotonPeer *)0x0) {
          (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                    (pPVar7,0x2f,pDStack_2,(pSVar8->SendReliable).DeliveryMode,uVar9,
                     (pPVar7->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AutoRegisterLocalPrototype(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AutoRegisterLocalPrototype
               (MVNetworkGame_OperationRequests *this,int32_t woId,int32_t worldInventoryID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldInventoryID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = woId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x16,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Ban(CheatType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
               (MVNetworkGame_OperationRequests *this,CheatType__Enum cheatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xb2,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x39,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      pPVar2 = (this->fields).peer;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOutgoingCommands.methodPtr)
                  (pPVar2,(pPVar2->klass->vtable).SendOutgoingCommands.method);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Ban(Int32, MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban_1
               (MVNetworkGame_OperationRequests *this,int32_t hours,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (target != (MVPlayer *)0x0) {
    MVNetworkGame_OperationRequests_AdminOperation
              (this,1,hours,(target->fields)._ProfileID_k__BackingField,reason,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ChangeMaterial(ObscuredByte) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ChangeMaterial
               (MVNetworkGame_OperationRequests *this,ObscuredByte currentMaterialId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
            ObscuredByte_GetDecrypted(&currentMaterialId,(MethodInfo *)0x0);
    uStack_2 = CONCAT13(uVar1,(undefined3)uStack_2);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_2 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x67,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar3 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar5._0_1_ = (pSVar4->SendReliable).Encrypt;
    uVar5._1_1_ = (pSVar4->SendReliable).Channel;
    uVar5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
    if (pPVar3 != (PhotonPeer *)0x0) {
      (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                (pPVar3,0x79,this_00,(pSVar4->SendReliable).DeliveryMode,uVar5,
                 (pPVar3->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ClaimGamePointWelcomeReward() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimGamePointWelcomeReward
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
    cRam_? = '\x01';
  }
  if ((this->fields).gamepointWelcomeClaimed != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
    return;
  }
  pPVar1 = (this->fields).peer;
  (this->fields).gamepointWelcomeClaimed = 1;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x6d,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ClaimPlayingNewGameRewardedGold() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimPlayingNewGameRewardedGold
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x57,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ClaimRewardedAdXP(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimRewardedAdXP
               (MVNetworkGame_OperationRequests *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13(success,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xd0,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x75,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CloneTempWorldObjectWithOriginalReference(MVWorldObjectClient, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneTempWorldObjectWithOriginalReference
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 position,
               Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  MVNetworkGame_OperationRequests_CreateWithPositionCloneData
            (this,root,position,rotation,1,0,1,1,(MethodInfo *)0x0);
  pPVar1 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneWorldObjectTree
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pDVar1 = MVNetworkGame_OperationRequests_CreateBasicCloneData
                     (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  pPVar2 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pPVar2 != (PhotonPeer *)0x0) {
    (*(pPVar2->klass->vtable).SendOperation.methodPtr)(pPVar2,0x21,pDVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloneWorldObjectTreeWithPosition(MVWorldObjectClient, Vector3, Quaternion, Boolean, Boolean,
   Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneWorldObjectTreeWithPosition
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 position,
               Quaternion rotation,bool localOwner,bool setAsPreviewItem,bool cloneToRootGroup,
               bool isTempObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  MVNetworkGame_OperationRequests_CreateWithPositionCloneData
            (this,root,position,rotation,localOwner,setAsPreviewItem,cloneToRootGroup,isTempObject,
             (MethodInfo *)0x0);
  pPVar1 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Dictionary`2[System.Byte,System.Object] CreateBasicCloneData(MVWorldObjectClient, Boolean,
   Boolean, Boolean) */

Dictionary_2_System_Byte_System_Object_ *
Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
MVNetworkGame_OperationRequests_CreateBasicCloneData
          (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,bool localOwner,
          bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                ), root != (MVWorldObjectClient *)0x0)) {
    puStack_1 = (undefined4 *)(root->fields)._.id;
    pppuStack_2 = (undefined4 ***)&puStack_1;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x16,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if ((localOwner == 0) ||
       ((this_00 = (this->fields).networkGame, this_00 != (MVNetworkGame *)0x0 &&
        (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar4 != (MVLocalPlayer *)0x0)))) {
      pppuStack_2 = &pppuStack_2;
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x14,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      bStack_5 = cloneToRootGroup;
      pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x65,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      bStack_6 = setAsPreviewItem;
      pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x7f,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      return (Dictionary_2_System_Byte_System_Object_ *)this_01;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar7)();
  return pDVar8;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CreateSpawnRole
               (MVNetworkGame_OperationRequests *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = avatarSpawnerWoId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x71,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Dictionary`2[System.Byte,System.Object] CreateWithPositionCloneData(MVWorldObjectClient, Vector3,
   Quaternion, Boolean, Boolean, Boolean, Boolean) */

Dictionary_2_System_Byte_System_Object_ *
Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
MVNetworkGame_OperationRequests_CreateWithPositionCloneData
          (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 position,
          Quaternion rotation,bool localOwner,bool setAsPreviewItem,bool cloneToRootGroup,
          bool isTempObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            MVNetworkGame_OperationRequests_CreateBasicCloneData
                      (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x00000033);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
  ;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xcb,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    position_00.y = position.y;
    position_00.x = (float)pMVar1;
    position_00.z = position.z;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
              (position_00,(Dictionary_2_System_Byte_System_Object_ *)this_00,(MethodInfo *)0x0);
    rotation_00.y = 0.0;
    rotation_00.x = (float)this_00;
    rotation_00.z = rotation.z;
    rotation_00.w = rotation.w;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
              (rotation_00,(Dictionary_2_System_Byte_System_Object_ *)this_00,(MethodInfo *)0x0);
    return (Dictionary_2_System_Byte_System_Object_ *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar2)();
  return pDVar3;
}


/* Void CustomDevCommands() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CustomDevCommands
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x70,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DeleteAvatarFromShopInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_DeleteAvatarFromShopInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x37,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DetachWorldObjectFromVehicle(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_DetachWorldObjectFromVehicle
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x30,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Expel(MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Expel
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (target != (MVPlayer *)0x0) {
    MVNetworkGame_OperationRequests_AdminOperation
              (this,2,0,(target->fields)._ProfileID_k__BackingField,reason,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GetAvatarBodies() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetAvatarBodies
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x72,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GetHighScoreList() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetHighScoreList
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x68,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GetInventoryItemData(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetInventoryItemData
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = itemID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x7a,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GetResetAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetResetAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = avatarWoID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x56,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GetThemesData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetThemesData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,100,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GetTopHighScoreList() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetTopHighScoreList
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x6c,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleUploadScreenShotData(Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_HandleUploadScreenShotData
               (MVNetworkGame_OperationRequests *this,Byte__Array *screenshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVNetworkGame__OperationRequests___HandleUploadScreenShotData_b__25_0__
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  data = MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
                   (screenshot,(MethodInfo *)0x0);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__MVNetworkGame__OperationRequests___HandleUploadScreenShotData_b__25_0__,
               (MethodInfo *)0x0);
    DataUploadManager::DataUploadManager_UploadData(data,(UnityAction *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Handshake() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Handshake
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    (pMVar1->fields).connState = 3;
    this_00 = (ParameterOverride_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0xf8,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                   (pPVar2->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void IncrementStatRequest(IncrementStatRequestType, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_IncrementStatRequest
               (MVNetworkGame_OperationRequests *this,IncrementStatRequestType__Enum statRequestType
               ,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int16);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    IStack_1 = statRequestType & 0xffff;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int16,&IStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (value != 0) {
      iStack_3 = value;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0xa0,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
    }
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x76,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsOperationPending(MVOperationCodes) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_IsOperationPending
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  pOVar1 = (this->fields).operationResponsePendingManager;
  if (pOVar1 != (OperationResponsePendingManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
    if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (this_00,operationCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                        );
      return bVar2 != 0;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void JoinGame(String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
               (MVNetworkGame_OperationRequests *this,String *encrypt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BuildTarget);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                   );
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_SkyNet);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    cRam_? = '\x01';
  }
  ppMVar1 = (MVGameControllerBase__Class **)0x2;
  if (TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession == 0) {
    ppMVar1 = (MVGameControllerBase__Class **)0x0;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    cRam_? = '\x01';
  }
  ppMVar2 = (MVGameControllerBase__Class **)((uint)ppMVar1 | 4);
  if (TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer == 0) {
    ppMVar2 = ppMVar1;
  }
  bVar3 = PlayerPrefsManager::PlayerPrefsManager_get_IsReturningAsSignedUp((MethodInfo *)0x0);
  if (bVar3 != 0) {
    ppMVar2 = (MVGameControllerBase__Class **)((uint)ppMVar2 | 8);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    ppMVar1 = (MVGameControllerBase__Class **)((uint)ppMVar2 | 1);
    if ((pGVar4->fields).embedded != 0) {
      ppMVar1 = ppMVar2;
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 != (GameSessionData *)0x0) {
        iStack_5 = (pGVar4->fields).planetID;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x56,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar4 != (GameSessionData *)0x0) {
          iStack_7 = (pGVar4->fields).gameMode;
          pOVar6 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&iStack_7);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)0x74,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar4 != (GameSessionData *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,(Object *)0x9a,(Object *)(pGVar4->fields).language,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            if (cRam_? == '\0') {
              ppMStack_8 = &TypeInfo__MVGameControllerBase;
              func_?();
              cRam_? = '\x01';
            }
            pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar4 != (GameSessionData *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)0xa7,(Object *)(pGVar4->fields).token,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              if (cRam_? == '\0') {
                ppMStack_8 = &TypeInfo__MVGameControllerBase;
                func_?();
                cRam_? = '\x01';
              }
              pGVar4 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar4 != (GameSessionData *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_00,(Object *)0x37,(Object *)(pGVar4->fields).sessionToken,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                if (cRam_? == '\0') {
                  ppMStack_8 = &TypeInfo__MVGameControllerBase;
                  func_?();
                  cRam_? = '\x01';
                }
                pGVar4 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar4 != (GameSessionData *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_00,(Object *)0xac,(Object *)(pGVar4->fields).newPlanetName,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  bStack_9 = System.dll::System::Collections::Generic::
                             SortedList`2[TKey,TValue]+ValueList[System::Single,System::Object]::
                             SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__get_IsReadOnly
                                       ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_
                                         *)0x0,unaff_ESI);
                  pOVar6 = (Object *)func_?(TypeInfo__MV__Common__BuildTarget,&bStack_9);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_00,(Object *)0xbc,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  iStack_10 = MVGameControllerBase::MVGameControllerBase_get_ReAuthTries
                                        ((MethodInfo *)0x0);
                  pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_00,(Object *)0xd1,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                      ((MethodInfo *)0x0);
                  if (this_01 != (KoGaMaSettingsContainer *)0x0) {
                    pSVar11 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                                       (this_01,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (this_00,(Object *)0xd9,(Object *)pSVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    ppMStack_8 = ppMVar1;
                    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&ppMStack_8);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (this_00,(Object *)0xcf,pOVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                              func_?(
                                             TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                                             );
                    if (this_02 !=
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                      UnitySynchronizationContext+WorkRequest]::
                      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                                (this_02,0,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                                );
                      for (index = 0; index < (this_02->fields)._size; index = index + 1) {
                        RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)this_02,index,
                                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                                          );
                        if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
                        pSVar11 = MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::
                                 FileData_NameAsString((FileData *)RVar12,(MethodInfo *)0x0);
                        bVar3 = mscorlib.dll::System::String::String_op_Equality
                                          (pSVar11,StringLiteral_SkyNet,(MethodInfo *)0x0);
                        if (bVar3 == 0) break;
                        RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)this_02,index,
                                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                                          );
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Debug);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                                  ((Object *)RVar12,(MethodInfo *)0x0);
                      }
                      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                      }
                      pSVar11 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                                         ((Object *)this_02,(MethodInfo *)0x0);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (this_00,(Object *)0xda,(Object *)pSVar11,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (this_00,(Object *)0xa,(Object *)encrypt,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                );
                      pPVar13 = (this->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      pSVar14 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      uVar15._0_1_ = (pSVar14->SendReliable).Encrypt;
                      uVar15._1_1_ = (pSVar14->SendReliable).Channel;
                      uVar15._2_2_ = *(undefined2 *)&(pSVar14->SendReliable).field_0x6;
                      if (pPVar13 != (PhotonPeer *)0x0) {
                        (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                                  (pPVar13,0xff,this_00,(pSVar14->SendReliable).DeliveryMode,uVar15,
                                   (pPVar13->klass->vtable).SendOperation.method);
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
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void JoinNotification() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_JoinNotification
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__NotificationType);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    bVar3 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
       pMVar2 != (MVLocalPlayer *)0x0)) {
      if ((pMVar2->fields)._.playerState == 3) {
        return;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar4 = (Object *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar2 != (MVLocalPlayer *)0x0)) {
          value = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,pOVar4,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar4 = (Object *)func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             pMVar2 != (MVLocalPlayer *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_01,pOVar4,(Object *)(pMVar2->fields)._._RegionCode_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pDVar5 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              pNVar6 = TypeInfo__MV__Common__NotificationType;
              pOVar4 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar5,(Object *)0xc7,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar5,(Object *)0xc8,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              if (pNVar6 != (NotificationType__Enum__Class *)0x0) {
                (*(code *)(pNVar6->_0).image[7].name)();
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar1 != (MVNetworkGame *)0x0) &&
                    (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0)
                    , pMVar2 != (MVLocalPlayer *)0x0)) &&
                   (this_00 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
                   this_00 != (SubscriptionRulesWrapper *)0x0)) {
                  bVar3 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                          ::SubscriptionRulesWrapper_HasBenefit
                                    (this_00,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    return;
                  }
                  pDVar5 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                  if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                              ((ParameterOverride_1_System_Object_ *)pDVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    pNVar6 = TypeInfo__MV__Common__NotificationType;
                    pOVar4 = (Object *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (pDVar5,(Object *)0xc7,pOVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (pDVar5,(Object *)0xc8,(Object *)this_01,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    pIVar7 = (pNVar6->_0).byval_arg.data.array;
                    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    if (pIVar7 != (Il2CppArrayType *)0x0) {
                      (**(code **)&pIVar7->etype[0x26].attrs)();
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Kick(MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Kick
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (target != (MVPlayer *)0x0) {
    MVNetworkGame_OperationRequests_AdminOperation
              (this,0,0,(target->fields)._ProfileID_k__BackingField,reason,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LocalPlayerLevelChanged(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
               (MVNetworkGame_OperationRequests *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = level;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xa9,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x38,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LockHierarchy(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LockHierarchy
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,bool lockHierarchy,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = lockHierarchy;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x3f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x14,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void LogicActivateRequest(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LogicActivateRequest
               (MVNetworkGame_OperationRequests *this,int32_t woID,bool activate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = woID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = activate;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xcc,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x42,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Observe(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
               (MVNetworkGame_OperationRequests *this,bool observe,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame_OperationRequests_AdminOperation
              (this,3,(uint)observe,-1,::StringLiteral__,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_OverrideFirstTimeEvent
               (MVNetworkGame_OperationRequests *this,FirstTimeEvent__Enum firstTimeEvent,
               bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    FStack_1 = firstTimeEvent;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&FStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = overrideValue;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xd0,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x55,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PostChatMsg(Dictionary`2[System.Object,System.Object], MVGameMsgType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PostChatMsg
               (MVNetworkGame_OperationRequests *this,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,
               MVGameMsgType__Enum chatMsgType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    MStack_1 = chatMsgType;
    value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x57,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x58,(Object *)gameMsgData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x58,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PostGameMsg(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PostGameMsg
               (MVNetworkGame_OperationRequests *this,MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    MStack_1 = gameMsgType;
    value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x57,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x58,(Object *)gameMsgData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x1c,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PostNotificationOperation(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PostNotificationOperation
               (MVNetworkGame_OperationRequests *this,NotificationType__Enum type,
               Dictionary_2_System_Object_System_Object_ *notificationData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__MV__Common__NotificationType);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar1 != (MVLocalPlayer *)0x0)) {
    if ((pMVar1->fields)._.playerState == 3) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0xc7,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0xc8,(Object *)notificationData,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)(pPVar2,0x3f,this_01);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PublishPlanet(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet
               (MVNetworkGame_OperationRequests *this,Action_1_String_ *errorHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_You_are_already_publishing_plane);
    func_?(&StringLiteral_Texture_is_already_being_generat);
    func_?(&StringLiteral_Publish_planet_operation_is_pend);
    func_?(&StringLiteral_Error_publishing_game__try_again);
    func_?(&StringLiteral_Remember_that_you_need_to_play_i);
    func_?(&StringLiteral_You_can_not_publish_game_before_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (MVar2 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
     MVar2 != MVJoinState__Enum_Playing)) {
code_?:
    TM::TM__(StringLiteral_Error_publishing_game__try_again,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode != 0) goto code_?;
    this_00 = (this->fields).operationResponsePendingManager;
    if (this_00 == (OperationResponsePendingManager *)0x0) goto code_?;
    bVar4 = OperationResponsePendingManager::OperationResponsePendingManager_IsOperationPending
                      (this_00,MVOperationCodes__Enum_PublishPlanet,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pMVar1 = (this->fields).networkGame;
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
          pMVar5 == (MVLocalPlayer *)0x0)) ||
         (pMVar1 = (this->fields).networkGame, pMVar1 == (MVNetworkGame *)0x0))
      goto code_?;
      errorHandler = (Action_1_String_ *)0x0;
      if ((pMVar1->fields)._PublishLevel_k__BackingField <= (pMVar5->fields)._.level) {
        if ((pMVar1->fields).isPublished != 0) {
          MVNetworkGame_OperationRequests_PublishPlanet_1
                    (this,0,(Action_1_String_ *)0x0,(MethodInfo *)0x0);
          return;
        }
        cVar6 = func_?();
        if (cVar6 == '\0') {
          bVar4 = MVNetworkGame_OperationRequests_PublishPlanet_1
                            (this,0,(Action_1_String_ *)0x0,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return;
          }
          pSVar7 = TM::TM__(StringLiteral_Remember_that_you_need_to_play_i,(MethodInfo *)0x0);
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNoticationInstruction
                    (pSVar7,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
          return;
        }
        message.m_value = (int32_t)StringLiteral_Texture_is_already_being_generat;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          message.m_value = (int32_t)StringLiteral_Texture_is_already_being_generat;
        }
        goto code_?;
      }
      pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_You_can_not_publish_game_before_,pSVar7,(MethodInfo *)0x0);
      errorHandler = (Action_1_String_ *)0x0;
      TM::TM__(pSVar7,(MethodInfo *)0x0);
    }
    else {
      message.m_value = (int32_t)StringLiteral_Publish_planet_operation_is_pend;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        message.m_value = (int32_t)StringLiteral_Publish_planet_operation_is_pend;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)message.m_value,(MethodInfo *)0x0);
      TM::TM__(StringLiteral_You_are_already_publishing_plane,(MethodInfo *)0x0);
    }
  }
  if (errorHandler != (Action_1_String_ *)0x0) {
    (*(errorHandler->fields)._._.invoke_impl)((errorHandler->fields)._._.method_code);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean PublishPlanet(Boolean, Action`1[String]) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet_1
               (MVNetworkGame_OperationRequests *this,bool newImagePending,
               Action_1_String_ *errorHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&StringLiteral_You_are_already_publishing_plane);
    func_?(&StringLiteral_An_error_occurred_creating_the_g);
    cRam_? = '\x01';
  }
  if (newImagePending == 0) {
code_?:
    key = TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>;
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)0x40,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    this_00 = (this->fields).operationResponsePendingManager;
    if (this_00 == (OperationResponsePendingManager *)0x0) goto code_?;
    bVar1 = OperationResponsePendingManager::
            OperationResponsePendingManager_AddOperationCodeToPending
                      (this_00,MVOperationCodes__Enum_PublishPlanet,
                       (Dictionary_2_System_Byte_System_Object_ *)this_02,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    errorHandler = (Action_1_String_ *)0x0;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_01 == (MaterialLoader *)0x0) goto code_?;
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    unaff_ESI = (MethodInfo *)0x0;
    key = (Dictionary_2_System_Byte_System_Object___Class *)
          StringLiteral_An_error_occurred_creating_the_g;
  }
  TM::TM__((String *)key,unaff_ESI);
  if (errorHandler != (Action_1_String_ *)0x0) {
    (*(errorHandler->fields)._._.invoke_impl)();
    return 0;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void PurchaseAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0x7e;
    key = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    iStack_2 = avatarId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Avatar,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PurchaseAvatarAccessory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatarAccessory
               (MVNetworkGame_OperationRequests *this,int32_t streamingAssetID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0x69;
    key = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    iStack_2 = streamingAssetID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Accessory,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PurchaseAvatarAccessoryBundle(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatarAccessoryBundle
               (MVNetworkGame_OperationRequests *this,int32_t bundleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0xbf;
    key = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    iStack_2 = bundleId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_AccessoryBundle,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PurchaseGameBooster(String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseGameBooster
               (MVNetworkGame_OperationRequests *this,String *gameBooster,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13(0xf5,(undefined3)uStack_1);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,key,(Object *)gameBooster,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_GameBooster,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseProduct(MVProductType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseProduct
               (MVNetworkGame_OperationRequests *this,MVProductType__Enum productTypeID,
               Dictionary_2_System_Object_System_Object_ *productData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    MStack_1 = productTypeID;
    value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x5e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x5f,(Object *)productData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x23,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PurchaseSwitchTheme(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseSwitchTheme
               (MVNetworkGame_OperationRequests *this,int32_t themeId,
               Dictionary_2_System_Object_System_Object_ *themeSettingsData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0xbf;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    iStack_3 = themeId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,pOVar2,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_4 = 0xcf;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,pOVar2,(Object *)themeSettingsData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Theme,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PurchaseTier(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseTier
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0xf5;
    key = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    GStack_2 = gamePassTier & 0xff;
    value = (Object *)func_?(TypeInfo__System__Int32,&GStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_GamePassTier,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RegisterWorldObject(WorldObjectType, Int32, Dictionary`2[System.Object,System.Object],
   Vector3, Quaternion, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RegisterWorldObject
               (MVNetworkGame_OperationRequests *this,WorldObjectType__Enum type,int32_t groupId,
               Dictionary_2_System_Object_System_Object_ *woData,Vector3 position,
               Quaternion rotation,Vector3 scale,bool localOwner,
               bool transferOwnershipToServerOnLeave,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  WStack_1 = type;
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType,&WStack_1);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x11,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  iStack_3 = groupId;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x17,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x12,(Object *)woData,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  if (localOwner == 0) {
    iStack_4 = 0;
  }
  else {
    this_00 = (this->fields).networkGame;
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    iStack_4 = (pMVar5->fields)._._ActorNr_k__BackingField;
  }
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x14,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  bStack_6 = transferOwnershipToServerOnLeave;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x27,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
            (position,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
            (rotation,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale_1
            (scale,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  pPVar7 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
  uVar9._1_1_ = (pSVar8->SendReliable).Channel;
  uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
  if (pPVar7 != (PhotonPeer *)0x0) {
    (*(pPVar7->klass->vtable).SendOperation.methodPtr)
              (pPVar7,0,this_01,(pSVar8->SendReliable).DeliveryMode,uVar9,
               (pPVar7->klass->vtable).SendOperation.method);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveItemFromInventory
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = itemID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0xd,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveLink(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveLink
               (MVNetworkGame_OperationRequests *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_RemoveLink__Link_not_found);
    cRam_? = '\x01';
  }
  iVar1 = linkID;
  pMVar2 = this;
  pMVar3 = (this->fields).networkGame;
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).worldNetwork, this_00 != (WorldNetwork *)0x0)) {
    bVar4 = WorldNetwork::WorldNetwork_LinksContains(this_00,linkID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_RemoveLink__Link_not_found,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      this = (MVNetworkGame_OperationRequests *)iVar1;
      value = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x3a,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (pMVar2->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
      uVar7._1_1_ = (pSVar6->SendReliable).Channel;
      uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,10,this_01,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   (pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveObjectLink(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveObjectLink
               (MVNetworkGame_OperationRequests *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_RemoveObjectLink__ObjectLink_not);
    cRam_? = '\x01';
  }
  iVar1 = objectLinkID;
  pMVar2 = this;
  pMVar3 = (this->fields).networkGame;
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).worldNetwork, this_00 != (WorldNetwork *)0x0)) {
    bVar4 = WorldNetwork::WorldNetwork_ObjectLinksContains(this_00,objectLinkID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_RemoveObjectLink__ObjectLink_not,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      this = (MVNetworkGame_OperationRequests *)iVar1;
      value = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x3a,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (pMVar2->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
      uVar7._1_1_ = (pSVar6->SendReliable).Channel;
      uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,0x1f,this_01,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   (pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveWorldObjectDataPartial(Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,String *keyPath,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Trying_to_remoe_WO_data_with_an_);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator != (Char__Array *)0x0) {
    if (separator->max_length == 0) {
code_?:
      func_?();
    }
    else {
      separator->vector[0] = 0x5c;
      if (keyPath != (String *)0x0) {
        pSVar1 = mscorlib.dll::System::String::String_Split_3
                           (keyPath,separator,StringSplitOptions__Enum_RemoveEmptyEntries,
                            (MethodInfo *)0x0);
        if (pSVar1 != (String__Array *)0x0) {
          if (pSVar1->max_length == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Trying_to_remoe_WO_data_with_an_,(MethodInfo *)0x0);
          }
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            keyPath = (String *)pSVar1->vector;
            uVar3 = 0;
            while ((int)uVar3 < (int)pSVar1->max_length) {
              if ((int)uVar3 < (int)(pSVar1->max_length - 1)) {
                this_00 = (Dictionary_2_System_Object_System_Object_ *)
                          func_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                         );
                if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          ((ParameterOverride_1_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                if (pSVar1->max_length <= uVar3) goto code_?;
                if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (pDVar2,(Object *)keyPath->klass,(Object *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                uVar3 = uVar3 + 1;
                keyPath = (String *)&keyPath->monitor;
                pDVar2 = this_00;
              }
              else {
                if (pSVar1->max_length <= uVar3) goto code_?;
                if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (pDVar2,(Object *)keyPath->klass,(Object *)::StringLiteral__,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                uVar3 = uVar3 + 1;
                keyPath = (String *)&keyPath->monitor;
              }
            }
            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                    );
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              value_00 = (Object *)&keyPath;
              keyPath = (String *)worldObjectID;
              value = (Object *)func_?(TypeInfo__System__Int32);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar2,(Object *)0x16,value,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar2,(Object *)0x13,value_00,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              pPVar4 = (this->fields).peer;
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
              uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
              uVar6._1_1_ = (pSVar5->SendReliable).Channel;
              uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
              if (pPVar4 != (PhotonPeer *)0x0) {
                (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                          (pPVar4,5,pDVar2,(pSVar5->SendReliable).DeliveryMode,uVar6,
                           (pPVar4->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woDataToRemove,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x13,(Object *)woDataToRemove,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,5,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ReportCaptureFlag(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ReportCaptureFlag
               (MVNetworkGame_OperationRequests *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = woid;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x17,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ReportReachedTimeAttackFlag(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
               (MVNetworkGame_OperationRequests *this,int32_t captureTime,int32_t woid,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = captureTime;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x23,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = woid;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x5e,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RequestAcceptFriendShip(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAcceptFriendShip
               (MVNetworkGame_OperationRequests *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_Friend_RequestAccepted);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestAccepted,1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x34,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x10,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestAccessoryData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAccessoryData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_);
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this_01 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)0x0,
               MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_,(MethodInfo *)0x0)
    ;
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedAccessoryData
                (this_00,(Action_1_String_ *)this_01,(MethodInfo *)0x0);
      piVar1 = piRam_?;
      this_02 = (ParameterOverride_1_System_Object_ *)func_?();
      if (this_02 != (ParameterOverride_1_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x134))
                    (piVar1,0x5f,this_02,
                     (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable)
                     .DeliveryMode);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestAddItemToMarketPlace(Int32, String, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAddItemToMarketPlace
               (MVNetworkGame_OperationRequests *this,int32_t itemID,String *itemName,
               String *itemDescription,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = itemID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2a,(Object *)itemName,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x86,(Object *)itemDescription,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x2c,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestBuiltInItem(BuiltInItem, Int32, Dictionary`2[System.Object,System.Object], Vector3,
   Quaternion, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestBuiltInItem
               (MVNetworkGame_OperationRequests *this,BuiltInItem__Enum builtInItem,int32_t groupId,
               Dictionary_2_System_Object_System_Object_ *customData,Vector3 position,
               Quaternion rotation,Vector3 scale,bool localOwner,
               bool transferOwnershipToServerOnLeave,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__Common__BuiltInItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = (undefined1)builtInItem;
  pOVar2 = (Object *)func_?(TypeInfo__MV__Common__BuiltInItem,&uStack_1);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x73,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  iStack_3 = groupId;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x17,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0xf5,(Object *)customData,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  if (localOwner == 0) {
    iStack_4 = 0;
  }
  else {
    this_00 = (this->fields).networkGame;
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    iStack_4 = (pMVar5->fields)._._ActorNr_k__BackingField;
  }
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x14,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  bStack_6 = transferOwnershipToServerOnLeave;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (this_01,(Object *)0x27,pOVar2,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
            );
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
            (position,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
            (rotation,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale_1
            (scale,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
  pPVar7 = (this->fields).peer;
  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
  uVar9._1_1_ = (pSVar8->SendReliable).Channel;
  uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
  if (pPVar7 != (PhotonPeer *)0x0) {
    (*(pPVar7->klass->vtable).SendOperation.methodPtr)
              (pPVar7,0x25,this_01,(pSVar8->SendReliable).DeliveryMode,uVar9,
               (pPVar7->klass->vtable).SendOperation.method);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean RequestFriendShipByID(Int32, String ByRef) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestFriendShipByID
               (MVNetworkGame_OperationRequests *this,int32_t id,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_Can_t_request_friendship_from_yo);
    func_?(&StringLiteral_Friend_RequestSent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestSent,1,(MethodInfo *)0x0);
  pMVar1 = this;
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      if (id == (pMVar2->fields)._._ProfileID_k__BackingField) {
        this = (MVNetworkGame_OperationRequests *)0x0;
        this = (MVNetworkGame_OperationRequests *)
               TM::TM__(StringLiteral_Can_t_request_friendship_from_yo,(MethodInfo *)0x0);
        *errorText = (String *)this;
        func_?();
        return 0;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this = (MVNetworkGame_OperationRequests *)
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
        ;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        this = (MVNetworkGame_OperationRequests *)&this;
        value = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)0x35,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar3 = (pMVar1->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          this = (MVNetworkGame_OperationRequests *)TypeInfo__ExitGames__Client__Photon__SendOptions
          ;
          func_?();
        }
        if (pPVar3 != (PhotonPeer *)0x0) {
          this = (MVNetworkGame_OperationRequests *)(pPVar3->klass->vtable).SendOperation.method;
          (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                    (pPVar3,0xf,this_01,
                     (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable)
                     .DeliveryMode);
          return 1;
        }
      }
    }
  }
  this = (MVNetworkGame_OperationRequests *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void RequestLargeDBQuery(MVOperationCodes, DBQuery, Dictionary`2[System.Object,System.Object],
   Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestLargeDBQuery
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               DBQuery__Enum query,Dictionary_2_System_Object_System_Object_ *inData,
               int32_t numRowsPerReturn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = (undefined1)query;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x0,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)inData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = numRowsPerReturn;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x6,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,operationCode,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RequestMarketPlaceItem(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestMarketPlaceItem
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_MVOperationCodes_GetMarketPlaceI);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_MVOperationCodes_GetMarketPlaceI,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = itemID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x2b,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestRejectFriendShip(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestRejectFriendShip
               (MVNetworkGame_OperationRequests *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = friendID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x34,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x11,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestRemoveItemFromMarketPlace(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestRemoveItemFromMarketPlace
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = itemID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x2d,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestResetTerrain() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestResetTerrain
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pPVar1 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x35,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestUpdateGoldResponse() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestUpdateGoldResponse
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x6e,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestWoUniquePrototype(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestWoUniquePrototype
               (MVNetworkGame_OperationRequests *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = woId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x16,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetAvatar
               (MVNetworkGame_OperationRequests *this,int32_t AvatarID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_Reset_ActiveAvatar__called);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Reset_ActiveAvatar__called,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = AvatarID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x7e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x2a,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetFirstTimeEvents
               (MVNetworkGame_OperationRequests *this,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13(overrideValue,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xd0,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x53,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetHighlights() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetHighlights
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x62,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetLogicChunk(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetLogicChunk
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x18,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetPlayerPlanetData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetPlayerPlanetData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x67,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RevokeEditRights(MVPlayer) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RevokeEditRights
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xde,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (target != (MVPlayer *)0x0) {
      iStack_3 = (target->fields)._ProfileID_k__BackingField;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar4 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      if (pPVar4 != (PhotonPeer *)0x0) {
        (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                  (pPVar4,0x44,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                   (pPVar4->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SendClientLog(String, String, LogType, Dictionary`2[System.String,System.Object],
   Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SendClientLog
               (MVNetworkGame_OperationRequests *this,String *logString,String *stackTrace,
               LogType__Enum type,Dictionary_2_System_String_System_Object_ *extraSentryData,
               Dictionary_2_System_String_System_String_ *tags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x92,(Object *)logString,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x93,(Object *)stackTrace,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    uStack_1 = CONCAT13((undefined1)type,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x94,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x99,(Object *)extraSentryData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbb,(Object *)tags,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x32,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      pPVar2 = (this->fields).peer;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOutgoingCommands.methodPtr)
                  (pPVar2,(pPVar2->klass->vtable).SendOutgoingCommands.method);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendRuntimeEventOperation(RuntimeEvent) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SendRuntimeEventOperation
               (MVNetworkGame_OperationRequests *this,RuntimeEvent *runtimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (runtimeEvent != (RuntimeEvent *)0x0) {
      value = (Object *)
              (*(runtimeEvent->klass->vtable).__unknown.methodPtr)
                        (runtimeEvent,(runtimeEvent->klass->vtable).__unknown.method);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0xf5,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar1 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
      uVar3._1_1_ = (pSVar2->SendReliable).Channel;
      uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
      if (pPVar1 != (PhotonPeer *)0x0) {
        (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                  (pPVar1,0x34,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                   (pPVar1->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetActiveAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetActiveAvatar
               (MVNetworkGame_OperationRequests *this,int32_t AvatarID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = AvatarID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x7e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x29,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetActiveSpawnRole
               (MVNetworkGame_OperationRequests *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = woID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x6f,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAvatarAccessorySlot(Int32, Int32, Single, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
               (MVNetworkGame_OperationRequests *this,int32_t avatarBodyWoID,
               int32_t streamingAssetId,float offset,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Set_accessory_slot);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Set_accessory_slot,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = avatarBodyWoID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    iStack_3 = streamingAssetId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x69,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    fStack_4 = offset;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x72,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    piVar5 = (int *)(this_00->fields)._count;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
    uVar7._1_1_ = (pSVar6->SendReliable).Channel;
    uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x134))
                (piVar5,0x2e,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                 *(undefined4 *)(*piVar5 + 0x138));
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetEarningsReportToSeenOperation() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetEarningsReportToSeenOperation
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x6b,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetFirstTimeEvent
               (MVNetworkGame_OperationRequests *this,FirstTimeEvent__Enum firstTimeEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    FStack_1 = firstTimeEvent;
    value = (Object *)func_?(TypeInfo__System__Int32,&FStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x54,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetGamePassTierToSeenOperation(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetGamePassTierToSeenOperation
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13((undefined1)gamePassTier,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xf5,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x6a,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetHighlightToSeen(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetHighlightToSeen
               (MVNetworkGame_OperationRequests *this,int32_t highlightId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = highlightId;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x61,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMouseSensitivity(Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetMouseSensitivity
               (MVNetworkGame_OperationRequests *this,float newMouseSensitivity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    fStack_1 = newMouseSensitivity;
    value = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xd8,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x65,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSayChatBubbleVisible(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
               (MVNetworkGame_OperationRequests *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_V);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13(shouldShow,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)StringLiteral_V,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0xf5,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0x5d,this_01,(pSVar3->SendReliable).DeliveryMode,uVar4,
                   (pPVar2->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetSpawnRoleBody(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetSpawnRoleBody
               (MVNetworkGame_OperationRequests *this,int32_t avatarCreatorWoId,
               int32_t avatarBodyDbId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = avatarCreatorWoId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = avatarBodyDbId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x73,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
               (MVNetworkGame_OperationRequests *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pMVar2->fields).teams;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)team,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                        );
      if (bVar3 == 0) {
        return;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)0x59,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar4 = (this->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
        uVar6._1_1_ = (pSVar5->SendReliable).Channel;
        uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
        if (pPVar4 != (PhotonPeer *)0x0) {
          (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                    (pPVar4,0x1d,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6,
                     (pPVar4->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTier(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_1 = CONCAT13((undefined1)gamePassTier,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xf5,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x69,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShutdownSession() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ShutdownSession
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  MVNetworkGame_OperationRequests_AdminOperation(this,4,1,-1,::StringLiteral__,(MethodInfo *)0x0);
  return;
}


/* Void SpawnVehicleWithDriver(Int32, Int32, VehicleSeatBase) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectSpawnerVehicleID,
               int32_t worldObjectID,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    pDStack_2 = (Dictionary_2_System_Object_System_Object_ *)
                MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                          (this_00,seatBase,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (MVNetworkGame_OperationRequests *)CONCAT13(1,this._0_3_);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      iStack_4 = worldObjectSpawnerVehicleID;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      seatBase = (VehicleSeatBase *)((uint)seatBase & 0xffffff);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&seatBase + 3);
      iStack_6 = worldObjectID;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar3,pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pDStack_2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDStack_2,(Object *)0x48,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar7 = (pMVar1->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
        uVar9._1_1_ = (pSVar8->SendReliable).Channel;
        uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
        if (pPVar7 != (PhotonPeer *)0x0) {
          (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                    (pPVar7,0x31,pDStack_2,(pSVar8->SendReliable).DeliveryMode,uVar9,
                     (pPVar7->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartSessionTime() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_StartSessionTime
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pPVar1 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x66,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Syncronize() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_Syncronize
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x3a,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SyncronizePing() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SyncronizePing
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x3c,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TogglePreviewTier() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TogglePreviewTier
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (ParameterOverride_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,0x74,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TransferOwnership(Int32, Int32, Transform) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TransferOwnership
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,int32_t ownerActorNr,
               Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    puStack_2 = (undefined *)ownerActorNr;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x14,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)t,(Object_1 *)0x0,(MethodInfo *)0x0);
    pBVar4 = TypeInfo__System__Boolean;
    if (bVar3 == 0) {
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x54,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if (t == (Transform *)0x0) goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)(auStack_6 + 4),t,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
                (*pVVar5,(Dictionary_2_System_Byte_System_Object_ *)this_00,(MethodInfo *)0x0);
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)auStack_6,t,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
                (*pQVar7,(Dictionary_2_System_Byte_System_Object_ *)this_00,(MethodInfo *)0x0);
    }
    else {
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x54,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
    }
    pIVar8 = (pBVar4->_0).byval_arg.data.array;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar9 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar10._0_1_ = (pSVar9->SendReliable).Encrypt;
    uVar10._1_1_ = (pSVar9->SendReliable).Channel;
    uVar10._2_2_ = *(undefined2 *)&(pSVar9->SendReliable).field_0x6;
    if (pIVar8 != (Il2CppArrayType *)0x0) {
      (**(code **)&pIVar8->etype[0x26].attrs)
                (pIVar8,6,this_00,(pSVar9->SendReliable).DeliveryMode,uVar10,
                 pIVar8->etype[0x27].data.dummy);
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void TransferWorldObjectsToGroup(Int32, Int32[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
               (MVNetworkGame_OperationRequests *this,int32_t groupId,Int32__Array *worldObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_Trying_to_transfer_WO_);
    func_?(&StringLiteral__to_itself__);
    cRam_? = '\x01';
  }
  value = worldObjects;
  bVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                    ((IEnumerable_1_System_Object_ *)worldObjects,(Object *)groupId,
                     bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                    );
  if (bVar1 != 0) {
    str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&groupId,(MethodInfo *)0x0);
    message = (MethodInfo *)
              mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Trying_to_transfer_WO_,str1,StringLiteral__to_itself__,
                         (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    worldObjects = (Int32__Array *)&UNK_?;
    method = message;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    worldObjects = (Int32__Array *)groupId;
    value_00 = (Object *)func_?(TypeInfo__System__Int32,&worldObjects);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x48,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x20,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TriggerBoxEnter(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxEnter
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((value[1].monitor == (MonitorData *)0x0) ||
         (value[2].klass = (Object__Class *)triggerBoxOwnerId, value[1].monitor < (MonitorData *)0x2
         )) goto code_?;
      value[2].monitor = (MonitorData *)triggerInstigatorId;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0x12,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                   (pPVar2->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TriggerBoxExit(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxExit
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((value[1].monitor == (MonitorData *)0x0) ||
         (value[2].klass = (Object__Class *)triggerBoxOwnerId, value[1].monitor < (MonitorData *)0x2
         )) goto code_?;
      value[2].monitor = (MonitorData *)triggerInstigatorId;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,0x13,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                   (pPVar2->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TryRemovePendingOperation(MVOperationCodes) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TryRemovePendingOperation
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  pOVar1 = (this->fields).operationResponsePendingManager;
  if (pOVar1 != (OperationResponsePendingManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pHVar2 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
    if (pHVar2 != (HashSet_1_System_ByteEnum_ *)0x0) {
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (pHVar2,operationCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                        );
      if (bVar3 != 0) {
        pHVar2 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
        if (pHVar2 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
        HashSet_1_System_ByteEnum__Remove
                  (pHVar2,operationCode,
                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                  );
      }
      return;
    }
  }
code_?:
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnEquipAccessory(Int32, AccessorySlotType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnEquipAccessory
               (MVNetworkGame_OperationRequests *this,int32_t avatarBodyWoID,
               AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = avatarBodyWoID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = accessorySlotType;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,0x60,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnlockClientShopInventoryItem(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnlockClientShopInventoryItem
               (MVNetworkGame_OperationRequests *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Purchase_item_with_id__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&itemId,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Purchase_item_with_id__,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    key = (Object *)func_?();
    value = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              ((MVNetworkGame_OperationRequests *)&stack0xfffffffb,MVProductType__Enum_Item,this_00,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnlockMaterial(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnlockMaterial
               (MVNetworkGame_OperationRequests *this,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStack_1 = 0x67;
    key = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
    iStack_2 = materialID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_MaterialUnlock,this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnregisterWorldObject(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnregisterWorldObject
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,1,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateAvatarAccessoryOffset(Int32, AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateAvatarAccessoryOffset
               (MVNetworkGame_OperationRequests *this,int32_t bodyWoID,AccessorySlotType__Enum slot,
               float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = bodyWoID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = slot;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x71,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    fStack_4 = offset;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x72,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar5 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
    uVar7._1_1_ = (pSVar6->SendReliable).Channel;
    uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
    if (pPVar5 != (PhotonPeer *)0x0) {
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,0x33,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                 (pPVar5->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateAvatarAccessoryScale(Int32, AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateAvatarAccessoryScale
               (MVNetworkGame_OperationRequests *this,int32_t bodyWoID,AccessorySlotType__Enum slot,
               float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = bodyWoID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = slot;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x71,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    fStack_4 = scale;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar5 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
    uVar7._1_1_ = (pSVar6->SendReliable).Channel;
    uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
    if (pPVar5 != (PhotonPeer *)0x0) {
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,99,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                 (pPVar5->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateInventorySlots(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateInventorySlots
               (MVNetworkGame_OperationRequests *this,
               Dictionary_2_System_Object_System_Object_ *itemIdToSlotIndexTable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2e,(Object *)itemIdToSlotIndexTable,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)(pPVar1,0xe,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLineOfFire(Int32, Vector3, Vector3) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateLineOfFire
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectIDPickupOwner,
               Vector3 camDir,Vector3 camOrigin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4a,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4b,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4c,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4d,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4e,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4f,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendUnreliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendUnreliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendUnreliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x1a,this_00,(pSVar3->SendUnreliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdatePrototype(Int32, Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdatePrototype
               (MVNetworkGame_OperationRequests *this,int32_t worldInventoryID,
               Byte__Array *prototypeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldInventoryID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2f,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x31,(Object *)prototypeData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,7,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdatePrototypeScale(Int32, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdatePrototypeScale
               (MVNetworkGame_OperationRequests *this,int32_t worldInventoryID,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldInventoryID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    fStack_3 = scale;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
    uVar6._1_1_ = (pSVar5->SendReliable).Channel;
    uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,8,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateWorldObject(Int32, Vector3, Byte[], TransformPackageType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObject
               (MVNetworkGame_OperationRequests *this,int32_t id,Vector3 position,
               Byte__Array *rotation,TransformPackageType__Enum packageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    this_00 = (this->fields).networkGame;
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x23,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
                (position,(Dictionary_2_System_Byte_System_Object_ *)this_01,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x9d,(Object *)rotation,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)0x24,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      iVar3 = 0;
      uVar4._0_1_ = 0;
      uVar4._1_1_ = 0;
      uVar4._2_2_ = 0;
      Photon3Unity3D.dll::ExitGames::Client::Photon::SendOptions::SendOptions_set_Reliability
                ((SendOptions *)&stack0xffffffe8,
                 (undefined1)packageType == TransformPackageType__Enum_Stop,(MethodInfo *)0x0);
      pPVar5 = (this->fields).peer;
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,2,this_01,iVar3,uVar4,(pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, String, Object) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,String *keyPath,
               Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_Trying_to_update_WO_with_an_empt);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length != 0) {
    separator->vector[0] = 0x5c;
    if ((keyPath == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Split_3
                           (keyPath,separator,StringSplitOptions__Enum_RemoveEmptyEntries,
                            (MethodInfo *)0x0), pSVar1 == (String__Array *)0x0))
    goto code_?;
    if (pSVar1->max_length == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_update_WO_with_an_empt,(MethodInfo *)0x0);
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (pSVar1->max_length - 1 < pSVar1->max_length) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)pSVar1->vector[pSVar1->max_length - 1],value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      for (uVar2 = pSVar1->max_length - 2; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
        keyPath = (String *)&UNK_?;
        value = (Object *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        value_01 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
        ;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pSVar1->max_length <= uVar2) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_00,(Object *)keyPath->klass,(Object *)value_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      keyPath = (String *)&UNK_?;
      value = (Object *)
              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>;
      this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        keyPath = (String *)worldObjectID;
        value_00 = (Object *)func_?(TypeInfo__System__Int32,&keyPath);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)0x16,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)0x12,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar3 = (this->fields).peer;
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        uVar5._0_1_ = (pSVar4->SendReliable).Encrypt;
        uVar5._1_1_ = (pSVar4->SendReliable).Channel;
        uVar5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        if (pPVar3 != (PhotonPeer *)0x0) {
          (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                    (pPVar3,4,this_01,(pSVar4->SendReliable).DeliveryMode,uVar5,
                     (pPVar3->klass->vtable).SendOperation.method);
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x12,(Object *)woData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,4,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateWorldObjectRunTimeData(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectRunTimeData
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectRunTimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x46,(Object *)worldObjectRunTimeData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x19,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UploadData(Int32, Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UploadData
               (MVNetworkGame_OperationRequests *this,int32_t id,Byte__Array *uploadData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = id;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0xf5,(Object *)uploadData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x3e,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UploadGameScreenShot() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UploadGameScreenShot
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Byte_[]>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                   );
    func_?(&StringLiteral_No_screen_shot_when_not_planet_o);
    func_?(&StringLiteral_Texture_is_already_being_generat);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
      if (MVar1 != MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_No_screen_shot_when_not_planet_o,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField != 0)
      {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Texture_is_already_being_generat,(MethodInfo *)0x0);
        return;
      }
      this_02 = (Action_1_Object_ *)func_?();
      if (this_02 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_02,(Object *)0x0,
                   MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                   ,(MethodInfo *)0x0);
        MVNetworkGame::MVNetworkGame_GeneratePlanetScreenShot
                  ((Action_1_Byte_ *)this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void VehicleEnergyUse(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_VehicleEnergyUse
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectSpawnerVehicleEnergyID,
               int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      uStack_1 = 1;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
      iStack_3 = worldObjectSpawnerVehicleEnergyID;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar2,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_5 = 0;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
      iStack_6 = worldObjectID;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,pOVar2,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x48,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar7 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
      uVar9._1_1_ = (pSVar8->SendReliable).Channel;
      uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
      if (pPVar7 != (PhotonPeer *)0x0) {
        (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                  (pPVar7,0x78,this_00,(pSVar8->SendReliable).DeliveryMode,uVar9,
                   (pPVar7->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WorldObjectRPC(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_WorldObjectRPC
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *dataPackage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iStack_1 = worldObjectID;
    value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x53,(Object *)dataPackage,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
    uVar4._1_1_ = (pSVar3->SendReliable).Channel;
    uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,0x1b,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVNetworkGame+OperationRequests(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
               (MVNetworkGame_OperationRequests *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__OperationResponsePendingManager);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).dummyData = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).dummyData;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  if (networkGame != (MVNetworkGame *)0x0) {
    pPVar1 = (networkGame->fields)._Peer_k__BackingField;
    (this->fields).peer = pPVar1;
    func_?(&(this->fields).peer,pPVar1);
    pPVar1 = (this->fields).peer;
    this_00 = (OperationResponsePendingManager *)
              func_?(TypeInfo__OperationResponsePendingManager);
    if (this_00 != (OperationResponsePendingManager *)0x0) {
      OperationResponsePendingManager::OperationResponsePendingManager__ctor
                (this_00,pPVar1,(MethodInfo *)0x0);
      (this->fields).operationResponsePendingManager = this_00;
      func_?(&this->fields,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

