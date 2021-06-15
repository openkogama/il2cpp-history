
/* Void ActivateSpawnRole(Int32, Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerRemote::
     SpawnRoleChangeHandlerRemote_ActivateSpawnRole
               (SpawnRoleChangeHandlerRemote *this,int32_t prevSpawnRoleId,int32_t newSpawnRoleId,
               Vector3 position,Quaternion rotation,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase,uVar1);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,prevSpawnRoleId,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__ISpawnRoleRemote;
    if (unaff_EDI == (MVWorldObject *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(unaff_EDI,TypeInfo__ISpawnRoleRemote);
      if (iVar3 == 0) goto code_?;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,newSpawnRoleId,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__ISpawnRoleRemote;
    if (pMVar4 == (MVWorldObject *)0x0) {
      unaff_EDI = (MVWorldObject *)0x0;
code_?:
      unaff_EBX = TypeInfo__ISpawnRoleRemote;
      if ((iVar3 != 0) && (func_?(1), unaff_EDI != (MVWorldObject *)0x0)) {
        pMVar5 = unaff_EDI->klass;
        uVar6 = 0;
        uVar7._0_1_ = (pMVar5->_1).rank;
        uVar7._1_1_ = (pMVar5->_1).minimumAlignment;
        if (uVar7 != 0) {
          do {
            if (pMVar5->interfaceOffsets[uVar6].interfaceType ==
                (Il2CppClass *)TypeInfo__ISpawnRoleRemote) {
              ppMVar8 = &(&(unaff_EDI->klass->vtable).Equals)
                         [pMVar5->interfaceOffsets[uVar6].offset].method;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        ppMVar8 = (MethodInfo **)func_?();
code_?:
        (*(code *)*ppMVar8)(unaff_EDI,ppMVar8[1],position._0_8_,position.z,rotation.x,rotation.y);
        return;
      }
      goto code_?;
    }
    unaff_EDI = (MVWorldObject *)func_?();
    if (unaff_EDI != (MVWorldObject *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

