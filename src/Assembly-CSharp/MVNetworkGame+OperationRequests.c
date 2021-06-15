
/* Void AddAvatarToAvatarShopInventory(Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectId,String *name,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0xa6,(Object *)name,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar2 != (PhotonPeer *)0x0) {
        uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
        uVar4._1_1_ = (pSVar3->SendReliable).Channel;
        uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = itemId;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x28,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    ppIStack_3 = (Int32__Class **)groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&ppIStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x17,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (localOwner != 0) {
      pMVar4 = (this->fields).networkGame;
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) goto code_?;
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
    }
    ppIStack_3 = &pIStack_5;
    pIStack_5 = TypeInfo__System__Int32;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x14,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    itemId = CONCAT13(transferOwnershipToServerOnLeave,(undefined3)itemId);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&itemId + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x27,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    fVar6 = position.x;
    position.x = 0.0;
    itemId = (int32_t)position.z;
    position_00.y = position.y;
    position_00.x = fVar6;
    position_00.z = position.z;
    groupId = (int32_t)this_01;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              (position_00,this_01,(MethodInfo *)0x0);
    position.x = rotation.x;
    position.y = rotation.y;
    position.z = rotation.z;
    groupId = (int32_t)&UNK_?;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (rotation,this_01,(MethodInfo *)0x0);
    bStack_7 = isPreviewItem;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x7d,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_AddItemToWorld,(MethodInfo *)0x0);
    pPVar8 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar9 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar8 != (PhotonPeer *)0x0) {
      uVar10._0_1_ = (pSVar9->SendReliable).Encrypt;
      uVar10._1_1_ = (pSVar9->SendReliable).Channel;
      uVar10._2_2_ = *(undefined2 *)&(pSVar9->SendReliable).field_0x6;
      (*(code *)(pPVar8->klass->vtable).SendOperation.method)
                (pPVar8,0x26,this_01,(pSVar9->SendReliable).DeliveryMode,uVar10,
                 pPVar8->klass[1]._0.image);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean AddLink(Link) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
               (MVNetworkGame_OperationRequests *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  LVar1 = LogicObjectManager_ReportSeverity__Enum_Info;
  if (link != (Link_1 *)0x0) {
    linkOutputWoId = (link->fields).outputWOID;
    linkInputWoId = (link->fields).inputWOID;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    LVar2 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink
                      (linkOutputWoId,linkInputWoId,(IWorldObjectManager *)worldObjectManager,
                       (LogicObjectManager_ReportSeverity__Enum *)&stack0xfffffff8,(MethodInfo *)0x0
                      );
    if (LVar2 != LogicObjectManager_ValidateLinkStatus__Enum_Ok) {
      if (LVar2 != LogicObjectManager_ValidateLinkStatus__Enum_LoopDetected) {
        if (LVar1 == LogicObjectManager_ReportSeverity__Enum_Error) {
          pOVar3 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat
                             ((Object *)StringLiteral_Link_invalid_and_rejected__Reaso,pOVar3,
                              (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          LVar1 = LogicObjectManager_ReportSeverity__Enum_Info;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar4,(MethodInfo *)0x0);
        }
        if ((LVar1 != LogicObjectManager_ReportSeverity__Enum_Info) &&
           (LVar1 != LogicObjectManager_ReportSeverity__Enum_Warning)) {
          return 0;
        }
      }
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Link_invalid_and_rejected__Reaso,pOVar3,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return 0;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar3 = (Object *)func_?();
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x39,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x38,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,9,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return 1;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddObjectLink
               (MVNetworkGame_OperationRequests *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (LogicObjectManager_ValidateObjectLinkStatus__Enum__Class *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  LVar2 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateObjectLink
                    (link,(IWorldObjectManager *)worldObjectManager,
                     (LogicObjectManager_ReportSeverity__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (LVar2 != LogicObjectManager_ValidateObjectLinkStatus__Enum_Ok) {
    if (pLVar1 == (LogicObjectManager_ValidateObjectLinkStatus__Enum__Class *)0x2) {
      pLVar1 = TypeInfo__LogicObjectManager__ValidateObjectLinkStatus;
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Link_invalid_and_rejected__Reaso,pOVar3,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    if ((pLVar1 == (LogicObjectManager_ValidateObjectLinkStatus__Enum__Class *)0x0) ||
       (pLVar1 == (LogicObjectManager_ValidateObjectLinkStatus__Enum__Class *)0x1)) {
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Link_invalid_and_rejected__Reaso,pOVar3,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    return;
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (link != (ObjectLink *)0x0) {
    pOVar3 = (Object *)func_?();
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x39,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar3 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x38,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (&stack0xfffffff4 != (undefined1 *)0x0) {
        (**(code **)(in_stack_5 + 0x110))(&stack0xfffffff4);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = planetId;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x56,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = subtreeId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x22,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar2 != (PhotonPeer *)0x0) {
        uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
        uVar4._1_1_ = (pSVar3->SendReliable).Channel;
        uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)
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


/* Void AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
               (MVNetworkGame_OperationRequests *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    pDStack_2 = MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                          (this_00,seatBase,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (MVNetworkGame_OperationRequests *)CONCAT13(4,this._0_3_);
    pSVar3 = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    iStack_4 = seatOwnerWoID;
    pCVar5 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&iStack_4);
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,pSVar3,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      seatBase = (VehicleSeatBase *)((uint)seatBase & 0xffffff);
      pSVar3 = (String *)func_?(TypeInfo__System__Byte,(int)&seatBase + 3);
      iStack_6 = worldObjectID;
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&iStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,pSVar3,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pDStack_2 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (pDStack_2,0x48,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar7 = (pMVar1->fields).peer;
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        if (pPVar7 != (PhotonPeer *)0x0) {
          uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
          uVar9._1_1_ = (pSVar8->SendReliable).Channel;
          uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
          (*(code *)(pPVar7->klass->vtable).SendOperation.method)
                    (pPVar7,0x2f,pDStack_2,(pSVar8->SendReliable).DeliveryMode,uVar9,
                     pPVar7->klass[1]._0.image);
          return;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldInventoryID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x2f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = woId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x16,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Ban(CheatType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
               (MVNetworkGame_OperationRequests *this,CheatType__Enum cheatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xb2,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x39,this_00);
      pPVar2 = (this->fields).peer;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOutgoingCommands.method)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Ban(Int32, MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban_1
               (MVNetworkGame_OperationRequests *this,int32_t hours,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = 1;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xde,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = hours;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x8f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (target != (MVPlayer *)0x0) {
      pOStack_4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)target,
                              (MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x58,(Object *)reason,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,0x43,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ClaimGamePointWelcomeReward() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimGamePointWelcomeReward
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).gamepointWelcomeClaimed != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
    return;
  }
  pPVar1 = (this->fields).peer;
  (this->fields).gamepointWelcomeClaimed = 1;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x6d,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x57,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xd0,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)(pPVar1,0x75,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CloneTempWorldObjectWithOriginalReference(MVWorldObjectClient, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneTempWorldObjectWithOriginalReference
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 position,
               Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVNetworkGame_OperationRequests_CreateWithPositionCloneData
            (this,root,position,rotation,1,0,1,1,(MethodInfo *)0x0);
  pPVar1 = (this->fields).peer;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?();
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = MVNetworkGame_OperationRequests_CreateBasicCloneData
                     (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  pPVar2 = (this->fields).peer;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?();
  }
  if (pPVar2 != (PhotonPeer *)0x0) {
    (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x21,pDVar1);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVNetworkGame_OperationRequests_CreateWithPositionCloneData
            (this,root,position,rotation,localOwner,setAsPreviewItem,cloneToRootGroup,isTempObject,
             (MethodInfo *)0x0);
  pPVar1 = (this->fields).peer;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?();
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (root != (MVWorldObjectClient *)0x0) {
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)root,(MethodInfo *)0x0);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
    if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (pDVar1,0x16,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if (localOwner != 0) {
        pMVar3 = (this->fields).networkGame;
        if (((pMVar3 == (MVNetworkGame *)0x0) ||
            (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
           (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), this_01 == (MVLocalPlayer *)0x0))
        goto code_?;
        ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
      }
      uStack_4 = &stack0xfffffff0;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (pDVar1,0x14,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar2 = (Object *)func_?(TypeInfo__System__Boolean);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (pDVar1,0x65,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      uStack_4 = (undefined1 *)CONCAT13(setAsPreviewItem,(undefined3)uStack_4);
      pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_4 + 3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (pDVar1,0x7f,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      return pDVar1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CreateSpawnRole
               (MVNetworkGame_OperationRequests *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)avatarSpawnerWoId;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x71);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = MVNetworkGame_OperationRequests_CreateBasicCloneData
                     (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x00000033);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
  ;
  if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (pDVar1,0xcb,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    position_00.y = position.y;
    position_00.x = (float)pMVar2;
    position_00.z = position.z;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              (position_00,pDVar1,(MethodInfo *)0x0);
    rotation_00.y = 0.0;
    rotation_00.x = (float)pDVar1;
    rotation_00.z = rotation.z;
    rotation_00.w = rotation.w;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (rotation_00,pDVar1,(MethodInfo *)0x0);
    return pDVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar3)();
  return pDVar1;
}


/* Void CustomDevCommands() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CustomDevCommands
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x70,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)worldObjectId;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x37);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DetachWorldObjectFromVehicle(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_DetachWorldObjectFromVehicle
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x30);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Expel(MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Expel
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = 2;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xde,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    uStack_3 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x8f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (target != (MVPlayer *)0x0) {
      pOStack_4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)target,
                              (MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x58,(Object *)reason,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,0x43,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void GetAvatarBodies() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetAvatarBodies
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x72,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x68,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GetResetAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetResetAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)avatarWoID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x56);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetThemesData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetThemesData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,100,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x6c,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePublishAndScreenShotData(Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_HandlePublishAndScreenShotData
               (MVNetworkGame_OperationRequests *this,Byte__Array *screenshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVNetworkGame__OperationRequests___HandlePublishAndScreenShotData_m__0__,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?();
  }
  DataUploadManager::DataUploadManager_UploadData
            (screenshot,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void HandleUploadScreenShotData(Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_HandleUploadScreenShotData
               (MVNetworkGame_OperationRequests *this,Byte__Array *screenshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVNetworkGame__OperationRequests___HandleUploadScreenShotData_m__1__,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?();
  }
  DataUploadManager::DataUploadManager_UploadData
            (screenshot,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void IncrementStatRequest(IncrementStatRequestType, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_IncrementStatRequest
               (MVNetworkGame_OperationRequests *this,IncrementStatRequestType__Enum statRequestType
               ,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)(statRequestType & 0xffff);
  pOVar2 = (Object *)func_?(TypeInfo__System__Int16,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (value != 0) {
      statRequestType = value;
      this = (MVNetworkGame_OperationRequests *)&statRequestType;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xa0,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
    }
    pPVar3 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar3 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar3->klass->vtable).SendOperation.method)(pPVar3,0x76);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsOperationPending(MVOperationCodes) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_IsOperationPending
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  pOVar1 = (this->fields).operationResponsePendingManager;
  if (pOVar1 == (OperationResponsePendingManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pOVar1->fields).pendingOperations;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    return bVar3 != 0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void JoinGame() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    (pMVar1->fields).connState = 3;
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 2) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Setting_planetId_to__1_as_GameMo,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if ((pGVar2 != (GameSessionData *)0x0) &&
         (pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4),
         this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_00,0x56,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar2 != (GameSessionData *)0x0) {
          pOVar3 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&stack0xfffffff0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (this_00,0x74,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0)
          ;
          if (pGVar2 != (GameSessionData *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (this_00,0x9a,(Object *)(pGVar2->fields).language,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                               ((MethodInfo *)0x0);
            if (pGVar2 != (GameSessionData *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (this_00,0xa7,(Object *)(pGVar2->fields).token,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                 ((MethodInfo *)0x0);
              if (pGVar2 != (GameSessionData *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__Add
                          (this_00,0xab,(Object *)(pGVar2->fields).newToken,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          );
                pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                   ((MethodInfo *)0x0);
                if (pGVar2 != (GameSessionData *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (this_00,0xac,(Object *)(pGVar2->fields).newPlanetName,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
                  ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                            ((ReadOnlyCollection_1_VoxelHit_ *)0x0,in_stack_4);
                  pOVar3 = (Object *)func_?(TypeInfo__MV__Common__BuildTarget);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (this_00,0xbc,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  MVGameControllerBase::MVGameControllerBase_get_ReAuthTries((MethodInfo *)0x0);
                  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (this_00,0xd1,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings
                                      ((MethodInfo *)0x0);
                  if (this_01 != (KoGaMaSettingsContainer *)0x0) {
                    pSVar5 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_VersionString
                                       (this_01,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__Add
                              (this_00,0xd9,(Object *)pSVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
                      func_?(TypeInfo__PlayerPrefsManager);
                    }
                    PlayerPrefsManager::PlayerPrefsManager_get_IsFirstTimeSession((MethodInfo *)0x0)
                    ;
                    if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
                      func_?(TypeInfo__PlayerPrefsManager);
                    }
                    PlayerPrefsManager::PlayerPrefsManager_get_IsReturningPlayer((MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
                      func_?(TypeInfo__PlayerPrefsManager);
                    }
                    PlayerPrefsManager::PlayerPrefsManager_get_IsReturningAsSignedUp
                              ((MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                       ((MethodInfo *)0x0);
                    if (pGVar2 != (GameSessionData *)0x0) {
                      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__Add
                                (this_00,0xcf,pOVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                );
                      source = mscorlib.dll::System::Collections::Generic::
                               Dictionary`2[WinningConditionType,System::Object]::
                               Dictionary_2_WinningConditionType_System_Object__get_Keys
                                         ((Dictionary_2_WinningConditionType_System_Object_ *)
                                          this_00,
                                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Keys__
                                         );
                      System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                                ((IEnumerable_1_UseInteractor_ *)source,
                                 System__Collections__Generic__List<unsigned_char>_MethodInfo__System__Linq__Enumerable__ToList<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                                );
                      this_02 = (List_1_ThemeAttributes_ThemeAttribute_ *)
                                func_?(
                                               TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                                               );
                      mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::
                      ThemeAttribute]::List_1_ThemeAttributes_ThemeAttribute___ctor
                                (this_02,0,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                                );
                      this_03 = DllProtector::DllProtector_GetCRCData((MethodInfo *)0x0);
                      index = 0;
                      if (this_03 != (List_1_MV_WorldObject_AntiCheat_FileData_ *)0x0) {
                        while (iVar6 = index,
                              pOVar3 = mscorlib.dll::System::Collections::ObjectModel::
                                       Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                                 ((
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)this_03,
                                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Count__
                                                 ), iVar6 < (int)pOVar3) {
                          this_04 = (FileData *)
                                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                    EventSystems::IEventSystemHandler]::
                                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                *)this_03,index,
                                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                                              );
                          if (this_04 == (FileData *)0x0) goto code_?;
                          pSVar5 = MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::
                                   FileData_NameAsString(this_04,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?();
                          }
                          bVar7 = mscorlib.dll::System::String::String_op_Equality
                                            (pSVar5,StringLiteral_SkyNet,(MethodInfo *)0x0);
                          if (bVar7 == 0) break;
                          pOVar3 = (Object *)
                                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   EventSystems::IEventSystemHandler]::
                                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                               *)this_03,index,
                                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                                             );
                          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Debug);
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                                    (pOVar3,(MethodInfo *)0x0);
                          index = index + 1;
                        }
                        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.
                                    methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
                          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                        }
                        pSVar5 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                                           ((Object *)this_03,(MethodInfo *)0x0);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__Add
                                  (this_00,0xda,(Object *)pSVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  );
                        pPVar8 = (this->fields).peer;
                        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).
                                    Equals.methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started ==
                            0)) {
                          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                        }
                        pSVar9 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                        if (pPVar8 != (PhotonPeer *)0x0) {
                          uVar10._0_1_ = (pSVar9->SendReliable).Encrypt;
                          uVar10._1_1_ = (pSVar9->SendReliable).Channel;
                          uVar10._2_2_ = *(undefined2 *)&(pSVar9->SendReliable).field_0x6;
                          (*(code *)(pPVar8->klass->vtable).SendOperation.method)
                                    (pPVar8,0xff,this_00,(pSVar9->SendReliable).DeliveryMode,uVar10,
                                     pPVar8->klass[1]._0.image);
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
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void JoinNotification() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_JoinNotification
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    bVar4 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pSVar5 = (String *)func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
       (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar3,(MethodInfo *)0x0);
      pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?();
      if (this_00 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_00,pSVar5,pCVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar5 = (String *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 != (MVNetworkGame *)0x0) &&
            (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) &&
           (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          pCVar6 = (CrossPlatformInputManager_VirtualButton *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                   Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)pMVar3
                              ,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (this_00,pSVar5,pCVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pOVar8 = (Object *)func_?();
          if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (pDVar7,199,pOVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (pDVar7,200,(Object *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            pPVar9 = (this->fields).peer;
            if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr
                 & 0x2000000) != 0) &&
               ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
              func_?();
            }
            if (pPVar9 != (PhotonPeer *)0x0) {
              (*(code *)(pPVar9->klass->vtable).SendOperation.method)(pPVar9,0x3f,pDVar7);
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar1 != (MVNetworkGame *)0x0) &&
                  (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0))
                 && ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (pMVar2,(MethodInfo *)0x0), pMVar3 != (MVLocalPlayer *)0x0
                     && (this_01 = (SubscriptionRulesWrapper *)
                                   PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                   PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                             ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                              pMVar3,(MethodInfo *)0x0),
                        this_01 != (SubscriptionRulesWrapper *)0x0)))) {
                bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_HasBenefit
                                  (this_01,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                if (bVar4 == 0) {
                  return;
                }
                pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                System.Core.dll::System::Collections::Generic::
                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                          ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                pOVar8 = (Object *)func_?();
                if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (pDVar7,199,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (pDVar7,200,(Object *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  pPVar9 = (this->fields).peer;
                  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
                    func_?();
                  }
                  if (pPVar9 != (PhotonPeer *)0x0) {
                    (*(code *)(pPVar9->klass->vtable).SendOperation.method)(pPVar9,0x3f,pDVar7);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Kick(MVPlayer, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Kick
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,String *reason,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xde,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    uStack_3 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x8f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (target != (MVPlayer *)0x0) {
      pOStack_4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)target,
                              (MethodInfo *)0x0);
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x58,(Object *)reason,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,0x43,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LocalPlayerLevelChanged(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
               (MVNetworkGame_OperationRequests *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)level;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xa9,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x38);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LockHierarchy(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LockHierarchy
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,bool lockHierarchy,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldObjectID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = lockHierarchy;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x3f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x14,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = woID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = activate;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xcc,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x42,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_OverrideFirstTimeEvent
               (MVNetworkGame_OperationRequests *this,FirstTimeEvent__Enum firstTimeEvent,
               bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  FStack_1 = firstTimeEvent;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&FStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    bStack_3 = overrideValue;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xd0,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x55,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  MStack_1 = chatMsgType;
  value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x57,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x58,(Object *)gameMsgData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  MStack_1 = gameMsgType;
  value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x57,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x58,(Object *)gameMsgData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  NStack_1 = type;
  value = (Object *)func_?(TypeInfo__MV__Common__NotificationType,&NStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,199,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,200,(Object *)notificationData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean PublishPlanet(String ByRef) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet
               (MVNetworkGame_OperationRequests *this,String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar2 == MVJoinState__Enum_Playing) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar3 != (GameSessionData *)0x0) {
        if ((pGVar3->fields).gameMode != 0) goto code_?;
        this_00 = (this->fields).operationResponsePendingManager;
        if (this_00 != (OperationResponsePendingManager *)0x0) {
          bVar4 = OperationResponsePendingManager::
                  OperationResponsePendingManager_IsOperationPending
                            (this_00,MVOperationCodes__Enum_PublishPlanet,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pSVar5 = StringLiteral_Publish_planet_operation_is_pend;
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
              pSVar5 = StringLiteral_Publish_planet_operation_is_pend;
            }
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            pSVar5 = TM::TM__(StringLiteral_You_are_already_publishing_plane,(MethodInfo *)0x0);
            *errorText = pSVar5;
            return 0;
          }
          pMVar1 = (this->fields).networkGame;
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             this_01 != (MVLocalPlayer *)0x0)) {
            errorText = (String **)0x0;
            pOVar6 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)this_01,(MethodInfo *)0x0);
            pMVar1 = (this->fields).networkGame;
            if (pMVar1 != (MVNetworkGame *)0x0) {
              if ((int)pOVar6 < (pMVar1->fields)._PublishLevel_k__BackingField) {
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  pOVar6 = (Object *)func_?();
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pSVar5 = mscorlib.dll::System::String::String_Concat
                                     ((Object *)StringLiteral_You_can_not_publish_game_before_,
                                      pOVar6,(MethodInfo *)0x0);
                  _UNK_? = TM::TM__(pSVar5,(MethodInfo *)0x0);
                  return 0;
                }
              }
              else if (pMVar1 != (MVNetworkGame *)0x0) {
                if ((pMVar1->fields).isPublished != 0) {
                  MVNetworkGame_OperationRequests_PublishPlanet_1(this,0,(MethodInfo *)0x0);
                  return 1;
                }
                bVar4 = GenerateTextureData::GenerateTextureData_get_IsCreatingScreenShot
                                  ((MethodInfo *)0x0);
                if (bVar4 == 0) {
                  MVNetworkGame_OperationRequests_PublishPlanet_1(this,0,(MethodInfo *)0x0);
                  pSVar5 = TM::TM__(StringLiteral_Remember_that_you_need_to_play_i,(MethodInfo *)0x0
                                   );
                  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                    func_?();
                  }
                  NotificationController::NotificationController_PushNoticationInstruction
                            (pSVar5,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
                  return 1;
                }
                pSVar5 = StringLiteral_Texture_is_already_being_generat;
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                  pSVar5 = StringLiteral_Texture_is_already_being_generat;
                }
                goto code_?;
              }
            }
          }
        }
      }
      func_?();
      pcVar7 = (code *)swi(3);
      bVar4 = (*pcVar7)();
      return bVar4;
    }
  }
code_?:
  pSVar5 = TM::TM__(StringLiteral_Error_publishing_game__try_again,(MethodInfo *)0x0);
  *errorText = pSVar5;
  return 0;
}


/* Boolean PublishPlanet(Boolean) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet_1
               (MVNetworkGame_OperationRequests *this,bool newImagePending,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newImagePending != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_01 == (MaterialLoader *)0x0) goto code_?;
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
  }
  this_02 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  in_stack_2 = newImagePending;
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_02,0x40,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    this_00 = (this->fields).operationResponsePendingManager;
    if (this_00 != (OperationResponsePendingManager *)0x0) {
      bVar1 = OperationResponsePendingManager::
              OperationResponsePendingManager_AddOperationCodeToPending
                        (this_00,MVOperationCodes__Enum_PublishPlanet,this_02,(MethodInfo *)0x0);
      return bVar1;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void PurchaseAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0x7e;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  iStack_2 = avatarId;
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&iStack_2);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)productData,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Avatar,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0x69;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  iStack_2 = streamingAssetID;
  value = (Theme *)func_?(TypeInfo__System__Int32,&iStack_2);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)productData,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Accessory,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0xbf;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  iStack_2 = bundleId;
  value = (Theme *)func_?(TypeInfo__System__Int32,&iStack_2);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)productData,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_AccessoryBundle,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)productData,key,(Theme *)gameBooster,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_GameBooster,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PurchaseProduct(MVProductType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseProduct
               (MVNetworkGame_OperationRequests *this,MVProductType__Enum productTypeID,
               Dictionary_2_System_Object_System_Object_ *productData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  MStack_1 = productTypeID;
  value = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x5e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x5f,(Object *)productData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0xbf;
  pSVar2 = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  iStack_3 = themeId;
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&iStack_3);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)productData,pSVar2,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_4 = 0xcf;
    pSVar2 = (String *)func_?(TypeInfo__System__Byte,&uStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)productData,pSVar2,(CrossPlatformInputManager_VirtualButton *)themeSettingsData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Theme,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0xf5;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  GStack_2 = gamePassTier & 0xff;
  value = (Theme *)func_?(TypeInfo__System__Int32,&GStack_2);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)productData,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_GamePassTier,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  WStack_1 = type;
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType,&WStack_1);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x11,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    ppIStack_3 = (Int32__Class **)groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&ppIStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x17,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x12,(Object *)woData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (localOwner != 0) {
      pMVar4 = (this->fields).networkGame;
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) goto code_?;
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
    }
    ppIStack_3 = &pIStack_5;
    pIStack_5 = TypeInfo__System__Int32;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x14,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    type = CONCAT13(transferOwnershipToServerOnLeave,(undefined3)type);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&type + 3));
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x27,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    position_00.z = position.z;
    position_00.x = position.x;
    position_00.y = position.y;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              (position_00,this_01,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (rotation,this_01,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
              (scale,this_01,(MethodInfo *)0x0);
    pPVar6 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar6 != (PhotonPeer *)0x0) {
      uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
      uVar8._1_1_ = (pSVar7->SendReliable).Channel;
      uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
      (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                (pPVar6,0,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                 pPVar6->klass[1]._0.image);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveItemFromInventory
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)itemID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0xd);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveLink(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveLink
               (MVNetworkGame_OperationRequests *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = linkID;
  pMVar2 = this;
  pMVar3 = (this->fields).networkGame;
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).worldNetwork, this_00 != (WorldNetwork *)0x0)) {
    bVar4 = WorldNetwork::WorldNetwork_LinksContains(this_00,linkID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_RemoveLink__Link_not_found,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    this = (MVNetworkGame_OperationRequests *)iVar1;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x3a,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (pMVar2->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,10,this_01,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = objectLinkID;
  pMVar2 = this;
  pMVar3 = (this->fields).networkGame;
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).worldNetwork, this_00 != (WorldNetwork *)0x0)) {
    bVar4 = WorldNetwork::WorldNetwork_ObjectLinksContains(this_00,objectLinkID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_RemoveObjectLink__ObjectLink_not,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    this = (MVNetworkGame_OperationRequests *)iVar1;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x3a,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar5 = (pMVar2->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar5 != (PhotonPeer *)0x0) {
        uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
        uVar7._1_1_ = (pSVar6->SendReliable).Channel;
        uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
        (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                  (pPVar5,0x1f,this_01,(pSVar6->SendReliable).DeliveryMode,uVar7,
                   pPVar5->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator != (Char__Array *)0x0) {
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = 0x5c;
    if (keyPath != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Split_4
                         (keyPath,separator,StringSplitOptions__Enum_RemoveEmptyEntries,
                          (MethodInfo *)0x0);
      if (pSVar1 != (String__Array *)0x0) {
        if (pSVar1->max_length == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Trying_to_remoe_WO_data_with_an_,(MethodInfo *)0x0);
        }
        this_00 = (Dictionary_2_System_String_Theme_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        value_00 = this_00;
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pSVar2 = (String__Array *)0x0;
        while (pDVar3 = 
               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>,
              (int)pSVar2 < (int)pSVar1->max_length) {
          if ((int)pSVar2 < (int)(pSVar1->max_length - 1)) {
            this_01 = (Dictionary_2_System_String_Theme_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar4 = (String *)func_?();
            if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
            value_00 = (Dictionary_2_System_String_Theme_ *)
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_00,pSVar4,(Theme *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pSVar1 = pSVar2;
            pSVar2 = (String__Array *)((int)&pSVar2->klass + 1);
            this_00 = this_01;
          }
          else {
            pSVar4 = (String *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
            value_00 = (Dictionary_2_System_String_Theme_ *)
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_00,pSVar4,(Theme *)TypeInfo__System__String->static_fields->Empty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pSVar2 = (String__Array *)((int)&pSVar2->klass + 1);
          }
        }
        this_02 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        value = (Object *)func_?(TypeInfo__System__Int32);
        if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (this_02,0x16,value,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (this_02,0x13,(Object *)value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          pIVar5 = (pDVar3->_0).byval_arg.data.array;
          if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
            func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          if (pIVar5 != (Il2CppArrayType *)0x0) {
            pIVar7 = pIVar5->etype;
            uVar8._0_2_ = pIVar7[0x22].attrs;
            uVar8._2_1_ = pIVar7[0x22].type;
            uVar8._3_1_ = pIVar7[0x22].field_0x7;
            uVar9._0_1_ = (pSVar6->SendReliable).Encrypt;
            uVar9._1_1_ = (pSVar6->SendReliable).Channel;
            uVar9._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
            (*(code *)pIVar7[0x22].data)
                      (pIVar5,5,this_02,(pSVar6->SendReliable).DeliveryMode,uVar9,uVar8);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RemoveWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woDataToRemove,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x13,(Object *)woDataToRemove,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)woid;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x17);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReportReachedTimeAttackFlag(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
               (MVNetworkGame_OperationRequests *this,int32_t captureTime,int32_t woid,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = captureTime;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x23,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = woid;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x5e,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestAccepted,1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x34,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack2 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      pPVar3 = pPVar1->klass;
      pSStack2 = (SendOptions__Class *)pPVar3[1]._0.image;
      (*(code *)(pPVar3->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack2 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (TypeInfo__MVNetworkGame__OperationRequests->static_fields->__f__mg_cache0 ==
      (Action_1_String_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_,
               MethodInfo__System__Action<System::String>__Action_System__Object__void__);
    TypeInfo__MVNetworkGame__OperationRequests->static_fields->__f__mg_cache0 =
         (Action_1_String_ *)this_00;
  }
  b = TypeInfo__MVNetworkGame__OperationRequests->static_fields->__f__mg_cache0;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    a = (pMVar1->fields).ReceivedAccessoryData;
    do {
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)b,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDVar2 != (Delegate *)0x0) {
        if ((Action_1_String___Class *)pDVar2->klass == TypeInfo__System__Action<System::String>) {
          pDVar3 = pDVar2;
        }
        pAVar4 = TypeInfo__System__Action<System::String>;
        if (pDVar3 == (Delegate *)0x0) goto code_?;
      }
      b = a;
      pAVar5 = (Action_1_String_ *)func_?(&(pMVar1->fields).ReceivedAccessoryData,pDVar3);
      bVar6 = pAVar5 != a;
      a = pAVar5;
    } while (bVar6);
    pPVar7 = (this->fields).peer;
    this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar7 != (PhotonPeer *)0x0) {
      uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
      uVar9._1_1_ = (pSVar8->SendReliable).Channel;
      uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
      (*(code *)(pPVar7->klass->vtable).SendOperation.method)
                (pPVar7,0x5f,this_01,(pSVar8->SendReliable).DeliveryMode,uVar9,
                 pPVar7->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
  pDVar2 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pDVar2,pAVar4);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RequestAddItemToMarketPlace(Int32, String, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAddItemToMarketPlace
               (MVNetworkGame_OperationRequests *this,int32_t itemID,String *itemName,
               String *itemDescription,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = itemID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x2a,(Object *)itemName,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x86,(Object *)itemDescription,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar5 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar5[1]._0.image;
      puStack6._0_1_ = (pSVar4->SendReliable).Encrypt;
      puStack6._1_1_ = (pSVar4->SendReliable).Channel;
      puStack6._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
      iStack7 = (pSVar4->SendReliable).DeliveryMode;
      pDStack8 = this_00;
      (*(code *)(pPVar5->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = (undefined1)builtInItem;
  pOVar2 = (Object *)func_?(TypeInfo__MV__Common__BuiltInItem,&uStack_1);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x73,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    ppIStack_3 = (Int32__Class **)groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&ppIStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x17,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0xf5,(Object *)customData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (localOwner != 0) {
      pMVar4 = (this->fields).networkGame;
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
         (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) goto code_?;
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
    }
    ppIStack_3 = &pIStack_5;
    pIStack_5 = TypeInfo__System__Int32;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x14,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    builtInItem = CONCAT13(transferOwnershipToServerOnLeave,(undefined3)builtInItem);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(byte *)((int)&builtInItem + 3));
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x27,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    position_00.z = position.z;
    position_00.x = position.x;
    position_00.y = position.y;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              (position_00,this_01,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (rotation,this_01,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
              (scale,this_01,(MethodInfo *)0x0);
    pPVar6 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar6 != (PhotonPeer *)0x0) {
      uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
      uVar8._1_1_ = (pSVar7->SendReliable).Channel;
      uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
      (*(code *)(pPVar6->klass->vtable).SendOperation.method)
                (pPVar6,0x25,this_01,(pSVar7->SendReliable).DeliveryMode,uVar8,
                 pPVar6->klass[1]._0.image);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean RequestFriendShipByID(Int32, String ByRef) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestFriendShipByID
               (MVNetworkGame_OperationRequests *this,int32_t id,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestSent,1,(MethodInfo *)0x0);
  pMVar1 = this;
  pMVar2 = (this->fields).networkGame;
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      this = (MVNetworkGame_OperationRequests *)0x0;
      pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0
                         );
      if ((Object *)id == pOVar3) {
        errorText = (String **)0x0;
        id = (int32_t)StringLiteral_Can_t_request_friendship_from_yo;
        this = (MVNetworkGame_OperationRequests *)&UNK_?;
        pSVar4 = TM::TM__(StringLiteral_Can_t_request_friendship_from_yo,(MethodInfo *)0x0);
        *errorText = pSVar4;
        return 0;
      }
      id = (int32_t)
           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>;
      this = (MVNetworkGame_OperationRequests *)&UNK_?;
      errorText = unaff_EBX;
      this_02 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      this = (MVNetworkGame_OperationRequests *)
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
      ;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      this = (MVNetworkGame_OperationRequests *)&this;
      pOVar3 = (Object *)func_?();
      if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_02,0x35,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar5 = (pMVar1->fields).peer;
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          this = (MVNetworkGame_OperationRequests *)TypeInfo__ExitGames__Client__Photon__SendOptions
          ;
          func_?();
        }
        if (pPVar5 != (PhotonPeer *)0x0) {
          this = (MVNetworkGame_OperationRequests *)pPVar5->klass[1]._0.image;
          (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                    (pPVar5,0xf,this_02,
                     (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable)
                     .DeliveryMode);
          return 1;
        }
      }
    }
  }
  this = (MVNetworkGame_OperationRequests *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = (undefined1)query;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,2,(Object *)inData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = numRowsPerReturn;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,6,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,operationCode,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_MVOperationCodes_GetMarketPlaceI,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestRejectFriendShip(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestRejectFriendShip
               (MVNetworkGame_OperationRequests *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)friendID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x34,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x11);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestRemoveItemFromMarketPlace(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestRemoveItemFromMarketPlace
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)itemID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x28,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x2d);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestResetTerrain() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestResetTerrain
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pPVar1 = (this->fields).peer;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x35,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x6e,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)woId;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x16);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetAvatar
               (MVNetworkGame_OperationRequests *this,int32_t AvatarID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Reset_ActiveAvatar__called,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x7e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetFirstTimeEvents
               (MVNetworkGame_OperationRequests *this,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xd0,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)(pPVar1,0x53,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetHighlights() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetHighlights
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x62,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x18);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetPlayerPlanetData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetPlayerPlanetData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x67,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStack_1 = (undefined *)((uint)uStack_1 & 0xffffff);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xde,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if (target != (MVPlayer *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)target,(MethodInfo *)0x0);
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xb,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar3 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        uStack_1 = (undefined *)
                   (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable).
                   DeliveryMode;
        (*(code *)(pPVar3->klass->vtable).SendOperation.method)(pPVar3,0x44);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x92,(Object *)logString,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x93,(Object *)stackTrace,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    uStack_1 = CONCAT13((undefined1)type,(undefined3)uStack_1);
    value = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x94,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x99,(Object *)extraSentryData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbb,(Object *)tags,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar2 != (PhotonPeer *)0x0) {
      uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
      uVar4._1_1_ = (pSVar3->SendReliable).Channel;
      uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)
                (pPVar2,0x32,this_00,(pSVar3->SendReliable).DeliveryMode,uVar4,
                 pPVar2->klass[1]._0.image);
      pPVar2 = (this->fields).peer;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOutgoingCommands.method)
                  (pPVar2,(pPVar2->klass->vtable).DispatchIncomingCommands.methodPtr);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (runtimeEvent != (RuntimeEvent *)0x0) {
    value = (Object *)
            (*(code *)(runtimeEvent->klass->vtable).__unknown.method)
                      (runtimeEvent,runtimeEvent->klass[1]._0.image);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xf5,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar1 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar1 != (PhotonPeer *)0x0) {
        uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
        uVar3._1_1_ = (pSVar2->SendReliable).Channel;
        uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
        (*(code *)(pPVar1->klass->vtable).SendOperation.method)
                  (pPVar1,0x34,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
                   pPVar1->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)AvatarID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x7e,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x29);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetActiveSpawnRole
               (MVNetworkGame_OperationRequests *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)woID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x6f);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAvatarAccessorySlot(Int32, Int32, Single, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetAvatarAccessorySlot
               (MVNetworkGame_OperationRequests *this,int32_t avatarBodyWoID,
               int32_t streamingAssetId,float offset,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Set_accessory_slot,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = avatarBodyWoID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x69,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x72,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar3 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar3 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar3->klass->vtable).SendOperation.method)
                (pPVar3,0x2e,this_00,
                 (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable).
                 DeliveryMode);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetEarningsReportToSeenOperation() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetEarningsReportToSeenOperation
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x6b,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)firstTimeEvent;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x54);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetGamePassTierToSeenOperation(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetGamePassTierToSeenOperation
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xf5,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)(pPVar1,0x6a,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHighlightToSeen(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetHighlightToSeen
               (MVNetworkGame_OperationRequests *this,int32_t highlightId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)highlightId;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x61);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMouseSensitivity(Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetMouseSensitivity
               (MVNetworkGame_OperationRequests *this,float newMouseSensitivity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)newMouseSensitivity;
  value = (Object *)func_?(TypeInfo__System__Single,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xd8,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x65);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSayChatBubbleVisible(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
               (MVNetworkGame_OperationRequests *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = CONCAT13(shouldShow,(undefined3)uStack_1);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
  if (this_00 !=
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_00,StringLiteral_V,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0xf5,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar2 != (PhotonPeer *)0x0) {
        uVar4._0_1_ = (pSVar3->SendReliable).Encrypt;
        uVar4._1_1_ = (pSVar3->SendReliable).Channel;
        uVar4._2_2_ = *(undefined2 *)&(pSVar3->SendReliable).field_0x6;
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)
                  (pPVar2,0x5d,this_01,(pSVar3->SendReliable).DeliveryMode,uVar4,
                   pPVar2->klass[1]._0.image);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = avatarCreatorWoId;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    iStack_3 = avatarBodyDbId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x73,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
               (MVNetworkGame_OperationRequests *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    bVar2 = MVTeamManager::MVTeamManager_IsTeamActive(this_00,team,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x59,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar3 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar3 != (PhotonPeer *)0x0) {
        uVar5._0_1_ = (pSVar4->SendReliable).Encrypt;
        uVar5._1_1_ = (pSVar4->SendReliable).Channel;
        uVar5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        (*(code *)(pPVar3->klass->vtable).SendOperation.method)
                  (pPVar3,0x1d,this_01,(pSVar4->SendReliable).DeliveryMode,uVar5);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTier(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xf5,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)(pPVar1,0x69,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SpawnVehicleWithDriver(Int32, Int32, VehicleSeatBase) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectSpawnerVehicleID,
               int32_t worldObjectID,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    pDStack_2 = MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                          (this_00,seatBase,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (MVNetworkGame_OperationRequests *)CONCAT13(1,this._0_3_);
    pSVar3 = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    iStack_4 = worldObjectSpawnerVehicleID;
    pCVar5 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&iStack_4);
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,pSVar3,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      seatBase = (VehicleSeatBase *)((uint)seatBase & 0xffffff);
      pSVar3 = (String *)func_?(TypeInfo__System__Byte,(int)&seatBase + 3);
      iStack_6 = worldObjectID;
      pCVar5 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&iStack_6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,pSVar3,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (pDStack_2 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (pDStack_2,0x48,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar7 = (pMVar1->fields).peer;
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar8 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        if (pPVar7 != (PhotonPeer *)0x0) {
          uVar9._0_1_ = (pSVar8->SendReliable).Encrypt;
          uVar9._1_1_ = (pSVar8->SendReliable).Channel;
          uVar9._2_2_ = *(undefined2 *)&(pSVar8->SendReliable).field_0x6;
          (*(code *)(pPVar7->klass->vtable).SendOperation.method)
                    (pPVar7,0x31,pDStack_2,(pSVar8->SendReliable).DeliveryMode,uVar9,
                     pPVar7->klass[1]._0.image);
          return;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pPVar1 = (this->fields).peer;
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x66,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x3a,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x3c,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  pSVar2 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
  if (pPVar1 != (PhotonPeer *)0x0) {
    uVar3._0_1_ = (pSVar2->SendReliable).Encrypt;
    uVar3._1_1_ = (pSVar2->SendReliable).Channel;
    uVar3._2_2_ = *(undefined2 *)&(pSVar2->SendReliable).field_0x6;
    (*(code *)(pPVar1->klass->vtable).SendOperation.method)
              (pPVar1,0x74,this_00,(pSVar2->SendReliable).DeliveryMode,uVar3,
               pPVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x16,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    puStack_2 = (undefined *)ownerActorNr;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x14,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = t;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)t,(Object_1 *)0x0,(MethodInfo *)0x0);
    ownerActorNr = (int)&worldObjectID + 3;
    if (bVar3 == 0) {
      worldObjectID = CONCAT13(1,(int3)TypeInfo__System__Boolean);
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x54,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                (*pVVar4,this_01,(MethodInfo *)0x0);
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
      uVar6 = pQVar5->w;
      ownerActorNr = 0;
      worldObjectID = (int32_t)this_01;
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
                (*pQVar5,this_01,(MethodInfo *)0x0);
      this = (MVNetworkGame_OperationRequests *)uVar6;
    }
    else {
      worldObjectID = (uint)TypeInfo__System__Boolean & 0xffffff;
      worldObjectID = func_?();
      ownerActorNr = (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
      ;
      this = (MVNetworkGame_OperationRequests *)0x54;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x54,(Object *)worldObjectID,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
    }
    pPVar7 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      in_stack_8 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      in_stack_9 = &UNK_?;
      func_?();
    }
    pSVar10 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar7 != (PhotonPeer *)0x0) {
      uVar11._0_1_ = (pSVar10->SendReliable).Encrypt;
      uVar11._1_1_ = (pSVar10->SendReliable).Channel;
      uVar11._2_2_ = *(undefined2 *)&(pSVar10->SendReliable).field_0x6;
      (*(code *)(pPVar7->klass->vtable).SendOperation.method)
                (pPVar7,6,this_01,(pSVar10->SendReliable).DeliveryMode,uVar11,
                 pPVar7->klass[1]._0.image);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TransferWorldObjectsToGroup(Int32, Int32[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
               (MVNetworkGame_OperationRequests *this,int32_t groupId,Int32__Array *worldObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = groupId;
  bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_4
                    ((IEnumerable_1_KogamaControls_ *)worldObjects,groupId,
                     bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                    );
  if (bVar2 != 0) {
    worldObjects = (Int32__Array *)iVar1;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = (Int32__Array *)
              mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Trying_to_transfer_WO_,pOVar3,
                         (Object *)StringLiteral__to_itself__,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
      worldObjects = (Int32__Array *)&UNK_?;
      func_?();
    }
    method = (MethodInfo *)0x0;
    groupId = (int32_t)&UNK_?;
    worldObjects = message;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  groupId = iVar1;
  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&groupId);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x48,(Object *)worldObjects,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pIVar5 = pMVar4->klass;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack6 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pIVar5 != (Il2CppClass *)0x0) {
      pSStack6 = (SendOptions__Class *)pIVar5->image[6].typeCount;
      puStack8._0_1_ = (pSVar7->SendReliable).Encrypt;
      puStack8._1_1_ = (pSVar7->SendReliable).Channel;
      puStack8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
      iStack9 = (pSVar7->SendReliable).DeliveryMode;
      uStack10 = 0x20;
      worldObjects = (Int32__Array *)&UNK_?;
      method = (MethodInfo *)pIVar5;
      pDStack11 = this_00;
      (*(code *)pIVar5->image[6].assembly)();
      return;
    }
  }
  pSStack6 = (SendOptions__Class *)0x0;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TriggerBoxEnter(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxEnter
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,2);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else if (value[1].monitor != (MonitorData *)0x0) {
    value[2].klass = (Object__Class *)triggerBoxOwnerId;
    if (value[1].monitor < (MonitorData *)0x2) goto code_?;
    value[2].monitor = (MonitorData *)triggerInstigatorId;
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x12);
        return;
      }
    }
    goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TriggerBoxExit(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxExit
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  value = (Object *)func_?(TypeInfo__System__Int32,2);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else if (value[1].monitor != (MonitorData *)0x0) {
    value[2].klass = (Object__Class *)triggerBoxOwnerId;
    if (value[1].monitor < (MonitorData *)0x2) goto code_?;
    value[2].monitor = (MonitorData *)triggerInstigatorId;
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (this->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x13);
        return;
      }
    }
    goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TryRemovePendingOperation(MVOperationCodes) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TryRemovePendingOperation
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  pOVar1 = (this->fields).operationResponsePendingManager;
  if (pOVar1 == (OperationResponsePendingManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pOVar1->fields).pendingOperations;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar3 != 0) {
      this_01 = (HashSet_1_MV_WorldObject_InteractionPackageType_ *)
                (pOVar1->fields).pendingOperations;
      if (this_01 == (HashSet_1_MV_WorldObject_InteractionPackageType_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::
      InteractionPackageType]::HashSet_1_MV_WorldObject_InteractionPackageType__Remove
                (this_01,operationCode,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnEquipAccessory(Int32, AccessorySlotType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnEquipAccessory
               (MVNetworkGame_OperationRequests *this,int32_t avatarBodyWoID,
               AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = avatarBodyWoID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = accessorySlotType;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0xbf,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,0x60,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Purchase_item_with_id__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  itemId = CONCAT13(9,(undefined3)itemId);
  pSVar1 = (String *)func_?(TypeInfo__System__Byte,(int)&itemId + 3);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)productData,pSVar1,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_Item,productData,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  productData = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)productData,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 0x67;
  key = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  iStack_2 = materialID;
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&iStack_2);
  if (productData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)productData,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    MVNetworkGame_OperationRequests_PurchaseProduct
              (this,MVProductType__Enum_MaterialUnlock,productData,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pDStack_1 = (Dictionary_2_System_Byte_System_Object_ *)worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pDStack_1 = this_00;
      (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateAvatarAccessoryOffset(Int32, AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateAvatarAccessoryOffset
               (MVNetworkGame_OperationRequests *this,int32_t bodyWoID,AccessorySlotType__Enum slot,
               float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = bodyWoID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = slot;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x71,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    fStack_4 = offset;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x72,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar5 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar5 != (PhotonPeer *)0x0) {
      uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
      uVar7._1_1_ = (pSVar6->SendReliable).Channel;
      uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
      (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                (pPVar5,0x33,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                 pPVar5->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = bodyWoID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x7e,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    AStack_3 = slot;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&AStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x71,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    fStack_4 = scale;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__set_Item
              (this_00,0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
              );
    pPVar5 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar5 != (PhotonPeer *)0x0) {
      uVar7._0_1_ = (pSVar6->SendReliable).Encrypt;
      uVar7._1_1_ = (pSVar6->SendReliable).Channel;
      uVar7._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
      (*(code *)(pPVar5->klass->vtable).SendOperation.method)
                (pPVar5,99,this_00,(pSVar6->SendReliable).DeliveryMode,uVar7,
                 pPVar5->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x2e,(Object *)itemIdToSlotIndexTable,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar1 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(code *)(pPVar1->klass->vtable).SendOperation.method)(pPVar1,0xe,this_00);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4a,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4b,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4c,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4d,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pSVar2 = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4e,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x4f,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar3 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pSVar2 != (Single__Class *)0x0) {
      pIVar4 = (pSVar2->_0).image;
      uVar5._0_1_ = (pSVar3->SendUnreliable).Encrypt;
      uVar5._1_1_ = (pSVar3->SendUnreliable).Channel;
      uVar5._2_2_ = *(undefined2 *)&(pSVar3->SendUnreliable).field_0x6;
      (*(code *)pIVar4[6].assembly)
                (pSVar2,0x1a,this_00,(pSVar3->SendUnreliable).DeliveryMode,uVar5,pIVar4[6].typeCount
                );
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdatePrototype(Int32, Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdatePrototype
               (MVNetworkGame_OperationRequests *this,int32_t worldInventoryID,
               Byte__Array *prototypeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldInventoryID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x2f,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x31,(Object *)prototypeData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldInventoryID;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x2f,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    fStack_3 = scale;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x22,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar4 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
    if (pPVar4 != (PhotonPeer *)0x0) {
      uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
      uVar6._1_1_ = (pSVar5->SendReliable).Channel;
      uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
      (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                (pPVar4,8,this_00,(pSVar5->SendReliable).DeliveryMode,uVar6,
                 pPVar4->klass[1]._0.image);
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_01,0x16,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pMVar3 = (this->fields).networkGame;
    if (pMVar3 != (MVNetworkGame *)0x0) {
      iVar4 = (pMVar3->fields).lastFrameServerTimeUpdate;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                        ((MethodInfo *)0x0);
      if (iVar4 != iVar5) {
        this_00 = (pMVar3->fields)._Peer_k__BackingField;
        if (this_00 == (PhotonPeer *)0x0) goto code_?;
        iVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
                PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
        (pMVar3->fields).serverTimeInMilliseconds = iVar5;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                          ((MethodInfo *)0x0);
        (pMVar3->fields).lastFrameServerTimeUpdate = iVar5;
      }
      pOVar2 = (Object *)func_?();
      this_02 = this_01;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x23,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                (position,this_01,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_01,0x9d,(Object *)rotation,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_02,0x24,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      func_?();
      piVar6 = *(int **)(((undefined1)packageType == TransformPackageType__Enum_Stop) + 0x10);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x110))(piVar6);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, String, Object) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,String *keyPath,
               Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if (separator->max_length != 0) {
    separator->vector[0] = 0x5c;
    if (keyPath != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Split_4
                         (keyPath,separator,StringSplitOptions__Enum_RemoveEmptyEntries,
                          (MethodInfo *)0x0);
      if (pSVar1 != (String__Array *)0x0) {
        if (pSVar1->max_length == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Trying_to_update_WO_with_an_empt,(MethodInfo *)0x0);
        }
        this_00 = (Dictionary_2_System_String_Theme_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        uVar2 = pSVar1->max_length;
        if (uVar2 <= uVar2 - 1) goto code_?;
        if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
          pMVar3 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_00,pSVar1->vector[uVar2 - 1],
                     (CrossPlatformInputManager_VirtualButton *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pcVar4 = (char *)(pSVar1->max_length - 2);
          if (-1 < (int)pcVar4) {
            ppSVar5 = pSVar1->vector + (pSVar1->max_length - 2);
            keyPath = (String *)this_00;
            do {
              this_00 = (Dictionary_2_System_String_Theme_ *)func_?();
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              if (pMVar3->name <= pcVar4) goto code_?;
              if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
              pMVar3 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        (this_00,*ppSVar5,(Theme *)keyPath,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              ppSVar5 = ppSVar5 + -1;
              pcVar4 = pcVar4 + -1;
              keyPath = (String *)this_00;
            } while (-1 < (int)pcVar4);
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          value_00 = (Object *)func_?();
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (this_01,0x16,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (this_01,0x12,(Object *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr
                 & 0x2000000) != 0) &&
               ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
              func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            pSVar6 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
            if (in_stack_7 != (int *)0x0) {
              uVar8._0_1_ = (pSVar6->SendReliable).Encrypt;
              uVar8._1_1_ = (pSVar6->SendReliable).Channel;
              uVar8._2_2_ = *(undefined2 *)&(pSVar6->SendReliable).field_0x6;
              (**(code **)(*in_stack_7 + 0x110))
                        (in_stack_7,4,this_01,(pSVar6->SendReliable).DeliveryMode,uVar8,
                         *(undefined4 *)(*in_stack_7 + 0x114));
              return;
            }
          }
        }
      }
    }
    goto code_?;
  }
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x12,(Object *)woData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x46,(Object *)worldObjectRunTimeData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = id;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xbf,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0xf5,(Object *)uploadData,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnershipTypeID(this_01,(MethodInfo *)0x0);
      if (iVar2 != 2) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_No_screen_shot_when_not_planet_o,(MethodInfo *)0x0);
        return;
      }
      bVar3 = GenerateTextureData::GenerateTextureData_get_IsCreatingScreenShot((MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Texture_is_already_being_generat,(MethodInfo *)0x0);
        return;
      }
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)
                         MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                 ,
                 MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                 ,MethodInfo__System__Action<System::Byte_[]>__Action_System__Object__void__);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_03 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_03,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
      if (this_03 != (GameObject *)0x0) {
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (this_03,
                             GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                            );
        if (this_04 != (Worker *)0x0) {
          GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
                    ((GenerateTextureData *)this_04,(Action_1_Byte_ *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WorldObjectRPC(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_WorldObjectRPC
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *dataPackage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  iStack_1 = worldObjectID;
  value = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x16,value,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__Add
              (this_00,0x53,(Object *)dataPackage,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              );
    pPVar2 = (this->fields).peer;
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
      pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
      func_?();
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      pPVar4 = pPVar2->klass;
      pSStack3 = (SendOptions__Class *)pPVar4[1]._0.image;
      (*(code *)(pPVar4->vtable).SendOperation.method)();
      return;
    }
  }
  pSStack3 = (SendOptions__Class *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <HandlePublishAndScreenShotData>m__0() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests__HandlePublishAndScreenShotData_m__0
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  MVNetworkGame_OperationRequests_PublishPlanet_1(this,1,(MethodInfo *)0x0);
  return;
}


/* MVNetworkGame+OperationRequests(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
               (MVNetworkGame_OperationRequests *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).dummyData = TypeInfo__System__String->static_fields->Empty;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).networkGame = networkGame;
  if (networkGame != (MVNetworkGame *)0x0) {
    peer = (networkGame->fields)._Peer_k__BackingField;
    (this->fields).peer = peer;
    this_00 = (OperationResponsePendingManager *)
              func_?(TypeInfo__OperationResponsePendingManager);
    OperationResponsePendingManager::OperationResponsePendingManager__ctor
              (this_00,peer,(MethodInfo *)0x0);
    (this->fields).operationResponsePendingManager = this_00;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

