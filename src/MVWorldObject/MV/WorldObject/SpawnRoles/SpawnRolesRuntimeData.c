
/* Void AddSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_AddSpawnRole(SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Object_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      (this_00,(Object *)id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    if (bVar1 != 0) {
      return;
    }
    uVar2 = func_?();
    this_01 = (Exception *)func_?(uVar2);
    func_?(this_01);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Id_already_added);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
    func_?();
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__Remove
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
  this_00 = (this->fields).spawnRoleAvatarIds;
  if (this_00 == (HashSet_1_System_Int32_ *)0x0) {
    func_?();
  }
  else {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Contains
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
  func_?(pEVar3);
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
  func_?(pEVar3);
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
  iStack_6 = (this->fields).activeSpawnRole;
  pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
  pSVar8 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_ActiveSpawnRole___0__u000A,pOVar7,(MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar8,StringLiteral_All_spawn_roles_,(MethodInfo *)0x0);
  this_00 = (HashSet_1_System_Object_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__GetEnumerator
              ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd0,this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]
              ::HashSet_1_T_Enumerator_System_Int32__MoveNext
                        ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar9 == 0) break;
      pOVar7 = (Object *)func_?();
      pSVar8 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)pSVar8,(Object *)StringLiteral_u000A,pOVar7,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffc0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
               in_stack_10);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar8;
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar11)();
  return pSVar8;
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    method_00 = (MethodInfo *)&(this->fields).spawnRoleAvatarIds;
    (this->fields).spawnRoleAvatarIds = (HashSet_1_System_Int32_ *)this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    method_00 = (MethodInfo *)&(this->fields).spawnRoleAvatarIds;
    (this->fields).spawnRoleAvatarIds = (HashSet_1_System_Int32_ *)this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).activeSpawnRole = activeSpawnRole;
    (this->fields).spawnRoleAvatarIds = spawnRoleAvatarIds;
    func_?(&(this->fields).spawnRoleAvatarIds,spawnRoleAvatarIds);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

