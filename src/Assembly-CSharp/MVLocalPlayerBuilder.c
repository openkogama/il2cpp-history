
/* Void SetToBuildModeSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToBuildModeSpawnRole
               (MVLocalPlayerBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  pSVar1 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_MV_WorldObject_SpawnRoles_DefaultSpawnRoleType_System_Int32_ *)0x0)) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_00,1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    if (this_03 != (MVLocalPlayer *)0x0) {
      pSVar3 = (this_03->fields)._.spawnRolesManager;
      if ((pSVar3 != (SpawnRolesManager *)0x0) &&
         (pSVar4 = (pSVar3->fields).spawnRolesRuntimeData, pSVar4 != (SpawnRolesRuntimeData *)0x0))
      {
        if (IVar2 == (pSVar4->fields).activeSpawnRole) {
          uVar5 = func_?(&TypeInfo__System__Exception);
          this_02 = (Exception *)func_?(uVar5);
          message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
          uVar5 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
          FUN_?(this_02,uVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_03,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
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
          aIStackX_10[0] = IVar2;
          value = (Object *)FUN_?(uRam_?,aIStackX_10);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xc1,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00)
            ;
            pPVar8 = (pMVar7->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar8 != (PhotonPeer *)0x0) {
              (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                        (pPVar8,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x6f),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar8->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetToDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
               (MVLocalPlayerBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  pSVar1 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_MV_WorldObject_SpawnRoles_DefaultSpawnRoleType_System_Int32_ *)0x0)) {
    IVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    if (this_03 != (MVLocalPlayer *)0x0) {
      pSVar3 = (this_03->fields)._.spawnRolesManager;
      if ((pSVar3 != (SpawnRolesManager *)0x0) &&
         (pSVar4 = (pSVar3->fields).spawnRolesRuntimeData, pSVar4 != (SpawnRolesRuntimeData *)0x0))
      {
        if (IVar2 == (pSVar4->fields).activeSpawnRole) {
          uVar5 = func_?(&TypeInfo__System__Exception);
          this_02 = (Exception *)func_?(uVar5);
          message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
          uVar5 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
          FUN_?(this_02,uVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole(this_03,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
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
          aIStackX_10[0] = IVar2;
          value = (Object *)FUN_?(uRam_?,aIStackX_10);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0xc1,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00)
            ;
            pPVar8 = (pMVar7->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar8 != (PhotonPeer *)0x0) {
              (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                        (pPVar8,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x6f),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar8->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVLocalPlayerBuilder(Int32, Int32, String, Int32, List`1[System.Int32], UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder__ctor
               (MVLocalPlayerBuilder *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,List_1_System_Int32_ *planetPermissionIDs,
               UserProfileData *userProfileData,MethodInfo *method)

{
  MVLocalPlayer::MVLocalPlayer__ctor
            ((MVLocalPlayer *)this,actorNumber,profileID,regionCode,planetOwnershipTypeID,
             planetPermissionIDs,userProfileData,(MethodInfo *)0x0);
  (this->fields).enterPlayStateData.selectedTeam = 5;
  (this->fields).enterPlayStateData.selectedSpawnRoleCreator = -1;
  (this->fields).enterPlayStateData.previousSpawnRoleId = -1;
  return;
}


/* Int32 get_BuildModeSpawnRoleId() */

int32_t Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_BuildModeSpawnRoleId
                  (MVLocalPlayerBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
  ;
  pSVar2 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar2 == (SpawnRolesMetaData *)0x0) ||
     (this_00 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                (pSVar2->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                    (this_00,1,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar5 < 0) {
    uVar6 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar6);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  pDVar7 = (this_00->fields)._entries;
  if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_System_Single___Array *)0x0) {
    if (uVar5 < (uint)pDVar7->max_length) {
      return (int32_t)pDVar7->vector[(int)uVar5].value;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* MVLocalPlayerBuilder+EnterPlayStateDataStruct get_EnterPlayStateData() */

MVLocalPlayerBuilder_EnterPlayStateDataStruct *
Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
          (MVLocalPlayerBuilder_EnterPlayStateDataStruct *__return_storage_ptr__,
          MVLocalPlayerBuilder *this,MethodInfo *method)

{
  iVar1 = (this->fields).enterPlayStateData.previousSpawnRoleId;
  iVar2 = (this->fields).enterPlayStateData.selectedSpawnRoleCreator;
  __return_storage_ptr__->selectedTeam = (this->fields).enterPlayStateData.selectedTeam;
  __return_storage_ptr__->selectedSpawnRoleCreator = iVar2;
  __return_storage_ptr__->previousSpawnRoleId = iVar1;
  return __return_storage_ptr__;
}


/* Void set_EnterPlayStateData(MVLocalPlayerBuilder+EnterPlayStateDataStruct) */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
               (MVLocalPlayerBuilder *this,MVLocalPlayerBuilder_EnterPlayStateDataStruct *value,
               MethodInfo *method)

{
  iVar1 = value->selectedSpawnRoleCreator;
  iVar2 = value->previousSpawnRoleId;
  (this->fields).enterPlayStateData.selectedTeam = value->selectedTeam;
  (this->fields).enterPlayStateData.selectedSpawnRoleCreator = iVar1;
  (this->fields).enterPlayStateData.previousSpawnRoleId = iVar2;
  return;
}

