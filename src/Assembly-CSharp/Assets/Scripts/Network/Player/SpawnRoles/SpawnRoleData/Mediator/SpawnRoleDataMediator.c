
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
    pIVar3 = prevSpawnRole->klass;
    uVar4 = 0;
    pSVar5 = (this->fields).spawnRoleDataReceiver;
    sVar6._0_1_ = (pIVar3->_1).rank;
    sVar6._1_1_ = (pIVar3->_1).minimumAlignment;
    if (sVar6 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar7 = &(&(prevSpawnRole->klass->vtable).DeActivate)
                     [pIVar3->interfaceOffsets[uVar4].offset].method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
        uVar8._0_1_ = (prevSpawnRole->klass->_1).rank;
        uVar8._1_1_ = (prevSpawnRole->klass->_1).minimumAlignment;
      } while (uVar4 < uVar8);
    }
    ppMVar7 = (MethodInfo **)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*(code *)*ppMVar7)(prevSpawnRole,uVar2,pSVar5,ppMVar7[1]);
    pSVar5 = (this->fields).spawnRoleDataReceiver;
    if (pSVar5 == (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) goto code_?;
    (pSVar5->fields)._.isActive = 0;
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
code_?:
    this = (SpawnRoleDataMediator *)func_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
  }
  pSVar5 = (pSVar1->fields).spawnRoleDataReceiver;
  if (currentSpawnRole != (ISpawnRoleLocal *)0x0) {
    pIVar3 = currentSpawnRole->klass;
    uVar8 = 0;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar7 = &(&(currentSpawnRole->klass->vtable).Activate)
                     [pIVar3->interfaceOffsets[uVar8].offset].method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    ppMVar7 = (MethodInfo **)func_?(currentSpawnRole,TypeInfo__ISpawnRoleLocal,0);
code_?:
    (*(code *)*ppMVar7)(currentSpawnRole,this,pSVar5,newPosition._0_8_,newPosition.z,newRotation.x,
                        newRotation.y,newRotation.z,newRotation.w,ppMVar7[1]);
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    pSVar2 = (this->fields).spawnRoleDataReceiver;
    uVar3 = 0;
    pIVar4 = prevSpawnRole->klass;
    uVar5._0_1_ = (pIVar4->_1).rank;
    uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar6 = &(&(prevSpawnRole->klass->vtable).DeActivate)
                     [pIVar4->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    ppMVar6 = (MethodInfo **)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*(code *)*ppMVar6)(prevSpawnRole,uVar1,pSVar2,ppMVar6[1]);
    pSVar2 = (this->fields).spawnRoleDataReceiver;
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
      (pSVar2->fields)._.isActive = 0;
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  method_00 = 
  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
  ;
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)func_?();
  (pSVar1->fields)._.isActive = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pSVar2 = &this->fields;
  pSVar2->spawnRoleDataReceiver = pSVar1;
  func_?(pSVar2,pSVar1);
  pSVar3 = (this->fields).woId;
  pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
  if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
    pSVar5 = (SubscribableVariable_1_System_Int32Enum_ *)(pSVar3->fields)._.subscribableVariable;
    pSVar6 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                             );
    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar6,pSVar5,pSVar4,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
              );
    if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
      (pSVar4->fields).woId = pSVar6;
      func_?(&pSVar4->fields,pSVar6);
      pSVar7 = (this->fields).spawnRoleMode;
      pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
      if (pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0) {
        pSVar5 = (SubscribableVariable_1_System_Int32Enum_ *)(pSVar7->fields)._.subscribableVariable
        ;
        this_00 = (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)
                  func_?(
                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                                 );
        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
        SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                  ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,pSVar5,pSVar4,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                  );
        if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
          ppSVar8 = &(pSVar4->fields).spawnRoleMode;
          *ppSVar8 = this_00;
          func_?(ppSVar8,this_00);
          pSVar9 = (this->fields).isSeated;
          pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
          if (pSVar9 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) {
            pSVar10 = (SubscribableVariable_1_System_ByteEnum_ *)
                     (pSVar9->fields)._.subscribableVariable;
            pSVar11 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                      func_?(
                                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                     );
            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
            SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                      ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSVar11,pSVar10,pSVar4,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                      );
            if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
              ppSVar12 = &(pSVar4->fields).isSeated;
              *ppSVar12 = pSVar11;
              func_?(ppSVar12,pSVar11);
              pSVar13 = (this->fields).health;
              pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
              if (pSVar13 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)
              {
                pSVar14 = (pSVar13->fields)._.subscribableVariable;
                pSVar15 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                          func_?(
                                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                         );
                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                SpawnRoleReceiverVariable_1_System_Single___ctor
                          (pSVar15,pSVar14,pSVar4,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                          );
                if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                  ppSVar16 = &(pSVar4->fields).health;
                  *ppSVar16 = pSVar15;
                  func_?(ppSVar16,pSVar15);
                  pSVar3 = (this->fields).maxHealth;
                  pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
                  if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
                                0x0) {
                    pSVar5 = (SubscribableVariable_1_System_Int32Enum_ *)
                             (pSVar3->fields)._.subscribableVariable;
                    pSVar6 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
                              func_?(
                                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                                             );
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                    SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar6,pSVar5,
                               pSVar4,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                              );
                    if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                      ppSVar17 = &(pSVar4->fields).maxHealth;
                      *ppSVar17 = pSVar6;
                      func_?(ppSVar17,pSVar6);
                      pSVar13 = (this->fields).size;
                      pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
                      if (pSVar13 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                     *)0x0) {
                        pSVar14 = (pSVar13->fields)._.subscribableVariable;
                        pSVar15 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                  func_?(
                                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                 );
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                        SpawnRoleReceiverVariable_1_System_Single___ctor
                                  (pSVar15,pSVar14,pSVar4,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                  );
                        if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                          ppSVar16 = &(pSVar4->fields).size;
                          *ppSVar16 = pSVar15;
                          func_?(ppSVar16,pSVar15);
                          pSVar18 = (this->fields).lastRespawnType;
                          pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
                          if (pSVar18 !=
                              (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)
                              0x0) {
                            pSVar5 = (SubscribableVariable_1_System_Int32Enum_ *)
                                     (pSVar18->fields)._.subscribableVariable;
                            this_01 = (SpawnRoleReceiverVariable_1_LastRespawnType_ *)
                                      func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                                                  );
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                            SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                                      ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_01,
                                       pSVar5,pSVar4,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                      );
                            if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                              ppSVar19 = &(pSVar4->fields).lastRespawnType;
                              *ppSVar19 = this_01;
                              func_?(ppSVar19,this_01);
                              pSVar13 = (this->fields).shield;
                              pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
                              if (pSVar13 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                             *)0x0) {
                                pSVar14 = (pSVar13->fields)._.subscribableVariable;
                                pSVar15 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                          func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]
                                ::SpawnRoleReceiverVariable_1_System_Single___ctor
                                          (pSVar15,pSVar14,pSVar4,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                          );
                                if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                  ppSVar16 = &(pSVar4->fields).shield;
                                  *ppSVar16 = pSVar15;
                                  func_?(ppSVar16,pSVar15);
                                  pSVar9 = (this->fields).isInGunMode;
                                  pSVar4 = (SpawnRoleDataReceiver *)pSVar2->spawnRoleDataReceiver;
                                  if (pSVar9 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                 *)0x0) {
                                    pSVar10 = (SubscribableVariable_1_System_ByteEnum_ *)
                                             (pSVar9->fields)._.subscribableVariable;
                                    pSVar11 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                              func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                    ByteEnum]::SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                               pSVar11,pSVar10,pSVar4,
                                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                              );
                                    if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                      ppSVar12 = &(pSVar4->fields).isInGunMode;
                                      *ppSVar12 = pSVar11;
                                      func_?(ppSVar12,pSVar11);
                                      pSVar9 = (this->fields).isInVehicle;
                                      pSVar4 = (SpawnRoleDataReceiver *)
                                               pSVar2->spawnRoleDataReceiver;
                                      if (pSVar9 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                        pSVar10 = (SubscribableVariable_1_System_ByteEnum_ *)
                                                 (pSVar9->fields)._.subscribableVariable;
                                        pSVar11 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                        ByteEnum]::
                                        SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                  ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                   pSVar11,pSVar10,pSVar4,
                                                                                                      
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                        if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                          ppSVar12 = &(pSVar4->fields).isInVehicle;
                                          *ppSVar12 = pSVar11;
                                          func_?(ppSVar12,pSVar11);
                                          pSVar20 = (this->fields).position;
                                          pSVar4 = (SpawnRoleDataReceiver *)
                                                   pSVar2->spawnRoleDataReceiver;
                                          if (pSVar20 !=
                                              (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                               *)0x0) {
                                            pSVar21 = (pSVar20->fields)._.subscribableVariable;
                                            pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                            SpawnRoleVariableTypes::
                                            SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                                            SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                      (pSVar22,pSVar21,pSVar4,
                                                                                                              
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                            if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                              ppSVar23 = &(pSVar4->fields).position;
                                              *ppSVar23 = pSVar22;
                                              func_?(ppSVar23,pSVar22);
                                              pSVar24 = (this->fields).rotation;
                                              pSVar4 = (SpawnRoleDataReceiver *)
                                                       pSVar2->spawnRoleDataReceiver;
                                              if (pSVar24 !=
                                                  (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_
                                                  *)0x0) {
                                                subscribableVariableExternal =
                                                     (pSVar24->fields)._.subscribableVariable;
                                                this_02 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                                                  );
                                                SpawnRoleVariableTypes::
                                                SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]
                                                ::
                                                SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
                                                          (this_02,subscribableVariableExternal,
                                                           pSVar4,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                  ppSVar25 = &(pSVar4->fields).rotation;
                                                  *ppSVar25 = this_02;
                                                  func_?(ppSVar25,this_02);
                                                  pSVar20 = (this->fields).scale;
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           pSVar2->spawnRoleDataReceiver;
                                                  if (pSVar20 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar21 = (pSVar20->fields)._.
                                                              subscribableVariable;
                                                    pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar22,pSVar21,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                    ppSVar23 = &(pSVar4->fields).scale;
                                                    *ppSVar23 = pSVar22;
                                                    func_?(ppSVar23,pSVar22);
                                                    pSVar20 = (this->fields).defaultScale;
                                                    pSVar4 = (SpawnRoleDataReceiver *)
                                                             pSVar2->spawnRoleDataReceiver;
                                                    if (pSVar20 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar21 = (pSVar20->fields)._.
                                                              subscribableVariable;
                                                    pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar22,pSVar21,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                    ppSVar23 = &(pSVar4->fields).defaultScale;
                                                    *ppSVar23 = pSVar22;
                                                    func_?(ppSVar23,pSVar22);
                                                    pSVar26 = (this->fields).reviveState;
                                                    pSVar4 = (SpawnRoleDataReceiver *)
                                                             pSVar2->spawnRoleDataReceiver;
                                                    if (pSVar26 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0) {
                                                    subscribableVariableExternal_00 =
                                                         (pSVar26->fields)._.subscribableVariable;
                                                    this_03 = (
                                                  SpawnRoleReceiverVariable_1_ReviveState_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::Object]::
                                                  SpawnRoleReceiverVariable_1_System_Object___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_Object_ *)
                                                  this_03,(SubscribableVariable_1_System_Object_ *)
                                                          subscribableVariableExternal_00,pSVar4,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                    ppSVar27 = &(pSVar4->fields).reviveState;
                                                    *ppSVar27 = this_03;
                                                    func_?(ppSVar27,this_03);
                                                    pSVar9 = (this->fields).pickupItemIsInHand;
                                                    pSVar4 = (SpawnRoleDataReceiver *)
                                                             pSVar2->spawnRoleDataReceiver;
                                                    if (pSVar9 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    pSVar10 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar9->fields)._.subscribableVariable;
                                                  pSVar11 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  pSVar11,pSVar10,pSVar4,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                    ppSVar12 = &(pSVar4->fields).pickupItemIsInHand;
                                                    *ppSVar12 = pSVar11;
                                                    func_?(ppSVar12,pSVar11);
                                                    pSVar28 = (this->fields).tierRequirement;
                                                    pSVar4 = (SpawnRoleDataReceiver *)
                                                             pSVar2->spawnRoleDataReceiver;
                                                    if (pSVar28 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                                  *)0x0) {
                                                    pSVar10 = (
                                                  SubscribableVariable_1_System_ByteEnum_ *)
                                                  (pSVar28->fields)._.subscribableVariable;
                                                  this_04 = (
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  this_04,pSVar10,pSVar4,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
                                                    ppSVar29 = &(pSVar4->fields).tierRequirement;
                                                    *ppSVar29 = this_04;
                                                    func_?(ppSVar29,this_04);
                                                    pSVar1 = pSVar2->spawnRoleDataReceiver;
                                                    this_05 = (Action_3_Int32_Int32_ByteEnum_ *)
                                                              func_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  mscorlib.dll::System::
                                                  Action`3[Int32,Int32,ByteEnum]::
                                                  Action_3_Int32_Int32_ByteEnum___ctor
                                                            (this_05,(Object *)this,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnKilled_int__int__MV__Common__PlayerKilledByType_
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(&
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  a = (pSVar1->fields)._.OnKilled;
                                                  do {
                                                    pDVar30 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a,
                                                                               (Delegate *)this_05,
                                                                               (MethodInfo *)0x0);
                                                    iVar31 = 0;
                                                    if (pDVar30 != (Delegate *)0x0) {
                                                      pAVar32 = 
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ;
                                                  iVar31 = func_?(pDVar30,
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  if (iVar31 == 0) goto code_?;
                                                  }
                                                  pAVar33 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)func_?(&(pSVar1->fields)._.OnKilled,
                                                                    iVar31,a);
                                                  bVar34 = pAVar33 != a;
                                                  a = pAVar33;
                                                  } while (bVar34);
                                                  pSVar1 = pSVar2->spawnRoleDataReceiver;
                                                  this_06 = (NavMesh_OnNavMeshPreUpdate *)
                                                            func_?(TypeInfo__System__Action
                                                                           );
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_06,(Object *)this,
                                                                                                                          
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
                                                    ppAVar35 = &(pSVar1->fields)._.OnSuicide;
                                                    a_00 = *ppAVar35;
                                                    do {
                                                      pDVar30 = mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a_00,
                                                                                 (Delegate *)this_06
                                                                                 ,(MethodInfo *)0x0)
                                                      ;
                                                      pDVar36 = (Delegate *)0x0;
                                                      if (pDVar30 != (Delegate *)0x0) {
                                                        if ((Action__Class *)pDVar30->klass ==
                                                            TypeInfo__System__Action) {
                                                          pDVar36 = pDVar30;
                                                        }
                                                        pAVar32 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class
                                                  *)TypeInfo__System__Action;
                                                  if (pDVar36 == (Delegate *)0x0)
                                                  goto code_?;
                                                  }
                                                  pAVar37 = (Action *)
                                                            func_?(ppAVar35,pDVar36,a_00);
                                                  bVar34 = pAVar37 == a_00;
                                                  a_00 = pAVar37;
                                                  if (bVar34) {
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
  func_?();
  pDVar30 = extraout_ECX;
  pAVar32 = extraout_EDX;
code_?:
  func_?(pDVar30,pAVar32);
code_?:
  func_?(pDVar30,pAVar32);
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void SpawnRoleDataReceiverOnOnKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnKilled
               (SpawnRoleDataMediator *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pAVar1 = (this->fields).OnKilled;
  if (pAVar1 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
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
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)pSVar1,
             0xffffffff,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  ppSVar2 = &(this->fields).woId;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  this_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                           );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_00,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
            );
  ppSVar3 = &(this->fields).spawnRoleMode;
  *ppSVar3 = this_00;
  func_?(ppSVar3,this_00);
  pSVar4 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                          );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar4,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isSeated = pSVar4;
  func_?(&(this->fields).isSeated);
  pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar5,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  ppSVar6 = &(this->fields).health;
  *ppSVar6 = pSVar5;
  func_?(ppSVar6);
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)pSVar1,100,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  ppSVar2 = &(this->fields).maxHealth;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                          );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar5,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).shield = pSVar5;
  func_?();
  pSVar4 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar4,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isInGunMode = pSVar4;
  func_?();
  pSVar4 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar4,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  ppSVar7 = &(this->fields).isInVehicle;
  *ppSVar7 = pSVar4;
  func_?(ppSVar7);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9._0_4_ = (pVVar8->zeroVector).x;
  uVar9._4_4_ = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  pSVar11 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
            func_?();
  value.z = fVar10;
  value.x = (float)(int)uVar9;
  value.y = (float)(int)((ulonglong)uVar9 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar11,value,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).position = pSVar11;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar12->identityQuaternion).x;
  fVar13 = (pQVar12->identityQuaternion).y;
  fVar14 = (pQVar12->identityQuaternion).z;
  fVar15 = (pQVar12->identityQuaternion).w;
  this_01 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *)
            func_?();
  value_00.y = fVar13;
  value_00.x = fVar10;
  value_00.z = fVar14;
  value_00.w = fVar15;
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Quaternion]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion___ctor
            (this_01,value_00,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
            );
  (this->fields).rotation = this_01;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar16._0_4_ = (pVVar8->oneVector).x;
  uVar16._4_4_ = (pVVar8->oneVector).y;
  fVar10 = (pVVar8->oneVector).z;
  pSVar11 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
            func_?();
  value_01.z = fVar10;
  value_01.x = (float)(int)uVar16;
  value_01.y = (float)(int)((ulonglong)uVar16 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar11,value_01,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).scale = pSVar11;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar17._0_4_ = (pVVar8->oneVector).x;
  uVar17._4_4_ = (pVVar8->oneVector).y;
  fVar10 = (pVVar8->oneVector).z;
  pSVar11 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
            func_?();
  value_02.z = fVar10;
  value_02.x = (float)(int)uVar17;
  value_02.y = (float)(int)((ulonglong)uVar17 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar11,value_02,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).defaultScale = pSVar11;
  func_?();
  pSVar5 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar5,1.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).size = pSVar5;
  func_?();
  this_02 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_02,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
            );
  (this->fields).lastRespawnType = this_02;
  func_?();
  pSVar4 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar4,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).pickupItemIsInHand = pSVar4;
  func_?();
  pRStack18 = TypeInfo__ReviveState;
  this_03 = (ReviveState *)func_?();
  ReviveState::ReviveState__ctor(this_03,(MethodInfo *)0x0);
  this_04 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Object]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Object___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Object_ *)this_04,
             (Object *)this_03,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
            );
  (this->fields).reviveState = this_04;
  func_?();
  this_05 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_ *)
            func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)this_05,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
            );
  method_00 = (MethodInfo *)&(this->fields).tierRequirement;
  *(SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_ **)method_00 = this_05
  ;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  spawnRoleType = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(this->fields).spawnRoleMode;
  pSStack19 = TypeInfo__SpawnRoleModeTypeWrapper;
  this_06 = (SpawnRoleModeTypeWrapper *)func_?();
  SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor(this_06,spawnRoleType,(MethodInfo *)0x0);
  (this->fields).SpawnRoleModeTypeWrapper = this_06;
  func_?();
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
  ppAVar1 = &(this->fields).OnKilled;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnSuicide;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
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
  ppAVar1 = &(this->fields).OnKilled;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnSuicide;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

