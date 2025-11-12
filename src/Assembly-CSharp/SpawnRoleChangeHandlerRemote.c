
/* Void ActivateSpawnRole(Int32, Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerRemote::
     SpawnRoleChangeHandlerRemote_ActivateSpawnRole
               (SpawnRoleChangeHandlerRemote *this,int32_t prevSpawnRoleId,int32_t newSpawnRoleId,
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
    pIVar3 = TypeInfo__ISpawnRoleRemote;
    uVar4 = 0;
    uVar5 = uVar4;
    if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
       (uVar5 = FUN_?(pMVar2,TypeInfo__ISpawnRoleRemote), uVar5 == 0)) {
      FUN_?(pMVar2,pIVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar1,newSpawnRoleId,(MethodInfo *)0x0), uVar5 != 0)) &&
       (FUN_?(1,TypeInfo__ISpawnRoleRemote,uVar5,newSpawnRoleId),
       pIVar3 = TypeInfo__ISpawnRoleRemote, pMVar2 != (MVWorldObjectClient *)0x0)) {
      lVar7 = FUN_?(pMVar2,TypeInfo__ISpawnRoleRemote);
      pIVar8 = TypeInfo__ISpawnRoleRemote;
      if (lVar7 == 0) {
        FUN_?(pMVar2,pIVar3);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar9 = (longlong *)FUN_?(pMVar2,TypeInfo__ISpawnRoleRemote);
      if (plVar9 == (longlong *)0x0) {
        FUN_?(pMVar2,pIVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar7 = *plVar9;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        do {
          if (*(ISpawnRoleRemote__Class **)(*(longlong *)(lVar7 + 0xb0) + uVar4 * 0x10) ==
              TypeInfo__ISpawnRoleRemote) {
            puVar10 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar4 * 0x10) * 0x10 +
                      0x138 + lVar7);
            goto code_?;
          }
          uVar11 = (short)uVar4 + 1;
          uVar4 = (ulonglong)uVar11;
        } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_?(plVar9,TypeInfo__ISpawnRoleRemote,0);
code_?:
      uStack_12._0_4_ = position->x;
      uStack_12._4_4_ = position->y;
      fStack_13 = rotation->x;
      fStack_14 = rotation->y;
      fStack_15 = rotation->z;
      fStack_16 = rotation->w;
      fStack_17 = position->z;
      (*(code *)*puVar10)(plVar9,prevSpawnRoleId,&uStack_12,&fStack_13,puVar10[1]);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

