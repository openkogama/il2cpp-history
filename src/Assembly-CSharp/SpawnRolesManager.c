
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
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
            ppMVar7 = &(&pIVar3->klass->vtable)[pIVar3->klass->interfaceOffsets[uVar5].offset].
                       ActivateSpawnRole.method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)func_?(pIVar3,TypeInfo__ISpawnRoleChangeHandler,0);
code_?:
      (*(code *)*ppMVar7)(pIVar3,iVar2,newSpawnRoleId,position._0_8_,position.z,rotation.x,
                          rotation.y,rotation.z,rotation.w,ppMVar7[1]);
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
    this_00 = (pSVar1->fields).spawnRoleAvatarIds;
    if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_00,id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      if (extraout_AL != '\0') {
        return;
      }
      func_?();
      this_01 = (Exception *)func_?();
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
      func_?();
      func_?();
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
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
      pIStack_4 = &IStack_5;
      IStack_5.monitor = (MonitorData *)(pMVar3->vtable).set_Position.methodPtr;
      IStack_5.klass = pIVar2;
      puVar6 = (undefined8 *)(*(code *)(pMVar3->vtable).get_Position.method)();
      uStack_7 = *puVar6;
      uStack_8 = *(undefined4 *)(puVar6 + 1);
      pMVar3 = (MVWorldObject__Class *)(pIVar2->_0).image;
      piVar9 = (int *)(*(code *)(pMVar3->vtable).get_Rotation.method)
                                (&pIStack_4,pIVar2,(pMVar3->vtable).set_Rotation.methodPtr);
      pIStack_4 = (ISpawnRoleChangeHandler *)*piVar9;
      IStack_5.klass = (ISpawnRoleChangeHandler__Class *)piVar9[1];
      pIStack_10 = (ISpawnRoleChangeHandler__Class *)piVar9[3];
      if (cRam_? == '\0') {
        IStack_5.monitor = (MonitorData *)&TypeInfo__ISpawnRoleChangeHandler;
        IStack_5.klass = (ISpawnRoleChangeHandler__Class *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pSVar1 = (this->fields).spawnRolesRuntimeData;
      if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
        iStack_11 = (pSVar1->fields).activeSpawnRole;
        (((this->fields).spawnRolesRuntimeData)->fields).activeSpawnRole = id;
        pIStack_12 = (this->fields).spawnRoleChangeHandler;
        if (pIStack_12 != (ISpawnRoleChangeHandler *)0x0) {
          pIStack_13 = pIStack_12->klass;
          uVar14 = 0;
          uStack_15 = 0;
          uVar16._0_1_ = (pIStack_13->_1).rank;
          uVar16._1_1_ = (pIStack_13->_1).minimumAlignment;
          if (uVar16 != 0) {
            do {
              if (pIStack_13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
                ppMVar17 = &(&pIStack_13->vtable)[pIStack_13->interfaceOffsets[uVar14].offset].
                            ActivateSpawnRole.method;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar16);
          }
          IStack_5.monitor = (MonitorData *)0x0;
          IStack_5.klass = TypeInfo__ISpawnRoleChangeHandler;
          pIStack_4 = pIStack_12;
          ppMVar17 = (MethodInfo **)func_?();
code_?:
          pIVar2 = IStack_5.klass;
          pIVar18 = pIStack_4;
          pIStack_4 = (ISpawnRoleChangeHandler *)ppMVar17[1];
          IStack_5.klass = pIStack_10;
          IStack_5.monitor = (MonitorData *)pIStack_4;
          (*(code *)*ppMVar17)(pIStack_12,iStack_11,id,uStack_7,uStack_8,pIVar18,pIVar2);
          if ((this->fields).OnSpawnRoleActivated == (Action_1_Int32_ *)0x0) {
            return;
          }
          pAVar19 = (this->fields).OnSpawnRoleActivated;
          IStack_5.monitor = (pAVar19->fields)._._.method;
          IStack_5.klass = (ISpawnRoleChangeHandler__Class *)id;
          pIStack_4 = (pAVar19->fields)._._.method_code;
          (*(pAVar19->fields)._._.invoke_impl)();
          return;
        }
      }
    }
  }
  IStack_5.monitor = (MonitorData *)&UNK_?;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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

