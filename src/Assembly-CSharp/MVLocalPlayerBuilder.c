
/* Void SetToBuildModeSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToBuildModeSpawnRole
               (MVLocalPlayerBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pSVar1 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
    existingAvatarWoId =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
         ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                   (this_00,1,
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
                (this_01,(int32_t)existingAvatarWoId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToDefaultPlayModeSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToDefaultPlayModeSpawnRole
               (MVLocalPlayerBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  pSVar1 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
    existingAvatarWoId =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
         ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                   (this_00,0,
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
                (this_01,(int32_t)existingAvatarWoId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVLocalPlayerBuilder(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder__ctor
               (MVLocalPlayerBuilder *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  MVLocalPlayer::MVLocalPlayer__ctor
            ((MVLocalPlayer *)this,actorNumber,profileID,regionCode,planetOwnershipTypeID,
             userProfileData,(MethodInfo *)0x0);
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
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._.spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,1,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
    return (int32_t)pOVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* MVLocalPlayerBuilder+EnterPlayStateDataStruct get_EnterPlayStateData() */

MVLocalPlayerBuilder_EnterPlayStateDataStruct *
Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_EnterPlayStateData
          (MVLocalPlayerBuilder_EnterPlayStateDataStruct *__return_storage_ptr__,
          MVLocalPlayerBuilder *this,MethodInfo *method)

{
  iVar1 = (this->fields).enterPlayStateData.selectedSpawnRoleCreator;
  iVar2 = (this->fields).enterPlayStateData.previousSpawnRoleId;
  __return_storage_ptr__->selectedTeam = (this->fields).enterPlayStateData.selectedTeam;
  __return_storage_ptr__->selectedSpawnRoleCreator = iVar1;
  __return_storage_ptr__->previousSpawnRoleId = iVar2;
  return __return_storage_ptr__;
}


/* Void set_EnterPlayStateData(MVLocalPlayerBuilder+EnterPlayStateDataStruct) */

void Assembly-CSharp.dll::MVLocalPlayerBuilder::MVLocalPlayerBuilder_set_EnterPlayStateData
               (MVLocalPlayerBuilder *this,MVLocalPlayerBuilder_EnterPlayStateDataStruct value,
               MethodInfo *method)

{
  (this->fields).enterPlayStateData.selectedTeam = value.selectedTeam;
  (this->fields).enterPlayStateData.selectedSpawnRoleCreator = value.selectedSpawnRoleCreator;
  (this->fields).enterPlayStateData.previousSpawnRoleId = value.previousSpawnRoleId;
  return;
}

