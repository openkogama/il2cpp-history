
/* Void ActivateSpawnRole(ISpawnRoleLocal, ISpawnRoleLocal, Vector3, Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_ActivateSpawnRole
               (SpawnRoleDataMediator *this,ISpawnRoleLocal *currentSpawnRole,
               ISpawnRoleLocal *prevSpawnRole,Vector3 newPosition,Quaternion newRotation,
               MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  if ((this->fields).spawnRoleDataReceiver ==
      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
    this = (SpawnRoleDataMediator *)0xffffffff;
    if (prevSpawnRole != (ISpawnRoleLocal *)0x0) goto code_?;
  }
  else {
    if (prevSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
    uVar2 = func_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
    uVar3 = 0;
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    uVar5 = (prevSpawnRole->klass->_1).interface_offsets_count;
    if (uVar5 != 0) {
      do {
        if (prevSpawnRole->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar6 = &(prevSpawnRole->klass->vtable).DeActivate +
                   prevSpawnRole->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    pVVar6 = (VirtualInvokeData *)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*pVVar6->methodPtr)(prevSpawnRole,uVar2,pSVar4,pVVar6->method);
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    if (pSVar4 == (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) goto code_?;
    (pSVar4->fields)._.isActive = 0;
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
code_?:
    this = (SpawnRoleDataMediator *)func_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
  }
  pSVar4 = (pSVar1->fields).spawnRoleDataReceiver;
  if (currentSpawnRole != (ISpawnRoleLocal *)0x0) {
    uVar3 = 0;
    uVar5 = (currentSpawnRole->klass->_1).interface_offsets_count;
    if (uVar5 != 0) {
      do {
        if (currentSpawnRole->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar6 = &(currentSpawnRole->klass->vtable).Activate +
                   currentSpawnRole->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    pVVar6 = (VirtualInvokeData *)func_?(currentSpawnRole,TypeInfo__ISpawnRoleLocal,0);
code_?:
    (*pVVar6->methodPtr)
              (currentSpawnRole,this,pSVar4,newPosition._0_8_,newPosition.z,newRotation.x,
               newRotation.y,newRotation.z,newRotation.w,pVVar6->method);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DeActivatePrevSpawnRoleDataReceiver(ISpawnRoleLocal) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_DeActivatePrevSpawnRoleDataReceiver
               (SpawnRoleDataMediator *this,ISpawnRoleLocal *prevSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  if ((this->fields).spawnRoleDataReceiver ==
      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
    return;
  }
  if (prevSpawnRole != (ISpawnRoleLocal *)0x0) {
    uVar1 = func_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
    uVar2 = 0;
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    uVar4 = (prevSpawnRole->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (prevSpawnRole->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar5 = &(prevSpawnRole->klass->vtable).DeActivate +
                   prevSpawnRole->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*pVVar5->methodPtr)(prevSpawnRole,uVar1,pSVar3,pVVar5->method);
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
      (pSVar3->fields)._.isActive = 0;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupNewSpawnRoleDataReceiver() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver
               (SpawnRoleDataMediator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__get_SubscribableVariable__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__get_SubscribableVariable__
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
                           );
  if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
    (pSVar1->fields)._.isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pSVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields).spawnRoleDataReceiver = pSVar1;
    func_?(&this->fields,pSVar1);
    pSVar2 = (this->fields).woId;
    unaff_EBX = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
      pSVar3 = (SubscribableVariable_1_System_Object_ *)(pSVar2->fields)._.subscribableVariable;
      pSVar4 = (SpawnRoleReceiverVariable_1_System_Object_ *)
                func_?(
                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                               );
      if (pSVar4 != (SpawnRoleReceiverVariable_1_System_Object_ *)0x0) {
        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
        SpawnRoleReceiverVariable_1_System_Object___ctor
                  (pSVar4,pSVar3,unaff_EBX,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                  );
        if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
          (unaff_EBX->fields).woId = (SpawnRoleReceiverVariable_1_System_Int32_ *)pSVar4;
          func_?(&unaff_EBX->fields,pSVar4);
          pSVar5 = (this->fields).spawnRoleMode;
          unaff_EBX = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
          if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                         *)0x0) {
            pSVar3 = (SubscribableVariable_1_System_Object_ *)
                     (pSVar5->fields)._.subscribableVariable;
            pSVar4 = (SpawnRoleReceiverVariable_1_System_Object_ *)
                      func_?(
                                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                                     );
            if (pSVar4 != (SpawnRoleReceiverVariable_1_System_Object_ *)0x0) {
              SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]::
              SpawnRoleReceiverVariable_1_System_Object___ctor
                        (pSVar4,pSVar3,unaff_EBX,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                        );
              if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                (unaff_EBX->fields).spawnRoleMode =
                     (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)pSVar4;
                func_?(&(unaff_EBX->fields).spawnRoleMode,pSVar4);
                pSVar6 = (this->fields).isSeated;
                unaff_EBX = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                if (pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
                              0x0) {
                  pSVar7 = (SubscribableVariable_1_System_ByteEnum_ *)
                           (pSVar6->fields)._.subscribableVariable;
                  pSVar8 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                            func_?(
                                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                           );
                  if (pSVar8 != (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0) {
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
                    SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSVar8,pSVar7,
                               unaff_EBX,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                              );
                    if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                      (unaff_EBX->fields).isSeated = pSVar8;
                      func_?(&(unaff_EBX->fields).isSeated,pSVar8);
                      pSVar9 = (this->fields).health;
                      unaff_EBX = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                      if (pSVar9 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                     *)0x0) {
                        pSVar10 = (pSVar9->fields)._.subscribableVariable;
                        pSVar11 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                  func_?(
                                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                 );
                        if (pSVar11 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0) {
                          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                          SpawnRoleReceiverVariable_1_System_Single___ctor
                                    (pSVar11,pSVar10,unaff_EBX,
                                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                    );
                          if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                            (unaff_EBX->fields).health = pSVar11;
                            func_?(&(unaff_EBX->fields).health,pSVar11);
                            pSVar2 = (this->fields).maxHealth;
                            unaff_EBX = (SpawnRoleDataReceiver *)
                                        (this->fields).spawnRoleDataReceiver;
                            if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_
                                           *)0x0) {
                              pSVar3 = (SubscribableVariable_1_System_Object_ *)
                                       (pSVar2->fields)._.subscribableVariable;
                              pSVar4 = (SpawnRoleReceiverVariable_1_System_Object_ *)
                                        func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                                                  );
                              if (pSVar4 != (SpawnRoleReceiverVariable_1_System_Object_ *)0x0) {
                                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Object]
                                ::SpawnRoleReceiverVariable_1_System_Object___ctor
                                          (pSVar4,pSVar3,unaff_EBX,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                          );
                                if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                  (unaff_EBX->fields).maxHealth =
                                       (SpawnRoleReceiverVariable_1_System_Int32_ *)pSVar4;
                                  func_?(&(unaff_EBX->fields).maxHealth,pSVar4);
                                  pSVar9 = (this->fields).size;
                                  unaff_EBX = (SpawnRoleDataReceiver *)
                                              (this->fields).spawnRoleDataReceiver;
                                  if (pSVar9 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                                 *)0x0) {
                                    pSVar10 = (pSVar9->fields)._.subscribableVariable;
                                    pSVar11 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                              func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                                    if (pSVar11 != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0
                                       ) {
                                      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                      Single]::SpawnRoleReceiverVariable_1_System_Single___ctor
                                                (pSVar11,pSVar10,unaff_EBX,
                                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                );
                                      if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                        (unaff_EBX->fields).size = pSVar11;
                                        func_?(&(unaff_EBX->fields).size,pSVar11);
                                        pSVar12 = (this->fields).lastRespawnType;
                                        unaff_EBX = (SpawnRoleDataReceiver *)
                                                    (this->fields).spawnRoleDataReceiver;
                                        if (pSVar12 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_
                                                  *)0x0) {
                                          pSVar3 = (SubscribableVariable_1_System_Object_ *)
                                                   (pSVar12->fields)._.subscribableVariable;
                                          pSVar4 = (SpawnRoleReceiverVariable_1_System_Object_ *)
                                                    func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                                                  );
                                          if (pSVar4 !=
                                              (SpawnRoleReceiverVariable_1_System_Object_ *)0x0) {
                                            SpawnRoleVariableTypes::
                                            SpawnRoleReceiverVariable`1[System::Object]::
                                            SpawnRoleReceiverVariable_1_System_Object___ctor
                                                      (pSVar4,pSVar3,unaff_EBX,
                                                                                                              
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                            if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                              (unaff_EBX->fields).lastRespawnType =
                                                   (SpawnRoleReceiverVariable_1_LastRespawnType_ *)
                                                   pSVar4;
                                              func_?(&(unaff_EBX->fields).lastRespawnType,
                                                              pSVar4);
                                              pSVar9 = (this->fields).shield;
                                              unaff_EBX = (SpawnRoleDataReceiver *)
                                                          (this->fields).spawnRoleDataReceiver;
                                              if (pSVar9 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                                  *)0x0) {
                                                pSVar10 = (pSVar9->fields)._.subscribableVariable;
                                                pSVar11 = (
                                                  SpawnRoleReceiverVariable_1_System_Single_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                                                if (pSVar11 !=
                                                    (SpawnRoleReceiverVariable_1_System_Single_ *)
                                                    0x0) {
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::Single]::
                                                  SpawnRoleReceiverVariable_1_System_Single___ctor
                                                            (pSVar11,pSVar10,unaff_EBX,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).shield = pSVar11;
                                                    func_?(&(unaff_EBX->fields).shield,
                                                                    pSVar11);
                                                    pSVar6 = (this->fields).isInGunMode;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar6 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    pSVar7 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar6->fields)._.subscribableVariable;
                                                  pSVar8 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  if (pSVar8 !=
                                                      (SpawnRoleReceiverVariable_1_System_Boolean_ *
                                                      )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  pSVar8,pSVar7,unaff_EBX,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).isInGunMode = pSVar8;
                                                    func_?(&(unaff_EBX->fields).isInGunMode
                                                                    ,pSVar8);
                                                    pSVar6 = (this->fields).isInVehicle;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar6 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    pSVar7 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar6->fields)._.subscribableVariable;
                                                  pSVar8 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  if (pSVar8 !=
                                                      (SpawnRoleReceiverVariable_1_System_Boolean_ *
                                                      )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  pSVar8,pSVar7,unaff_EBX,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).isInVehicle = pSVar8;
                                                    func_?(&(unaff_EBX->fields).isInVehicle
                                                                    ,pSVar8);
                                                    pSVar13 = (this->fields).position;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar13 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar14 = (pSVar13->fields)._.
                                                              subscribableVariable;
                                                    pSVar15 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  if (pSVar15 !=
                                                      (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[UnityEngine::
                                                    Vector3]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar15,pSVar14,unaff_EBX,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).position = pSVar15;
                                                    func_?(&(unaff_EBX->fields).position,
                                                                    pSVar15);
                                                    pSVar16 = (this->fields).rotation;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar16 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_
                                                  *)0x0) {
                                                    subscribableVariableExternal =
                                                         (pSVar16->fields)._.subscribableVariable;
                                                    this_00 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                                                  );
                                                  if (this_00 !=
                                                      (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[UnityEngine::
                                                    Quaternion]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
                                                            (this_00,subscribableVariableExternal,
                                                             unaff_EBX,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).rotation = this_00;
                                                    func_?(&(unaff_EBX->fields).rotation,
                                                                    this_00);
                                                    pSVar13 = (this->fields).scale;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar13 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar14 = (pSVar13->fields)._.
                                                              subscribableVariable;
                                                    pSVar15 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  if (pSVar15 !=
                                                      (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[UnityEngine::
                                                    Vector3]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar15,pSVar14,unaff_EBX,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).scale = pSVar15;
                                                    func_?(&(unaff_EBX->fields).scale,
                                                                    pSVar15);
                                                    pSVar13 = (this->fields).defaultScale;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar13 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar14 = (pSVar13->fields)._.
                                                              subscribableVariable;
                                                    pSVar15 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  if (pSVar15 !=
                                                      (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[UnityEngine::
                                                    Vector3]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar15,pSVar14,unaff_EBX,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).defaultScale = pSVar15;
                                                    func_?(&(unaff_EBX->fields).
                                                                     defaultScale,pSVar15);
                                                    pSVar17 = (this->fields).reviveState;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar17 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0) {
                                                    subscribableVariableExternal_00 =
                                                         (pSVar17->fields)._.subscribableVariable;
                                                    this_01 = (
                                                  SpawnRoleReceiverVariable_1_ReviveState_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                                                  );
                                                  if (this_01 !=
                                                      (SpawnRoleReceiverVariable_1_ReviveState_ *)
                                                      0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[System::Object]::
                                                    SpawnRoleReceiverVariable_1_System_Object___ctor
                                                              ((
                                                  SpawnRoleReceiverVariable_1_System_Object_ *)
                                                  this_01,(SubscribableVariable_1_System_Object_ *)
                                                          subscribableVariableExternal_00,unaff_EBX,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).reviveState = this_01;
                                                    func_?(&(unaff_EBX->fields).reviveState
                                                                    ,this_01);
                                                    pSVar6 = (this->fields).pickupItemIsInHand;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar6 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    pSVar7 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar6->fields)._.subscribableVariable;
                                                  pSVar8 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  if (pSVar8 !=
                                                      (SpawnRoleReceiverVariable_1_System_Boolean_ *
                                                      )0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  pSVar8,pSVar7,unaff_EBX,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).pickupItemIsInHand = pSVar8
                                                    ;
                                                    func_?(&(unaff_EBX->fields).
                                                                     pickupItemIsInHand,pSVar8);
                                                    pSVar18 = (this->fields).tierRequirement;
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    if (pSVar18 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                                  *)0x0) {
                                                    pSVar7 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar18->fields)._.subscribableVariable;
                                                  this_02 = (
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                                                  );
                                                  if (this_02 !=
                                                      (
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)0x0) {
                                                    SpawnRoleVariableTypes::
                                                    SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                                                                        
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  this_02,pSVar7,unaff_EBX,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    (unaff_EBX->fields).tierRequirement = this_02;
                                                    func_?(&(unaff_EBX->fields).
                                                                     tierRequirement,this_02);
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                (this->fields).spawnRoleDataReceiver
                                                    ;
                                                    this_03 = (Action_3_Int32_Int32_ByteEnum_ *)
                                                              func_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  if (this_03 !=
                                                      (Action_3_Int32_Int32_ByteEnum_ *)0x0) {
                                                    mscorlib.dll::System::
                                                    Action`3[Int32,Int32,ByteEnum]::
                                                    Action_3_Int32_Int32_ByteEnum___ctor
                                                              (this_03,(Object *)this,
                                                                                                                              
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnKilled_int__int__MV__Common__PlayerKilledByType_
                                                  ,(MethodInfo *)0x0);
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(&
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  pSVar19 = &unaff_EBX->fields;
                                                  a_00 = (unaff_EBX->fields).OnKilled;
                                                  do {
                                                    unaff_EBX = (SpawnRoleDataReceiver *)
                                                                mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a_00,
                                                                                 (Delegate *)this_03
                                                                                 ,(MethodInfo *)0x0)
                                                    ;
                                                    in_stack_20 =
                                                                                                                  
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ;
                                                  if (unaff_EBX == (SpawnRoleDataReceiver *)0x0) {
                                                    iVar21 = 0;
                                                  }
                                                  else {
                                                    iVar21 = func_?(unaff_EBX,
                                                                                                                                                          
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ,
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  if (iVar21 == 0) goto code_?;
                                                  }
                                                  pAVar22 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)func_?(&pSVar19->OnKilled,iVar21,a_00);
                                                  bVar23 = pAVar22 != a_00;
                                                  a_00 = pAVar22;
                                                  } while (bVar23);
                                                  pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                  unaff_EBX = (SpawnRoleDataReceiver *)
                                                              func_?(
                                                  TypeInfo__System__Action);
                                                  if (unaff_EBX != (SpawnRoleDataReceiver *)0x0) {
                                                    UnityEngine.AIModule.dll::UnityEngine::AI::
                                                    NavMesh+OnNavMeshPreUpdate::
                                                    NavMesh_OnNavMeshPreUpdate__ctor
                                                              ((NavMesh_OnNavMeshPreUpdate *)
                                                               unaff_EBX,(Object *)this,
                                                                                                                              
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(&TypeInfo__System__Action);
                                                      cRam_? = '\x01';
                                                    }
                                                    a = (pSVar1->fields)._.OnSuicide;
                                                    do {
                                                      pDVar24 = mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a,
                                                                                 (Delegate *)
                                                                                 unaff_EBX,
                                                                                 (MethodInfo *)0x0);
                                                      pDVar25 = (Delegate *)0x0;
                                                      if (pDVar24 != (Delegate *)0x0) {
                                                        if ((Action__Class *)pDVar24->klass ==
                                                            TypeInfo__System__Action) {
                                                          pDVar25 = pDVar24;
                                                        }
                                                        pAVar26 = TypeInfo__System__Action;
                                                        if (pDVar25 == (Delegate *)0x0)
                                                        goto code_?;
                                                      }
                                                      pAVar27 = (Action *)
                                                                func_?(&(pSVar1->fields)._
                                                                                 .OnSuicide,pDVar25,
                                                                                a);
                                                      bVar23 = pAVar27 == a;
                                                      a = pAVar27;
                                                      if (bVar23) {
                                                        return;
                                                      }
                                                    } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDVar24 = extraout_ECX;
  pAVar26 = extraout_EDX;
code_?:
  func_?(pDVar24,pAVar26);
code_?:
  func_?(unaff_EBX,in_stack_20);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void SpawnRoleDataReceiverOnOnKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnKilled
               (SpawnRoleDataMediator *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if ((this->fields).OnKilled != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
    pAVar1 = (this->fields).OnKilled;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,localPlayerActorNr,dmgDealerActorNr,damageType,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* SpawnRoleDataMediator() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator__ctor
               (SpawnRoleDataMediator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReviveState);
    func_?(&TypeInfo__SpawnRoleModeTypeWrapper);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                          );
  if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
    MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
    MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
              ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)pSVar1,-1,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
              );
    (this->fields).woId = pSVar1;
    func_?(&(this->fields).woId,pSVar1);
    this_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                             );
    if (this_00 !=
        (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)0x0) {
      MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
      MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)this_00,0,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
                );
      (this->fields).spawnRoleMode = this_00;
      func_?(&(this->fields).spawnRoleMode,this_00);
      pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
               func_?(
                              TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                              );
      if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) {
        MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
        MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                  ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)pSVar2,0,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                  );
        (this->fields).isSeated = pSVar2;
        func_?(&(this->fields).isSeated,pSVar2);
        pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
                 func_?(
                                TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                                );
        if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0) {
          SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
          SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
                    (pSVar3,0.0,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
                    );
          (this->fields).health = pSVar3;
          func_?(&(this->fields).health,pSVar3);
          pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
                   func_?(
                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                                  );
          if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
            MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
            MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                      ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)
                       pSVar1,100,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
                      );
            (this->fields).maxHealth = pSVar1;
            func_?(&(this->fields).maxHealth,pSVar1);
            pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
                     func_?(
                                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                                    );
            if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0) {
              SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
              SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
                        (pSVar3,0.0,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
                        );
              (this->fields).shield = pSVar3;
              func_?(&(this->fields).shield,pSVar3);
              pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
                       func_?(
                                      TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                                      );
              if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0
                 ) {
                MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
                MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                          ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *)
                           pSVar2,0,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                          );
                (this->fields).isInGunMode = pSVar2;
                func_?(&(this->fields).isInGunMode,pSVar2);
                pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
                         func_?(
                                        TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                                        );
                if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
                              0x0) {
                  MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]::
                  MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                            ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_ *
                             )pSVar2,0,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                            );
                  (this->fields).isInVehicle = pSVar2;
                  func_?(&(this->fields).isInVehicle,pSVar2);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  VVar4 = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                  pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *
                           )func_?(
                                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                                           );
                  if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                 *)0x0) {
                    SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
                    SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
                              (pSVar5,VVar4,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
                              );
                    (this->fields).position = pSVar5;
                    func_?(&(this->fields).position,pSVar5);
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Quaternion);
                      cRam_? = '\x01';
                    }
                    pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    fVar7 = (pQVar6->identityQuaternion).y;
                    fVar8 = (pQVar6->identityQuaternion).z;
                    fVar9 = (pQVar6->identityQuaternion).w;
                    this_01 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_
                               *)func_?();
                    if (this_01 !=
                        (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *
                        )0x0) {
                      value.y = fVar7;
                      value.x = (float)&UNK_?;
                      value.z = fVar8;
                      value.w = fVar9;
                      SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Quaternion]::
                      SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion___ctor
                                (this_01,value,
                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
                                );
                      (this->fields).rotation = this_01;
                      func_?(&(this->fields).rotation,this_01);
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__UnityEngine__Vector3);
                        cRam_? = '\x01';
                      }
                      VVar4 = TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
                      pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                *)func_?();
                      if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                     *)0x0) {
                        SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
                        SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
                                  (pSVar5,VVar4,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
                                  );
                        (this->fields).scale = pSVar5;
                        func_?(&(this->fields).scale,pSVar5);
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__UnityEngine__Vector3);
                          cRam_? = '\x01';
                        }
                        VVar4 = TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
                        pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                                                  );
                        if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                       *)0x0) {
                          SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
                          SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
                                    (pSVar5,VVar4,
                                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
                                    );
                          (this->fields).defaultScale = pSVar5;
                          func_?(&(this->fields).defaultScale,pSVar5);
                          pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                    *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                                                  );
                          if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                         *)0x0) {
                            SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
                            SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
                                      (pSVar3,1.0,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
                                      );
                            (this->fields).size = pSVar3;
                            func_?(&(this->fields).size,pSVar3);
                            this_02 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_
                                       *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>
                                                  );
                            if (this_02 !=
                                (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_
                                 *)0x0) {
                              MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::Object]
                              ::
                              MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                                        ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_
                                          *)this_02,0,
                                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
                                        );
                              (this->fields).lastRespawnType = this_02;
                              func_?(&(this->fields).lastRespawnType,this_02);
                              pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                        *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                                                  );
                              if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                             *)0x0) {
                                MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::
                                Object]::
                                MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                                          ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_
                                            *)pSVar2,0,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                                          );
                                (this->fields).pickupItemIsInHand = pSVar2;
                                func_?(&(this->fields).pickupItemIsInHand,pSVar2);
                                this_03 = (ReviveState *)func_?(TypeInfo__ReviveState);
                                if (this_03 != (ReviveState *)0x0) {
                                  ReviveState::ReviveState__ctor(this_03,(MethodInfo *)0x0);
                                  this_04 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                             *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>
                                                  );
                                  if (this_04 !=
                                      (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                       *)0x0) {
                                    MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::
                                    Object]::
                                    MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                                              ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_
                                                *)this_04,(int32_t)this_03,
                                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
                                              );
                                    (this->fields).reviveState = this_04;
                                    func_?(&(this->fields).reviveState,this_04);
                                    this_05 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                               *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>
                                                  );
                                    if (this_05 !=
                                        (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                         *)0x0) {
                                      MVWorldObjectClientManager+WOCMWorldObjectClientRef`1[System::
                                      Object]::
                                      MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object___ctor
                                                ((MVWorldObjectClientManager_WOCMWorldObjectClientRef_1_System_Object_
                                                  *)this_05,0,
                                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
                                                );
                                      method_00 = (MethodInfo *)&(this->fields).tierRequirement;
                                      (this->fields).tierRequirement = this_05;
                                      func_?(method_00,this_05);
                                      mscorlib.dll::System::ThrowHelper::
                                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                ((Object *)this,ExceptionArgument__Enum_obj,
                                                 method_00);
                                      spawnRoleType =
                                           (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
                                           (this->fields).spawnRoleMode;
                                      this_06 = (SpawnRoleModeTypeWrapper *)
                                                func_?(TypeInfo__SpawnRoleModeTypeWrapper);
                                      if (this_06 != (SpawnRoleModeTypeWrapper *)0x0) {
                                        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor
                                                  (this_06,spawnRoleType,(MethodInfo *)0x0);
                                        (this->fields).SpawnRoleModeTypeWrapper = this_06;
                                        func_?(&(this->fields).SpawnRoleModeTypeWrapper,
                                                        this_06);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnKilled
               (SpawnRoleDataMediator *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnKilled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(&(this->fields).OnKilled,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSuicide;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&(this->fields).OnSuicide,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_remove_OnKilled
               (SpawnRoleDataMediator *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnKilled;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(&(this->fields).OnKilled,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_remove_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSuicide;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&(this->fields).OnSuicide,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

