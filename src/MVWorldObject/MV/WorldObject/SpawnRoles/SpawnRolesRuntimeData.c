
/* Void AddSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_AddSpawnRole(SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleAvatarIds;
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__AddIfNotPresent
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                       rgctx_data[0x15].method);
    if (bVar1 != 0) {
      return;
    }
    uVar2 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar2);
    message = (String *)func_?(&StringLiteral_Id_already_added);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__AddSpawnRole_int_
                               );
    FUN_?(this_01,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
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
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_;
  pHVar2 = (this->fields).spawnRoleAvatarIds;
  if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pHVar2->fields)._buckets != (Int32__Array *)0x0) {
    iVar4 = FUN_?(pHVar2,id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_->
                           klass->rgctx_data[0x16].rgctxDataDummy);
    pIVar5 = (pHVar2->fields)._buckets;
    if (pIVar5 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pHVar6 = (pHVar2->fields)._slots;
    uVar7 = iVar4 % (int)pIVar5->max_length;
    if ((uint)pIVar5->max_length <= uVar7) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = pIVar5->vector[(int)uVar7] - 1;
    if (-1 < (int)uVar8) {
      iVar9 = 0;
      uVar10 = 0xffffffff;
      if (pHVar6 == (HashSet_1_T_Slot_System_Int32___Array *)0x0) goto code_?;
      do {
        uVar11 = uVar8;
        if ((uint)pHVar6->max_length <= uVar11) goto code_?;
        if (pHVar6->vector[(int)uVar11].hashCode == iVar4) {
          pIVar12 = (pHVar2->fields)._comparer;
          iVar13 = pHVar6->vector[(int)uVar11].value;
          if (pIVar12 == (IEqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          pvVar14 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
            pvVar14 = (void *)FUN_?(pvVar14);
          }
          cVar15 = FUN_?(id,pvVar14,pIVar12,iVar13,id);
          if (cVar15 != '\0') {
            if ((int)uVar10 < 0) {
              pIVar5 = (pHVar2->fields)._buckets;
              if ((uint)pHVar6->max_length <= uVar11) goto code_?;
              if (pIVar5 == (Int32__Array *)0x0) goto code_?;
              if ((uint)pIVar5->max_length <= uVar7) goto code_?;
              pIVar5->vector[(int)uVar7] = pHVar6->vector[(int)uVar11].next + 1;
            }
            else {
              if (((uint)pHVar6->max_length <= uVar11) || ((uint)pHVar6->max_length <= uVar10))
              goto code_?;
              pHVar6->vector[(int)uVar10].next = pHVar6->vector[(int)uVar11].next;
            }
            if (uVar11 < (uint)pHVar6->max_length) {
              pHVar6->vector[(int)uVar11].hashCode = -1;
              if (uVar11 < (uint)pHVar6->max_length) {
                pHVar6->vector[(int)uVar11].next = (pHVar2->fields)._freeList;
                piVar16 = &(pHVar2->fields)._version;
                *piVar16 = *piVar16 + 1;
                iVar4 = (pHVar2->fields)._count + -1;
                (pHVar2->fields)._count = iVar4;
                if (iVar4 == 0) {
                  (pHVar2->fields)._lastIndex = 0;
                  uVar11 = 0xffffffff;
                }
                (pHVar2->fields)._freeList = uVar11;
                return;
              }
            }
            goto code_?;
          }
        }
        if ((int)pHVar6->max_length <= iVar9) {
          uVar17 = func_?(&TypeInfo__System__InvalidOperationException);
          this_00 = (ProtocolViolationException *)func_?(uVar17);
          message = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar1);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = iVar9 + 1;
        if ((uint)pHVar6->max_length <= uVar11) goto code_?;
        uVar8 = pHVar6->vector[(int)uVar11].next;
        uVar10 = uVar11;
      } while (-1 < (int)uVar8);
    }
  }
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData_SetActiveSpawnRole
               (SpawnRolesRuntimeData *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).spawnRoleAvatarIds;
  if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
          HashSet_1_System_Int32Enum__Contains
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
  if (bVar2 == 0) {
    uVar3 = func_?(&TypeInfo__System__Exception);
    pEVar4 = (Exception *)func_?(uVar3);
    pSVar5 = (String *)func_?(&StringLiteral_spawn_role_id_not_found);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__SetActiveSpawnRole_int_
                               );
    FUN_?(pEVar4,uVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->fields).activeSpawnRole != id) {
    (this->fields).activeSpawnRole = id;
    return;
  }
  uVar3 = func_?(&TypeInfo__System__Exception);
  pEVar4 = (Exception *)func_?(uVar3);
  pSVar5 = (String *)func_?(&StringLiteral_Spawn_role_already_active);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__SetActiveSpawnRole_int_
                             );
  FUN_?(pEVar4,uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
         SpawnRolesRuntimeData_ToString(SpawnRolesRuntimeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_All_spawn_roles_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ActiveSpawnRole___0__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)CONCAT44(pSStackX_8._4_4_,(this->fields).activeSpawnRole);
  arg0 = (Object *)FUN_?(uRam_?,&pSStackX_8);
  pSVar1 = StringLiteral_ActiveSpawnRole___0__u000A;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral_All_spawn_roles_,(MethodInfo *)0x0);
  pHVar4 = (this->fields).spawnRoleAvatarIds;
  if (pHVar4 == (HashSet_1_System_Int32_ *)0x0) {
    pSStackX_8 = pSVar1;
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar5)();
    return pSVar1;
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&PStack_2 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  OStack_10.monitor._4_4_ = (pHVar4->fields)._version;
  PStack_2._arg1 = (Object *)((ulonglong)OStack_10.monitor._4_4_ << 0x20);
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._arg0._0_4_ = SUB84(pHVar4,0);
  PStack_2._arg0._4_4_ = (undefined4)((ulonglong)pHVar4 >> 0x20);
  OStack_10.klass._0_4_ = PStack_2._arg0._0_4_;
  OStack_10.klass._4_4_ = PStack_2._arg0._4_4_;
  OStack_10.monitor._0_4_ = 0;
  uStack_11 = 0;
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = &OStack_10;
  PStack_2._arg0 = (Object *)pHVar4;
  while (pSStackX_8 = pSVar1,
        cVar12 = FUN_?(&OStack_10,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                             ), cVar12 != '\0') {
    value = (int32_t)uStack_11;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    str2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,(ReadOnlySpan_1_Char_ *)&PStack_2,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar1,StringLiteral_u000A,str2,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* SpawnRolesRuntimeData() */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor(SpawnRolesRuntimeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).spawnRoleAvatarIds = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRoleAvatarIds >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* SpawnRolesRuntimeData(Int32, HashSet`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData::
     SpawnRolesRuntimeData__ctor_1
               (SpawnRolesRuntimeData *this,int32_t activeSpawnRole,
               HashSet_1_System_Int32_ *spawnRoleAvatarIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).activeSpawnRole = -1;
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar2 = iRam_?;
  (this->fields).spawnRoleAvatarIds = pHVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRoleAvatarIds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).activeSpawnRole = activeSpawnRole;
  (this->fields).spawnRoleAvatarIds = spawnRoleAvatarIds;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRoleAvatarIds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

