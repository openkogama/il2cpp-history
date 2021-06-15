
/* Void AddSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_AddSpawnRole(SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_00,(UnityWebRequest *)id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    if (bVar1 != 0) {
      return;
    }
    this_01 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_01,StringLiteral_Id_already_added,(MethodInfo *)0x0);
    func_?();
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_RemoveSpawnRole
               (SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
              (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_SetActiveSpawnRole
               (SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 == (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    func_?(0);
  }
  else {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 == 0) {
      this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      message = StringLiteral_spawn_role_id_not_found;
      goto code_?;
    }
    if ((this->fields).activeSpawnRole != id) {
      (this->fields).activeSpawnRole = id;
      return;
    }
  }
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  message = StringLiteral_Spawn_role_already_active;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,message,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
         SpawnRolesRuntimeData_ToString(SpawnRolesRuntimeData *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  iStack_6 = (this->fields).activeSpawnRole;
  puStack_4 = &stack0xffffffb0;
  pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar8 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_ActiveSpawnRole___0__u000A,pOVar7,(MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar8,StringLiteral_All_spawn_roles_,(MethodInfo *)0x0);
  this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
              ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)&stack0xffffffbc,
               this_00,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 0;
    while (cVar9 = func_?(), cVar9 != '\0') {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
      JsonProperty]::
      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffcc,
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                );
      pOVar7 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar8 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)pSVar8,(Object *)StringLiteral_u000A,pOVar7,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return pSVar8;
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar10)();
  return pSVar8;
}


/* SpawnRolesRuntimeData() */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor(SpawnRolesRuntimeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<int>;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).spawnRoleAvatarIds = (HashSet_1_System_Int32_ *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* SpawnRolesRuntimeData(Int32, HashSet`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor_1
               (SpawnRolesRuntimeData *this,int32_t activeSpawnRole,
               HashSet_1_System_Int32_ *spawnRoleAvatarIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<int>;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).spawnRoleAvatarIds = (HashSet_1_System_Int32_ *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).activeSpawnRole = activeSpawnRole;
  (this->fields).spawnRoleAvatarIds = spawnRoleAvatarIds;
  return;
}

