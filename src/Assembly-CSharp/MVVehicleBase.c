
/* Void Enter(MVAvatar, Int32) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Enter
               (MVVehicleBase *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    instigatorActorNr = (vehicleUser->fields)._._._.ownerActorNr;
    (*(code *)(vehicleUser->klass->vtable).BeforeVehicleEntered.method)
              (vehicleUser,(vehicleUser->klass->vtable).OnEnterVehicle.methodPtr);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar3 = (pMVar2->fields)._._ActorNr_k__BackingField;
        this_00 = (this->fields).seatManager;
        if (this_00 != (VehicleSeatManager *)0x0) {
          VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
                    (this_00,instigatorActorNr,iVar3 == instigatorActorNr,vehicleUser,seatID,
                     (MethodInfo *)0x0);
          ppMVar4 = &(this->fields).localObjects;
          pMVar5 = *ppMVar4;
          if (iVar3 != instigatorActorNr) {
            if (pMVar5 != (MVVehicleBase_LocalObjectsBase *)0x0) {
              (*(code *)(pMVar5->klass->vtable).Destroy.method)
                        (pMVar5,(pMVar5->klass->vtable).Enter.methodPtr);
              *ppMVar4 = (MVVehicleBase_LocalObjectsBase *)0x0;
              func_?(ppMVar4,0);
            }
code_?:
            (*(code *)(vehicleUser->klass->vtable).OnEnterVehicle.method)
                      (vehicleUser,(vehicleUser->klass->vtable).OnLeaveVehicle.methodPtr);
            (*(code *)(this->klass->vtable).VehicleEntered.method)
                      (this,vehicleUser,seatID,(this->klass->vtable).HealthChangeResult.methodPtr);
            return;
          }
          if (pMVar5 == (MVVehicleBase_LocalObjectsBase *)0x0) {
            bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
            pMVar7 = TypeInfo__MVAvatarLocal;
            if (((vehicleUser->klass->_1).naturalAligment < bVar6) ||
               ((MVAvatarLocal__Class *)(vehicleUser->klass->_1).typeHierarchy[bVar6 - 1] !=
                TypeInfo__MVAvatarLocal)) goto code_?;
            pMVar5 = (MVVehicleBase_LocalObjectsBase *)
                     (*(code *)(this->klass->vtable).__unknown_1.method)
                               (this,seatID,vehicleUser,
                                (this->klass->vtable).VehicleEntered.methodPtr);
            *ppMVar4 = pMVar5;
            func_?(ppMVar4,pMVar5);
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (this_01 = (pMVar1->fields)._PlayerController_k__BackingField,
             this_01 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_Push
                      (this_01,(ILocalObject *)*ppMVar4,(MethodInfo *)0x0);
            bVar6 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
            pMVar7 = TypeInfo__MVAvatarLocal;
            if (((vehicleUser->klass->_1).naturalAligment < bVar6) ||
               ((MVAvatarLocal__Class *)(vehicleUser->klass->_1).typeHierarchy[bVar6 - 1] !=
                TypeInfo__MVAvatarLocal)) goto code_?;
            MVAvatarLocal::MVAvatarLocal_SetAnimation
                      ((MVAvatarLocal *)vehicleUser,StringLiteral_Idle,(MethodInfo *)0x0);
            pMVar5 = *ppMVar4;
            if (pMVar5 != (MVVehicleBase_LocalObjectsBase *)0x0) {
              (*(code *)(pMVar5->klass->vtable).Enter.method)
                        (pMVar5,(pMVar5->klass->vtable).Leave.methodPtr);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pMVar7 = extraout_EDX;
code_?:
  func_?(vehicleUser,pMVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVAvatar *)(*pcVar3)();
  return pMVar4;
}


/* MVVehicleBase+HealthChangeAffects HealthChangeResult(Single) */

