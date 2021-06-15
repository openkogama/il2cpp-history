
/* Void ActivateSpawnRole(Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
               (SpawnRolesManager *this,int32_t newSpawnRoleId,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    iVar2 = (pSVar1->fields).activeSpawnRole;
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
            ppMVar7 = &(&pIVar3->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].
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
      this_00 = (Action_1_UIPushOption_ *)(this->fields).OnSpawnRoleActivated;
      if (this_00 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_00,newSpawnRoleId,MethodInfo__System__Action<int>__Invoke_int_);
      }
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddSpawnRole(Int32) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_AddSpawnRole
               (SpawnRolesManager *this,int32_t id,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 == (SpawnRolesRuntimeData *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(pSVar1->fields).spawnRoleAvatarIds
  ;
  if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_00,(UnityWebRequest *)id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    if (bVar3 != 0) {
      return;
    }
    this_01 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_01,StringLiteral_Id_already_added,(MethodInfo *)0x0);
    func_?();
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnAvatarCreated(Int32) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_OnAvatarCreated
               (SpawnRolesManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    if (id != (pSVar1->fields).activeSpawnRole) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_01 != (MVNetworkGame *)0x0) &&
        (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (this_01,(MethodInfo *)0x0),
        this_02 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,id,(MethodInfo *)0x0), pMVar2 != (MVWorldObject *)0x0)) {
      ppMStack_3 = &pMStack_4;
      pIStack_5 = (pMVar2->klass->vtable).set_Position.methodPtr;
      pMStack_4 = pMVar2;
      puVar6 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_Position.method)();
      uStack_7 = *puVar6;
      uStack_8 = *(undefined4 *)(puVar6 + 1);
      puVar9 = (undefined4 *)
               (*(code *)(pMVar2->klass->vtable).get_Rotation.method)
                         (&ppMStack_3,pMVar2,(pMVar2->klass->vtable).set_Rotation.methodPtr);
      ppMStack_3 = (MVWorldObject **)*puVar9;
      pMStack_4 = (MVWorldObject *)puVar9[1];
      pIStack_5 = (Il2CppMethodPointer)puVar9[2];
      uStack_10 = puVar9[3];
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar1 = (this->fields).spawnRolesRuntimeData;
      if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
        iStack_11 = (pSVar1->fields).activeSpawnRole;
        (pSVar1->fields).activeSpawnRole = id;
        pIVar12 = (this->fields).spawnRoleChangeHandler;
        if (pIVar12 != (ISpawnRoleChangeHandler *)0x0) {
          pIStack_13 = pIVar12->klass;
          uVar14 = 0;
          uVar15._0_1_ = (pIStack_13->_1).rank;
          uVar15._1_1_ = (pIStack_13->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIStack_13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__ISpawnRoleChangeHandler) {
                ppMVar16 = &(&pIStack_13->vtable)[pIStack_13->interfaceOffsets[uVar14].offset].
                           ActivateSpawnRole.method;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          ppMVar16 = (MethodInfo **)func_?(pIVar12,TypeInfo__ISpawnRoleChangeHandler,0);
code_?:
          (*(code *)*ppMVar16)(pIVar12,iStack_11,id,uStack_7,uStack_8,ppMStack_3,pMStack_4,
                              pIStack_5,uStack_10,ppMVar16[1]);
          this_00 = (Action_1_UIPushOption_ *)(this->fields).OnSpawnRoleActivated;
          if (this_00 == (Action_1_UIPushOption_ *)0x0) {
            return;
          }
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,id,MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* SpawnRolesManager(ISpawnRoleChangeHandler, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager__ctor
               (SpawnRolesManager *this,ISpawnRoleChangeHandler *spawnRoleChangeHandler,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).spawnRolesRuntimeData = spawnRolesRuntimeData;
  (this->fields).spawnRoleChangeHandler = spawnRoleChangeHandler;
  return;
}


/* Void add_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnRoleActivated;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Int32 get_SpawnRoleId() */

int32_t Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_get_SpawnRoleId
                  (SpawnRolesManager *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolesRuntimeData;
  if (pSVar1 != (SpawnRolesRuntimeData *)0x0) {
    return (pSVar1->fields).activeSpawnRole;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void remove_OnSpawnRoleActivated(Action`1[Int32]) */

void Assembly-CSharp.dll::SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
               (SpawnRolesManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnRoleActivated;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

