
/* Void ActivateSpawnRole(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
               (SpawnRolesManager *this,int32_t newSpawnRoleId,Vector3 *position,
               Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    uVar2 = (pSVar1->fields).activeSpawnRole;
    (pSVar1->fields).activeSpawnRole = newSpawnRoleId;
    pIVar3 = (this->fields).spawnRoleChangeHandler;
    if (pIVar3 != (ISpawnRoleChangeHandler *)0x0) {
      pIVar4 = pIVar3->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
            pIVar7 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pIVar7 = (ISpawnRoleChangeHandler__VTable *)
               FUN_?(pIVar3,TypeInfo__ISpawnRoleChangeHandler,0);
code_?:
      fStack_8 = position->z;
      fStack_9 = rotation->x;
      fStack_10 = rotation->y;
      fStack_11 = rotation->z;
      fStack_12 = rotation->w;
      uStack_13._0_4_ = position->x;
      uStack_13._4_4_ = position->y;
      (*(pIVar7->ActivateSpawnRole).methodPtr)
                (pIVar3,(ulonglong)uVar2,(ulonglong)(uint)newSpawnRoleId,&uStack_13,&fStack_9,
                 (pIVar7->ActivateSpawnRole).method);
      if ((this->fields).OnSpawnRoleActivated != (Action_1_Int32_ *)0x0) {
        pAVar14 = (this->fields).OnSpawnRoleActivated;
        (*(pAVar14->fields)._._.invoke_impl)
                  ((pAVar14->fields)._._.method_code,newSpawnRoleId,(pAVar14->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void AddSpawnRole(Int32) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_AddSpawnRole
               (SpawnRolesManager *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).spawnRoleAvatarIds;
    if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__AddIfNotPresent
                        (this_00,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                         rgctx_data[0x15].method);
      if (bVar2 != 0) {
        return;
      }
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Id_already_added);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                  MethodInfo__MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData__AddSpawnRole_int_
                                 );
      FUN_?(this_01,uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAvatarCreated(Int32) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_OnAvatarCreated
               (SpawnRolesManager *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    if (id != (pSVar1->fields).activeSpawnRole) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        ((pMVar3->fields).worldNetwork != (WorldNetwork *)0x0)) &&
       ((this_00 = (MVWorldObjectClientManager *)
                   (((pMVar3->fields).worldNetwork)->fields)._.worldObjectClientManager,
        this_00 != (MVWorldObjectClientManager *)0x0 &&
        (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_00,id,(MethodInfo *)0x0), pMVar4 != (MVWorldObjectClient *)0x0))))
    {
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Position.methodPtr)
                         (&VStack_6,pMVar4,(pMVar4->klass->vtable).get_Position.method);
      uVar7 = *puVar5;
      fVar8 = *(float *)(puVar5 + 1);
      puVar5 = (undefined8 *)
               (*(pMVar4->klass->vtable).get_Rotation.methodPtr)
                         (&QStack_9,pMVar4,(pMVar4->klass->vtable).get_Rotation.method);
      QStack_9._0_8_ = *puVar5;
      QStack_9._8_8_ = puVar5[1];
      VStack_6._0_8_ = uVar7;
      VStack_6.z = fVar8;
      SpawnRolesManager_ActivateSpawnRole(this,id,&VStack_6,&QStack_9,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnRoleActivated;
  a = (this->fields).OnSpawnRoleActivated;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
      if (pAVar4 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnRoleActivated;
  source = (this->fields).OnSpawnRoleActivated;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
      if (pAVar4 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

