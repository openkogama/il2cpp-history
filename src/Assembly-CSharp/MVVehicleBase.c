
/* Void Enter(MVAvatar, Int32) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Enter
               (MVVehicleBase *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    instigatorActorNr = (vehicleUser->fields)._._._.ownerActorNr;
    (*(vehicleUser->klass->vtable).BeforeVehicleEntered.methodPtr)(vehicleUser);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0)) {
      this_01 = (this->fields).seatManager;
      iVar4 = (pMVar3->fields)._._ActorNr_k__BackingField;
      if (this_01 != (VehicleSeatManager *)0x0) {
        VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
                  (this_01,instigatorActorNr,iVar4 == instigatorActorNr,vehicleUser,seatID,
                   (MethodInfo *)0x0);
        pMVar5 = (this->fields).localObjects;
        if (iVar4 != instigatorActorNr) {
          if (pMVar5 != (MVVehicleBase_LocalObjectsBase *)0x0) {
            (*(pMVar5->klass->vtable).Destroy.methodPtr)
                      (pMVar5,(pMVar5->klass->vtable).Destroy.method);
            bVar6 = iRam_? != 0;
            (this->fields).localObjects = (MVVehicleBase_LocalObjectsBase *)0x0;
            if (bVar6) {
              uVar7 = (uint)((ulonglong)&(this->fields).localObjects >> 0xc);
              lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
              do {
                uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar6 = uVar9 == *puVar10;
                if (bVar6) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
          }
code_?:
          (*(vehicleUser->klass->vtable).OnEnterVehicle.methodPtr)
                    (vehicleUser,(vehicleUser->klass->vtable).OnEnterVehicle.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(this->klass->vtable).VehicleEntered.methodPtr)
                    (this,vehicleUser,(ulonglong)(uint)seatID,
                     (this->klass->vtable).VehicleEntered.method);
          return;
        }
        if (pMVar5 == (MVVehicleBase_LocalObjectsBase *)0x0) {
          bVar11 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if (((vehicleUser->klass->_1).naturalAligment < bVar11) ||
             ((MVAvatarLocal__Class *)(vehicleUser->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1]
              != TypeInfo__MVAvatarLocal)) {
            FUN_?(vehicleUser);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pMVar5 = (MVVehicleBase_LocalObjectsBase *)
                    (*(this->klass->vtable).__unknown_1.methodPtr)
                              (this,(ulonglong)(uint)seatID,vehicleUser,
                               (this->klass->vtable).__unknown_1.method);
          bVar6 = iRam_? != 0;
          (this->fields).localObjects = pMVar5;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).localObjects >> 0xc);
            lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          pMVar13 = (pMVar2->fields)._PlayerController_k__BackingField;
          pMVar5 = (this->fields).localObjects;
          if (pMVar13 != (MVLocalObjectController *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar14 = (pMVar13->fields).localControlledStack;
            if (pLVar14 != (List_1_ILocalObject_ *)0x0) {
              FUN_?(pLVar14,pMVar5);
              bVar11 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
              if (((vehicleUser->klass->_1).naturalAligment < bVar11) ||
                 ((MVAvatarLocal__Class *)
                  (vehicleUser->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
                  TypeInfo__MVAvatarLocal)) {
                FUN_?(vehicleUser);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              MVAvatarLocal::MVAvatarLocal_SetAnimation
                        ((MVAvatarLocal *)vehicleUser,StringLiteral_Idle,(MethodInfo *)0x0);
              pMVar5 = (this->fields).localObjects;
              if (pMVar5 != (MVVehicleBase_LocalObjectsBase *)0x0) {
                (*(pMVar5->klass->vtable).Enter.methodPtr)
                          (pMVar5,(pMVar5->klass->vtable).Enter.method);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVAvatar GetDriver() */

MVAvatar *
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_GetDriver(MVVehicleBase *this,MethodInfo *method)

