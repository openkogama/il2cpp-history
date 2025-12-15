
/* Void AdAction(AdType, AdActionType, AdContext) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
               (MVNetworkGame_OperationRequests *this,AdType__Enum adType,
               AdActionType__Enum actionType,AdContext__Enum adContext,MethodInfo *method)

{
  uVar1 = (ulonglong)adContext;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (actionType == AdActionType__Enum_Start) {
    pMVar2 = (this->fields).networkGame;
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 == (MVLocalPlayer *)0x0)) goto code_?;
    pMVar3 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_01,(MethodInfo *)0x0);
    if (pMVar3 == (MVAvatarLocal *)0x0) {
      return;
    }
    pMVar4 = (pMVar3->fields).avatarLocalModes;
    if (pMVar4 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
    if ((pMVar4->fields).currentState != 1) {
      return;
    }
  }
  this_02 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aAStackX_18[0] = adType;
  pOVar5 = (Object *)FUN_?(uRam_?,aAStackX_18);
  if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar6 = CONCAT71((int7)(uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_02,0x29,pOVar5,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aAStackX_18[0] = actionType;
    pOVar5 = (Object *)FUN_?(uRam_?,aAStackX_18);
    uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_02,0xde,pOVar5,(InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aAStackX_18[0] = adContext;
    pOVar5 = (Object *)FUN_?(uRam_?,aAStackX_18);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar6 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_02,0xbf,pOVar5,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),method_00);
    pPVar8 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar8 != (PhotonPeer *)0x0) {
      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                (pPVar8,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x7b),this_02,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar8->klass->vtable).SendOperation.method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddAvatarToAvatarShopInventory(Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddAvatarToAvatarShopInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectId,String *name,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStack_2[0] = worldObjectId;
    value = (Object *)FUN_?(uRam_?,aiStack_2);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = (undefined7)((ulonglong)method_00 >> 8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x16,value,(InsertionBehavior__Enum)uVar3,method_00);
      uVar5 = CONCAT71(uVar4,0xa6);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0xa6,(Object *)name,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar6 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar6 != (PhotonPeer *)0x0) {
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x36),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar6->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddItemToWorld(Int32, Int32, Vector3, Quaternion, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddItemToWorld
               (MVNetworkGame_OperationRequests *this,int32_t itemId,int32_t groupId,
               Vector3 *position,Quaternion *rotation,bool localOwner,
               bool transferOwnershipToServerOnLeave,bool isPreviewItem,MethodInfo *method)

{
  pVVar1 = position;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemId;
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  uVar3 = CONCAT71((int7)((ulonglong)pVVar1 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x28,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_10[0] = groupId;
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x17,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (localOwner == 0) {
    aiStackX_10[0] = 0;
  }
  else {
    pMVar4 = (this->fields).networkGame;
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    aiStackX_10[0] = (pMVar5->fields)._._ActorNr_k__BackingField;
  }
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x14,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_10[0]._0_1_ = transferOwnershipToServerOnLeave;
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  uVar6 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x27,pOVar2,(InsertionBehavior__Enum)uVar6,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  QStack_7.x = position->x;
  QStack_7.y = position->y;
  QStack_7.z = position->z;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
            ((Vector3 *)&QStack_7,this_01,(MethodInfo *)0x0);
  QStack_7.x = rotation->x;
  QStack_7.y = rotation->y;
  QStack_7.z = rotation->z;
  QStack_7.w = rotation->w;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
            (&QStack_7,this_01,(MethodInfo *)0x0);
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,isPreviewItem);
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              ->klass->rgctx_data[0x22].method;
  uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x7d);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x7d,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
             method_00);
  pPVar8 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar8 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar8->klass->vtable).SendOperation.methodPtr)
              (pPVar8,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x26),this_01,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean AddLink(Link) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
               (MVNetworkGame_OperationRequests *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicObjectManager__ValidateLinkStatus);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (link == (Link *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  iVar3 = (link->fields).outputWOID;
  iVar4 = (link->fields).inputWOID;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iVar4 < 1) {
    uStack_6 = 7;
  }
  else {
    if (0 < iVar3) {
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        cVar7 = FUN_?();
        cVar8 = FUN_?();
        if (cVar7 == '\0') {
          if (cVar8 == '\0') {
            uStack_6 = 3;
          }
          else {
            uStack_6 = 2;
          }
        }
        else {
          if (cVar8 != '\0') goto code_?;
          uStack_6 = 1;
        }
        EStack_9.klass = (Enum__Class *)TypeInfo__LogicObjectManager__ValidateLinkStatus;
        EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
        pSVar10 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar10,(MethodInfo *)0x0)
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar10,(MethodInfo *)0x0);
        return 0;
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    uStack_6 = 8;
  }
  EStack_9.klass = (Enum__Class *)TypeInfo__LogicObjectManager__ValidateLinkStatus;
  EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
  pSVar10 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar10,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar10,(MethodInfo *)0x0);
  return 0;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddObjectLink
               (MVNetworkGame_OperationRequests *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicObjectManager__ValidateObjectLinkStatus);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IWorldObjectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  apMStackX_10[0] = (MVWorldObject *)0x0;
  pMStackX_20 = (MVWorldObject *)0x0;
  if (link == (ObjectLink *)0x0) goto code_?;
  if (0 < (link->fields).objectConnectorWOID) {
    if (0 < (link->fields).objectWOID) {
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      cVar3 = FUN_?();
      uVar4 = (ulonglong)(uint)(link->fields).objectWOID;
      cVar5 = FUN_?();
      if (cVar3 == '\0') {
        if (cVar5 == '\0') {
          uStack_2 = 2;
        }
        else {
          uStack_2 = 3;
        }
      }
      else {
        if (cVar5 != '\0') {
          if (apMStackX_10[0] != (MVWorldObject *)0x0) {
            cVar3 = (*(apMStackX_10[0]->klass->vtable).get_HasObjectConnector.methodPtr)();
            if (cVar3 == '\0') {
              uStack_2 = 5;
              goto code_?;
            }
            if (apMStackX_10[0] != (MVWorldObject *)0x0) {
              iVar6 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                      MVWorldObject_GetIndexOfObjectLink(apMStackX_10[0],link,(MethodInfo *)0x0);
              if (iVar6 == -1) {
                if (pMStackX_20 == (MVWorldObject *)0x0) goto code_?;
                iVar6 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                        MVWorldObject_GetIndexOfObjectLink(pMStackX_20,link,(MethodInfo *)0x0);
                if (iVar6 == -1) {
                  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                         );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object___ctor
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                            );
                  apMStackX_10[0]._0_4_ = (link->fields).objectConnectorWOID;
                  pOVar7 = (Object *)FUN_?(uRam_?,apMStackX_10);
                  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                    uVar8 = CONCAT71((int7)(uVar4 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_00,0x39,pOVar7,(InsertionBehavior__Enum)uVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    apMStackX_10[0]._0_4_ = (link->fields).objectWOID;
                    pOVar7 = (Object *)FUN_?(uRam_?,apMStackX_10);
                    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                ->klass->rgctx_data[0x22].method;
                    uVar9 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x38);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_00,0x38,pOVar7,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                               method_00);
                    pPVar10 = (this->fields).peer;
                    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                        == 0) {
                      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                    }
                    if (pPVar10 != (PhotonPeer *)0x0) {
                      (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                                (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x1e),this_00,
                                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                 SendReliable,(pPVar10->klass->vtable).SendOperation.method);
                      return;
                    }
                  }
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uStack_2 = 7;
              }
              else {
                uStack_2 = 6;
              }
              goto code_?;
            }
          }
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uStack_2 = 4;
      }
code_?:
      EStack_12.klass = (Enum__Class *)TypeInfo__LogicObjectManager__ValidateObjectLinkStatus;
      EStack_12.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar13,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar14 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar14 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar14,2);
      return;
    }
    uStack_2 = 1;
  }
code_?:
  EStack_12.klass = (Enum__Class *)TypeInfo__LogicObjectManager__ValidateObjectLinkStatus;
  EStack_12.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
  pSVar13 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Link_invalid_and_rejected__Reaso,pSVar13,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)pSVar13,(MethodInfo *)0x0);
  return;
}


/* Void AddPlanetToPlanet(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddPlanetToPlanet
               (MVNetworkGame_OperationRequests *this,int32_t planetId,int32_t subtreeId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = planetId;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x56,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_10[0] = subtreeId;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x22),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddWorldObjectToInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AddWorldObjectToInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    bVar1 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_20[0] = worldObjectID;
    value = (Object *)FUN_?(uRam_?,aiStackX_20);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x16,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar3 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                  (pPVar3,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x27),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar3->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AdminOperation(Byte, Int32, Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AdminOperation
               (MVNetworkGame_OperationRequests *this,uint8_t adminOperationType,int32_t amount,
               int32_t profileId,String *msg,MethodInfo *method)

{
  uVar1 = (ulonglong)(uint)profileId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    if ((pGVar2->fields).profileID < 1) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
        (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0)) {
      if ((pMVar5->fields)._._ProfileID_k__BackingField < 1) {
        return;
      }
      pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField;
      if (pUVar6 != (UserProfileData *)0x0) {
        if ((pUVar6->fields).IsAdmin == 0) {
          return;
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        auStack_7[0] = adminOperationType;
        pOVar8 = (Object *)FUN_?(uRam_?,auStack_7);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar9 = CONCAT71((int7)(uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0xde,pOVar8,(InsertionBehavior__Enum)uVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStack_10[0] = amount;
          pOVar8 = (Object *)FUN_?(uRam_?,aiStack_10);
          uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x8f,pOVar8,(InsertionBehavior__Enum)uVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStack_10[0] = profileId;
          pOVar8 = (Object *)FUN_?(uRam_?,aiStack_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar12 = (undefined7)((ulonglong)method_00 >> 8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0xb,pOVar8,(InsertionBehavior__Enum)uVar11,method_00);
          uVar9 = CONCAT71(uVar12,0x58);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x58,(Object *)msg,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pPVar13 = (this->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                      (pPVar13,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x43),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar13->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
               (MVNetworkGame_OperationRequests *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  pVVar1 = seatBase;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                        (this_00,seatBase,(MethodInfo *)0x0);
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStackX_8 = CONCAT31(uStackX_8._1_3_,4);
    pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_8);
    uStackX_8 = seatOwnerWoID;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this_02 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)pVVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar2,pOVar3,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar5 = uStackX_8;
      lVar6 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
        }
        else {
          pOVar2 = (Object *)0x0;
        }
      }
      else {
        pOVar2 = (Object *)(CONCAT44(uStackX_c,uVar5) & 0xffffffffffffff00);
      }
      uStackX_8 = worldObjectID;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar2,pOVar3,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar10 = CONCAT71((int7)((ulonglong)pOVar2 >> 8),0x48);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x48,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar11 = (this->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar11 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                    (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x2f),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void AutoRegisterLocalPrototype(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_AutoRegisterLocalPrototype
               (MVNetworkGame_OperationRequests *this,int32_t woId,int32_t worldInventoryID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_18[0] = worldInventoryID;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_18);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x2f,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_18[0] = woId;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_18);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x16),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Ban(CheatType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban
               (MVNetworkGame_OperationRequests *this,CheatType__Enum cheatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    auStackX_20[0] = (char)cheatType;
    value = (Object *)FUN_?(uRam_?,auStackX_20);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xb2,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar3 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                  (pPVar3,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x39),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar3->klass->vtable).SendOperation.method);
        pPVar3 = (this->fields).peer;
        if (pPVar3 != (PhotonPeer *)0x0) {
          (*(pPVar3->klass->vtable).SendOutgoingCommands.methodPtr)
                    (pPVar3,(pPVar3->klass->vtable).SendOutgoingCommands.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ChangeMaterial(ObscuredByte) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ChangeMaterial
               (MVNetworkGame_OperationRequests *this,ObscuredByte currentMaterialId,
               MethodInfo *method)

{
  aOStackX_10[0] = currentMaterialId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStackX_20[0] =
       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
       ObscuredByte_InternalDecrypt(aOStackX_10,(MethodInfo *)0x0);
  value = (Object *)FUN_?(uRam_?,auStackX_20);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x67);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x67,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x79),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ClaimGamePointWelcomeReward() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimGamePointWelcomeReward
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).gamepointWelcomeClaimed == 0) {
    (this->fields).gamepointWelcomeClaimed = 1;
    pPVar1 = (this->fields).peer;
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar1 != (PhotonPeer *)0x0) {
      (*(pPVar1->klass->vtable).SendOperation.methodPtr)
                (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x6d),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar1->klass->vtable).SendOperation.method);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = StringLiteral_ClaimGamePointWelcomeReward_bein;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ClaimPlayingNewGameRewardedGold() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimPlayingNewGameRewardedGold
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x57),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ClaimRewardedAdXP(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ClaimRewardedAdXP
               (MVNetworkGame_OperationRequests *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  abStackX_10[0] = success;
  value = (Object *)FUN_?(uRam_?,abStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xd0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xd0,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x75),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloneTempWorldObjectWithOriginalReference(MVWorldObjectClient, Vector3, Quaternion) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneTempWorldObjectWithOriginalReference
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 *position,
               Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  this_00 = MVNetworkGame_OperationRequests_CreateBasicCloneData(this,root,1,0,1,(MethodInfo *)0x0);
  auStackX_10[0] = 1;
  value = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xcb,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method);
    QStack_2.x = position->x;
    QStack_2.y = position->y;
    QStack_2.z = position->z;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              ((Vector3 *)&QStack_2,this_00,(MethodInfo *)0x0);
    QStack_2.x = rotation->x;
    QStack_2.y = rotation->y;
    QStack_2.z = rotation->z;
    QStack_2.w = rotation->w;
    pDVar3 = this_00;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (&QStack_2,this_00,(MethodInfo *)0x0);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)pDVar3 >> 8),0x41),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CloneWorldObjectTree(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneWorldObjectTree
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,bool localOwner,
               bool setAsPreviewItem,bool cloneToRootGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = MVNetworkGame_OperationRequests_CreateBasicCloneData
                     (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  pPVar2 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar2 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar2->klass->vtable).SendOperation.methodPtr)
              (pPVar2,CONCAT71((int7)((ulonglong)root >> 8),0x21),pDVar1,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloneWorldObjectTreeWithPosition(MVWorldObjectClient, Vector3, Quaternion, Boolean, Boolean,
   Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CloneWorldObjectTreeWithPosition
               (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 *position,
               Quaternion *rotation,bool localOwner,bool setAsPreviewItem,bool cloneToRootGroup,
               bool isTempObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = position->z;
  QStack_2.x = rotation->x;
  QStack_2.y = rotation->y;
  QStack_2.z = rotation->z;
  QStack_2.w = rotation->w;
  VStack_1.x = position->x;
  VStack_1.y = position->y;
  pDVar3 = MVNetworkGame_OperationRequests_CreateWithPositionCloneData
                     (this,root,&VStack_1,&QStack_2,localOwner,setAsPreviewItem,cloneToRootGroup,
                      isTempObject,(MethodInfo *)0x0);
  pPVar4 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar4->klass->vtable).SendOperation.methodPtr)
              (pPVar4,CONCAT71((int7)((ulonglong)root >> 8),0x40),pDVar3,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (root != (MVWorldObjectClient *)0x0) {
    aiStackX_10[0] = (root->fields)._.id;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      IVar3 = CONCAT31(in_register_00000089,2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (pDVar1,0x16,pOVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (localOwner == 0) {
        aiStackX_10[0] = 0;
code_?:
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar1,0x14,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_10[0]._0_1_ = cloneToRootGroup;
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar1,0x65,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,setAsPreviewItem);
        pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar1,0x7f,pOVar2,CONCAT31((int3)(IVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return pDVar1;
      }
      pMVar4 = (this->fields).networkGame;
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if (pMVar5 != (MVLocalPlayer *)0x0) {
          aiStackX_10[0] = (pMVar5->fields)._._ActorNr_k__BackingField;
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar6)();
  return pDVar1;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CreateSpawnRole
               (MVNetworkGame_OperationRequests *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = avatarSpawnerWoId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x71),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Byte,System.Object] CreateWithPositionCloneData(MVWorldObjectClient, Vector3,
   Quaternion, Boolean, Boolean, Boolean, Boolean) */

