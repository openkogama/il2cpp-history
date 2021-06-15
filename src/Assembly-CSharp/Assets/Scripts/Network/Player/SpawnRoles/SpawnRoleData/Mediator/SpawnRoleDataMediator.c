
/* Void ActivateSpawnRole(ISpawnRoleLocal, ISpawnRoleLocal, Vector3, Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_ActivateSpawnRole
               (SpawnRoleDataMediator *this,ISpawnRoleLocal *currentSpawnRole,
               ISpawnRoleLocal *prevSpawnRole,Vector3 newPosition,Quaternion newRotation,
               MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).spawnRoleDataReceiver !=
      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
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
  }
  SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
  this = (SpawnRoleDataMediator *)0xffffffff;
  if (prevSpawnRole != (ISpawnRoleLocal *)0x0) {
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
  func_?(0);
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
    func_?(_UNK_?);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
  ;
  this_00 = (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)func_?();
  (this_00->fields)._.isActive = 1;
  pSVar1 = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).woId;
  (this->fields).spawnRoleDataReceiver = this_00;
  if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
    pSVar3 = (SubscribableVariable_1_ReviveState_ *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       (pCVar2,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__get_SubscribableVariable__
                       );
    pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
    pSVar5 = (SpawnRoleReceiverVariable_1_ReviveState_ *)
             func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                            );
    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
    SpawnRoleReceiverVariable_1_ReviveState___ctor
              (pSVar5,pSVar3,pSVar4,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
              );
    (((Behaviour__Fields *)&(pSVar1->fields)._.woId)->_)._.m_CachedPtr = pSVar5;
    pSVar1 = (this->fields).spawnRoleDataReceiver;
    pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).spawnRoleMode;
    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
      pSVar3 = (SubscribableVariable_1_ReviveState_ *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         (pCVar2,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__get_SubscribableVariable__
                         );
      pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
      pSVar5 = (SpawnRoleReceiverVariable_1_ReviveState_ *)
               func_?(
                              TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                              );
      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
      SpawnRoleReceiverVariable_1_ReviveState___ctor
                (pSVar5,pSVar3,pSVar4,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                );
      if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
        (pSVar1->fields)._.spawnRoleMode =
             (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)pSVar5;
        pSVar1 = (this->fields).spawnRoleDataReceiver;
        pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).isSeated;
        if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
          pSVar6 = (SubscribableVariable_1_MV_Common_GamePassTier_ *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             (pCVar2,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                             );
          pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
          pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                   func_?(
                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                  );
          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::GamePassTier]::
          SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
                    ((SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)pSVar7,pSVar6,pSVar4,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                    );
          if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
            (pSVar1->fields)._.isSeated = pSVar7;
            pSVar1 = (this->fields).spawnRoleDataReceiver;
            pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).health;
            if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
              pSVar8 = (SubscribableVariable_1_System_Single_ *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 (pCVar2,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__get_SubscribableVariable__
                                 );
              pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
              pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                        func_?(
                                       TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                       );
              SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
              SpawnRoleReceiverVariable_1_System_Single___ctor
                        (pSVar9,pSVar8,pSVar4,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                        );
              if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
                (pSVar1->fields)._.health = pSVar9;
                pSVar1 = (this->fields).spawnRoleDataReceiver;
                pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).maxHealth;
                if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                  pSVar3 = (SubscribableVariable_1_ReviveState_ *)
                           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                           Collection_1_VoxelHit__get_Items
                                     (pCVar2,
                                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__get_SubscribableVariable__
                                     );
                  pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                  pSVar5 = (SpawnRoleReceiverVariable_1_ReviveState_ *)
                           func_?(
                                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                                          );
                  SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
                  SpawnRoleReceiverVariable_1_ReviveState___ctor
                            (pSVar5,pSVar3,pSVar4,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                            );
                  if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
                    (pSVar1->fields)._.maxHealth =
                         (SpawnRoleReceiverVariable_1_System_Int32_ *)pSVar5;
                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                    pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).size;
                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                      pSVar8 = (SubscribableVariable_1_System_Single_ *)
                               mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                         (pCVar2,
                                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__get_SubscribableVariable__
                                         );
                      pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                      pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                func_?(
                                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                               );
                      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                      SpawnRoleReceiverVariable_1_System_Single___ctor
                                (pSVar9,pSVar8,pSVar4,
                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                );
                      if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
                        (pSVar1->fields)._.size = pSVar9;
                        pSVar1 = (this->fields).spawnRoleDataReceiver;
                        pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).lastRespawnType;
                        if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                          pSVar3 = (SubscribableVariable_1_ReviveState_ *)
                                   mscorlib.dll::System::Collections::ObjectModel::
                                   Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                             (pCVar2,
                                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__get_SubscribableVariable__
                                             );
                          pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                          pSVar5 = (SpawnRoleReceiverVariable_1_ReviveState_ *)
                                   func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                                                  );
                          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
                          SpawnRoleReceiverVariable_1_ReviveState___ctor
                                    (pSVar5,pSVar3,pSVar4,
                                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                    );
                          if (pSVar1 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0)
                          {
                            (pSVar1->fields)._.lastRespawnType =
                                 (SpawnRoleReceiverVariable_1_LastRespawnType_ *)pSVar5;
                            pSVar1 = (this->fields).spawnRoleDataReceiver;
                            pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).shield;
                            if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                              pSVar8 = (SubscribableVariable_1_System_Single_ *)
                                       mscorlib.dll::System::Collections::ObjectModel::
                                       Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                 (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__get_SubscribableVariable__
                                                 );
                              pSVar4 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver
                              ;
                              pSVar9 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                        func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                              SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                              SpawnRoleReceiverVariable_1_System_Single___ctor
                                        (pSVar9,pSVar8,pSVar4,
                                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                        );
                              if (pSVar1 !=
                                  (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
                                (pSVar1->fields)._.shield = pSVar9;
                                pSVar1 = (this->fields).spawnRoleDataReceiver;
                                pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).isInGunMode;
                                if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                  pSVar6 = (SubscribableVariable_1_MV_Common_GamePassTier_ *)
                                           mscorlib.dll::System::Collections::ObjectModel::
                                           Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                     (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                                                  );
                                  pSVar4 = (SpawnRoleDataReceiver *)
                                           (this->fields).spawnRoleDataReceiver;
                                  pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                           func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                  SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::
                                  GamePassTier]::
                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
                                            ((SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)
                                             pSVar7,pSVar6,pSVar4,
                                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                            );
                                  if (pSVar1 !=
                                      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
                                    (pSVar1->fields)._.isInGunMode = pSVar7;
                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                    pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).isInVehicle;
                                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                      pSVar6 = (SubscribableVariable_1_MV_Common_GamePassTier_ *)
                                               mscorlib.dll::System::Collections::ObjectModel::
                                               Collection`1[VoxelHit]::
                                               Collection_1_VoxelHit__get_Items
                                                         (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                                                  );
                                      pSVar4 = (SpawnRoleDataReceiver *)
                                               (this->fields).spawnRoleDataReceiver;
                                      pSVar7 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                               func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common
                                      ::GamePassTier]::
                                      SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
                                                ((SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)pSVar7,pSVar6,pSVar4,
                                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                );
                                      if (pSVar1 !=
                                          (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0
                                         ) {
                                        (pSVar1->fields)._.isInVehicle = pSVar7;
                                        pSVar1 = (this->fields).spawnRoleDataReceiver;
                                        pCVar2 = (Collection_1_VoxelHit_ *)(this->fields).position;
                                        if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                          pSVar10 = (SubscribableVariable_1_UnityEngine_Vector3_ *)
                                                    mscorlib.dll::System::Collections::ObjectModel::
                                                    Collection`1[VoxelHit]::
                                                    Collection_1_VoxelHit__get_Items
                                                              (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__get_SubscribableVariable__
                                                  );
                                          pSVar4 = (SpawnRoleDataReceiver *)
                                                   (this->fields).spawnRoleDataReceiver;
                                          pSVar11 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                          SpawnRoleVariableTypes::
                                          SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                                          SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                    (pSVar11,pSVar10,pSVar4,
                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                          if (pSVar1 !=
                                              (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *
                                              )0x0) {
                                            (pSVar1->fields)._.position = pSVar11;
                                            pSVar1 = (this->fields).spawnRoleDataReceiver;
                                            pCVar2 = (Collection_1_VoxelHit_ *)
                                                     (this->fields).rotation;
                                            if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                              subscribableVariableExternal =
                                                   (SubscribableVariable_1_UnityEngine_Quaternion_ *
                                                   )mscorlib.dll::System::Collections::ObjectModel::
                                                    Collection`1[VoxelHit]::
                                                    Collection_1_VoxelHit__get_Items
                                                              (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__get_SubscribableVariable__
                                                  );
                                              pSVar4 = (SpawnRoleDataReceiver *)
                                                       (this->fields).spawnRoleDataReceiver;
                                              this_01 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                                                  );
                                              SpawnRoleVariableTypes::
                                              SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
                                              SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
                                                        (this_01,subscribableVariableExternal,pSVar4
                                                         ,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                              if (pSVar1 !=
                                                  (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                (pSVar1->fields)._.rotation = this_01;
                                                pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                pCVar2 = (Collection_1_VoxelHit_ *)
                                                         (this->fields).scale;
                                                if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                                  pSVar10 = (
                                                  SubscribableVariable_1_UnityEngine_Vector3_ *)
                                                  mscorlib.dll::System::Collections::ObjectModel::
                                                  Collection`1[VoxelHit]::
                                                  Collection_1_VoxelHit__get_Items
                                                            (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__get_SubscribableVariable__
                                                  );
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  pSVar11 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar11,pSVar10,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    (pSVar1->fields)._.scale = pSVar11;
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    pCVar2 = (Collection_1_VoxelHit_ *)
                                                             (this->fields).defaultScale;
                                                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                                      pSVar10 = (
                                                  SubscribableVariable_1_UnityEngine_Vector3_ *)
                                                  mscorlib.dll::System::Collections::ObjectModel::
                                                  Collection`1[VoxelHit]::
                                                  Collection_1_VoxelHit__get_Items
                                                            (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__get_SubscribableVariable__
                                                  );
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  pSVar11 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar11,pSVar10,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    (pSVar1->fields)._.defaultScale = pSVar11;
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    pCVar2 = (Collection_1_VoxelHit_ *)
                                                             (this->fields).reviveState;
                                                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                                      pSVar3 = (SubscribableVariable_1_ReviveState_
                                                                *)mscorlib.dll::System::Collections
                                                                  ::ObjectModel::
                                                                  Collection`1[VoxelHit]::
                                                                  Collection_1_VoxelHit__get_Items
                                                                            (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__get_SubscribableVariable__
                                                  );
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  pSVar5 = (SpawnRoleReceiverVariable_1_ReviveState_
                                                            *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[ReviveState]::
                                                  SpawnRoleReceiverVariable_1_ReviveState___ctor
                                                            (pSVar5,pSVar3,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    (pSVar1->fields)._.reviveState = pSVar5;
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    pCVar2 = (Collection_1_VoxelHit_ *)
                                                             (this->fields).pickupItemIsInHand;
                                                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                                      pSVar6 = (
                                                  SubscribableVariable_1_MV_Common_GamePassTier_ *)
                                                  mscorlib.dll::System::Collections::ObjectModel::
                                                  Collection`1[VoxelHit]::
                                                  Collection_1_VoxelHit__get_Items
                                                            (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                                                  );
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  pSVar7 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[MV::Common::
                                                  GamePassTier]::
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)pSVar7,pSVar6,pSVar4,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    (pSVar1->fields)._.pickupItemIsInHand = pSVar7;
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    pCVar2 = (Collection_1_VoxelHit_ *)
                                                             (this->fields).tierRequirement;
                                                    if (pCVar2 != (Collection_1_VoxelHit_ *)0x0) {
                                                      pSVar6 = (
                                                  SubscribableVariable_1_MV_Common_GamePassTier_ *)
                                                  mscorlib.dll::System::Collections::ObjectModel::
                                                  Collection`1[VoxelHit]::
                                                  Collection_1_VoxelHit__get_Items
                                                            (pCVar2,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__get_SubscribableVariable__
                                                  );
                                                  pSVar4 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  this_02 = (
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)func_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[MV::Common::
                                                  GamePassTier]::
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
                                                            (this_02,pSVar6,pSVar4,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    (pSVar1->fields)._.tierRequirement = this_02;
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    pUVar12 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar12,(Object *)this,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnKilled_int__int__MV__Common__PlayerKilledByType_
                                                  ,
                                                  MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
                                                  );
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(_UNK_?);
                                                      cRam_? = '\x01';
                                                    }
                                                    a = (pSVar1->fields)._.OnKilled;
                                                    do {
                                                      pDVar13 = mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a,
                                                                                 (Delegate *)pUVar12
                                                                                 ,(MethodInfo *)0x0)
                                                      ;
                                                      pDVar14 = (Delegate *)0x0;
                                                      if (pDVar13 != (Delegate *)0x0) {
                                                        if ((
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class
                                                  *)pDVar13->klass ==
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ) {
                                                    pDVar14 = pDVar13;
                                                  }
                                                  pAVar15 = (Action__Class *)
                                                                                                                        
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ;
                                                  if (pDVar14 == (Delegate *)0x0)
                                                  goto code_?;
                                                  }
                                                  pAVar16 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)func_?(&pDVar14[1].fields.method_info,
                                                                    pDVar14,a);
                                                  bVar17 = pAVar16 != a;
                                                  a = pAVar16;
                                                  } while (bVar17);
                                                  pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                  pUVar12 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar12,(Object *)this,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(_UNK_?);
                                                      cRam_? = '\x01';
                                                    }
                                                    ppAVar18 = &(pSVar1->fields)._.OnSuicide;
                                                    a_00 = *ppAVar18;
                                                    do {
                                                      pDVar13 = mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a_00,
                                                                                 (Delegate *)pUVar12
                                                                                 ,(MethodInfo *)0x0)
                                                      ;
                                                      pDVar14 = (Delegate *)0x0;
                                                      if (pDVar13 != (Delegate *)0x0) {
                                                        if ((Action__Class *)pDVar13->klass ==
                                                            TypeInfo__System__Action) {
                                                          pDVar14 = pDVar13;
                                                        }
                                                        pAVar15 = TypeInfo__System__Action;
                                                        if (pDVar14 == (Delegate *)0x0)
                                                        goto code_?;
                                                      }
                                                      pAVar19 = (Action *)
                                                                func_?(ppAVar18,pDVar14,a_00
                                                                               );
                                                      bVar17 = pAVar19 == a_00;
                                                      a_00 = pAVar19;
                                                      if (bVar17) {
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
  func_?(0);
  pDVar13 = extraout_ECX;
  pAVar15 = extraout_EDX;
code_?:
  func_?(pDVar13,pAVar15);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SpawnRoleDataReceiverOnOnKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnKilled
               (SpawnRoleDataMediator *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).OnKilled;
  if (this_00 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
    System.Core.dll::System::Action`3[Int32,Int32,MV::Common::PlayerKilledByType]::
    Action_3_Int32_Int32_MV_Common_PlayerKilledByType__Invoke
              (this_00,localPlayerActorNr,dmgDealerActorNr,damageType,
               MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Invoke_int__int__MV__Common__PlayerKilledByType_
              );
  }
  return;
}


/* Void SpawnRoleDataReceiverOnOnSuicide() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide
               (SpawnRoleDataMediator *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSuicide;
  if (pAVar1 == (Action *)0x0) {
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar1->fields)._._.method;
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  pOVar3 = (pAVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar3);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 != '\0') {
        pOVar4 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar4,pOVar3);
        return;
      }
      (*(code *)(&(pOVar3->klass->vtable).Equals)[this_01->flags].method)
                (pOVar3,(&(pOVar3->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar3->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar3,puVar10);
      return;
    }
    pOVar11 = pOVar3->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar4->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar3 = pOVar4;
    }
    pOVar4 = pOVar3;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar4,puVar10);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* SpawnRoleDataMediator() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator__ctor
               (SpawnRoleDataMediator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                          );
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar1,-1,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  (this->fields).woId = pSVar1;
  this_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                           );
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)this_00,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
            );
  (this->fields).spawnRoleMode = this_00;
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                          );
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isSeated = pSVar2;
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
           func_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                          );
  SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
            ((SubscribableVariable_1_System_Single_ *)pSVar3,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).health = pSVar3;
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar1,100,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
            );
  (this->fields).maxHealth = pSVar1;
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
            ((SubscribableVariable_1_System_Single_ *)pSVar3,0.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).shield = pSVar3;
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isInGunMode = pSVar2;
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).isInVehicle = pSVar2;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&puStack_5,(MethodInfo *)0x0);
  uVar6._0_4_ = pVVar4->x;
  uVar6._4_4_ = pVVar4->y;
  fVar7 = pVVar4->z;
  pSVar8 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?();
  value.z = fVar7;
  value.x = (float)(int)uVar6;
  value.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  SubscribableVariable`1[UnityEngine::Vector3]::SubscribableVariable_1_UnityEngine_Vector3___ctor
            (pSVar8,value,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).position =
       (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)pSVar8;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&fStack_10,(MethodInfo *)0x0);
  fStack_10 = pQVar9->x;
  puStack_5 = (undefined *)pQVar9->y;
  fVar7 = pQVar9->z;
  fVar11 = pQVar9->w;
  this_01 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?();
  value_00.y = (float)puStack_5;
  value_00.x = fStack_10;
  value_00.z = fVar7;
  value_00.w = fVar11;
  SubscribableVariable`1[UnityEngine::Quaternion]::
  SubscribableVariable_1_UnityEngine_Quaternion___ctor
            (this_01,value_00,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
            );
  (this->fields).rotation =
       (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *)this_01;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&puStack_5,(MethodInfo *)0x0);
  uVar12._0_4_ = pVVar4->x;
  uVar12._4_4_ = pVVar4->y;
  fVar7 = pVVar4->z;
  pSVar8 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?();
  value_01.z = fVar7;
  value_01.x = (float)(int)uVar12;
  value_01.y = (float)(int)((ulonglong)uVar12 >> 0x20);
  SubscribableVariable`1[UnityEngine::Vector3]::SubscribableVariable_1_UnityEngine_Vector3___ctor
            (pSVar8,value_01,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).scale =
       (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)pSVar8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&puStack_5,(MethodInfo *)0x0);
  uVar13._0_4_ = pVVar4->x;
  uVar13._4_4_ = pVVar4->y;
  fVar7 = pVVar4->z;
  pSVar8 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?();
  value_02.z = fVar7;
  value_02.x = (float)(int)uVar13;
  value_02.y = (float)(int)((ulonglong)uVar13 >> 0x20);
  SubscribableVariable`1[UnityEngine::Vector3]::SubscribableVariable_1_UnityEngine_Vector3___ctor
            (pSVar8,value_02,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
            );
  (this->fields).defaultScale =
       (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)pSVar8;
  pSVar3 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)func_?();
  SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
            ((SubscribableVariable_1_System_Single_ *)pSVar3,1.0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
            );
  (this->fields).size = pSVar3;
  this_02 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)this_02,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
            );
  (this->fields).lastRespawnType = this_02;
  pSVar2 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)pSVar2,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
            );
  (this->fields).pickupItemIsInHand = pSVar2;
  this_03 = (ReviveState *)func_?();
  ReviveState::ReviveState__ctor(this_03,(MethodInfo *)0x0);
  this_04 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)this_04,(int32_t)this_03,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
            );
  (this->fields).reviveState = this_04;
  method_00 = 
  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>
  ;
  this_05 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_ *)
            func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            ((ReadOnlyCollection_1_UnityEngine_Vector2_ *)this_05,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
            );
  (this->fields).tierRequirement = this_05;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  spawnRoleType = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(this->fields).spawnRoleMode;
  this_06 = (SpawnRoleModeTypeWrapper *)func_?();
  SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor(this_06,spawnRoleType,(MethodInfo *)0x0);
  (this->fields).SpawnRoleModeTypeWrapper = this_06;
  return;
}


/* Void add_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnKilled
               (SpawnRoleDataMediator *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)func_?(ppAVar1,pDVar3,a)
    ;
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_remove_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

