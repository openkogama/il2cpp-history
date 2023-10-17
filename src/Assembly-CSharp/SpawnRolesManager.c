
/* Void ActivateSpawnRole(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
               (SpawnRolesManager *this,int32_t newSpawnRoleId,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleChangeHandler);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    iVar2 = (pSVar1->fields).activeSpawnRole;
    (((this->fields).spawnRolesRuntimeData)->fields).activeSpawnRole = newSpawnRoleId;
    pIVar3 = (this->fields).spawnRoleChangeHandler;
    if (pIVar3 != (ISpawnRoleChangeHandler *)0x0) {
      pIVar4 = pIVar3->klass;
      uVar5 = 0;
      uVar6 = (pIVar4->_1).interface_offsets_count;
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
               func_?(pIVar3,TypeInfo__ISpawnRoleChangeHandler,0);
code_?:
      (*(pIVar7->ActivateSpawnRole).methodPtr)
                (pIVar3,iVar2,newSpawnRoleId,position._0_8_,position.z,rotation.x,rotation.y,
                 rotation.z,rotation.w,(pIVar7->ActivateSpawnRole).method);
      if ((this->fields).OnSpawnRoleActivated != (Action_1_Int32_ *)0x0) {
        pAVar8 = (this->fields).OnSpawnRoleActivated;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,newSpawnRoleId,(pAVar8->fields)._._.method);
      }
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddSpawnRole(Int32) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_AddSpawnRole
               (SpawnRolesManager *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Object_ *)(pSVar1->fields).spawnRoleAvatarIds;
    if (this_00 != (HashSet_1_System_Object_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Add
                        (this_00,(Object *)id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      if (bVar2 != 0) {
        return;
      }
      func_?();
      this_01 = (Exception *)func_?();
      func_?();
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
      func_?();
      func_?();
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_00 != (MVNetworkGame *)0x0) &&
        (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (this_00,(MethodInfo *)0x0),
        this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (pIVar2 = (ISpawnRoleChangeHandler__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id,(MethodInfo *)0x0),
       pIVar2 != (ISpawnRoleChangeHandler__Class *)0x0)) {
      pMVar3 = (MVWorldObject__Class *)(pIVar2->_0).image;
      pMStack_4 = (MethodInfo *)&pIStack_5;
      pMStack_6 = (pMVar3->vtable).get_Position.method;
      pIStack_5 = pIVar2;
      puVar7 = (undefined8 *)(*(pMVar3->vtable).get_Position.methodPtr)();
      uStack_8 = *puVar7;
      uStack_9 = *(undefined4 *)(puVar7 + 1);
      pMVar3 = (MVWorldObject__Class *)(pIVar2->_0).image;
      piVar10 = (int *)(*(pMVar3->vtable).get_Rotation.methodPtr)
                                (&pMStack_4,pIVar2,(pMVar3->vtable).get_Rotation.method);
      pMStack_4 = (MethodInfo *)*piVar10;
      pIStack_5 = (ISpawnRoleChangeHandler__Class *)piVar10[1];
      pIStack_11 = (ISpawnRoleChangeHandler__Class *)piVar10[3];
      if (cRam_? == '\0') {
        pMStack_6 = (MethodInfo *)&TypeInfo__ISpawnRoleChangeHandler;
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = (this->fields).spawnRolesRuntimeData;
      if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
        iStack_12 = (pSVar1->fields).activeSpawnRole;
        (((this->fields).spawnRolesRuntimeData)->fields).activeSpawnRole = id;
        pMStack_13 = (MethodInfo *)(this->fields).spawnRoleChangeHandler;
        if (pMStack_13 != (MethodInfo *)0x0) {
          pIStack_14 = (ISpawnRoleChangeHandler__Class *)pMStack_13->methodPointer;
          uVar15 = 0;
          uStack_16 = 0;
          uVar17 = (pIStack_14->_1).interface_offsets_count;
          if (uVar17 != 0) {
            do {
              if (pIStack_14->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
                pVVar18 = &(&pIStack_14->vtable)[pIStack_14->interfaceOffsets[uVar15].offset].
                           ActivateSpawnRole;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar17);
          }
          pMStack_6 = (MethodInfo *)0x0;
          pIStack_5 = TypeInfo__ISpawnRoleChangeHandler;
          pMStack_4 = pMStack_13;
          pVVar18 = (VirtualInvokeData *)func_?();
code_?:
          pIVar2 = pIStack_5;
          pMVar19 = pMStack_4;
          pMStack_4 = pVVar18->method;
          pIStack_5 = pIStack_11;
          pMStack_6 = pMStack_4;
          (*pVVar18->methodPtr)(pMStack_13,iStack_12,id,uStack_8,uStack_9,pMVar19,pIVar2);
          if ((this->fields).OnSpawnRoleActivated == (Action_1_Int32_ *)0x0) {
            return;
          }
          pAVar20 = (this->fields).OnSpawnRoleActivated;
          pMStack_6 = (pAVar20->fields)._._.method;
          pIStack_5 = (ISpawnRoleChangeHandler__Class *)id;
          pMStack_4 = (pAVar20->fields)._._.method_code;
          (*(pAVar20->fields)._._.invoke_impl)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void add_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSpawnRoleActivated;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnSpawnRoleActivated,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSpawnRoleActivated;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnSpawnRoleActivated,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