MVVehicleBase_HealthChangeAffects
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_HealthChangeResult
          (MVVehicleBase *this,float health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (0.0 < health) {
    MVar1.detachAvatar = 0;
    MVar1.causeVehicleDestruction = 0;
    return MVar1;
  }
  this_00 = (this->fields).IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar3 = (char *)func_?();
        health._0_2_ = (MVVehicleBase_HealthChangeAffects)CONCAT11(*pcVar3 == '\0',*pcVar3 == '\0');
        return health._0_2_;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      MVar1 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
      return MVar1;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  MVar1 = (MVVehicleBase_HealthChangeAffects)(*pcVar4)();
  return MVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Initialize
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                   );
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_isDead);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    pMVar1 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        (this_00,StringLiteral_isDead,0.0,1,(MethodInfo *)0x0);
    ppMVar2 = &(this->fields).IsVehicleDead;
    *ppMVar2 = pMVar1;
    func_?(ppMVar2,pMVar1);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      pVVar3 = (VehicleSeatManager *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_01,
                           VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                          );
      ppVVar4 = &(this->fields).seatManager;
      *ppVVar4 = pVVar3;
      func_?(ppVVar4,pVVar3);
      if (*ppVVar4 != (VehicleSeatManager *)0x0) {
        VehicleSeatManager::VehicleSeatManager_Init(*ppVVar4,this,*ppMVar2,(MethodInfo *)0x0);
        pMVar5 = (this->fields)._._._.group;
        if (pMVar5 != (MVGroup *)0x0) {
          pMVar6 = pMVar5->klass;
          bVar7 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
          if ((bVar7 <= (pMVar6->_1).naturalAligment) &&
             ((MVWorldObjectSpawnerVehicle__Class *)(pMVar6->_1).typeHierarchy[bVar7 - 1] ==
              TypeInfo__MVWorldObjectSpawnerVehicle)) {
            (this->fields)._IsInSpawner_k__BackingField = 1;
          }
        }
        LayerUtil::LayerUtil_SetLayerRecursively_3
                  ((this->fields)._._._.transform,StringLiteral_Default,StringLiteral_Player,
                   (MethodInfo *)0x0);
        piVar8 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 | 0x100000;
        piVar8 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 | 0x200000;
        uVar9 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar8 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 | 0xADDR;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar9;
        iVar10 = (this->fields)._._._.interactionFlags;
        puVar11 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
        *puVar11 = *puVar11 | 2;
        *(int *)&(this->fields)._._._.interactionFlags = (int)iVar10;
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsPlayerInVehicle(Int32, Boolean) */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_IsPlayerInVehicle
               (MVVehicleBase *this,int32_t playerId,bool onlyDriver,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pVVar6 = (this->fields).seatManager;
  if ((pVVar6 != (VehicleSeatManager *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pVVar6->fields).seats,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if (((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) ||
         (*(int *)((int)LStack_9._current + 0x14) == 0)) break;
      if (((*(int *)(*(int *)((int)LStack_9._current + 0x14) + 8) == playerId) &&
          (*(char *)((int)LStack_9._current + 0x28) != '\0')) &&
         ((onlyDriver == 0 || (*(char *)((int)LStack_9._current + 0x29) == '\0')))) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Void LeaveLocal() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_LeaveLocal
               (MVVehicleBase *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).localObjects;
  if (pMStack_2 != (MVVehicleBase_LocalObjectsBase *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).__unknown_2.methodPtr;
    (*(code *)(pMStack_2->klass->vtable).Leave.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_OnDataUpdate
               (MVVehicleBase *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_No_blueprint_data);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
      == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                        (in_stack_2 + 0x58),(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
        == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    pDStack_4 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                             (in_stack_2 + 0x58),(Object *)StringLiteral_BlueprintData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (pDStack_4 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
      *(undefined4 *)(in_stack_2 + 0xe0) = 0;
code_?:
      DStack_5._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
      DStack_5._version = (int32_t)(in_stack_2 + 0xe0);
      DStack_5._index = (int32_t)pDStack_4;
      func_?();
      this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                 (in_stack_2 + 0xe0);
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        pDStack_4 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_00,(Object *)StringLiteral_ChildrenMap,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pDStack_4 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
          *(undefined4 *)(in_stack_2 + 0xe4) = 0;
        }
        else {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          *(Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ **)
           (in_stack_2 + 0xe4) = pDStack_4;
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          uStack_7 = (undefined *)CONCAT13(bVar6,(undefined3)uStack_7);
          if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        if (*(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_2 + 0xe4) !=
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_5,
                              *(Dictionary_2_System_UInt32_System_Object_ **)
                               (in_stack_2 + 0xe4),
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_9 = 0;
          DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
          DStack_10._version = pDVar8->_version;
          DStack_10._index = pDVar8->_index;
          DStack_10._current.key = (Object *)(pDVar8->_current).key;
          DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
          pDStack_4 = &DStack_10;
          while( true ) {
            bVar3 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_10,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar3 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uVar1;
              return;
            }
            if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_2 + 0xe8) ==
                (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_2 + 0xe8),
                       DStack_10._current.value,DStack_10._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    *(Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ **)(in_stack_2 + 0xe0)
         = pDStack_4;
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    uStack_7 = (undefined *)CONCAT13(bVar6,(undefined3)uStack_7);
    if ((bVar6 <= *(byte *)(*(int *)pDStack_4 + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_RefillEnergy
               (MVVehicleBase *this,VehicleEnergyRefill vehicleEnergyRefill,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_vehicleEnergyRefill);
    cRam_? = '\x01';
  }
  if ((this->fields).localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  pVVar1 = (this->fields).vehicleBaseObject;
  if (pVVar1 != (VehicleBaseObject *)0x0) {
    audioSource = (pVVar1->fields).vehicleEnergyPickupSound;
    this_00 = (this->fields)._._._.transform;
    if ((this_00 != (Transform *)0x0) &&
       (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0),
       this_01 != (AudioManager *)0x0)) {
      AudioManager::AudioManager_Play_2
                (this_01,StringLiteral_vehicleEnergyRefill,audioSource,*pVVar2,(MethodInfo *)0x0);
      pMVar3 = (this->fields).localObjects;
      if (pMVar3 != (MVVehicleBase_LocalObjectsBase *)0x0) {
        (*(code *)(pMVar3->klass->vtable).__unknown_4.method)();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_RollbackRefillEnergyPrediction
               (MVVehicleBase *this,int32_t spawnerId,MethodInfo *method)

{
  pMVar1 = (this->fields).localObjects;
  if (pMVar1 != (MVVehicleBase_LocalObjectsBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_6.method)
              (pMVar1,spawnerId,pMVar1->klass[1]._0.image);
  }
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_UsesEnergy
               (MVVehicleBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localObjects;
  if (pMVar1 == (MVVehicleBase_LocalObjectsBase *)0x0) {
    return 0;
  }
  bVar2 = (*(code *)(pMVar1->klass->vtable).__unknown_5.method)
                    (pMVar1,(pMVar1->klass->vtable).__unknown_6.methodPtr);
  return bVar2;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_VisualizeBulletImpact
               (MVVehicleBase *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    ppIVar2 = &TypeInfo__IBulletImpactVisualizer;
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&TypeInfo__IGUICrossHair,ppIVar2,uVar1);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_02 = (MVPlayer *)0x0;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    bVar4 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,(int32_t)lineOfFire.m_Direction.z,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (this_02 == (MVPlayer *)0x0) goto code_?;
      bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        (this_02,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        in_stack_5 = (this->klass->vtable).get_IsInSpawner.methodPtr;
        cVar6 = (*(code *)(this->klass->vtable).get_IsDead.method)();
        if (cVar6 == '\0') {
          pVVar7 = (this->fields).vehicleBaseObject;
          if ((pVVar7 != (VehicleBaseObject *)0x0) &&
             (pBVar8 = (pVVar7->fields).bulletImpactVisualizer,
             pBVar8 != (BulletImpactVisualizer *)0x0)) {
            pBVar9 = pBVar8->klass;
            uVar10 = 0;
            uVar11._0_1_ = (pBVar9->_1).rank;
            uVar11._1_1_ = (pBVar9->_1).minimumAlignment;
            if (uVar11 != 0) {
              do {
                if (pBVar9->interfaceOffsets[uVar10].interfaceType ==
                    (Il2CppClass *)TypeInfo__IBulletImpactVisualizer) {
                  ppMVar12 = &(&(pBVar8->klass->vtable).Equals)
                             [pBVar9->interfaceOffsets[uVar10].offset].method;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            ppMVar12 = (MethodInfo **)func_?(pBVar8);
code_?:
            (*(code *)*ppMVar12)(pBVar8,in_stack_5,voxelHit.point.x,voxelHit.point.y,
                                voxelHit.point.z,voxelHit.normal.x,voxelHit.normal.y,
                                voxelHit.normal.z,voxelHit.cubePos._0_4_,voxelHit._28_4_,
                                voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,
                                voxelHit.distance,voxelHit.collider,voxelHit.transform,
                                voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                lineOfFire.m_Direction._0_8_,lineOfFire.m_Direction.z);
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar3 != (MVNetworkGame *)0x0) &&
               (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
               pMVar13 != (MVLocalPlayer *)0x0)) {
              if (lineOfFire.m_Direction.z != (float)(pMVar13->fields)._._ActorNr_k__BackingField) {
                return;
              }
              this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_01 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_PlayPlingSound(this_01,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                     (IPlayModeUI *)0x0) && (iVar14 = func_?(2), iVar14 != 0)) {
                  func_?(3);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_IsDead
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
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
  uVar1 = *(undefined3 *)&(this->fields)._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
  iVar2 = (this->fields)._VehicleEnergyContainerConfig_k__BackingField.storage;
  iVar3 = (this->fields)._VehicleEnergyContainerConfig_k__BackingField.consumption;
  __return_storage_ptr__->usingEnergy =
       (this->fields)._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar1;
  __return_storage_ptr__->storage = iVar2;
  __return_storage_ptr__->consumption = iVar3;
  return __return_storage_ptr__;
}


/* Void set_IsInSpawner(Boolean) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_set_IsInSpawner
               (MVVehicleBase *this,bool value,MethodInfo *method)

{
  (this->fields)._IsInSpawner_k__BackingField = value;
  return;
}

