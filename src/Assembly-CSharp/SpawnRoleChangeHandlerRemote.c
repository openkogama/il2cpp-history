
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
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
    cRam_? = '\x01';
  }
  pDVar2 = (pMVar1->fields).worldObjects;
  pOStack_3 = (Object *)0x0;
  if (pDVar2 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,prevSpawnRoleId,&pOStack_3,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pOVar4 = pOStack_3;
  pIVar5 = TypeInfo__ISpawnRoleRemote;
  if (pOStack_3 == (Object *)0x0) {
    piVar6 = (int *)0x0;
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).worldObjects;
    pOStack_3 = (Object *)0x0;
    if (pDVar2 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,newSpawnRoleId,&pOStack_3,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    pOVar4 = pOStack_3;
    if (piVar6 == (int *)0x0) goto code_?;
    uVar7 = 0;
    if (*(ushort *)(*piVar6 + 0xb6) != 0) {
      do {
        if (*(ISpawnRoleRemote__Class **)(*(int *)(*piVar6 + 0x58) + (uint)uVar7 * 8) ==
            TypeInfo__ISpawnRoleRemote) {
          puVar8 = (undefined4 *)
                   (*piVar6 +
                   (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar7 * 8) + 0x19) * 8);
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(*piVar6 + 0xb6));
    }
    puVar8 = (undefined4 *)func_?(piVar6,TypeInfo__ISpawnRoleRemote,1,0);
code_?:
    (*(code *)*puVar8)(piVar6,newSpawnRoleId,puVar8[1]);
    pIVar5 = TypeInfo__ISpawnRoleRemote;
    if (pOVar4 == (Object *)0x0) goto code_?;
    iVar9 = func_?(pOVar4,TypeInfo__ISpawnRoleRemote);
    pIVar10 = TypeInfo__ISpawnRoleRemote;
    if (iVar9 != 0) {
      piVar6 = (int *)func_?(pOVar4,TypeInfo__ISpawnRoleRemote);
      pIVar5 = pIVar10;
      if (piVar6 != (int *)0x0) {
        uVar11 = 0;
        uVar7 = *(ushort *)(*piVar6 + 0xb6);
        if (uVar7 != 0) {
          iVar9 = *(int *)(*piVar6 + 0x58);
          do {
            if (*(ISpawnRoleRemote__Class **)(iVar9 + (uint)uVar11 * 8) == TypeInfo__ISpawnRoleRemote
               ) {
              puVar8 = (undefined4 *)(*piVar6 + (*(int *)(iVar9 + 4 + (uint)uVar11 * 8) + 0x18) * 8)
              ;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        puVar8 = (undefined4 *)func_?(piVar6,TypeInfo__ISpawnRoleRemote,0);
code_?:
        (*(code *)*puVar8)(piVar6,prevSpawnRoleId,position._0_8_,position.z,rotation.x,rotation.y,
                           rotation.z,rotation.w,puVar8[1]);
        return;
      }
    }
  }
  else {
    piVar6 = (int *)func_?(pOStack_3,TypeInfo__ISpawnRoleRemote);
    if (piVar6 != (int *)0x0) goto code_?;
    func_?(pOVar4,pIVar5);
    pIVar5 = (ISpawnRoleRemote__Class *)0x0;
  }
  func_?(pOVar4,pIVar5);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

