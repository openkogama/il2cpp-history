
/* Void ActivateSpawnRole(Int32, Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerRemote::
     SpawnRoleChangeHandlerRemote_ActivateSpawnRole
               (SpawnRoleChangeHandlerRemote *this,int32_t prevSpawnRoleId,int32_t newSpawnRoleId,
               Vector3 position,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleRemote);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    pIVar2 = unaff_EBX;
    func_?();
  }
  else {
    unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,prevSpawnRoleId,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__ISpawnRoleRemote;
    if (unaff_EDI == (MVWorldObject *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)func_?(unaff_EDI,TypeInfo__ISpawnRoleRemote);
      if (piVar3 == (int *)0x0) goto code_?;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,newSpawnRoleId,(MethodInfo *)0x0);
    pIVar2 = TypeInfo__ISpawnRoleRemote;
    if (piVar3 == (int *)0x0) goto code_?;
    uVar4 = 0;
    if (*(ushort *)(*piVar3 + 0xb2) != 0) {
      do {
        if (*(ISpawnRoleRemote__Class **)(*(int *)(*piVar3 + 0x58) + (uint)uVar4 * 8) ==
            TypeInfo__ISpawnRoleRemote) {
          puVar5 = (undefined4 *)
                   (*(int *)(*(int *)(*piVar3 + 0x58) + 4 + (uint)uVar4 * 8) * 8 + 0xc4 + *piVar3);
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(*piVar3 + 0xb2));
    }
    puVar5 = (undefined4 *)func_?(piVar3,TypeInfo__ISpawnRoleRemote);
code_?:
    (*(code *)*puVar5)(piVar3,newSpawnRoleId);
    unaff_EBX = pIVar2;
    if (unaff_EDI == (MVWorldObject *)0x0) goto code_?;
    iVar6 = func_?(unaff_EDI);
    if (iVar6 != 0) {
      piVar3 = (int *)func_?(unaff_EDI);
      pIVar2 = (ISpawnRoleRemote__Class *)0x0;
      if (piVar3 != (int *)0x0) {
        uVar7 = 0;
        uVar4 = *(ushort *)(*piVar3 + 0xb2);
        if (uVar4 != 0) {
          do {
            if (*(ISpawnRoleRemote__Class **)(*(int *)(*piVar3 + 0x58) + (uint)uVar7 * 8) ==
                TypeInfo__ISpawnRoleRemote) {
              puVar5 = (undefined4 *)
                       (*piVar3 + *(int *)(*(int *)(*piVar3 + 0x58) + 4 + (uint)uVar7 * 8) * 8 +
                       0xbc);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        puVar5 = (undefined4 *)func_?(piVar3,TypeInfo__ISpawnRoleRemote);
code_?:
        (*(code *)*puVar5)(piVar3,prevSpawnRoleId,position._0_8_,position.z,rotation.x,rotation.y,
                           rotation.z,rotation.w);
        return;
      }
    }
  }
  func_?(unaff_EDI);
  unaff_EBX = pIVar2;
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