Dictionary_2_System_Byte_System_Object_ *
Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
MVNetworkGame_OperationRequests_CreateWithPositionCloneData
          (MVNetworkGame_OperationRequests *this,MVWorldObjectClient *root,Vector3 *position,
          Quaternion *rotation,bool localOwner,bool setAsPreviewItem,bool cloneToRootGroup,
          bool isTempObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pDVar2 = MVNetworkGame_OperationRequests_CreateBasicCloneData
                     (this,root,localOwner,setAsPreviewItem,cloneToRootGroup,(MethodInfo *)0x0);
  cloneToRootGroup = isTempObject;
  value = (Object *)FUN_?(uRam_?,&cloneToRootGroup);
  if (pDVar2 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (pDVar2,0xcb,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    QStack_3.x = position->x;
    QStack_3.y = position->y;
    QStack_3.z = position->z;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              ((Vector3 *)&QStack_3,pDVar2,(MethodInfo *)0x0);
    QStack_3.x = rotation->x;
    QStack_3.y = rotation->y;
    QStack_3.z = rotation->z;
    QStack_3.w = rotation->w;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (&QStack_3,pDVar2,(MethodInfo *)0x0);
    return pDVar2;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
  return pDVar2;
}


/* Void CustomDevCommands() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_CustomDevCommands
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x70),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DeleteAvatarFromShopInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_DeleteAvatarFromShopInventory
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x37),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x30),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GetActorsPlanetOwnerships(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetActorsPlanetOwnerships
               (MVNetworkGame_OperationRequests *this,int32_t profileId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = profileId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xb,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x59),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetAvatarBodies() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetAvatarBodies
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x72),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetHighScoreList() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetHighScoreList
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x68),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetInventoryItemData(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetInventoryItemData
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x28,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x7a),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetResetAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetResetAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = avatarWoID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x56),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),100),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetTopHighScoreList() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_GetTopHighScoreList
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x6c),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleUploadScreenShotData(Byte[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_HandleUploadScreenShotData
               (MVNetworkGame_OperationRequests *this,Byte__Array *screenshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVNetworkGame__OperationRequests___HandleUploadScreenShotData_b__26_0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
            (screenshot,(MethodInfo *)0x0);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__MVNetworkGame__OperationRequests___HandleUploadScreenShotData_b__26_0__,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DataUpload_already_in_progress);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UploadData_called_even_though_us);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_UploadData_called_even_though_us,(MethodInfo *)0x0);
  return;
}


/* Void Handshake() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Handshake
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    (pMVar1->fields).connState = 3;
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pPVar3 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar3 != (PhotonPeer *)0x0) {
      (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                (pPVar3,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0xf8),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar3->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void IncrementStatRequest(IncrementStatRequestType, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_IncrementStatRequest
               (MVNetworkGame_OperationRequests *this,IncrementStatRequestType__Enum statRequestType
               ,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT22(aiStackX_10[0]._2_2_,(short)statRequestType);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    pMVar3 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method;
    uVar4 = CONCAT71((int7)((ulonglong)pMVar3 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar1,(InsertionBehavior__Enum)uVar2,pMVar3);
    if (value != 0) {
      aiStackX_10[0] = value;
      pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
      pMVar3 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)pMVar3 >> 8),0xa0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xa0,pOVar1,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),pMVar3);
    }
    pPVar5 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar5 != (PhotonPeer *)0x0) {
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x76),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar5->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
    if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (this_00,operationCode & 0xff,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                        );
      return bVar2;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void JoinGame(String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
               (MVNetworkGame_OperationRequests *this,String *encrypt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BuildTarget);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SkyNet);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = -(uint)(TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession != 0) & 2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = uVar1 | 4;
  if (TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer == 0) {
    uVar2 = uVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer;
  }
  uVar1 = uVar2 | 8;
  if (bVar3 == 0) {
    uVar1 = uVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    uVar2 = uVar1 | 1;
    if ((pGVar4->fields).embedded != 0) {
      uVar2 = uVar1;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      auStackX_20[0] = (pGVar4->fields).planetID;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_20);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x56,pOVar5,(InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar4 != (GameSessionData *)0x0) {
          auStackX_20[0] = (pGVar4->fields).gameMode;
          pOVar5 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,auStackX_20);
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x74,pOVar5,(InsertionBehavior__Enum)uVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar4 != (GameSessionData *)0x0) {
            uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x9a,(Object *)(pGVar4->fields).language,
                       (InsertionBehavior__Enum)uVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar4 != (GameSessionData *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this_01,0xa7,(Object *)(pGVar4->fields).token,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar4 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar4 != (GameSessionData *)0x0) {
                uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_01,0x37,(Object *)(pGVar4->fields).sessionToken,
                           (InsertionBehavior__Enum)uVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           ->klass->rgctx_data[0x22].method);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar4 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar4 != (GameSessionData *)0x0) {
                  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (this_01,0xac,(Object *)(pGVar4->fields).newPlanetName,
                             (InsertionBehavior__Enum)uVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  auStackX_20[0] = CONCAT31(auStackX_20[0]._1_3_,1);
                  pOVar5 = (Object *)FUN_?(TypeInfo__MV__Common__BuildTarget,auStackX_20);
                  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                            (this_01,0xbc,pOVar5,(InsertionBehavior__Enum)uVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (pMVar7 != (MVGameControllerBase *)0x0) {
                    auStackX_20[0] = (pMVar7->fields).reAuthTestTries;
                    pOVar5 = (Object *)FUN_?(uRam_?,auStackX_20);
                    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_01,0xd1,pOVar5,(InsertionBehavior__Enum)uVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    if (cRam_? == '\0') {
                      FUN_?(&StringLiteral__3_5_13_0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_01,0xd9,(Object *)StringLiteral__3_5_13_0,
                               (InsertionBehavior__Enum)uVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    auStackX_20[0] = uVar2;
                    pOVar5 = (Object *)FUN_?(uRam_?,auStackX_20);
                    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_01,0xcf,pOVar5,(InsertionBehavior__Enum)uVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    this_02 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                               *)FUN_?(
                                              TypeInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>
                                              );
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                    ::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                              (this_02,0,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__List_int_
                              );
                    uVar1 = 0;
                    if (this_02 !=
                        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                         *)0x0) {
                      lVar8 = 0x20;
                      for (; (int)uVar1 < (this_02->fields)._size; uVar1 = uVar1 + 1) {
                        if ((uint)(this_02->fields)._size <= uVar1) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        pRVar10 = (this_02->fields)._items;
                        if (pRVar10 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array
                                       *)0x0) goto code_?;
                        if ((uint)pRVar10->max_length <= uVar1) {
                          FUN_?();
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        this_00 = *(FileData **)((longlong)pRVar10->vector + lVar8 + -0x20);
                        if (this_00 == (FileData *)0x0) goto code_?;
                        pSVar11 = MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::
                                 FileData_NameAsString(this_00,(MethodInfo *)0x0);
                        if (pSVar11 != StringLiteral_SkyNet) {
                          if (((pSVar11 == (String *)0x0) || (StringLiteral_SkyNet == (String *)0x0))
                             || ((pSVar11->fields)._stringLength !=
                                 (StringLiteral_SkyNet->fields)._stringLength)) break;
                          uVar6 = 0;
                          bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                            ((uint8_t *)&(pSVar11->fields)._firstChar,
                                             (uint8_t *)&(StringLiteral_SkyNet->fields)._firstChar,
                                             (longlong)(pSVar11->fields)._stringLength * 2,
                                             (MethodInfo *)0x0);
                          if (bVar3 == 0) break;
                        }
                        message = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UIElements::UIR::EntryPreProcessor+AllocSize]::
                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                            ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                              *)this_02,uVar1,
                                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::FileData>__get_Item_int_
                                            );
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                  ((Object *)message,(MethodInfo *)0x0);
                        lVar8 = lVar8 + 8;
                      }
                      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pSVar11 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                               JsonConvert_SerializeObject((Object *)this_02,(MethodInfo *)0x0);
                      uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
                      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method;
                      uVar13 = (undefined7)((ulonglong)method_00 >> 8);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_01,0xda,(Object *)pSVar11,(InsertionBehavior__Enum)uVar12,
                                 method_00);
                      uVar6 = CONCAT71(uVar13,10);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_01,10,(Object *)encrypt,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method);
                      pPVar14 = (this->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar14 != (PhotonPeer *)0x0) {
                        (*(pPVar14->klass->vtable).SendOperation.methodPtr)
                                  (pPVar14,CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),this_01,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar14->klass->vtable).SendOperation.method);
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void JoinNotification() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_JoinNotification
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    if ((pMVar4->fields)._._ProfileID_k__BackingField == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
        pMVar4 != (MVLocalPlayer *)0x0)))) {
      if ((pMVar4->fields)._.playerState == 3) {
        return;
      }
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,9);
      pOVar5 = (Object *)FUN_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
         pMVar4 != (MVLocalPlayer *)0x0)) {
        aiStackX_18[0] = (pMVar4->fields)._._ActorNr_k__BackingField;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar5,value,
                     (InsertionBehavior__Enum)uVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0xc);
          pOVar5 = (Object *)FUN_?();
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar2 != (MVNetworkGame *)0x0) &&
              (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
             (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0)) {
            uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar5,
                       (Object *)(pMVar4->fields)._._RegionCode_k__BackingField,
                       (InsertionBehavior__Enum)uVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                     FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                  );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            aiStackX_18[0] = 3;
            pOVar5 = (Object *)FUN_?(TypeInfo__MV__Common__NotificationType,aiStackX_18);
            if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (pDVar7,199,pOVar5,(InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (pDVar7,200,(Object *)this_01,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pPVar8 = (this->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar8 != (PhotonPeer *)0x0) {
                SVar9 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable;
                (*(pPVar8->klass->vtable).SendOperation.methodPtr)();
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 != (MVNetworkGame *)0x0) &&
                    (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0))
                   && ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                           (pMVar3,(MethodInfo *)0x0),
                       pMVar4 != (MVLocalPlayer *)0x0 &&
                       (this_00 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
                       this_00 != (SubscriptionRulesWrapper *)0x0)))) {
                  bVar10 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                          ::SubscriptionRulesWrapper_HasBenefit
                                    (this_00,SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
                  if (bVar10 == 0) {
                    return;
                  }
                  pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                           FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                        );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object___ctor
                            (pDVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                            );
                  aiStackX_18[0] = 0x1d;
                  pOVar5 = (Object *)
                           FUN_?(TypeInfo__MV__Common__NotificationType,aiStackX_18);
                  if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                    uVar11 = CONCAT71(SVar9._1_7_,2);
                    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                ->klass->rgctx_data[0x22].method;
                    uVar12 = (undefined7)((ulonglong)method_00 >> 8);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (pDVar7,199,pOVar5,(InsertionBehavior__Enum)uVar11,method_00);
                    uVar6 = CONCAT71(uVar12,200);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (pDVar7,200,(Object *)this_01,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    pPVar8 = (this->fields).peer;
                    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                        == 0) {
                      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                    }
                    if (pPVar8 != (PhotonPeer *)0x0) {
                      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                                (pPVar8,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x3f),pDVar7,
                                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                 SendReliable,(pPVar8->klass->vtable).SendOperation.method);
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LocalPlayerLevelChanged(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
               (MVNetworkGame_OperationRequests *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = level;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xa9);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xa9,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x38),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,lockHierarchy);
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x3f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x3f,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x14),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LogicActivateRequest(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_LogicActivateRequest
               (MVNetworkGame_OperationRequests *this,int32_t woID,bool activate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = woID;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,activate);
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xcc);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xcc,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x42),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Observe(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
               (MVNetworkGame_OperationRequests *this,bool observe,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame_OperationRequests_AdminOperation
              (this,3,(uint)observe,-1,::StringLiteral__,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_OverrideFirstTimeEvent
               (MVNetworkGame_OperationRequests *this,FirstTimeEvent__Enum firstTimeEvent,
               bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aFStackX_10[0] = firstTimeEvent;
  pOVar1 = (Object *)FUN_?(uRam_?,aFStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aFStackX_10[0] = CONCAT31(aFStackX_10[0]._1_3_,overrideValue);
    pOVar1 = (Object *)FUN_?(uRam_?,aFStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xd0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xd0,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x55),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aMStackX_18[0] = chatMsgType;
  value = (Object *)FUN_?(uRam_?,aMStackX_18);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x57,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x58);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x58,(Object *)gameMsgData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x58),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aMStackX_10[0] = gameMsgType;
  value = (Object *)FUN_?(uRam_?,aMStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x57,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x58);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x58,(Object *)gameMsgData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x1c),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((pMVar3->fields)._.playerState == 3) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aNStack_4[0] = type;
    value = (Object *)FUN_?(TypeInfo__MV__Common__NotificationType,aNStack_4);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar5 = CONCAT71((int7)((ulonglong)method >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar6 = (undefined7)((ulonglong)method_00 >> 8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,199,value,(InsertionBehavior__Enum)uVar5,method_00);
      uVar7 = CONCAT71(uVar6,200);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,200,(Object *)notificationData,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar8 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar8 != (PhotonPeer *)0x0) {
        (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                  (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x3f),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar8->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PublishPlanet(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet
               (MVNetworkGame_OperationRequests *this,Action_1_String_ *errorHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_already_publishing_plane);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_is_already_being_generat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Publish_planet_operation_is_pend);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_publishing_game__try_again);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remember_that_you_need_to_play_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_not_publish_game_before_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
  pSVar2 = StringLiteral_Error_publishing_game__try_again;
  if ((pMVar1->fields).game != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
    pSVar2 = StringLiteral_Error_publishing_game__try_again;
    if ((pMVar1->fields)._joinState == 3) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar3 == (GameSessionData *)0x0) goto code_?;
      pSVar2 = StringLiteral_Error_publishing_game__try_again;
      if ((pGVar3->fields).gameMode == 0) {
        pOVar4 = (this->fields).operationResponsePendingManager;
        if (pOVar4 == (OperationResponsePendingManager *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (HashSet_1_System_ByteEnum_ *)(pOVar4->fields).pendingOperations;
        if (this_01 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                HashSet_1_System_ByteEnum__Contains
                          (this_01,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar1 >> 8),0xb),
                           MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                          );
        if (bVar5 == 0) {
          pMVar6 = (this->fields).networkGame;
          if ((((pMVar6 == (MVNetworkGame *)0x0) ||
               (this_02 = (pMVar6->fields).playerContainer, this_02 == (MVPlayerContainer *)0x0)) ||
              (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (this_02,(MethodInfo *)0x0), pMVar7 == (MVLocalPlayer *)0x0)) ||
             (pMVar6 = (this->fields).networkGame, pMVar6 == (MVNetworkGame *)0x0))
          goto code_?;
          if ((pMVar7->fields)._.level < (pMVar6->fields)._PublishLevel_k__BackingField) {
            uStackX_20 = CONCAT44(uStackX_20._4_4_,(pMVar6->fields)._PublishLevel_k__BackingField);
            pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&uStackX_20,(MethodInfo *)0x0);
            pSVar2 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_You_can_not_publish_game_before_,pSVar2,
                                (MethodInfo *)0x0);
          }
          else {
            if ((pMVar6->fields).isPublished != 0) {
              MVNetworkGame_OperationRequests_PublishPlanet_1(this,0,errorHandler,(MethodInfo *)0x0)
              ;
              return;
            }
            cVar8 = FUN_?();
            if (cVar8 == '\0') {
              uVar9 = 0;
              bVar5 = MVNetworkGame_OperationRequests_PublishPlanet_1
                                (this,0,errorHandler,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                return;
              }
              pSVar2 = TM::TM__(StringLiteral_Remember_that_you_need_to_play_i,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              uStackX_18 = unaff_RSI;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                              ,8,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                        (this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              pOVar10 = (Object *)FUN_?(uRam_?,&stack0x00000008);
              if (this_03 ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar10,
                         (Object *)pSVar2,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              uVar9 = 0;
              uStackX_20 = uStackX_18;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                              ,this_03,8,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationLifetime);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStackX_18 = CONCAT71(uStackX_18._1_7_,2);
              pOVar10 = (Object *)FUN_?(uRam_?,&uStackX_18);
              uStackX_18 = CONCAT44(uStackX_18._4_4_,8);
              value = (Object *)FUN_?(TypeInfo__NotificationLifetime,&uStackX_18);
              if (this_03 !=
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar10,value,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__NotificationsManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0
                   ) {
                  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationsManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
                  if (this_00 == (NotificationsManager *)0x0) goto code_?;
                  NotificationsManager::NotificationsManager_InstantiateNotification
                            (this_00,NotificationType__Enum_FirstTimeXPRewarded,
                             (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0)
                  ;
                }
                return;
              }
code_?:
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Texture_is_already_being_generat,(MethodInfo *)0x0);
            pSVar2 = StringLiteral_You_are_already_publishing_plane;
          }
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Publish_planet_operation_is_pend,(MethodInfo *)0x0);
          pSVar2 = StringLiteral_You_are_already_publishing_plane;
        }
      }
    }
  }
  pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
  if (errorHandler != (Action_1_String_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (errorHandler->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((errorHandler->fields)._._.method_code,pSVar2,(errorHandler->fields)._._.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Boolean PublishPlanet(Boolean, Action`1[String]) */

bool Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PublishPlanet_1
               (MVNetworkGame_OperationRequests *this,bool newImagePending,
               Action_1_String_ *errorHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_already_publishing_plane);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newImagePending == 0) {
code_?:
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    abStackX_10[0] = newImagePending;
    value = (Object *)FUN_?(uRam_?,abStackX_10);
    if (this_01 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x40);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x40,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),method_00);
    pOVar2 = (this->fields).operationResponsePendingManager;
    if (pOVar2 == (OperationResponsePendingManager *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Operation_is_already_pending_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar3 = (HashSet_1_System_ByteEnum_ *)(pOVar2->fields).pendingOperations;
    if (pHVar3 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
    bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar3,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xb),
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar4 == 0) {
      pHVar3 = (HashSet_1_System_ByteEnum_ *)(pOVar2->fields).pendingOperations;
      if (pHVar3 != (HashSet_1_System_ByteEnum_ *)0x0) {
        uVar1 = CONCAT71((int7)((ulonglong)
                                MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                                ->klass >> 8),0xb);
        System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
        HashSet_1_System_ByteEnum__AddIfNotPresent
                  (pHVar3,(ByteEnum__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                   ->klass->rgctx_data[0x15].method);
        pPVar5 = (pOVar2->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar5 != (PhotonPeer *)0x0) {
          (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                    (pPVar5,CONCAT71((int7)((ulonglong)uVar1 >> 8),0xb),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar5->klass->vtable).SendOperation.method);
          return 1;
        }
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Operation_is_already_pending_,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_You_are_already_publishing_plane;
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_00 == (MaterialLoader *)0x0) goto code_?;
    bVar4 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_An_error_occurred_creating_the_g;
    if (bVar4 != 0) goto code_?;
  }
  pSVar6 = TM::TM__(pSVar6,(MethodInfo *)0x0);
  if (errorHandler != (Action_1_String_ *)0x0) {
    (*(errorHandler->fields)._._.invoke_impl)
              ((errorHandler->fields)._._.method_code,pSVar6,(errorHandler->fields)._._.method);
    return 0;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Void PurchaseAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatar
               (MVNetworkGame_OperationRequests *this,int32_t avatarId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x7e);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = avatarId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,4,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = 4;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseAvatarAccessory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatarAccessory
               (MVNetworkGame_OperationRequests *this,int32_t streamingAssetID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x69);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = streamingAssetID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,2,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = 2;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseAvatarAccessoryBundle(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseAvatarAccessoryBundle
               (MVNetworkGame_OperationRequests *this,int32_t bundleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xbf);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = bundleId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,9,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = 9;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseGameBooster(String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseGameBooster
               (MVNetworkGame_OperationRequests *this,String *gameBooster,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,0xf5);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)gameBooster,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,0xb,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 0xb;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aMStackX_10[0] = productTypeID;
  value = (Object *)FUN_?(uRam_?,aMStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x5e,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x5f,(Object *)productData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xbf);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = themeId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xcf);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)themeSettingsData
             ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,8,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = 8;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseTier(GamePassTier) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_PurchaseTier
               (MVNetworkGame_OperationRequests *this,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aGStackX_10[0] = CONCAT31(aGStackX_10[0]._1_3_,0xf5);
  pOVar1 = (Object *)FUN_?(uRam_?,aGStackX_10);
  aGStackX_10[0] = gamePassTier & 0xff;
  value = (Object *)FUN_?(uRam_?,aGStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,10,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aGStackX_10[0] = 10;
  pOVar1 = (Object *)FUN_?(uRam_?,aGStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterWorldObject(WorldObjectType, Int32, Dictionary`2[System.Object,System.Object],
   Vector3, Quaternion, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RegisterWorldObject
               (MVNetworkGame_OperationRequests *this,WorldObjectType__Enum type,int32_t groupId,
               Dictionary_2_System_Object_System_Object_ *woData,Vector3 *position,
               Quaternion *rotation,Vector3 *scale,bool localOwner,
               bool transferOwnershipToServerOnLeave,MethodInfo *method)

{
  pDVar1 = woData;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aWStackX_10[0] = type;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aWStackX_10);
  if (this_01 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  uVar3 = CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x11,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aWStackX_10[0] = groupId;
  pOVar2 = (Object *)FUN_?(uRam_?,aWStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x17,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x12,(Object *)woData,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (localOwner == 0) {
    aWStackX_10[0] = WorldObjectType__Enum_PlayModeAvatar;
  }
  else {
    pMVar4 = (this->fields).networkGame;
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    aWStackX_10[0] = (pMVar5->fields)._._ActorNr_k__BackingField;
  }
  pOVar2 = (Object *)FUN_?(uRam_?,aWStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x14,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aWStackX_10[0] = CONCAT31(aWStackX_10[0]._1_3_,transferOwnershipToServerOnLeave);
  pOVar2 = (Object *)FUN_?(uRam_?,aWStackX_10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x27,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  QStack_6.x = position->x;
  QStack_6.y = position->y;
  QStack_6.z = position->z;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
            ((Vector3 *)&QStack_6,this_01,(MethodInfo *)0x0);
  QStack_6.x = rotation->x;
  QStack_6.y = rotation->y;
  QStack_6.z = rotation->z;
  QStack_6.w = rotation->w;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
            (&QStack_6,this_01,(MethodInfo *)0x0);
  QStack_6.x = scale->x;
  QStack_6.y = scale->y;
  QStack_6.z = scale->z;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
            ((Vector3 *)&QStack_6,this_01,(MethodInfo *)0x0);
  pPVar7 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar7 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar7->klass->vtable).SendOperation.methodPtr)
              (pPVar7,0,this_01,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveItemFromInventory
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x28,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0xd),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveLink__Link_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).networkGame;
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) &&
     (this_00 = (pWVar2->fields).links, this_00 != (Links *)0x0)) {
    bVar3 = Links::Links_Contains(this_00,linkID,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = StringLiteral_RemoveLink__Link_not_found;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar5 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_8[0] = linkID;
    value = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x3a);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x3a,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar8 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar8 != (PhotonPeer *)0x0) {
        (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                  (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),10),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar8->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveObjectLink(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveObjectLink
               (MVNetworkGame_OperationRequests *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveObjectLink__ObjectLink_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).networkGame;
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) &&
     (this_00 = (pWVar2->fields).objectLinks, this_00 != (ObjectLinks *)0x0)) {
    bVar3 = ObjectLinks::ObjectLinks_Contains(this_00,objectLinkID,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = StringLiteral_RemoveObjectLink__ObjectLink_not;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar5 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar4);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_8[0] = objectLinkID;
    value = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar7 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x3a);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x3a,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar8 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar8 != (PhotonPeer *)0x0) {
        (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                  (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x1f),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar8->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveWorldObjectDataPartial(Int32, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,String *keyPath,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_remoe_WO_data_with_an_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Char,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined2 *)(lVar1 + 0x20) = 0x5c;
    if (keyPath != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar3 = 0;
      RStack_4._8_8_ = RStack_4._8_8_ & 0xffffffff;
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      RStack_4._pointer._value = (void *)(lVar1 + 0x20);
      uVar5 = 0;
      RStack_4._length = *(undefined4 *)(lVar1 + 0x18);
      pSVar6 = mscorlib.dll::System::String::String_SplitInternal
                         (keyPath,&RStack_4,0x7fffffff,StringSplitOptions__Enum_RemoveEmptyEntries,
                          (MethodInfo *)0x0);
      if (pSVar6 != (String__Array *)0x0) {
        if (pSVar6->max_length == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Trying_to_remoe_WO_data_with_an_,(MethodInfo *)0x0);
        }
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        ppSVar7 = pSVar6->vector;
        this_03 = this_00;
        while ((int)uVar3 < (int)pSVar6->max_length) {
          if ((int)uVar3 < (int)pSVar6->max_length + -1) {
            this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            if ((uint)pSVar6->max_length <= uVar3) goto code_?;
            if (this_03 ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) goto code_?;
            uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)*ppSVar7,
                       (Object *)this_01,(InsertionBehavior__Enum)uVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uVar3 = uVar3 + 1;
            ppSVar7 = ppSVar7 + 1;
            this_03 = this_01;
          }
          else {
            if ((uint)pSVar6->max_length <= uVar3) goto code_?;
            if (this_03 ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) goto code_?;
            uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)*ppSVar7,
                       (Object *)::StringLiteral__,(InsertionBehavior__Enum)uVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uVar3 = uVar3 + 1;
            ppSVar7 = ppSVar7 + 1;
          }
        }
        this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = worldObjectID;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar9 = (undefined7)((ulonglong)method_00 >> 8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_02,0x16,value,(InsertionBehavior__Enum)uVar8,method_00);
          uVar5 = CONCAT71(uVar9,0x13);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_02,0x13,(Object *)this_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pPVar10 = (this->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                      (pPVar10,CONCAT71((int7)((ulonglong)uVar5 >> 8),5),this_02,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar10->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woDataToRemove,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x13);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x13,(Object *)woDataToRemove,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),5),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = woid;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x17),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = captureTime;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x23,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_10[0] = woid;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x5e),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestAcceptFriendShip(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAcceptFriendShip
               (MVNetworkGame_OperationRequests *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Friend_RequestAccepted);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestAccepted,1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = friendID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x34);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x34,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x10),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestAccessoryData() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAccessoryData
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AccessoryDataManager__SetAccessoryData_System__String_,(MethodInfo *)0x0)
    ;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<System::String>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar3 = &(pMVar2->fields).ReceivedAccessoryData;
      a = (pMVar2->fields).ReceivedAccessoryData;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<System::String>;
        if (pDVar4 == (Delegate *)0x0) {
          pAVar6 = (Action_1_String_ *)0x0;
        }
        else {
          pAVar6 = (Action_1_String_ *)
                    FUN_?(pDVar4,TypeInfo__System__Action<System::String>);
          if (pAVar6 == (Action_1_String_ *)0x0) {
            FUN_?(pDVar4,pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pAVar8 = *ppAVar3;
        bVar9 = a == pAVar8;
        if (bVar9) {
          *ppAVar3 = pAVar6;
          pAVar8 = a;
        }
        UNLOCK();
        pAVar6 = a;
        if (!bVar9) {
          pAVar6 = pAVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppAVar3 >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        bVar9 = pAVar6 != a;
        a = pAVar6;
      } while (bVar9);
      pPVar14 = (this->fields).peer;
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      pMVar15 = 
      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar14 != (PhotonPeer *)0x0) {
        (*(pPVar14->klass->vtable).SendOperation.methodPtr)
                  (pPVar14,CONCAT71((int7)((ulonglong)pMVar15 >> 8),0x5f),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar14->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RequestAddItemToMarketPlace(Int32, String, String) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestAddItemToMarketPlace
               (MVNetworkGame_OperationRequests *this,int32_t itemID,String *itemName,
               String *itemDescription,MethodInfo *method)

{
  pSVar1 = itemDescription;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)pSVar1 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x28,value,(InsertionBehavior__Enum)uVar2,method_00);
    uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x2a,(Object *)itemName,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71(uVar3,0x86);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x86,(Object *)itemDescription,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar5 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar5 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x2c),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RequestBuiltInItem(BuiltInItem, Int32, Dictionary`2[System.Object,System.Object], Vector3,
   Quaternion, Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestBuiltInItem
               (MVNetworkGame_OperationRequests *this,BuiltInItem__Enum builtInItem,int32_t groupId,
               Dictionary_2_System_Object_System_Object_ *customData,Vector3 *position,
               Quaternion *rotation,Vector3 *scale,bool localOwner,
               bool transferOwnershipToServerOnLeave,MethodInfo *method)

{
  pDVar1 = customData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BuiltInItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,(char)builtInItem);
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__BuiltInItem,aiStackX_10);
  if (this_01 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  uVar3 = CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x73,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_10[0] = groupId;
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x17,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0xf5,(Object *)customData,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (localOwner == 0) {
    aiStackX_10[0] = 0;
  }
  else {
    pMVar4 = (this->fields).networkGame;
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    aiStackX_10[0] = (pMVar5->fields)._._ActorNr_k__BackingField;
  }
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x14,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,transferOwnershipToServerOnLeave);
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_01,0x27,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  QStack_6.x = position->x;
  QStack_6.y = position->y;
  QStack_6.z = position->z;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
            ((Vector3 *)&QStack_6,this_01,(MethodInfo *)0x0);
  QStack_6.x = rotation->x;
  QStack_6.y = rotation->y;
  QStack_6.z = rotation->z;
  QStack_6.w = rotation->w;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
            (&QStack_6,this_01,(MethodInfo *)0x0);
  QStack_6.x = scale->x;
  QStack_6.y = scale->y;
  QStack_6.z = scale->z;
  pDVar7 = this_01;
  MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetScale
            ((Vector3 *)&QStack_6,this_01,(MethodInfo *)0x0);
  pPVar8 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar8 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar8->klass->vtable).SendOperation.methodPtr)
              (pPVar8,CONCAT71((int7)((ulonglong)pDVar7 >> 8),0x25),this_01,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_t_request_friendship_from_yo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Friend_RequestSent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Friend_RequestSent,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).networkGame;
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    if (id == (pMVar2->fields)._._ProfileID_k__BackingField) {
      pSVar3 = TM::TM__(StringLiteral_Can_t_request_friendship_from_yo,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      *errorText = pSVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)errorText >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      return 0;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_10[0] = id;
    value = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar9 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x35);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x35,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),method_00);
      pPVar10 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar10 != (PhotonPeer *)0x0) {
        (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                  (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0xf),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar10->klass->vtable).SendOperation.method);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void RequestLargeDBQuery(MVOperationCodes, DBQuery, Dictionary`2[System.Object,System.Object],
   Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestLargeDBQuery
               (MVNetworkGame_OperationRequests *this,MVOperationCodes__Enum operationCode,
               DBQuery__Enum query,Dictionary_2_System_Object_System_Object_ *inData,
               int32_t numRowsPerReturn,MethodInfo *method)

{
  pDVar1 = inData;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,CONCAT44(in_register_00000014,operationCode));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,(char)query);
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_18);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,2,(Object *)inData,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_18[0] = numRowsPerReturn;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_18);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,6,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,(ulonglong)(byte)operationCode,this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestMarketPlaceItem(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestMarketPlaceItem
               (MVNetworkGame_OperationRequests *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVOperationCodes_GetMarketPlaceI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MVOperationCodes_GetMarketPlaceI,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x28,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x2b),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestRejectFriendShip(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestRejectFriendShip
               (MVNetworkGame_OperationRequests *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = friendID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x34);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x34,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x11),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = itemID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x28,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x2d),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pPVar2 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar2 != (PhotonPeer *)0x0) {
    (*(pPVar2->klass->vtable).SendOperation.methodPtr)
              (pPVar2,CONCAT71((int7)((ulonglong)pMVar1 >> 8),0x35),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar2->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestUpdateGoldResponse() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestUpdateGoldResponse
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x6e),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestWoUniquePrototype(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RequestWoUniquePrototype
               (MVNetworkGame_OperationRequests *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = woId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x16),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reset_ActiveAvatar__called);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Reset_ActiveAvatar__called,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = AvatarID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x7e);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x2a),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetFirstTimeEvents
               (MVNetworkGame_OperationRequests *this,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  abStackX_10[0] = overrideValue;
  value = (Object *)FUN_?(uRam_?,abStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xd0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xd0,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x53),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetHighlights() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetHighlights
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x62),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetLogicChunk(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ResetLogicChunk
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x18),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x67),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RevokeEditRights(MVPlayer) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_RevokeEditRights
               (MVNetworkGame_OperationRequests *this,MVPlayer *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uVar1 = uStackX_20;
  lVar2 = lRam_?;
  uStackX_20 = uStackX_20 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&uStackX_20,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)(CONCAT44(uStackX_24,uVar1) & 0xffffffffffffff00);
  }
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar7 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xde,pOVar3,(InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (target != (MVPlayer *)0x0) {
      uStackX_20 = (target->fields)._ProfileID_k__BackingField;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_20);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar8 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xb,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),method_00);
      pPVar9 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar9 != (PhotonPeer *)0x0) {
        (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                  (pPVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x44),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar9->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  uVar1 = (ulonglong)type;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x92,(Object *)logString,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x93,(Object *)stackTrace,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_10[0] = (char)type;
    value = (Object *)FUN_?(uRam_?,auStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x94,value,(InsertionBehavior__Enum)uVar2,method_00);
    uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x99,(Object *)extraSentryData,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71(uVar3,0xbb);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbb,(Object *)tags,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar5 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar5 != (PhotonPeer *)0x0) {
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x32),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar5->klass->vtable).SendOperation.method);
      pPVar5 = (this->fields).peer;
      if (pPVar5 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pPVar5->klass->vtable).SendOutgoingCommands.methodPtr)
                  (pPVar5,(pPVar5->klass->vtable).SendOutgoingCommands.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendRuntimeEventOperation(RuntimeEvent) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SendRuntimeEventOperation
               (MVNetworkGame_OperationRequests *this,RuntimeEvent *runtimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (runtimeEvent != (RuntimeEvent *)0x0) {
    value = (Object *)
            (*(runtimeEvent->klass->vtable).__unknown.methodPtr)
                      (runtimeEvent,(runtimeEvent->klass->vtable).__unknown.method);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xf5,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar2 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                  (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x34),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar2->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetActiveAvatar(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetActiveAvatar
               (MVNetworkGame_OperationRequests *this,int32_t AvatarID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = AvatarID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x7e);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x29),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = woID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x6f),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_accessory_slot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Set_accessory_slot,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  afStackX_10[0] = (float)avatarBodyWoID;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = (float)streamingAssetId;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x69,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = offset;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x72,pOVar1,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = scale;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x22);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x22,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x2e),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetEarningsReportToSeenOperation() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetEarningsReportToSeenOperation
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x6b),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetFirstTimeEvent
               (MVNetworkGame_OperationRequests *this,FirstTimeEvent__Enum firstTimeEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aFStackX_10[0] = firstTimeEvent;
  value = (Object *)FUN_?(uRam_?,aFStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x54),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  auStackX_10[0] = (char)gamePassTier;
  value = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xf5,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x6a),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetHighlightToSeen(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetHighlightToSeen
               (MVNetworkGame_OperationRequests *this,int32_t highlightId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = highlightId;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x61),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetProfileSettings(ProfileSettingKey, Object) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetProfileSettings
               (MVNetworkGame_OperationRequests *this,ProfileSettingKey__Enum key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__SettingsPlatform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__MV__WorldObject__MetaData__SettingsPlatform;
  pOVar2 = (Object *)0x0;
  PStack_3 = ProfileSettingKey__Enum_MouseSensitivity;
  iVar4._0_2_ = (TypeInfo__MV__WorldObject__MetaData__SettingsPlatform->_0).byval_arg.attrs;
  iVar4._2_1_ = (TypeInfo__MV__WorldObject__MetaData__SettingsPlatform->_0).byval_arg.type;
  iVar4._3_1_ = (TypeInfo__MV__WorldObject__MetaData__SettingsPlatform->_0).byval_arg.field_0xb;
  if (iVar4 < 0) {
    if (((TypeInfo__MV__WorldObject__MetaData__SettingsPlatform->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__MetaData__SettingsPlatform->_1).field_0x6d & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__SettingsPlatform);
      FUN_?(pOVar2 + 1,&PStack_3,(longlong)(int)(pSVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        method = (MethodInfo *)0xADDR;
        uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStack_10 << 0x20);
  }
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar11 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar2,(InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    PStack_3 = key;
    pOVar2 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingKey,&PStack_3);
    uVar12 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar13 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x29,pOVar2,(InsertionBehavior__Enum)uVar12,method_00);
    uVar11 = CONCAT71(uVar13,0xd8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xd8,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar14 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar14 != (PhotonPeer *)0x0) {
      (*(pPVar14->klass->vtable).SendOperation.methodPtr)
                (pPVar14,CONCAT71((int7)((ulonglong)uVar11 >> 8),0x65),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar14->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetSayChatBubbleVisible(Boolean) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetSayChatBubbleVisible
               (MVNetworkGame_OperationRequests *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_V);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  abStackX_10[0] = shouldShow;
  value = (Object *)FUN_?(uRam_?,abStackX_10);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_V,value,
               (InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0xf5,(Object *)this_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),method_00);
      pPVar3 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                  (pPVar3,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x5d),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar3->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetSpawnRoleBody(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SetSpawnRoleBody
               (MVNetworkGame_OperationRequests *this,int32_t avatarCreatorWoId,
               int32_t avatarBodyDbId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = avatarCreatorWoId;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aiStackX_10[0] = avatarBodyDbId;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x73),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
               (MVNetworkGame_OperationRequests *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    bVar3 = MVTeamManager::MVTeamManager_IsTeamActive(this_00,team,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aMStackX_20[0] = team;
    value = (Object *)FUN_?(uRam_?,aMStackX_20);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x59);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x59,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar5 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x1d),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  auStackX_10[0] = (char)gamePassTier;
  value = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xf5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xf5,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0x69),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShutdownSession() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_ShutdownSession
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,(char)method);
    LOCK();
    UNLOCK();
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
  pVVar1 = seatBase;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).networkGame;
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
                        (this_00,seatBase,(MethodInfo *)0x0);
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
    pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_8);
    uStackX_8 = worldObjectSpawnerVehicleID;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (this_02 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)pVVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar2,pOVar3,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar5 = uStackX_8;
      lVar6 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
        }
        else {
          pOVar2 = (Object *)0x0;
        }
      }
      else {
        pOVar2 = (Object *)(CONCAT44(uStackX_c,uVar5) & 0xffffffffffffff00);
      }
      uStackX_8 = worldObjectID;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar2,pOVar3,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar10 = CONCAT71((int7)((ulonglong)pOVar2 >> 8),0x48);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x48,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar11 = (this->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar11 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                    (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x31),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void StartSessionTime() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_StartSessionTime
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  pPVar2 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar2 != (PhotonPeer *)0x0) {
    (*(pPVar2->klass->vtable).SendOperation.methodPtr)
              (pPVar2,CONCAT71((int7)((ulonglong)pMVar1 >> 8),0x66),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar2->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Syncronize() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_Syncronize
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x3a),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SyncronizePing() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_SyncronizePing
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x3c),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TogglePreviewTier() */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TogglePreviewTier
               (MVNetworkGame_OperationRequests *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).peer;
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar1 != (PhotonPeer *)0x0) {
    (*(pPVar1->klass->vtable).SendOperation.methodPtr)
              (pPVar1,CONCAT71((int7)((ulonglong)pMVar2 >> 8),0x74),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
               (pPVar1->klass->vtable).SendOperation.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TransferOwnership(Int32, Int32, Transform) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TransferOwnership
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,int32_t ownerActorNr,
               Transform *t,MethodInfo *method)

{
  pTVar1 = t;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  uStackX_10 = worldObjectID;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this_00 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  uVar3 = CONCAT71((int7)((ulonglong)pTVar1 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_00,0x16,pOVar2,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = ownerActorNr;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
              ->klass->rgctx_data[0x22].method;
  puVar5 = (ulonglong *)CONCAT71((int7)((ulonglong)method_00 >> 8),0x14);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object__TryInsert
            (this_00,0x14,pOVar2,(InsertionBehavior__Enum)uVar4,method_00);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Transform *)0x0) {
code_?:
    uVar6 = uStackX_10;
    lVar7 = lRam_?;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        puVar5 = (ulonglong *)&uStackX_10;
        FUN_?(pOVar2 + 1,puVar5,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar4 = (ulonglong)(uVar6 & 0x3f);
          puVar5 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar5;
            LOCK();
            uVar9 = *puVar5;
            if (uVar8 == uVar9) {
              *puVar5 = uVar8 | 1L << uVar4;
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      else {
        pOVar2 = (Object *)0x0;
      }
    }
    else {
      pOVar2 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
    }
    pDVar10 = (Dictionary_2_System_Byte_System_Object_ *)
              CONCAT71((int7)((ulonglong)puVar5 >> 8),0x54);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x54,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((t->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
    pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x54,pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_11.x = 0.0;
    QStack_11.y = 0.0;
    QStack_11.z = 0.0;
    pvVar12 = (t->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)t,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar12,&QStack_11);
    QStack_14.x = QStack_11.x;
    QStack_14.y = QStack_11.y;
    QStack_14.z = QStack_11.z;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
              ((Vector3 *)&QStack_14,this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_14.x = 0.0;
    QStack_14.y = 0.0;
    QStack_14.z = 0.0;
    QStack_14.w = 0.0;
    pvVar12 = (t->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)t,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar12,&QStack_14);
    pDVar10 = this_00;
    MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
              (&QStack_14,this_00,(MethodInfo *)0x0);
  }
  pPVar15 = (this->fields).peer;
  if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
  }
  if (pPVar15 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar15->klass->vtable).SendOperation.methodPtr)
              (pPVar15,CONCAT71((int7)((ulonglong)pDVar10 >> 8),6),this_00,
               TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void TransferWorldObjectsToGroup(Int32, Int32[]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
               (MVNetworkGame_OperationRequests *this,int32_t groupId,Int32__Array *worldObjects,
               MethodInfo *method)

{
  aIStackX_10[0].m_value = groupId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_transfer_WO_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__to_itself__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = FUN_?(worldObjects);
  if (cVar1 == '\0') {
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aIStackX_10[0].m_value = groupId;
    value = (Object *)FUN_?(uRam_?,aIStackX_10);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar3 = (undefined7)((ulonglong)method_00 >> 8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x16,value,(InsertionBehavior__Enum)uVar2,method_00);
      uVar4 = CONCAT71(uVar3,0x48);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x48,(Object *)worldObjects,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar5 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x20),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Trying_to_transfer_WO_,pSVar7,StringLiteral__to_itself__,
                      (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar8 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar7);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TriggerBoxEnter(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxEnter
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar2 = 0;
    value = (Object *)FUN_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((*(int *)&value[1].monitor == 0) ||
         (*(int32_t *)&value[2].klass = triggerBoxOwnerId, *(uint *)&value[1].monitor < 2)) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int32_t *)((longlong)&value[2].klass + 4) = triggerInstigatorId;
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar4 = (this->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar4 != (PhotonPeer *)0x0) {
          (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                    (pPVar4,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x12),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar4->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TriggerBoxExit(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_TriggerBoxExit
               (MVNetworkGame_OperationRequests *this,int32_t triggerBoxOwnerId,
               int32_t triggerInstigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar2 = 0;
    value = (Object *)FUN_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((*(int *)&value[1].monitor == 0) ||
         (*(int32_t *)&value[2].klass = triggerBoxOwnerId, *(uint *)&value[1].monitor < 2)) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int32_t *)((longlong)&value[2].klass + 4) = triggerInstigatorId;
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar4 = (this->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar4 != (PhotonPeer *)0x0) {
          (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                    (pPVar4,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x13),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar4->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar2 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
    if (pHVar2 != (HashSet_1_System_ByteEnum_ *)0x0) {
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (pHVar2,operationCode & 0xff,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                        );
      if (bVar3 != 0) {
        pHVar2 = (HashSet_1_System_ByteEnum_ *)(pOVar1->fields).pendingOperations;
        if (pHVar2 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
        HashSet_1_System_ByteEnum__Remove
                  (pHVar2,operationCode & 0xff,
                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnEquipAccessory(Int32, AccessorySlotType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnEquipAccessory
               (MVNetworkGame_OperationRequests *this,int32_t avatarBodyWoID,
               AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aAStackX_10[0] = avatarBodyWoID;
  pOVar1 = (Object *)FUN_?(uRam_?,aAStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    aAStackX_10[0] = accessorySlotType;
    pOVar1 = (Object *)FUN_?(uRam_?,aAStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),1),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x60),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnlockClientShopInventoryItem(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnlockClientShopInventoryItem
               (MVNetworkGame_OperationRequests *this,int32_t itemId,MethodInfo *method)

{
  aIStackX_10[0].m_value = itemId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_item_with_id__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Purchase_item_with_id__,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aIStackX_10[0].m_value._0_1_ = 9;
  pOVar2 = (Object *)FUN_?(uRam_?,aIStackX_10);
  aIStackX_10[0].m_value = itemId;
  value = (Object *)FUN_?(uRam_?,aIStackX_10);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar3 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,3,this_00,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aIStackX_10[0].m_value = 3;
    pOVar2 = (Object *)FUN_?(uRam_?,aIStackX_10);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar5 = (undefined7)((ulonglong)method_00 >> 8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x5e,pOVar2,(InsertionBehavior__Enum)uVar4,method_00);
      uVar3 = CONCAT71(uVar5,0x5f);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x5f,(Object *)this_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar6 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar6 != (PhotonPeer *)0x0) {
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar6->klass->vtable).SendOperation.method);
        return;
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnlockMaterial(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnlockMaterial
               (MVNetworkGame_OperationRequests *this,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x67);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = materialID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,0,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar5 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5e,pOVar1,(InsertionBehavior__Enum)uVar4,method_00);
    uVar3 = CONCAT71(uVar5,0x5f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_01,0x5f,(Object *)this_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar6 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar6 != (PhotonPeer *)0x0) {
      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x23),this_01,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar6->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnregisterWorldObject(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UnregisterWorldObject
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2)
               ,method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),1),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  afStackX_10[0] = (float)bodyWoID;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = (float)slot;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x71,pOVar1,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = offset;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x72);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x72,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar2 >> 8),0x33),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateAvatarAccessoryScale(Int32, AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateAvatarAccessoryScale
               (MVNetworkGame_OperationRequests *this,int32_t bodyWoID,AccessorySlotType__Enum slot,
               float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  afStackX_10[0] = (float)bodyWoID;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x7e,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = (float)slot;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x71,pOVar1,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = scale;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x22);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x22,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar2 >> 8),99),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateInventorySlots(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateInventorySlots
               (MVNetworkGame_OperationRequests *this,
               Dictionary_2_System_Object_System_Object_ *itemIdToSlotIndexTable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar1 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x2e);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x2e,(Object *)itemIdToSlotIndexTable,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
    pPVar2 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar2 != (PhotonPeer *)0x0) {
      (*(pPVar2->klass->vtable).SendOperation.methodPtr)
                (pPVar2,CONCAT71((int7)((ulonglong)uVar1 >> 8),0xe),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar2->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateLineOfFire(Int32, Vector3, Vector3) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateLineOfFire
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectIDPickupOwner,
               Vector3 *camDir,Vector3 *camOrigin,MethodInfo *method)

{
  pVVar1 = camOrigin;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  afStackX_10[0] = (float)worldObjectIDPickupOwner;
  pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)pVVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camOrigin->x;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4a,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camOrigin->y;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4b,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camOrigin->z;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4c,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camDir->x;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4d,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camDir->y;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4e,pOVar2,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = camDir->z;
    pOVar2 = (Object *)FUN_?(uRam_?,afStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x4f);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x4f,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),method_00);
    pPVar5 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar5 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                (pPVar5,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x1a),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendUnreliable);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldInventoryID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x2f,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x31);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x31,(Object *)prototypeData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),7),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  afStackX_10[0] = (float)worldInventoryID;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x2f,pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = scale;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x22);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x22,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),method_00);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),8),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateWorldObject(Int32, Vector3, Byte[], TransformPackageType) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObject
               (MVNetworkGame_OperationRequests *this,int32_t id,Vector3 *position,
               Byte__Array *rotation,TransformPackageType__Enum packageType,MethodInfo *method)

{
  pBVar1 = rotation;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields)._joinState != 3) {
      return;
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    VStack_3.x = (float)id;
    pOVar4 = (Object *)FUN_?(uRam_?,&VStack_3);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar5 = CONCAT71((int7)((ulonglong)pBVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x16,pOVar4,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (this->fields).networkGame;
      if (this_00 != (MVNetworkGame *)0x0) {
        fVar6 = (float)MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                 (this_00,(MethodInfo *)0x0);
        VStack_3.x = fVar6;
        pOVar4 = (Object *)FUN_?(uRam_?,&VStack_3);
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x23,pOVar4,(InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        VStack_3.x = position->x;
        VStack_3.y = position->y;
        VStack_3.z = position->z;
        MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                  (&VStack_3,this_01,(MethodInfo *)0x0);
        uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x9d,(Object *)rotation,(InsertionBehavior__Enum)uVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        auStack_8[0] = (undefined1)packageType;
        pOVar4 = (Object *)FUN_?(uRam_?,auStack_8);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x24);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x24,pOVar4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),method_00);
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar9 = (this->fields).peer;
        VStack_3.x = (float)(uint)((undefined1)packageType == TransformPackageType__Enum_Stop);
        if (pPVar9 != (PhotonPeer *)0x0) {
          (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                    (pPVar9,CONCAT71((int7)((ulonglong)uVar5 >> 8),2),this_01,VStack_3._0_8_,
                     (pPVar9->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, String, Object) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,String *keyPath,
               Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_update_WO_with_an_empt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Char,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined2 *)(lVar1 + 0x20) = 0x5c;
    if (keyPath != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_3._8_8_ = RStack_3._8_8_ & 0xffffffff;
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      RStack_3._pointer._value = (void *)(lVar1 + 0x20);
      uVar4 = 0;
      RStack_3._length = *(undefined4 *)(lVar1 + 0x18);
      pSVar5 = mscorlib.dll::System::String::String_SplitInternal
                         (keyPath,&RStack_3,0x7fffffff,StringSplitOptions__Enum_RemoveEmptyEntries,
                          (MethodInfo *)0x0);
      if (pSVar5 != (String__Array *)0x0) {
        if (pSVar5->max_length == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Trying_to_update_WO_with_an_empt,(MethodInfo *)0x0);
        }
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        iVar6 = (int)pSVar5->max_length;
        if ((uint)pSVar5->max_length <= iVar6 - 1U) goto code_?;
        if (this_00 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)pSVar5->vector[(longlong)iVar6 + -1],value,
                     (InsertionBehavior__Enum)uVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uVar7 = (int)pSVar5->max_length - 2;
          if (-1 < (int)uVar7) {
            lVar1 = (longlong)(int)uVar7;
            ppSVar8 = pSVar5->vector + lVar1;
            value_01 = this_00;
            do {
              this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              if ((uint)pSVar5->max_length <= uVar7) goto code_?;
              if (this_00 ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) goto code_?;
              uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)*ppSVar8,
                         (Object *)value_01,(InsertionBehavior__Enum)uVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              uVar7 = uVar7 - 1;
              ppSVar8 = ppSVar8 + -1;
              lVar1 = lVar1 + -1;
              value_01 = this_00;
            } while (-1 < lVar1);
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_18[0] = worldObjectID;
          value_00 = (Object *)FUN_?(uRam_?,aiStackX_18);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar9 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar10 = (undefined7)((ulonglong)method_00 >> 8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x16,value_00,(InsertionBehavior__Enum)uVar9,method_00);
            uVar4 = CONCAT71(uVar10,0x12);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x12,(Object *)this_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pPVar11 = (this->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar11 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                        (pPVar11,CONCAT71((int7)((ulonglong)uVar4 >> 8),4),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateWorldObjectDataPartial(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *woData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x12);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x12,(Object *)woData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),4),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x46);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x46,(Object *)worldObjectRunTimeData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x19),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = id;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xbf,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0xf5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0xf5,(Object *)uploadData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x3e),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__System__Action<System::Byte_[]>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_screen_shot_when_not_planet_o);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_is_already_being_generat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    if ((char)PVar3 == '\x02') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GenerateTextureData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField == 0)
      {
        this_02 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<System::Byte_[]>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                   ,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__GameObject);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_GenerateTexture);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
        pSVar5 = StringLiteral_GenerateTexture;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                  (pGVar4,pSVar5,(MethodInfo *)0x0);
        if ((pGVar4 != (GameObject *)0x0) &&
           (this_03 = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar4,
                                 GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                                ), this_03 != (Component *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Texture_is_being_generated);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GenerateTextureData);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField !=
              0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_03,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                      ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar5 = StringLiteral_Texture_is_being_generated;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__ILogger);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar6 == (ILogger_1 *)0x0) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,0,pSVar5);
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar8 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
          *(undefined4 *)(lVar8 + 0x10) = 0;
          *(Component **)(lVar8 + 0x28) = this_03;
          if (iRam_? != 0) {
            uVar9 = (uint)(lVar8 + 0x28U >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          iVar14 = iRam_?;
          *(UnityAction_1_System_Object_ **)(lVar8 + 0x20) = this_02;
          if (iVar14 != 0) {
            uVar9 = (uint)(lVar8 + 0x20U >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          if (lVar8 == 0) {
            uVar15 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
            this_04 = (NullReferenceException *)func_?(uVar15);
            pSVar5 = (String *)func_?(&StringLiteral_routine_is_null);
            mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                      (this_04,pSVar5,(MethodInfo *)0x0);
            uVar15 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_04,uVar15);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_03,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            uVar15 = func_?(&TypeInfo__System__ArgumentException);
            this_05 = (InvalidEnumArgumentException *)func_?(uVar15);
            pSVar5 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
            ;
            System.dll::System::ComponentModel::InvalidEnumArgumentException::
            InvalidEnumArgumentException__ctor_1(this_05,pSVar5,(MethodInfo *)0x0);
            uVar15 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_05,uVar15);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_03 == (Component *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pvVar17 = (this_03->fields)._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar17,lVar8);
          return;
        }
        goto code_?;
      }
      pSVar5 = StringLiteral_Texture_is_already_being_generat;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar5 = StringLiteral_Texture_is_already_being_generat;
      }
    }
    else {
      pSVar5 = StringLiteral_No_screen_shot_when_not_planet_o;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar5 = StringLiteral_No_screen_shot_when_not_planet_o;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar6 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,2,pSVar5);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void VehicleEnergyUse(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_VehicleEnergyUse
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectSpawnerVehicleEnergyID,
               int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  uStackX_10 = worldObjectSpawnerVehicleEnergyID;
  pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar4 = uStackX_10;
    lVar5 = lRam_?;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
      }
      else {
        pOVar1 = (Object *)0x0;
      }
    }
    else {
      pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
    }
    uStackX_10 = worldObjectID;
    pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar9 = CONCAT71((int7)((ulonglong)pOVar1 >> 8),0x48);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x48,(Object *)this_01,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pPVar10 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar10 != (PhotonPeer *)0x0) {
        (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                  (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x78),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar10->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void WorldObjectRPC(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::
     MVNetworkGame_OperationRequests_WorldObjectRPC
               (MVNetworkGame_OperationRequests *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *dataPackage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = worldObjectID;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar2 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)uVar1,method_00);
    uVar3 = CONCAT71(uVar2,0x53);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x53,(Object *)dataPackage,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar4 = (this->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar4 != (PhotonPeer *)0x0) {
      (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                (pPVar4,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x1b),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar4->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVNetworkGame+OperationRequests(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
               (MVNetworkGame_OperationRequests *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__OperationResponsePendingManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).dummyData = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).dummyData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).networkGame = networkGame;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).networkGame >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  if (networkGame == (MVNetworkGame *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->fields).peer = (networkGame->fields)._Peer_k__BackingField;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).peer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pPVar9 = (this->fields).peer;
  pOVar10 = (OperationResponsePendingManager *)
           FUN_?(TypeInfo__OperationResponsePendingManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>
                         );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
            );
  iVar1 = iRam_?;
  (pOVar10->fields).pendingOperations = (HashSet_1_MV_Common_MVOperationCodes_ *)this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&pOVar10->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (pOVar10->fields).peer = pPVar9;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(pOVar10->fields).peer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).operationResponsePendingManager = pOVar10;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

