
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
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).worldObjects;
    pMStack_3 = (MVWorldObjectClientManager *)0x0;
    if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,prevSpawnRoleId,
                 (Object **)&pMStack_3,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pMVar1 = pMStack_3;
      unaff_EBX = TypeInfo__ISpawnRoleLocal;
      if (pMStack_3 == (MVWorldObjectClientManager *)0x0) {
        prevSpawnRole = (ISpawnRoleLocal *)0x0;
      }
      else {
        prevSpawnRole = (ISpawnRoleLocal *)func_?();
        if (prevSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
          cRam_? = '\x01';
        }
        pDVar2 = (pMVar1->fields).worldObjects;
        prevSpawnRoleId = 0;
        if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,newSpawnRoleId,
                     (Object **)&prevSpawnRoleId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          pMVar1 = (MVWorldObjectClientManager *)prevSpawnRoleId;
          unaff_EBX = TypeInfo__ISpawnRoleLocal;
          if (prevSpawnRoleId == 0) {
            currentSpawnRole = (ISpawnRoleLocal *)0x0;
          }
          else {
            pMStack_3 = (MVWorldObjectClientManager *)prevSpawnRoleId;
            currentSpawnRole = (ISpawnRoleLocal *)func_?();
            if (currentSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
          }
          this_00 = (this->fields).SpawnRoleDataMediator;
          pMVar1 = (MVWorldObjectClientManager *)0x0;
          if (this_00 != (SpawnRoleDataMediator *)0x0) {
            newPosition.z = position.z;
            newPosition.x = position.x;
            newPosition.y = position.y;
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
            SpawnRoleDataMediator::SpawnRoleDataMediator_ActivateSpawnRole
                      (this_00,currentSpawnRole,prevSpawnRole,newPosition,rotation,(MethodInfo *)0x0
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(pMVar1,unaff_EBX);
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
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_00,(MethodInfo *)0x0);
  pSVar1 = &this->fields;
  pSVar1->SpawnRoleDataMediator = this_00;
  method_00 = (MethodInfo *)pSVar1;
  func_?(pSVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pSVar1->SpawnRoleDataMediator = spawnRoleDataMediator;
  func_?(pSVar1,spawnRoleDataMediator);
  return;
}

