
/* Void AddSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_AddSpawnRole(SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
              (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    if (extraout_AL != '\0') {
      return;
    }
    uVar1 = func_?();
    this_01 = (Exception *)func_?(uVar1);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Id_already_added);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
    func_?();
    func_?();
  }
  func_?();
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__Remove
              (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_SetActiveSpawnRole
               (SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) {
    func_?();
  }
  else {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 == 0) goto code_?;
    if ((this->fields).activeSpawnRole != id) {
      (this->fields).activeSpawnRole = id;
      return;
    }
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar2);
  pMVar4 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_Spawn_role_already_active);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar5,pMVar4);
  func_?(&
                  MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__SetActiveSpawnRole_int_
                 );
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar2);
  pMVar4 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_spawn_role_id_not_found);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar5,pMVar4);
  func_?(&
                  MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__SetActiveSpawnRole_int_
                 );
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_All_spawn_roles_);
    func_?(&StringLiteral_ActiveSpawnRole___0__u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  IStack_6.m_value = 0;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
  pSVar7 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_ActiveSpawnRole___0__u000A,arg0,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar7,StringLiteral_All_spawn_roles_,(MethodInfo *)0x0);
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
    HashSet_1_System_UInt32__GetEnumerator
              ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd0,this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar8 == 0) break;
      IStack_6.m_value = (int32_t)&UNK_?;
      in_stack_9 =
           (MethodInfo *)mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar7,StringLiteral_u000A,(String *)in_stack_9,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffc0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               in_stack_9);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar7;
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar10)();
  return pSVar7;
}


/* SpawnRolesRuntimeData() */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor(SpawnRolesRuntimeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields).spawnRoleAvatarIds;
  (this->fields).spawnRoleAvatarIds = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* SpawnRolesRuntimeData(Int32, HashSet`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor_1
               (SpawnRolesRuntimeData *this,int32_t activeSpawnRole,
               HashSet_1_System_Int32_ *spawnRoleAvatarIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields).spawnRoleAvatarIds;
  (this->fields).spawnRoleAvatarIds = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).activeSpawnRole = activeSpawnRole;
  (this->fields).spawnRoleAvatarIds = spawnRoleAvatarIds;
  func_?(&(this->fields).spawnRoleAvatarIds,spawnRoleAvatarIds);
  return;
}

