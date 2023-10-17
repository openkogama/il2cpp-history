
/* Void ActivateSpawnRole(Int32, Int32, Vector3, Quaternion) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal_ActivateSpawnRole
               (SpawnRoleChangeHandlerLocal *this,int32_t prevSpawnRoleId,int32_t newSpawnRoleId,
               Vector3 position,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,prevSpawnRoleId,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      prevSpawnRole = (ISpawnRoleLocal *)0x0;
    }
    else {
      prevSpawnRole = (ISpawnRoleLocal *)func_?(pMVar2,TypeInfo__ISpawnRoleLocal);
      if (prevSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,newSpawnRoleId,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
        currentSpawnRole = (ISpawnRoleLocal *)0x0;
      }
      else {
        this = (SpawnRoleChangeHandlerLocal *)&UNK_?;
        currentSpawnRole = (ISpawnRoleLocal *)func_?();
        if (currentSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
      }
      this_00 = (this->fields).SpawnRoleDataMediator;
      if (this_00 != (SpawnRoleDataMediator *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator
        ::SpawnRoleDataMediator_ActivateSpawnRole
                  (this_00,currentSpawnRole,prevSpawnRole,position,rotation,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SpawnRoleChangeHandlerLocal(SpawnRoleDataMediator) */

void Assembly-CSharp.dll::SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal__ctor
               (SpawnRoleChangeHandlerLocal *this,SpawnRoleDataMediator *spawnRoleDataMediator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).SpawnRoleDataMediator = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).SpawnRoleDataMediator = spawnRoleDataMediator;
    func_?(&this->fields,spawnRoleDataMediator);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

