
/* Void ActivateSpawnRole(Int32, Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal_ActivateSpawnRole
               (SpawnRoleChangeHandlerLocal *this,int32_t prevSpawnRoleId,int32_t newSpawnRoleId,
               Vector3 *position,Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,prevSpawnRoleId,(MethodInfo *)0x0);
    pIVar3 = TypeInfo__ISpawnRoleLocal;
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      prevSpawnRole = (ISpawnRoleLocal *)0x0;
    }
    else {
      prevSpawnRole = (ISpawnRoleLocal *)FUN_?(pMVar2,TypeInfo__ISpawnRoleLocal);
      if (prevSpawnRole == (ISpawnRoleLocal *)0x0) {
        FUN_?(pMVar2,pIVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,newSpawnRoleId,(MethodInfo *)0x0);
      pIVar3 = TypeInfo__ISpawnRoleLocal;
      if (pMVar2 == (MVWorldObjectClient *)0x0) {
        currentSpawnRole = (ISpawnRoleLocal *)0x0;
      }
      else {
        currentSpawnRole = (ISpawnRoleLocal *)FUN_?(pMVar2,TypeInfo__ISpawnRoleLocal);
        if (currentSpawnRole == (ISpawnRoleLocal *)0x0) {
          FUN_?(pMVar2,pIVar3);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      this_00 = (this->fields).SpawnRoleDataMediator;
      if (this_00 != (SpawnRoleDataMediator *)0x0) {
        VStack_5.x = position->x;
        VStack_5.y = position->y;
        QStack_6.x = rotation->x;
        QStack_6.y = rotation->y;
        QStack_6.z = rotation->z;
        QStack_6.w = rotation->w;
        VStack_5.z = position->z;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator
        ::SpawnRoleDataMediator_ActivateSpawnRole
                  (this_00,currentSpawnRole,prevSpawnRole,&VStack_5,&QStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SpawnRoleChangeHandlerLocal(SpawnRoleDataMediator) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal__ctor
               (SpawnRoleChangeHandlerLocal *this,SpawnRoleDataMediator *spawnRoleDataMediator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleDataMediator *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                         );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_00,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).SpawnRoleDataMediator = this_00;
  if (iVar1 != 0) {
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).SpawnRoleDataMediator = spawnRoleDataMediator;
  if (iVar1 != 0) {
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

