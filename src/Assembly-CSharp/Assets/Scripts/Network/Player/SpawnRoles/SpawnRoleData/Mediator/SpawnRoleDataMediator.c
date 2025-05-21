
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
    pIVar5 = prevSpawnRole->klass;
    uVar6._0_1_ = (pIVar5->_1).rank;
    uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar7 = &(&(prevSpawnRole->klass->vtable).DeActivate)
                     [prevSpawnRole->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
    ppMVar7 = (MethodInfo **)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*(code *)*ppMVar7)(prevSpawnRole,uVar2,pSVar4,ppMVar7[1]);
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    if (pSVar4 == (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) goto code_?;
    (pSVar4->fields)._.isActive = 0;
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
code_?:
    this = (SpawnRoleDataMediator *)func_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
  }
  pSVar4 = (pSVar1->fields).spawnRoleDataReceiver;
  if (currentSpawnRole != (ISpawnRoleLocal *)0x0) {
    pIVar5 = currentSpawnRole->klass;
    uVar6 = 0;
    uVar3._0_1_ = (pIVar5->_1).rank;
    uVar3._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar7 = &(&(currentSpawnRole->klass->vtable).Activate)
                     [currentSpawnRole->klass->interfaceOffsets[uVar6].offset].method;
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    ppMVar7 = (MethodInfo **)func_?(currentSpawnRole,TypeInfo__ISpawnRoleLocal,0);
code_?:
    (*(code *)*ppMVar7)(currentSpawnRole,this,pSVar4,newPosition._0_8_,newPosition.z,newRotation.x,
                        newRotation.y,newRotation.z,newRotation.w,ppMVar7[1]);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    pIVar4 = prevSpawnRole->klass;
    uVar5._0_1_ = (pIVar4->_1).rank;
    uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          ppMVar6 = &(&(prevSpawnRole->klass->vtable).DeActivate)
                     [prevSpawnRole->klass->interfaceOffsets[uVar2].offset].method;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
    ppMVar6 = (MethodInfo **)func_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*(code *)*ppMVar6)(prevSpawnRole,uVar1,pSVar3,ppMVar6[1]);
    pSVar3 = (this->fields).spawnRoleDataReceiver;
    if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
      (pSVar3->fields)._.isActive = 0;
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
  (this->fields).spawnRoleDataReceiver = pSVar1;
  func_?(&this->fields,pSVar1);
  pSVar2 = (this->fields).woId;
  pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
  a = (Action *)0x0;
  if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
    a = (Action *)(pSVar2->fields)._.subscribableVariable;
    pSVar4 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                             );
    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
    SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar4,
               (SubscribableVariable_1_System_Int32Enum_ *)a,pSVar3,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
              );
    if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
      (pSVar3->fields).woId = pSVar4;
      func_?(&pSVar3->fields,pSVar4);
      pSVar5 = (this->fields).spawnRoleMode;
      pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
      a = (Action *)0x0;
      if (pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0) {
        a = (Action *)(pSVar5->fields)._.subscribableVariable;
        this_00 = (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)
                  func_?(
                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                                 );
        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
        SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                  ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,
                   (SubscribableVariable_1_System_Int32Enum_ *)a,pSVar3,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                  );
        if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
          (pSVar3->fields).spawnRoleMode = this_00;
          func_?(&(pSVar3->fields).spawnRoleMode,this_00);
          pSVar6 = (this->fields).isSeated;
          pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
          a = (Action *)0x0;
          if (pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) {
            a = (Action *)(pSVar6->fields)._.subscribableVariable;
            pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                      func_?(
                                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                     );
            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::ByteEnum]::
            SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                      ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)pSVar7,
                       (SubscribableVariable_1_System_ByteEnum_ *)a,pSVar3,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                      );
            if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
              (pSVar3->fields).isSeated = pSVar7;
              func_?(&(pSVar3->fields).isSeated,pSVar7);
              pSVar8 = (this->fields).health;
              pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
              a = (Action *)0x0;
              if (pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)
              {
                a = (Action *)(pSVar8->fields)._.subscribableVariable;
                pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                          func_?(
                                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                         );
                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                SpawnRoleReceiverVariable_1_System_Single___ctor
                          (pSVar9,(SubscribableVariable_1_System_Single_ *)a,pSVar3,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                          );
                if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                  (pSVar3->fields).health = pSVar9;
                  func_?(&(pSVar3->fields).health,pSVar9);
                  pSVar2 = (this->fields).maxHealth;
                  pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                  a = (Action *)0x0;
                  if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
                                0x0) {
                    a = (Action *)(pSVar2->fields)._.subscribableVariable;
                    pSVar4 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
                              func_?(
                                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                                             );
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                    SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                              ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)pSVar4,
                               (SubscribableVariable_1_System_Int32Enum_ *)a,pSVar3,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                              );
                    if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                      (pSVar3->fields).maxHealth = pSVar4;
                      func_?(&(pSVar3->fields).maxHealth,pSVar4);
                      pSVar8 = (this->fields).size;
                      pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                      a = (Action *)0x0;
                      if (pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                     *)0x0) {
                        a = (Action *)(pSVar8->fields)._.subscribableVariable;
                        pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                  func_?(
                                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                 );
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                        SpawnRoleReceiverVariable_1_System_Single___ctor
                                  (pSVar9,(SubscribableVariable_1_System_Single_ *)a,pSVar3,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                  );
                        if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                          (pSVar3->fields).size = pSVar9;
                          func_?(&(pSVar3->fields).size,pSVar9);
                          pSVar10 = (this->fields).lastRespawnType;
                          pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                          a = (Action *)0x0;
                          if (pSVar10 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_
                                         *)0x0) {
                            a = (Action *)(pSVar10->fields)._.subscribableVariable;
                            this_01 = (SpawnRoleReceiverVariable_1_LastRespawnType_ *)
                                      func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                                                  );
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                            SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                                      ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_01,
                                       (SubscribableVariable_1_System_Int32Enum_ *)a,pSVar3,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                      );
                            if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                              (pSVar3->fields).lastRespawnType = this_01;
                              func_?(&(pSVar3->fields).lastRespawnType,this_01);
                              pSVar8 = (this->fields).shield;
                              pSVar3 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver
                              ;
                              a = (Action *)0x0;
                              if (pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                             *)0x0) {
                                a = (Action *)(pSVar8->fields)._.subscribableVariable;
                                pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                          func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]
                                ::SpawnRoleReceiverVariable_1_System_Single___ctor
                                          (pSVar9,(SubscribableVariable_1_System_Single_ *)a,pSVar3
                                           ,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                          );
                                if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                  (pSVar3->fields).shield = pSVar9;
                                  func_?(&(pSVar3->fields).shield,pSVar9);
                                  pSVar6 = (this->fields).isInGunMode;
                                  pSVar3 = (SpawnRoleDataReceiver *)
                                           (this->fields).spawnRoleDataReceiver;
                                  a = (Action *)0x0;
                                  if (pSVar6 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                 *)0x0) {
                                    a = (Action *)(pSVar6->fields)._.subscribableVariable;
                                    pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                              func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                    ByteEnum]::SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                              ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                               pSVar7,(SubscribableVariable_1_System_ByteEnum_ *)a,
                                               pSVar3,
                                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                              );
                                    if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                      (pSVar3->fields).isInGunMode = pSVar7;
                                      func_?(&(pSVar3->fields).isInGunMode,pSVar7);
                                      pSVar6 = (this->fields).isInVehicle;
                                      pSVar3 = (SpawnRoleDataReceiver *)
                                               (this->fields).spawnRoleDataReceiver;
                                      a = (Action *)0x0;
                                      if (pSVar6 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                        a = (Action *)(pSVar6->fields)._.subscribableVariable;
                                        pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                        ByteEnum]::
                                        SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                  ((SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                   pSVar7,(SubscribableVariable_1_System_ByteEnum_
                                                            *)a,pSVar3,
                                                                                                      
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                        if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                          (pSVar3->fields).isInVehicle = pSVar7;
                                          func_?(&(pSVar3->fields).isInVehicle,pSVar7);
                                          pSVar11 = (this->fields).position;
                                          pSVar3 = (SpawnRoleDataReceiver *)
                                                   (this->fields).spawnRoleDataReceiver;
                                          a = (Action *)0x0;
                                          if (pSVar11 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                            a = (Action *)(pSVar11->fields)._.subscribableVariable;
                                            pSVar12 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                            SpawnRoleVariableTypes::
                                            SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                                            SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                      (pSVar12,(
                                                  SubscribableVariable_1_UnityEngine_Vector3_ *)a,
                                                  pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                            if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                              (pSVar3->fields).position = pSVar12;
                                              func_?(&(pSVar3->fields).position,pSVar12);
                                              pSVar13 = (this->fields).rotation;
                                              pSVar3 = (SpawnRoleDataReceiver *)
                                                       (this->fields).spawnRoleDataReceiver;
                                              a = (Action *)0x0;
                                              if (pSVar13 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_
                                                  *)0x0) {
                                                a = (Action *)
                                                    (pSVar13->fields)._.subscribableVariable;
                                                this_02 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                                                  );
                                                SpawnRoleVariableTypes::
                                                SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]
                                                ::
                                                SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
                                                          (this_02,(
                                                  SubscribableVariable_1_UnityEngine_Quaternion_ *)a
                                                  ,pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                  (pSVar3->fields).rotation = this_02;
                                                  func_?(&(pSVar3->fields).rotation,this_02
                                                                 );
                                                  pSVar11 = (this->fields).scale;
                                                  pSVar3 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  a = (Action *)0x0;
                                                  if (pSVar11 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    a = (Action *)
                                                        (pSVar11->fields)._.subscribableVariable;
                                                    pSVar12 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar12,(
                                                  SubscribableVariable_1_UnityEngine_Vector3_ *)a,
                                                  pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                    (pSVar3->fields).scale = pSVar12;
                                                    func_?(&(pSVar3->fields).scale,pSVar12)
                                                    ;
                                                    pSVar11 = (this->fields).defaultScale;
                                                    pSVar3 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    a = (Action *)0x0;
                                                    if (pSVar11 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    a = (Action *)
                                                        (pSVar11->fields)._.subscribableVariable;
                                                    pSVar12 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar12,(
                                                  SubscribableVariable_1_UnityEngine_Vector3_ *)a,
                                                  pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                    (pSVar3->fields).defaultScale = pSVar12;
                                                    func_?(&(pSVar3->fields).defaultScale,
                                                                    pSVar12);
                                                    pSVar14 = (this->fields).reviveState;
                                                    pSVar3 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    a = (Action *)0x0;
                                                    if (pSVar14 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0) {
                                                    a = (Action *)
                                                        (pSVar14->fields)._.subscribableVariable;
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
                                                  this_03,(SubscribableVariable_1_System_Object_ *)a
                                                  ,pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                    (pSVar3->fields).reviveState = this_03;
                                                    func_?(&(pSVar3->fields).reviveState,
                                                                    this_03);
                                                    pSVar6 = (this->fields).pickupItemIsInHand;
                                                    pSVar3 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    a = (Action *)0x0;
                                                    if (pSVar6 != (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    a = (Action *)
                                                        (pSVar6->fields)._.subscribableVariable;
                                                    pSVar7 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  pSVar7,(SubscribableVariable_1_System_ByteEnum_ *
                                                          )a,pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                    (pSVar3->fields).pickupItemIsInHand = pSVar7;
                                                    func_?(&(pSVar3->fields).
                                                                     pickupItemIsInHand,pSVar7);
                                                    pSVar15 = (this->fields).tierRequirement;
                                                    pSVar3 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    a = (Action *)0x0;
                                                    if (pSVar15 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                                  *)0x0) {
                                                    a = (Action *)
                                                        (pSVar15->fields)._.subscribableVariable;
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
                                                  this_04,(SubscribableVariable_1_System_ByteEnum_ *
                                                          )a,pSVar3,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
                                                    (pSVar3->fields).tierRequirement = this_04;
                                                    func_?(&(pSVar3->fields).
                                                                     tierRequirement,this_04);
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
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
                                                  a = (Action *)0x0;
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
                                                  a_00 = (pSVar1->fields)._.OnKilled;
                                                  do {
                                                    a = (Action *)
                                                        mscorlib.dll::System::Delegate::
                                                        Delegate_Combine((Delegate *)a_00,
                                                                         (Delegate *)this_05,
                                                                         (MethodInfo *)0x0);
                                                    if (a == (Action *)0x0) {
                                                      iVar16 = 0;
                                                    }
                                                    else {
                                                      pAVar17 = a;
                                                      iVar16 = func_?(a,
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  if (iVar16 == 0) goto code_?;
                                                  }
                                                  pAVar18 = a_00;
                                                  a_00 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)func_?(&(pSVar1->fields)._.OnKilled,
                                                                    iVar16);
                                                  } while (a_00 != pAVar18);
                                                  pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                  this_06 = (NavMesh_OnNavMeshPreUpdate *)
                                                            func_?(TypeInfo__System__Action
                                                                           );
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_06,(Object *)this,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                                                  ,(MethodInfo *)0x0);
                                                  a = (Action *)0x0;
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
                                                      pAVar17 = (Action *)
                                                                mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a,
                                                                                 (Delegate *)this_06
                                                                                 ,(MethodInfo *)0x0)
                                                      ;
                                                      pAVar19 = (Action *)0x0;
                                                      if (pAVar17 != (Action *)0x0) {
                                                        if (pAVar17->klass ==
                                                            TypeInfo__System__Action) {
                                                          pAVar19 = pAVar17;
                                                        }
                                                        pAVar20 = TypeInfo__System__Action;
                                                        if (pAVar19 == (Action *)0x0)
                                                        goto code_?;
                                                      }
                                                      pAVar17 = (Action *)
                                                                func_?(&(pSVar1->fields)._
                                                                                 .OnSuicide,pAVar19,
                                                                                a);
                                                      bVar21 = pAVar17 == a;
                                                      a = pAVar17;
                                                      if (bVar21) {
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
  pAVar17 = extraout_ECX;
  pAVar20 = extraout_EDX;
code_?:
  func_?(pAVar17,pAVar20);
code_?:
  func_?(a,pAVar17);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)pSVar1,
             0xffffffff,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  (this->fields).woId = pSVar1;
  func_?(&(this->fields).woId,pSVar1);
  this_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                           );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_00,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
            );
  (this->fields).spawnRoleMode = this_00;
  func_?(&(this->fields).spawnRoleMode,this_00);
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                          );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isSeated = pSVar2;
  func_?(&(this->fields).isSeated);
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar3,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).health = pSVar3;
  func_?(&(this->fields).health);
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)pSVar1,100,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  (this->fields).maxHealth = pSVar1;
  func_?(&(this->fields).maxHealth,pSVar1);
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                          );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar3,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).shield = pSVar3;
  func_?();
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isInGunMode = pSVar2;
  func_?();
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isInVehicle = pSVar2;
  func_?(&(this->fields).isInVehicle);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5._0_4_ = (pVVar4->zeroVector).x;
  uVar5._4_4_ = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
           func_?();
  value.z = fVar6;
  value.x = (float)(int)uVar5;
  value.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar7,value,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).position = pSVar7;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar6 = (pQVar8->identityQuaternion).x;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  this_01 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *)
            func_?();
  value_00.y = fVar9;
  value_00.x = fVar6;
  value_00.z = fVar10;
  value_00.w = fVar11;
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
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12._0_4_ = (pVVar4->oneVector).x;
  uVar12._4_4_ = (pVVar4->oneVector).y;
  fVar6 = (pVVar4->oneVector).z;
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
           func_?();
  value_01.z = fVar6;
  value_01.x = (float)(int)uVar12;
  value_01.y = (float)(int)((ulonglong)uVar12 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar7,value_01,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).scale = pSVar7;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13._0_4_ = (pVVar4->oneVector).x;
  uVar13._4_4_ = (pVVar4->oneVector).y;
  fVar6 = (pVVar4->oneVector).z;
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
           func_?();
  value_02.z = fVar6;
  value_02.x = (float)(int)uVar13;
  value_02.y = (float)(int)((ulonglong)uVar13 >> 0x20);
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[UnityEngine::Vector3]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3___ctor
            (pSVar7,value_02,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).defaultScale = pSVar7;
  func_?();
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Single]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single___ctor
            (pSVar3,1.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).size = pSVar3;
  func_?();
  this_02 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_02,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
            );
  (this->fields).lastRespawnType = this_02;
  func_?();
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::ByteEnum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_ByteEnum_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).pickupItemIsInHand = pSVar2;
  func_?();
  pRStack14 = TypeInfo__ReviveState;
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
  (this->fields).tierRequirement = this_05;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  spawnRoleType = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(this->fields).spawnRoleMode;
  pSStack15 = TypeInfo__SpawnRoleModeTypeWrapper;
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