{
  this_00 = (this->fields).seatManager;
  if (this_00 != (VehicleSeatManager *)0x0) {
    pVVar1 = VehicleSeatManager::VehicleSeatManager_get_DriverSeat(this_00,(MethodInfo *)0x0);
    if (pVVar1 != (VehicleSeatBase *)0x0) {
      return (pVVar1->fields).owner;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVAvatar *)(*pcVar2)();
  return pMVar3;
}


/* MVVehicleBase+HealthChangeAffects HealthChangeResult(Single) */

MVVehicleBase_HealthChangeAffects
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_HealthChangeResult
          (MVVehicleBase *this,float health,MethodInfo *method)

{
  if (0.0 < health) {
    MVar1.detachAvatar = 0;
    MVar1.causeVehicleDestruction = 0;
    return MVar1;
  }
  pMVar2 = (this->fields).IsVehicleDead;
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar2->fields).value,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        MStackX_10.causeVehicleDestruction = *(char *)&pOVar3[1].klass == '\0';
        MStackX_10.detachAvatar = MStackX_10.causeVehicleDestruction;
        return MStackX_10;
      }
      FUN_?(pOVar3,lRam_?);
      pcVar4 = (code *)swi(3);
      MVar1 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
      return MVar1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  MVar1 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
  return MVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Initialize
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isDead);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    pMVar1 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (this_00,StringLiteral_isDead,0.0,1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).IsVehicleDead = pMVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).IsVehicleDead >> 0xc);
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
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      pVVar7 = (VehicleSeatManager *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_01,
                           VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                          );
      bVar2 = iRam_? != 0;
      (this->fields).seatManager = pVVar7;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).seatManager >> 0xc);
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
      pVVar7 = (this->fields).seatManager;
      if (pVVar7 != (VehicleSeatManager *)0x0) {
        VehicleSeatManager::VehicleSeatManager_Init
                  (pVVar7,this,(this->fields).IsVehicleDead,(MethodInfo *)0x0);
        pMVar8 = (this->fields)._._._.group;
        if (pMVar8 != (MVGroup *)0x0) {
          pMVar9 = pMVar8->klass;
          bVar10 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
          if ((bVar10 <= (pMVar9->_1).naturalAligment) &&
             ((MVWorldObjectSpawnerVehicle__Class *)(pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1]
              == TypeInfo__MVWorldObjectSpawnerVehicle)) {
            (this->fields)._IsInSpawner_k__BackingField = 1;
          }
        }
        layerName = StringLiteral_Player;
        transfrom = (this->fields)._._._.transform;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Default,(MethodInfo *)0x0);
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (layerName,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_2
                  (transfrom,(LayerMask)(1 << ((byte)iVar11 & 0x1f)),layer,(MethodInfo *)0x0);
        piVar12 = &(this->fields)._._._.interactionFlags;
        *piVar12 = *piVar12 | 0x210300000;
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean IsPlayerInVehicle(Int32, Boolean) */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_IsPlayerInVehicle
               (MVVehicleBase *this,int32_t playerId,bool onlyDriver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).seatManager;
  if ((pVVar1 == (VehicleSeatManager *)0x0) ||
     (pLVar2 = (pVVar1->fields).seats, pLVar2 == (List_1_VehicleSeatBase_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar2;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 0;
      }
      if (LStack_10._current == (Object *)0x0) break;
      if (LStack_10._current[2].monitor == (MonitorData *)0x0) goto code_?;
      if (((*(int *)(LStack_10._current[2].monitor + 0x10) == playerId) &&
          (*(char *)&LStack_10._current[5].klass != '\0')) &&
         ((onlyDriver == 0 || (*(char *)((longlong)&LStack_10._current[5].klass + 1) == '\0')))) {
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void LeaveLocal() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_LeaveLocal
               (MVVehicleBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localObjects;
  if (pMVar1 != (MVVehicleBase_LocalObjectsBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).Leave.methodPtr)(pMVar1,(pMVar1->klass->vtable).Leave.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_OnDataUpdate
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (this->fields)._._._._.data;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields)._.blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields)._.blueprintData = pDVar2;
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields)._.blueprintData >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pDVar2 = (this->fields)._.blueprintData;
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields)._.childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar3 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->fields)._.childIdMap = pDVar2;
          bVar3 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields)._.childIdMap >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pDVar2 = (this->fields)._.childIdMap;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uStack_10 = 0;
          uStack_11 = 0;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&pDStack_12 >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          uStack_13 = (ulonglong)(uint)(pDVar2->fields)._version;
          uStack_14 = 2;
          DStack_15._version = (undefined4)uStack_13;
          DStack_15._index = uStack_13._4_4_;
          DStack_15._current.key = (Object *)0x0;
          DStack_15._current.value = (Object *)0x0;
          DStack_15._getEnumeratorRetType = 2;
          DStack_15._36_4_ = 0;
          pDStack_12 = pDVar2;
          DStack_15._dictionary = pDVar2;
          while( true ) {
            bVar16 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_15,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar16 == 0) {
              return;
            }
            this_01 = (this->fields)._.idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,DStack_15._current.value,DStack_15._current.key,
                       (InsertionBehavior__Enum)pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_RefillEnergy
               (MVVehicleBase *this,VehicleEnergyRefill *vehicleEnergyRefill,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_vehicleEnergyRefill);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).audioManager;
    pVVar2 = (this->fields).vehicleBaseObject;
    if (pVVar2 != (VehicleBaseObject *)0x0) {
      obj = (this->fields)._._._.transform;
      audioSource = (pVVar2->fields).vehicleEnergyPickupSound;
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        if (this_00 != (AudioManager *)0x0) {
          VStack_7.x = VStack_3.x;
          VStack_7.y = VStack_3.y;
          VStack_7.z = VStack_3.z;
          AudioManager::AudioManager_Play_2
                    (this_00,StringLiteral_vehicleEnergyRefill,audioSource,&VStack_7,
                     (MethodInfo *)0x0);
          pMVar8 = (this->fields).localObjects;
          if (pMVar8 != (MVVehicleBase_LocalObjectsBase *)0x0) {
            VStack_7.z = vehicleEnergyRefill->amount;
            VStack_7._0_8_ = *(undefined8 *)vehicleEnergyRefill;
            (*(pMVar8->klass->vtable).__unknown_4.methodPtr)
                      (pMVar8,&VStack_7,(pMVar8->klass->vtable).__unknown_4.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_RollbackRefillEnergyPrediction
               (MVVehicleBase *this,int32_t spawnerId,MethodInfo *method)

{
  if ((this->fields).localObjects != (MVVehicleBase_LocalObjectsBase *)0x0) {
    pMVar1 = (this->fields).localObjects;
    pMVar2 = pMVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar2->vtable).__unknown_6.methodPtr)(pMVar1,spawnerId,(pMVar2->vtable).__unknown_6.method);
    return;
  }
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_UsesEnergy
               (MVVehicleBase *this,MethodInfo *method)

{
  if ((this->fields).localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
    return 0;
  }
  pMVar1 = (this->fields).localObjects;
  pMVar2 = pMVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*(pMVar2->vtable).__unknown_5.methodPtr)(pMVar1,(pMVar2->vtable).__unknown_5.method);
  return bVar3;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_VisualizeBulletImpact
               (MVVehicleBase *this,VoxelHit *voxelHit,Ray *lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apMStack_1[0] = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pMVar4->fields).players;
    if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,shooterActorNumber,
                         (Object **)apMStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                        );
      if (bVar5 == 0) {
        return;
      }
      if (apMStack_1[0] != (MVPlayer *)0x0) {
        bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          (apMStack_1[0],(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        cVar6 = (*(this->klass->vtable).get_IsDead.methodPtr)
                          (this,(this->klass->vtable).get_IsDead.method);
        if (cVar6 != '\0') {
          return;
        }
        pVVar7 = (this->fields).vehicleBaseObject;
        if ((pVVar7 != (VehicleBaseObject *)0x0) &&
           (pBVar8 = (pVVar7->fields).bulletImpactVisualizer,
           pBVar8 != (BulletImpactVisualizer *)0x0)) {
          uStack_9._0_4_ = (lineOfFire->m_Origin).x;
          uStack_9._4_4_ = (lineOfFire->m_Origin).y;
          uStack_10 = *(undefined8 *)&(lineOfFire->m_Origin).z;
          uStack_11._0_4_ = (lineOfFire->m_Direction).y;
          uStack_11._4_4_ = (lineOfFire->m_Direction).z;
          uStack_12._0_4_ = (voxelHit->point).x;
          uStack_12._4_4_ = (voxelHit->point).y;
          uStack_13 = *(undefined8 *)&(voxelHit->point).z;
          uStack_14._0_4_ = (voxelHit->normal).y;
          uStack_14._4_4_ = (voxelHit->normal).z;
          uStack_15 = *(undefined8 *)&voxelHit->cubePos;
          uStack_16._0_4_ = voxelHit->face;
          uStack_16._4_1_ = voxelHit->isCubeHit;
          uStack_16._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
          uStack_17 = *(undefined8 *)&voxelHit->woId;
          pCStack_18 = voxelHit->cube;
          uStack_19 = *(undefined8 *)&voxelHit->distance;
          pCStack_20 = voxelHit->collider;
          pTStack_21 = voxelHit->transform;
          iStack_22 = voxelHit->interactionFlags;
          FUN_?(damage,TypeInfo__IBulletImpactVisualizer,pBVar8,&uStack_12,&uStack_9,
                        shooterActorNumber,damage);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
              (pMVar23 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar4,(MethodInfo *)0x0), pMVar23 != (MVLocalPlayer *)0x0)))) {
            if (shooterActorNumber != (pMVar23->fields)._._ActorNr_k__BackingField) {
              return;
            }
            pMVar24 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if ((pMVar24 != (MainCameraManager *)0x0) &&
               (this_01 = (pMVar24->fields).plingSound, this_01 != (AudioSource *)0x0)) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                        (this_01,(MethodInfo *)0x0);
              lVar25 = FUN_?();
              if ((lVar25 != 0) &&
                 (lVar25 = FUN_?(2,TypeInfo__IPlayModeUI,lVar25), lVar25 != 0)) {
                FUN_?(3,TypeInfo__IGUICrossHair,lVar25);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* MVVehicleBase(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase__ctor
               (MVVehicleBase *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *vehiclePrefab,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,vehiclePrefab,worldObjects,(MethodInfo *)0x0);
  pVVar1 = (VehicleBaseObject *)(this->fields)._._._.component;
  if (pVVar1 == (VehicleBaseObject *)0x0) {
    (this->fields).vehicleBaseObject = (VehicleBaseObject *)0x0;
  }
  else {
    bVar2 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
            naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      FUN_?(pVVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).vehicleBaseObject = pVVar1;
    bVar2 = (TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject->_1).
            naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject)) {
      FUN_?(pVVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).vehicleBaseObject >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar10 != (MVLocalPlayer *)0x0)) {
    MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
              ((MVWorldObjectClient *)this,
               (pMVar10->fields)._._ActorNr_k__BackingField == (this->fields)._._._._.ownerActorNr,
               (MethodInfo *)0x0);
    puVar11 = (undefined8 *)
              (*(this->klass->vtable).__unknown.methodPtr)
                        (auStack_12,this,(this->klass->vtable).__unknown.method);
    uVar13 = *puVar11;
    iVar14 = *(int32_t *)(puVar11 + 1);
    (this->fields)._VehicleEnergyContainerConfig_k__BackingField.usingEnergy = (char)uVar13;
    *(int3 *)&(this->fields)._VehicleEnergyContainerConfig_k__BackingField.field_0x1 =
         (int3)((ulonglong)uVar13 >> 8);
    (this->fields)._VehicleEnergyContainerConfig_k__BackingField.storage =
         (int)((ulonglong)uVar13 >> 0x20);
    (this->fields)._VehicleEnergyContainerConfig_k__BackingField.consumption = iVar14;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_IsDead
               (MVVehicleBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields).IsVehicleDead;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsInSpawner() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_IsInSpawner
               (MVVehicleBase *this,MethodInfo *method)

{
  return (this->fields)._IsInSpawner_k__BackingField;
}


/* VehicleEnergyContainerConfig get_VehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_VehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVVehicleBase *this,
          MethodInfo *method)

{
  iVar1 = (this->fields)._VehicleEnergyContainerConfig_k__BackingField.consumption;
  uVar2 = *(undefined3 *)&(this->fields)._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
  iVar3 = (this->fields)._VehicleEnergyContainerConfig_k__BackingField.storage;
  __return_storage_ptr__->usingEnergy =
       (this->fields)._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar2;
  __return_storage_ptr__->storage = iVar3;
  __return_storage_ptr__->consumption = iVar1;
  return __return_storage_ptr__;
}


/* Void set_IsInSpawner(Boolean) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_set_IsInSpawner
               (MVVehicleBase *this,bool value,MethodInfo *method)

{
  (this->fields)._IsInSpawner_k__BackingField = value;
  return;
}

