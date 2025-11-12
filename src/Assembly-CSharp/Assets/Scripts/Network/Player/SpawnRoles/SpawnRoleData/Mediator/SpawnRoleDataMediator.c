
/* Void ActivateSpawnRole(ISpawnRoleLocal, ISpawnRoleLocal, Vector3, Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_ActivateSpawnRole
               (SpawnRoleDataMediator *this,ISpawnRoleLocal *currentSpawnRole,
               ISpawnRoleLocal *prevSpawnRole,Vector3 *newPosition,Quaternion *newRotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ISpawnRoleLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ISpawnRoleLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  if ((this->fields).spawnRoleDataReceiver ==
      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
    uVar3 = 0xffffffff;
    if (prevSpawnRole != (ISpawnRoleLocal *)0x0) goto code_?;
  }
  else {
    if (prevSpawnRole == (ISpawnRoleLocal *)0x0) goto code_?;
    uVar4 = FUN_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
    pIVar5 = prevSpawnRole->klass;
    pSVar6 = (this->fields).spawnRoleDataReceiver;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar8 = &(pIVar5->vtable).Activate + (pIVar5->interfaceOffsets[uVar2].offset + 1);
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar7);
    }
    pVVar8 = (VirtualInvokeData *)FUN_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*pVVar8->methodPtr)(prevSpawnRole,(ulonglong)uVar4,pSVar6,pVVar8->method);
    pSVar6 = (this->fields).spawnRoleDataReceiver;
    if (pSVar6 == (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0)
    goto code_?;
    (pSVar6->fields)._.isActive = 0;
    SpawnRoleDataMediator_SetupNewSpawnRoleDataReceiver(this,(MethodInfo *)0x0);
code_?:
    uVar4 = FUN_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
    uVar3 = (ulonglong)uVar4;
  }
  pSVar6 = (this->fields).spawnRoleDataReceiver;
  if (currentSpawnRole != (ISpawnRoleLocal *)0x0) {
    pIVar5 = currentSpawnRole->klass;
    uVar2._0_1_ = (pIVar5->_1).rank;
    uVar2._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar2 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar8 = &(pIVar5->vtable).Activate + pIVar5->interfaceOffsets[uVar1].offset;
          goto code_?;
        }
        uVar7 = (short)uVar1 + 1;
        uVar1 = (ulonglong)uVar7;
      } while (uVar7 < uVar2);
    }
    pVVar8 = (VirtualInvokeData *)FUN_?(currentSpawnRole,TypeInfo__ISpawnRoleLocal,0);
code_?:
    uStack_9._0_4_ = newPosition->x;
    uStack_9._4_4_ = newPosition->y;
    fStack_10 = newRotation->x;
    fStack_11 = newRotation->y;
    fStack_12 = newRotation->z;
    fStack_13 = newRotation->w;
    fStack_14 = newPosition->z;
    (*pVVar8->methodPtr)(currentSpawnRole,uVar3,pSVar6,&uStack_9,&fStack_10,pVVar8->method);
    return;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DeActivatePrevSpawnRoleDataReceiver(ISpawnRoleLocal) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_DeActivatePrevSpawnRoleDataReceiver
               (SpawnRoleDataMediator *this,ISpawnRoleLocal *prevSpawnRole,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ISpawnRoleLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).spawnRoleDataReceiver ==
      (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
    return;
  }
  if (prevSpawnRole != (ISpawnRoleLocal *)0x0) {
    uVar1 = FUN_?(4,TypeInfo__ISpawnRoleLocal,prevSpawnRole);
    pIVar2 = prevSpawnRole->klass;
    uVar3 = 0;
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    uVar5._0_1_ = (pIVar2->_1).rank;
    uVar5._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ISpawnRoleLocal) {
          pVVar6 = &(pIVar2->vtable).Activate + (pIVar2->interfaceOffsets[uVar3].offset + 1);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    pVVar6 = (VirtualInvokeData *)FUN_?(prevSpawnRole,TypeInfo__ISpawnRoleLocal,1);
code_?:
    (*pVVar6->methodPtr)(prevSpawnRole,(ulonglong)uVar1,pSVar4,pVVar6->method);
    pSVar4 = (this->fields).spawnRoleDataReceiver;
    if (pSVar4 != (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)0x0) {
      (pSVar4->fields)._.isActive = 0;
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnKilled_int__int__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__get_SubscribableVariable__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleDataReceiverInternal *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverInternal
                         );
  bVar2 = iRam_? != 0;
  (pSVar1->fields)._.isActive = 1;
  (this->fields).spawnRoleDataReceiver = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (this->fields).woId;
  pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
  if (pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
    pSVar9 = (pSVar7->fields)._.subscribableVariable;
    pSVar10 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                           );
    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32]::
    SpawnRoleReceiverVariable_1_System_Int32___ctor
              (pSVar10,pSVar9,pSVar8,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
              );
    if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
      bVar2 = iRam_? != 0;
      (pSVar8->fields).woId = pSVar10;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pSVar11 = (this->fields).spawnRoleMode;
      pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
      if (pSVar11 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0) {
        pSVar12 = (SubscribableVariable_1_System_Int32Enum_ *)
                  (pSVar11->fields)._.subscribableVariable;
        this_00 = (SpawnRoleReceiverVariable_1_MV_Common_SpawnRoleModeType_ *)
                  FUN_?(
                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>
                               );
        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
        SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                  ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_00,pSVar12,pSVar8,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::SpawnRoleModeType>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::SpawnRoleModeType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                  );
        if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
          bVar2 = iRam_? != 0;
          (pSVar8->fields).spawnRoleMode = this_00;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(pSVar8->fields).spawnRoleMode >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pSVar13 = (this->fields).isSeated;
          pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
          if (pSVar13 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) {
            pSVar14 = (pSVar13->fields)._.subscribableVariable;
            pSVar15 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                      FUN_?(
                                   TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                   );
            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Boolean]::
            SpawnRoleReceiverVariable_1_System_Boolean___ctor
                      (pSVar15,pSVar14,pSVar8,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                      );
            if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
              bVar2 = iRam_? != 0;
              (pSVar8->fields).isSeated = pSVar15;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(pSVar8->fields).isSeated >> 0xc);
                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pSVar16 = (this->fields).health;
              pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
              if (pSVar16 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0
                 ) {
                pSVar17 = (pSVar16->fields)._.subscribableVariable;
                pSVar18 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                          FUN_?(
                                       TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                       );
                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                SpawnRoleReceiverVariable_1_System_Single___ctor
                          (pSVar18,pSVar17,pSVar8,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                          );
                if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                  bVar2 = iRam_? != 0;
                  (pSVar8->fields).health = pSVar18;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(pSVar8->fields).health >> 0xc);
                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pSVar7 = (this->fields).maxHealth;
                  pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                  if (pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
                                0x0) {
                    pSVar9 = (pSVar7->fields)._.subscribableVariable;
                    pSVar10 = (SpawnRoleReceiverVariable_1_System_Int32_ *)
                              FUN_?(
                                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>
                                           );
                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32]::
                    SpawnRoleReceiverVariable_1_System_Int32___ctor
                              (pSVar10,pSVar9,pSVar8,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<int>__SpawnRoleReceiverVariable_SubscribableVariable<int>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                              );
                    if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                      bVar2 = iRam_? != 0;
                      (pSVar8->fields).maxHealth = pSVar10;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)&(pSVar8->fields).maxHealth >> 0xc);
                        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      pSVar16 = (this->fields).size;
                      pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                      if (pSVar16 !=
                          (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0) {
                        pSVar17 = (pSVar16->fields)._.subscribableVariable;
                        pSVar18 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                  FUN_?(
                                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                               );
                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
                        SpawnRoleReceiverVariable_1_System_Single___ctor
                                  (pSVar18,pSVar17,pSVar8,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                  );
                        if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                          bVar2 = iRam_? != 0;
                          (pSVar8->fields).size = pSVar18;
                          if (bVar2) {
                            uVar3 = (uint)((ulonglong)&(pSVar8->fields).size >> 0xc);
                            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar2);
                          }
                          pSVar19 = (this->fields).lastRespawnType;
                          pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver;
                          if (pSVar19 !=
                              (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)
                              0x0) {
                            pSVar12 = (SubscribableVariable_1_System_Int32Enum_ *)
                                      (pSVar19->fields)._.subscribableVariable;
                            this_01 = (SpawnRoleReceiverVariable_1_LastRespawnType_ *)
                                      FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>
                                                  );
                            SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Int32Enum]::
                            SpawnRoleReceiverVariable_1_System_Int32Enum___ctor
                                      ((SpawnRoleReceiverVariable_1_System_Int32Enum_ *)this_01,
                                       pSVar12,pSVar8,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__SpawnRoleReceiverVariable_SubscribableVariable<LastRespawnType>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                      );
                            if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                              bVar2 = iRam_? != 0;
                              (pSVar8->fields).lastRespawnType = this_01;
                              if (bVar2) {
                                uVar3 = (uint)((ulonglong)&(pSVar8->fields).lastRespawnType >> 0xc)
                                ;
                                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              pSVar16 = (this->fields).shield;
                              pSVar8 = (SpawnRoleDataReceiver *)(this->fields).spawnRoleDataReceiver
                              ;
                              if (pSVar16 !=
                                  (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_
                                   *)0x0) {
                                pSVar17 = (pSVar16->fields)._.subscribableVariable;
                                pSVar18 = (SpawnRoleReceiverVariable_1_System_Single_ *)
                                          FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>
                                                  );
                                SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]
                                ::SpawnRoleReceiverVariable_1_System_Single___ctor
                                          (pSVar18,pSVar17,pSVar8,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<float>__SpawnRoleReceiverVariable_SubscribableVariable<float>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                          );
                                if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                  bVar2 = iRam_? != 0;
                                  (pSVar8->fields).shield = pSVar18;
                                  if (bVar2) {
                                    uVar3 = (uint)((ulonglong)&(pSVar8->fields).shield >> 0xc);
                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                    do {
                                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                      LOCK();
                                      bVar2 = uVar5 == *puVar6;
                                      if (bVar2) {
                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar2);
                                  }
                                  pSVar13 = (this->fields).isInGunMode;
                                  pSVar8 = (SpawnRoleDataReceiver *)
                                           (this->fields).spawnRoleDataReceiver;
                                  if (pSVar13 !=
                                      (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                       *)0x0) {
                                    pSVar14 = (pSVar13->fields)._.subscribableVariable;
                                    pSVar15 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                              FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                    SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                    Boolean]::SpawnRoleReceiverVariable_1_System_Boolean___ctor
                                              (pSVar15,pSVar14,pSVar8,
                                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                              );
                                    if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                      bVar2 = iRam_? != 0;
                                      (pSVar8->fields).isInGunMode = pSVar15;
                                      if (bVar2) {
                                        uVar3 = (uint)((ulonglong)&(pSVar8->fields).isInGunMode >>
                                                       0xc);
                                        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                        do {
                                          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                          LOCK();
                                          bVar2 = uVar5 == *puVar6;
                                          if (bVar2) {
                                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar2);
                                      }
                                      pSVar13 = (this->fields).isInVehicle;
                                      pSVar8 = (SpawnRoleDataReceiver *)
                                               (this->fields).spawnRoleDataReceiver;
                                      if (pSVar13 !=
                                          (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                           *)0x0) {
                                        pSVar14 = (pSVar13->fields)._.subscribableVariable;
                                        pSVar15 = (SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                        SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::
                                        Boolean]::SpawnRoleReceiverVariable_1_System_Boolean___ctor
                                                  (pSVar15,pSVar14,pSVar8,
                                                                                                      
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                        if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                          bVar2 = iRam_? != 0;
                                          (pSVar8->fields).isInVehicle = pSVar15;
                                          if (bVar2) {
                                            uVar3 = (uint)((ulonglong)&(pSVar8->fields).isInVehicle
                                                           >> 0xc);
                                            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                            do {
                                              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                              LOCK();
                                              bVar2 = uVar5 == *puVar6;
                                              if (bVar2) {
                                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar2);
                                          }
                                          pSVar20 = (this->fields).position;
                                          pSVar8 = (SpawnRoleDataReceiver *)
                                                   (this->fields).spawnRoleDataReceiver;
                                          if (pSVar20 !=
                                              (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                               *)0x0) {
                                            pSVar21 = (pSVar20->fields)._.subscribableVariable;
                                            pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                            SpawnRoleVariableTypes::
                                            SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
                                            SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                      (pSVar22,pSVar21,pSVar8,
                                                                                                              
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                            if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                              bVar2 = iRam_? != 0;
                                              (pSVar8->fields).position = pSVar22;
                                              if (bVar2) {
                                                uVar3 = (uint)((ulonglong)
                                                                &(pSVar8->fields).position >> 0xc);
                                                lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                                                do {
                                                  uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                  puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                  LOCK();
                                                  bVar2 = uVar5 == *puVar6;
                                                  if (bVar2) {
                                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                  }
                                                  UNLOCK();
                                                } while (!bVar2);
                                              }
                                              pSVar23 = (this->fields).rotation;
                                              pSVar8 = (SpawnRoleDataReceiver *)
                                                       (this->fields).spawnRoleDataReceiver;
                                              if (pSVar23 !=
                                                  (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_
                                                  *)0x0) {
                                                subscribableVariableExternal =
                                                     (pSVar23->fields)._.subscribableVariable;
                                                this_02 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_
                                                  *)FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>
                                                  );
                                                SpawnRoleVariableTypes::
                                                SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]
                                                ::
                                                SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
                                                          (this_02,subscribableVariableExternal,
                                                           pSVar8,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Quaternion>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Quaternion>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                  bVar2 = iRam_? != 0;
                                                  (pSVar8->fields).rotation = this_02;
                                                  if (bVar2) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(pSVar8->fields).rotation >>
                                                                   0xc);
                                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  pSVar20 = (this->fields).scale;
                                                  pSVar8 = (SpawnRoleDataReceiver *)
                                                           (this->fields).spawnRoleDataReceiver;
                                                  if (pSVar20 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar21 = (pSVar20->fields)._.
                                                              subscribableVariable;
                                                    pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar22,pSVar21,pSVar8,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pSVar8->fields).scale = pSVar22;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pSVar8->fields).scale >> 0xc
                                                                     );
                                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar5 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    pSVar20 = (this->fields).defaultScale;
                                                    pSVar8 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    if (pSVar20 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                                  *)0x0) {
                                                    pSVar21 = (pSVar20->fields)._.
                                                              subscribableVariable;
                                                    pSVar22 = (
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *
                                                  )FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[UnityEngine::Vector3]
                                                  ::
                                                  SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
                                                            (pSVar22,pSVar21,pSVar8,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<UnityEngine::Vector3>__SpawnRoleReceiverVariable_SubscribableVariable<UnityEngine::Vector3>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pSVar8->fields).defaultScale = pSVar22;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pSVar8->fields).defaultScale
                                                                     >> 0xc);
                                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar5 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    pSVar24 = (this->fields).reviveState;
                                                    pSVar8 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    if (pSVar24 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_
                                                  *)0x0) {
                                                    subscribableVariableExternal_00 =
                                                         (pSVar24->fields)._.subscribableVariable;
                                                    this_03 = (
                                                  SpawnRoleReceiverVariable_1_ReviveState_ *)
                                                  FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::Object]::
                                                  SpawnRoleReceiverVariable_1_System_Object___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_Object_ *)
                                                  this_03,(SubscribableVariable_1_System_Object_ *)
                                                          subscribableVariableExternal_00,pSVar8,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__SpawnRoleReceiverVariable_SubscribableVariable<ReviveState>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pSVar8->fields).reviveState = this_03;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pSVar8->fields).reviveState
                                                                     >> 0xc);
                                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar5 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    pSVar13 = (this->fields).pickupItemIsInHand;
                                                    pSVar8 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    if (pSVar13 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_
                                                  *)0x0) {
                                                    pSVar14 = (pSVar13->fields)._.
                                                              subscribableVariable;
                                                    pSVar15 = (
                                                  SpawnRoleReceiverVariable_1_System_Boolean_ *)
                                                  FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::Boolean]::
                                                  SpawnRoleReceiverVariable_1_System_Boolean___ctor
                                                            (pSVar15,pSVar14,pSVar8,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__SpawnRoleReceiverVariable_SubscribableVariable<bool>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pSVar8->fields).pickupItemIsInHand = pSVar15;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pSVar8->fields).
                                                                       pickupItemIsInHand >> 0xc);
                                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar5 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    pSVar25 = (this->fields).tierRequirement;
                                                    pSVar8 = (SpawnRoleDataReceiver *)
                                                             (this->fields).spawnRoleDataReceiver;
                                                    if (pSVar25 !=
                                                        (
                                                  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_
                                                  *)0x0) {
                                                    subscribableVariableExternal_01 =
                                                         (SubscribableVariable_1_System_ByteEnum_ *)
                                                         (pSVar25->fields)._.subscribableVariable;
                                                    this_04 = (
                                                  SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_
                                                  *)FUN_?(
                                                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>
                                                  );
                                                  SpawnRoleVariableTypes::
                                                  SpawnRoleReceiverVariable`1[System::ByteEnum]::
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum___ctor
                                                            ((
                                                  SpawnRoleReceiverVariable_1_System_ByteEnum_ *)
                                                  this_04,subscribableVariableExternal_01,pSVar8,
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<MV::Common::GamePassTier>__SpawnRoleReceiverVariable_SubscribableVariable<MV::Common::GamePassTier>__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataReceiver_
                                                  );
                                                  if (pSVar8 != (SpawnRoleDataReceiver *)0x0) {
                                                    bVar2 = iRam_? != 0;
                                                    (pSVar8->fields).tierRequirement = this_04;
                                                    if (bVar2) {
                                                      uVar3 = (uint)((ulonglong)
                                                                      &(pSVar8->fields).
                                                                       tierRequirement >> 0xc);
                                                      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6)
                                                              * 8;
                                                      do {
                                                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                        LOCK();
                                                        bVar2 = uVar5 == *puVar6;
                                                        if (bVar2) {
                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                        }
                                                        UNLOCK();
                                                      } while (!bVar2);
                                                    }
                                                    pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                    b = (Delegate *)
                                                        FUN_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  FUN_?(b,this);
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  a = (pSVar1->fields)._.OnKilled;
                                                  do {
                                                    pDVar26 = mscorlib.dll::System::Delegate::
                                                              Delegate_Combine((Delegate *)a,b,
                                                                               (MethodInfo *)0x0);
                                                    pAVar27 = 
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  ;
                                                  if (pDVar26 == (Delegate *)0x0) {
                                                    pAVar28 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)0x0;
                                                  }
                                                  else {
                                                    pAVar28 = (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)FUN_?(pDVar26,
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                                  if (pAVar28 ==
                                                      (
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)0x0) {
                                                    FUN_?(pDVar26,pAVar27);
                                                    pcVar29 = (code *)swi(3);
                                                    (*pcVar29)();
                                                    return;
                                                  }
                                                  }
                                                  ppAVar30 = &(pSVar1->fields)._.OnKilled;
                                                  LOCK();
                                                  pAVar31 = *ppAVar30;
                                                  bVar2 = a == pAVar31;
                                                  if (bVar2) {
                                                    *ppAVar30 = pAVar28;
                                                    pAVar31 = a;
                                                  }
                                                  UNLOCK();
                                                  pAVar28 = a;
                                                  if (!bVar2) {
                                                    pAVar28 = pAVar31;
                                                  }
                                                  if (iRam_? != 0) {
                                                    uVar3 = (uint)((ulonglong)
                                                                    &(pSVar1->fields)._.OnKilled >>
                                                                   0xc);
                                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                      LOCK();
                                                      bVar2 = uVar5 == *puVar6;
                                                      if (bVar2) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar2);
                                                  }
                                                  bVar2 = pAVar28 != a;
                                                  a = pAVar28;
                                                  } while (bVar2);
                                                  pSVar1 = (this->fields).spawnRoleDataReceiver;
                                                  this_05 = (NavMesh_OnNavMeshPreUpdate *)
                                                            FUN_?(TypeInfo__System__Action);
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_05,(Object *)this,
                                                                                                                          
                                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleDataReceiverOnOnSuicide__
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar1 !=
                                                      (
                                                  SpawnRoleDataMediator_SpawnRoleDataReceiverInternal
                                                  *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__System__Action);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    a_00 = (pSVar1->fields)._.OnSuicide;
                                                    do {
                                                      pAVar32 = (Action *)
                                                                mscorlib.dll::System::Delegate::
                                                                Delegate_Combine((Delegate *)a_00,
                                                                                 (Delegate *)this_05
                                                                                 ,(MethodInfo *)0x0)
                                                      ;
                                                      pAVar33 = (Action *)0x0;
                                                      if (pAVar32 != (Action *)0x0) {
                                                        if (pAVar32->klass ==
                                                            TypeInfo__System__Action) {
                                                          pAVar33 = pAVar32;
                                                        }
                                                        if (pAVar33 == (Action *)0x0) {
                                                          FUN_?(pAVar32);
                                                          pcVar29 = (code *)swi(3);
                                                          (*pcVar29)();
                                                          return;
                                                        }
                                                      }
                                                      ppAVar34 = &(pSVar1->fields)._.OnSuicide;
                                                      LOCK();
                                                      pAVar32 = *ppAVar34;
                                                      bVar2 = a_00 == pAVar32;
                                                      if (bVar2) {
                                                        *ppAVar34 = pAVar33;
                                                        pAVar32 = a_00;
                                                      }
                                                      UNLOCK();
                                                      pAVar33 = a_00;
                                                      if (!bVar2) {
                                                        pAVar33 = pAVar32;
                                                      }
                                                      if (iRam_? != 0) {
                                                        uVar3 = (uint)((ulonglong)
                                                                        &(pSVar1->fields)._.
                                                                         OnSuicide >> 0xc);
                                                        lVar4 = (ulonglong)
                                                                ((uVar3 & 0x1fffff) >> 6) * 8;
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                   (lVar4 + 0xADDR);
                                                          puVar6 = (ulonglong *)
                                                                   (lVar4 + 0xADDR);
                                                          LOCK();
                                                          bVar2 = uVar5 == *puVar6;
                                                          if (bVar2) {
                                                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                        } while (!bVar2);
                                                      }
                                                      bVar2 = pAVar33 != a_00;
                                                      a_00 = pAVar33;
                                                    } while (bVar2);
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
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
    return;
  }
  return;
}


/* SpawnRoleDataMediator() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator__ctor
               (SpawnRoleDataMediator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ReviveState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleModeTypeWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>__SpawnRoleVariableInternal_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>__SpawnRoleVariableInternal_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>__SpawnRoleVariableInternal_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>__SpawnRoleVariableInternal_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                         );
  FUN_?(pSVar1);
  bVar2 = iRam_? != 0;
  (this->fields).woId = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).woId >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>
                         );
  SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
  SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
            ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_00,0,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::SpawnRoleModeType>__SpawnRoleVariableInternal_MV__Common__SpawnRoleModeType_
            );
  bVar2 = iRam_? != 0;
  (this->fields).spawnRoleMode = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRoleMode >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                         );
  FUN_?(pSVar7);
  bVar2 = iRam_? != 0;
  (this->fields).isSeated = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).isSeated >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar8 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                         );
  FUN_?(pSVar8,0);
  bVar2 = iRam_? != 0;
  (this->fields).health = pSVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).health >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar1 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<int>
                         );
  FUN_?(pSVar1,100);
  bVar2 = iRam_? != 0;
  (this->fields).maxHealth = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).maxHealth >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar8 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                         );
  FUN_?(pSVar8,0);
  bVar2 = iRam_? != 0;
  (this->fields).shield = pSVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).shield >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                         );
  FUN_?(pSVar7);
  bVar2 = iRam_? != 0;
  (this->fields).isInGunMode = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).isInGunMode >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                         );
  FUN_?(pSVar7);
  bVar2 = iRam_? != 0;
  (this->fields).isInVehicle = pSVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).isInVehicle >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar10._0_4_ = (pVVar9->zeroVector).x;
  uVar10._4_4_ = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  pSVar12 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                         );
  uStack_13 = uVar10;
  fStack_14 = fVar11;
  FUN_?(pSVar12,&uStack_13);
  bVar2 = iRam_? != 0;
  (this->fields).position = pSVar12;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).position >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar15 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar11 = (pQVar15->identityQuaternion).x;
  fVar16 = (pQVar15->identityQuaternion).y;
  fVar17 = (pQVar15->identityQuaternion).z;
  fVar18 = (pQVar15->identityQuaternion).w;
  pSVar19 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Quaternion_ *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>
                         );
  pMVar20 = MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Quaternion>__SpawnRoleVariableInternal_UnityEngine__Quaternion_
           ->klass->rgctx_data[3].method;
  pvVar21 = pMVar20->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
    pvVar21 = (void *)FUN_?(pvVar21);
  }
  pSVar22 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)FUN_?(pvVar21);
  bVar2 = iRam_? != 0;
  (pSVar22->fields)._.value.x = fVar11;
  (pSVar22->fields)._.value.y = fVar16;
  (pSVar22->fields)._.value.z = fVar17;
  (pSVar22->fields)._.value.w = fVar18;
  (pSVar19->fields)._.subscribableVariable = pSVar22;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pSVar19->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pSVar22 = (pSVar19->fields)._.subscribableVariable;
  pvVar21 = pMVar20->klass->rgctx_data[0xc].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
    pvVar21 = (void *)FUN_?(pvVar21);
  }
  uVar10 = FUN_?(pvVar21);
  FUN_?(uVar10,pSVar19,pMVar20->klass->rgctx_data[0xb].rgctxDataDummy);
  if (pSVar22 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    FUN_?(pSVar22,uVar10,pMVar20->klass->rgctx_data[0xe].rgctxDataDummy);
    bVar2 = iRam_? != 0;
    (this->fields).rotation = pSVar19;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).rotation >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23._0_4_ = (pVVar9->oneVector).x;
    uVar23._4_4_ = (pVVar9->oneVector).y;
    fVar11 = (pVVar9->oneVector).z;
    pSVar12 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                           );
    uStack_13 = uVar23;
    fStack_14 = fVar11;
    FUN_?(pSVar12,&uStack_13);
    bVar2 = iRam_? != 0;
    (this->fields).scale = pSVar12;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).scale >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24._0_4_ = (pVVar9->oneVector).x;
    uVar24._4_4_ = (pVVar9->oneVector).y;
    fVar11 = (pVVar9->oneVector).z;
    pSVar12 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<UnityEngine::Vector3>
                           );
    uStack_13 = uVar24;
    fStack_14 = fVar11;
    FUN_?(pSVar12);
    bVar2 = iRam_? != 0;
    (this->fields).defaultScale = pSVar12;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).defaultScale >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pSVar8 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<float>
                           );
    FUN_?(pSVar8,_UNK_?);
    bVar2 = iRam_? != 0;
    (this->fields).size = pSVar8;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).size >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_01 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_LastRespawnType_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>
                           );
    SpawnRoleDataMediator+SpawnRoleVariableInternal`1[System::Int32Enum]::
    SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum___ctor
              ((SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32Enum_ *)this_01,0,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<LastRespawnType>__SpawnRoleVariableInternal_LastRespawnType_
              );
    bVar2 = iRam_? != 0;
    (this->fields).lastRespawnType = this_01;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).lastRespawnType >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pSVar7 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)
              FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<bool>
                           );
    FUN_?(pSVar7);
    bVar2 = iRam_? != 0;
    (this->fields).pickupItemIsInHand = pSVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).pickupItemIsInHand >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_02 = (ReviveState *)FUN_?(TypeInfo__ReviveState);
    ReviveState::ReviveState__ctor(this_02,(MethodInfo *)0x0);
    object = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)
             FUN_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>
                          );
    pMVar20 = MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<ReviveState>__SpawnRoleVariableInternal_ReviveState_
             ->klass->rgctx_data[3].method;
    pvVar21 = pMVar20->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
      pvVar21 = (void *)FUN_?(pvVar21);
    }
    pSVar25 = (SubscribableVariable_1_ReviveState_ *)FUN_?(pvVar21);
    iVar26 = iRam_?;
    (pSVar25->fields)._.value = this_02;
    if (iVar26 != 0) {
      uVar3 = (uint)((ulonglong)&pSVar25->fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        iVar26 = iRam_?;
      } while (!bVar2);
    }
    (object->fields)._.subscribableVariable = pSVar25;
    if (iVar26 != 0) {
      uVar3 = (uint)((ulonglong)&object->fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pSVar25 = (object->fields)._.subscribableVariable;
    pvVar21 = pMVar20->klass->rgctx_data[0xc].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
      pvVar21 = (void *)FUN_?(pvVar21);
    }
    this_03 = (UnityAction_1_System_Object_ *)FUN_?(pvVar21);
    pIVar27 = pMVar20->klass->rgctx_data;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)object,pIVar27[0xb].rgctxDataDummy,pIVar27[0xd].method);
    if (pSVar25 != (SubscribableVariable_1_ReviveState_ *)0x0) {
      FUN_?(pSVar25,this_03,pMVar20->klass->rgctx_data[0xe].rgctxDataDummy);
      bVar2 = iRam_? != 0;
      (this->fields).reviveState = object;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).reviveState >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      object_00 = (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_GamePassTier_ *)
                  FUN_?(
                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>
                               );
      pMVar20 = MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator__SpawnRoleVariableInternal<MV::Common::GamePassTier>__SpawnRoleVariableInternal_MV__Common__GamePassTier_
               ->klass->rgctx_data[3].method;
      pvVar21 = pMVar20->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
        pvVar21 = (void *)FUN_?(pvVar21);
      }
      pSVar28 = (SubscribableVariable_1_MV_Common_GamePassTier_ *)FUN_?(pvVar21);
      bVar2 = iRam_? != 0;
      (pSVar28->fields)._.value = 0;
      (object_00->fields)._.subscribableVariable = pSVar28;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&object_00->fields >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pSVar28 = (object_00->fields)._.subscribableVariable;
      pvVar21 = pMVar20->klass->rgctx_data[0xc].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
        pvVar21 = (void *)FUN_?(pvVar21);
      }
      this_04 = (UnityAction_1_System_ByteEnum_ *)FUN_?(pvVar21);
      pIVar27 = pMVar20->klass->rgctx_data;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_04,(Object *)object_00,pIVar27[0xb].rgctxDataDummy,pIVar27[0xd].method);
      if (pSVar28 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0) {
        FUN_?(pSVar28,this_04,pMVar20->klass->rgctx_data[0xe].rgctxDataDummy);
        bVar2 = iRam_? != 0;
        (this->fields).tierRequirement = object_00;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).tierRequirement >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pSVar29 = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)(this->fields).spawnRoleMode;
        pSVar30 = (SpawnRoleModeTypeWrapper *)FUN_?(TypeInfo__SpawnRoleModeTypeWrapper);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar2 = iRam_? != 0;
        (pSVar30->fields).spawnRoleType = pSVar29;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&pSVar30->fields >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        uVar10 = FUN_?(
                              TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                              );
        FUN_?(uVar10,pSVar30,
                      MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_
                     );
        if (pSVar29 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
          FUN_?(pSVar29,uVar10);
          bVar2 = iRam_? != 0;
          (this->fields).SpawnRoleModeTypeWrapper = pSVar30;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields).SpawnRoleModeTypeWrapper >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void add_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnKilled
               (SpawnRoleDataMediator *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  a = (this->fields).OnKilled;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar4 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  a = (this->fields).OnSuicide;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = a == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = a;
    }
    UNLOCK();
    pAVar3 = a;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != a;
    a = pAVar3;
  } while (bVar5);
  return;
}


/* Void remove_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_remove_OnKilled
               (SpawnRoleDataMediator *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  source = (this->fields).OnKilled;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar4 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataMediator::SpawnRoleDataMediator_remove_OnSuicide
               (SpawnRoleDataMediator *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  source = (this->fields).OnSuicide;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = source == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = source;
    }
    UNLOCK();
    pAVar3 = source;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != source;
    source = pAVar3;
  } while (bVar5);
  return;
}

