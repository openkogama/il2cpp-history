
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_AddModifier
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable);
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__AvatarInteractable->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    length = TypeInfo__AvatarInteractable->static_fields->AvatarModifierPackagesCount;
    this_01 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_01,length,(MethodInfo *)0x0);
    if (this_01 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,0,1,(MethodInfo *)0x0);
    bVar2 = (*(code *)(this->klass->vtable).HasModifierEffect.method)
                      (this,0xb,(this->klass->vtable).HandleModifierEffect.methodPtr);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,4,bVar2,(MethodInfo *)0x0);
    bVar2 = (*(code *)(this->klass->vtable).HasModifierEffect.method)
                      (this,0xb,(this->klass->vtable).HandleModifierEffect.methodPtr);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,6,bVar2,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                      (this_01,type,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      MVInteractable::MVInteractable_AddModifier
                ((MVInteractable *)this,type,id,additionalModifers,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Single DamageShield(Single) */

float Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DamageShield
                (AvatarInteractable *this,float amount,MethodInfo *method)

{
  if (amount < 0.0) {
    return amount;
  }
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.shield;
    if ((float)fVar2 < amount) {
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                   (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(code *)(pMVar1->klass->vtable).set_Value.method)(pMVar1,0,pMVar1->klass[1]._0.image);
          return amount - (float)fVar2;
        }
      }
    }
    else if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                                 (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
      (*(code *)(pMVar1->klass->vtable).set_Value.method)
                (pMVar1,(float)fVar2 - amount,pMVar1->klass[1]._0.image);
      return 0.0;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Void DieFromBeingStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromBeingStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar2->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,PlayerKilledByType__Enum_Crushed,(MethodInfo *)0x0)
      ;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar3,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar4 = (Object *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            pOVar5 = (Object *)func_?();
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?();
              pOVar5 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar5 = (Object *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffff8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,
                         (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar6 == 0) {
                  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar3,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar7 = (this->fields).OnDamageTaken;
                if (pAVar7 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar7->fields)._._.invoke_impl)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DieFromFalling() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromFalling
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar2->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,PlayerKilledByType__Enum_FallOffWorld,
                               (MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar3,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar4 = (Object *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            pOVar5 = (Object *)func_?();
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?();
              pOVar5 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar5 = (Object *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffff8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,
                         (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,10,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar6 == 0) {
                  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar3,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar7 = (this->fields).OnDamageTaken;
                if (pAVar7 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar7->fields)._._.invoke_impl)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DieFromRespawn(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromRespawn
               (AvatarInteractable *this,MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    pMVar1 = (this->fields)._.health;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      (*(code *)(pMVar1->klass->vtable).set_Value.method)(pMVar1,0,pMVar1->klass[1]._0.image);
      pAVar3 = (this->fields).OnDamageTaken;
      if (pAVar3 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(float)fVar2,damageDealer,damageType,
                   (pAVar3->fields)._._.method);
      }
      AvatarInteractable_DoKilledNotification(this,damageDealer,damageType,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DieFromStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar2->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,PlayerKilledByType__Enum_Crushed,(MethodInfo *)0x0)
      ;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar3,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar4 = (Object *)func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            pOVar5 = (Object *)func_?();
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?();
              pOVar5 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar4 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar5 = (Object *)
                       func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffff8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,
                         (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar6 == 0) {
                  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar3 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar3,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar7 = (this->fields).OnDamageTaken;
                if (pAVar7 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar7->fields)._._.invoke_impl)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoKilledNotification(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DoKilledNotification
               (AvatarInteractable *this,MVPlayer *damageDealer,
               PlayerKilledByType__Enum defaultDamageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  weaponType = CONCAT31((int3)((uint)in_stack_1 >> 8),(char)defaultDamageType);
  if (damageDealer == (MVPlayer *)0x0) {
    pAVar2 = (this->fields).lastDamageSource;
    if (pAVar2 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((_UNK_? < fVar3 - (pAVar2->fields).time) ||
       ((this->fields).lastDamageSource == (AvatarInteractable_DamageSource *)0x0)) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
      killerId = (pMVar5->fields)._._ActorNr_k__BackingField;
    }
    else {
      pAVar2 = (this->fields).lastDamageSource;
      if ((((pAVar2 == (AvatarInteractable_DamageSource *)0x0) ||
           (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0), _UNK_? < fVar3 - (pAVar2->fields).time))
          || (pAVar2 = (this->fields).lastDamageSource,
             pAVar2 == (AvatarInteractable_DamageSource *)0x0)) ||
         (pMVar6 = (pAVar2->fields).shooter, pMVar6 == (MVPlayer *)0x0)) goto code_?;
      killerId = (pMVar6->fields)._ActorNr_k__BackingField;
      pAVar2 = (this->fields).lastDamageSource;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((_UNK_? < fVar3 - (pAVar2->fields).time) ||
         (pAVar2 = (this->fields).lastDamageSource, pAVar2 == (AvatarInteractable_DamageSource *)0x0
         )) goto code_?;
      pAVar7 = (this->fields).lastDamageSource;
      weaponType = CONCAT31((int3)(weaponType >> 8),(pAVar2->fields).damageType);
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((_UNK_? < fVar3 - (pAVar7->fields).time) ||
         ((this->fields).lastDamageSource == (AvatarInteractable_DamageSource *)0x0))
      goto code_?;
    }
  }
  else {
    killerId = (damageDealer->fields)._ActorNr_k__BackingField;
    AvatarInteractable_ExtractWeaponName(this,damageDealer,defaultDamageType,(MethodInfo *)0x0);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                            ((pMVar5->fields)._._ActorNr_k__BackingField,killerId,weaponType,
                             (MethodInfo *)0x0);
    item = &UNK_?;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                (pMVar8,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar9 = (Object *)func_?();
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
          pMVar5 != (MVLocalPlayer *)0x0)) &&
         (pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8),
         this_01 !=
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar9,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar9,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
        pOVar10 = (Object *)
                  func_?(TypeInfo__MV__Common__PlayerKilledByType,&stack0xfffffff9);
        value = (Object *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar9,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar9,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_OnNotificationReceived
                  (NotificationType__Enum_Kill,(Dictionary_2_System_Object_System_Object_ *)this_01,
                   (MethodInfo *)0x0);
        this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
        if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
          bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                  HashSet_1_System_ByteEnum__Contains
                            (this_00,(ByteEnum__Enum)item,
                             MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                            );
          if (bVar11 == 0) {
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar8 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_PostNotificationOperation
                      (pMVar8,NotificationType__Enum_Kill,
                       (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String ExtractWeaponName(MVPlayer, PlayerKilledByType) */

String * Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_ExtractWeaponName
                   (AvatarInteractable *this,MVPlayer *damageDealer,
                   PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemEditable);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (((undefined1)damageType != PlayerKilledByType__Enum_MeleeWeapon) &&
     ((undefined1)damageType != PlayerKilledByType__Enum_CustomGun)) {
    return ::StringLiteral__;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((damageDealer == (MVPlayer *)0x0) ||
       (this_00 = (damageDealer->fields).spawnRolesManager, this_00 == (SpawnRolesManager *)0x0)) ||
      (id = System.dll::System::Net::WebCompletionSource`1[System::Object]::
            WebCompletionSource_1_System_Object__get_Task
                      ((WebCompletionSource_1_System_Object_ *)this_00,(MethodInfo *)0x0),
      this_01 == (MVWorldObjectClientManager *)0x0)) ||
     (this_02 = (MVAvatar *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,(int32_t)id,(MethodInfo *)0x0), this_02 == (MVAvatar *)0x0)) {
    func_?();
  }
  else if (((TypeInfo__MVAvatar->_1).naturalAligment <= (this_02->klass->_1).naturalAligment) &&
          ((MVAvatar__Class *)
           (this_02->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
           TypeInfo__MVAvatar)) {
    x = MVAvatar::MVAvatar_get_CurrentPickup(this_02,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return ::StringLiteral__;
    }
    if (x == (PickupItem *)0x0) {
      return ::StringLiteral__;
    }
    pPVar2 = x->klass;
    if ((pPVar2->_1).naturalAligment < (TypeInfo__PickupItemEditable->_1).naturalAligment) {
      return ::StringLiteral__;
    }
    if ((PickupItemEditable__Class *)
        (pPVar2->_1).typeHierarchy[(TypeInfo__PickupItemEditable->_1).naturalAligment - 1] !=
        TypeInfo__PickupItemEditable) {
      return ::StringLiteral__;
    }
    pIStack3 = pPVar2[1]._0.declaringType;
    pPStack4 = x;
    pSVar5 = (String *)(*(code *)pPVar2[1]._0.castClass)();
    return pSVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* Single GetBoostedHealth(Single) */

float Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_GetBoostedHealth
                (AvatarInteractable *this,float defaultHealth,MethodInfo *method)

{
  return (this->fields).boostedHealthMultiplier * defaultHealth;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandleMoveHit
               (AvatarInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar1 = moveHit.hit.interactionFlags._4_4_;
  if (moveHit.hit.interactionFlags._4_4_ == 0) goto code_?;
  iVar2 = *(int *)(moveHit.hit.interactionFlags._4_4_ + 0x30);
  if ((iVar2 != 0) && (iVar2 == 0x18)) {
    cVar3 = (*(code *)(this->klass->vtable).HasModifierEffect.method)();
    if (cVar3 == '\0') {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0)) ||
         (in_stack_6 = (RuntimeEventManager *)(pWVar5->fields)._.runtimeEventManagerNetwork,
         in_stack_6 == (RuntimeEventManager *)0x0)) goto code_?;
      in_stack_7 = &UNK_?;
      voxelHit.point.y = moveHit.hit.point.y;
      voxelHit.point.x = moveHit.hit.point.x;
      voxelHit.point.z = moveHit.hit.point.z;
      voxelHit.normal.x = moveHit.hit.normal.x;
      voxelHit.normal.y = moveHit.hit.normal.y;
      voxelHit.normal.z = moveHit.hit.normal.z;
      voxelHit.cubePos.x = moveHit.hit.cubePos.x;
      voxelHit.cubePos.y = moveHit.hit.cubePos.y;
      voxelHit.cubePos.z = moveHit.hit.cubePos.z;
      voxelHit._30_2_ = moveHit.hit._30_2_;
      voxelHit.face = moveHit.hit.face;
      voxelHit.isCubeHit = moveHit.hit.isCubeHit;
      voxelHit._37_3_ = moveHit.hit._37_3_;
      voxelHit.woId = moveHit.hit.woId;
      voxelHit.cube = moveHit.hit.cube;
      voxelHit.distance = moveHit.hit.distance;
      voxelHit.collider = moveHit.hit.collider;
      voxelHit.transform = moveHit.hit.transform;
      voxelHit._60_4_ = moveHit.hit._60_4_;
      voxelHit.interactionFlags._0_4_ = (int)moveHit.hit.interactionFlags;
      voxelHit.interactionFlags._4_4_ = 0x42200000;
      in_stack_8 = moveHit._60_4_;
      in_stack_9 = moveHit.hit.point.x;
      in_stack_10 = moveHit.hit.point.y;
      in_stack_11 = moveHit.hit.point.z;
      in_stack_12 = moveHit.hit.normal.x;
      in_stack_13 = moveHit.hit.normal.y;
      in_stack_14 = moveHit.hit.normal.z;
      in_stack_15 = moveHit.hit.cubePos._0_4_;
      in_stack_16 = moveHit.hit._28_4_;
      in_stack_17 = moveHit.hit.face;
      in_stack_18 = moveHit.hit._36_4_;
      in_stack_19 = moveHit.hit.woId;
      in_stack_20 = moveHit.hit.cube;
      in_stack_21 = moveHit.hit.distance;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (in_stack_6,voxelHit,0.0,unaff_EDI);
    }
  }
  puVar22 = (undefined *)0x0;
  puVar23 = (undefined *)0xffffffff;
  uVar24 = *(undefined4 *)(iVar1 + 0x30);
  puVar25 = &UNK_?;
  pAVar26 = this;
  (*(code *)(this->klass->vtable).AddModifier.method)();
  if (iVar2 == 0) {
    if (cRam_? == '\0') {
      puVar22 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    fVar27 = *(float *)(iVar1 + 0x1c);
    bVar28 = moveHit.slopeNormal.z * moveHit.slopeNormal.z +
            moveHit.impactVelocity.x * moveHit.impactVelocity.x +
            moveHit.impactVelocity.y * moveHit.impactVelocity.y < _UNK_?;
    if (!bVar28) {
      pSVar29 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar29 == (SpawnRoleDataMediator *)0x0) ||
         (pWVar30 = (WebCompletionSource_1_System_Object_ *)(pSVar29->fields).reviveState,
         pWVar30 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
      puVar22 = &UNK_?;
      unaff_EDI = (MethodInfo *)
                  System.dll::System::Net::WebCompletionSource`1[System::Object]::
                  WebCompletionSource_1_System_Object__get_Task
                            (pWVar30,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                            );
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      ReviveState::ReviveState_SuppressSafeSpotSaving
                ((ReviveState *)unaff_EDI,1.0,(MethodInfo *)0x0);
    }
    if ((moveHit.slopeNormal.x * fVar27 < _UNK_?) || (moveHit.slopeNormal.x < _UNK_?))
    {
      bVar31 = false;
    }
    else {
      bVar31 = _UNK_? < fVar27;
    }
    if ((bool)(bVar28 & bVar31)) {
      pSVar29 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar29 == (SpawnRoleDataMediator *)0x0) ||
         (pWVar30 = (WebCompletionSource_1_System_Object_ *)(pSVar29->fields).spawnRoleMode,
         pWVar30 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
      puVar22 = &UNK_?;
      unaff_EDI = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
      ;
      pTVar32 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                WebCompletionSource_1_System_Object__get_Task
                          (pWVar30,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                          );
      if ((pTVar32 == (Task *)0x1) &&
         ((this->fields).OnNewSafePosition != (Action_1_UnityEngine_Vector3_ *)0x0)) {
        pAVar33 = (this->fields).OnNewSafePosition;
        puVar22 = (pAVar33->fields)._._.method_code;
        puVar23 = &UNK_?;
        unaff_EDI = (MethodInfo *)moveHit.positionTouchingHit.x;
        (*(pAVar33->fields)._._.invoke_impl)();
      }
    }
  }
  if ((this->fields).canWallJumpAnySurfaces != 0) {
    puVar22 = (undefined *)0x0;
    puVar23 = (undefined *)0xffffffff;
    uVar24 = 5;
    puVar25 = &UNK_?;
    pAVar26 = this;
    (*(code *)(this->klass->vtable).AddModifier.method)();
  }
  this_00 = (this->fields).materialHitHandler;
  if (this_00 != (InteractableMaterialHitHandler *)0x0) {
    uVar34 = 0;
    puVar35 = (undefined4 *)&stack0x00000008;
    puVar36 = &uStack_37;
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar36 = *puVar35;
      puVar35 = puVar35 + 1;
      puVar36 = puVar36 + 1;
    }
    moveHit_00.impactVelocity.z = (float)in_stack_7;
    auVar38 = in_stack_39._0_12_;
    auVar40 = in_stack_39._12_12_;
    auVar41 = in_stack_39._24_12_;
    auVar42 = in_stack_39._36_12_;
    moveHit_00.positionTouchingHit.x = (float)auVar38._0_4_;
    moveHit_00.positionTouchingHit.y = (float)auVar38._4_4_;
    moveHit_00.positionTouchingHit.z = (float)auVar38._8_4_;
    moveHit_00.moveDirection.x = (float)auVar40._0_4_;
    moveHit_00.moveDirection.y = (float)auVar40._4_4_;
    moveHit_00.moveDirection.z = (float)auVar40._8_4_;
    moveHit_00.elipsoidNormal.x = (float)auVar41._0_4_;
    moveHit_00.elipsoidNormal.y = (float)auVar41._4_4_;
    moveHit_00.elipsoidNormal.z = (float)auVar41._8_4_;
    moveHit_00.slopeNormal.x = (float)auVar42._0_4_;
    moveHit_00.slopeNormal.y = (float)auVar42._4_4_;
    moveHit_00.slopeNormal.z = (float)auVar42._8_4_;
    moveHit_00.impactVelocity.x = (float)in_stack_39._48_4_;
    moveHit_00.impactVelocity.y = (float)in_stack_39._52_4_;
    moveHit_00._60_4_ = in_stack_6;
    moveHit_00.hit.point.x = (float)in_stack_8;
    moveHit_00.hit.point.y = in_stack_9;
    moveHit_00.hit.point.z = in_stack_10;
    moveHit_00.hit.normal.x = in_stack_11;
    moveHit_00.hit.normal.y = in_stack_12;
    moveHit_00.hit.normal.z = in_stack_13;
    moveHit_00.hit.cubePos._0_4_ = in_stack_14;
    moveHit_00.hit.cubePos.z = (int16_t)in_stack_15;
    moveHit_00.hit._30_2_ = SUB42(in_stack_15,2);
    moveHit_00.hit.face = in_stack_16;
    moveHit_00.hit._36_4_ = in_stack_17;
    moveHit_00.hit.woId = in_stack_18;
    moveHit_00.hit.cube = (Cube *)in_stack_19;
    moveHit_00.hit.distance = (float)in_stack_20;
    moveHit_00.hit.collider = (Collider *)in_stack_21;
    moveHit_00.hit.transform = (Transform *)puVar25;
    moveHit_00.hit._60_4_ = pAVar26;
    moveHit_00.hit.interactionFlags._0_4_ = uVar24;
    moveHit_00.hit.interactionFlags._4_4_ = puVar23;
    moveHit_00.material = (MVMaterial *)puVar22;
    moveHit_00._140_4_ = uVar34;
    InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
              (this_00,moveHit_00,unaff_EDI);
    return;
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void HandlePoisonResistBoost() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandlePoisonResistBoost
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  (this->fields)._.poisonResist = 0.0;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 != (MVNetworkGame *)0x0) &&
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      pMVar1 != (MVLocalPlayer *)0x0)) &&
     (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
    this_02 = (Boost__Class *)&stack0xfffffff8;
    bVar2 = BoostController::BoostController_TryGetActiveBoost
                      (this_00,BoostType__Enum_PoisonResistPercentage,(Boost **)this_02,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_02 != (Boost__Class *)0x0) {
      pOStack3 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOStack3);
      if (pOStack3 != (Object *)0x0) {
        if ((pOStack3->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int *)func_?();
          (this->fields)._.poisonResist = (float)*piVar5 / _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _puStack00000010 = uVar4;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Heal(Single, MVPlayer) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_Heal
               (AvatarInteractable *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  if (((amount <= 0.0) ||
      (bVar1 = MVInteractable::MVInteractable_IgnoreHealing
                         ((MVInteractable *)this,healer,(MethodInfo *)0x0), bVar1 == 0)) &&
     (0.0 < amount)) {
    if ((this->fields)._.maxHealth != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      pMVar2 = (this->fields)._.health;
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      (*(code *)pMVar2)(pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
      pMVar3 = (this->fields)._.maxHealth;
      if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
      iVar4 = (*(code *)(pMVar3->klass->vtable).get_Value.method)
                        (pMVar3,(pMVar3->klass->vtable).set_Value.methodPtr);
      if ((float)iVar4 <= (float)pMVar3) {
        pMVar5 = (this->klass->vtable).HandleModifierEffect.method;
        fVar6 = (float10)(*(code *)pMVar5)(this,0x15,pMVar5,
                                           (this->klass->vtable).ClearModifiers.methodPtr);
        fVar7 = (float)fVar6;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).RestoreShield.method)(this,fVar8 * fVar7);
      }
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    cVar9 = (*(code *)(this->klass->vtable).HasModifierEffect.method)();
    if (cVar9 != '\0') {
      return;
    }
    cVar9 = func_?();
    if ((cVar9 != '\0') &&
       (MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
       MVar10 == MVGameMode__Enum_Edit)) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      fVar6 = (float10)func_?(4,pMVar2);
      fVar7 = (float)fVar6 + 0.0;
    }
    else {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
code_?:
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar6 = (float10)func_?(4,pMVar2);
      pMVar3 = (this->fields)._.maxHealth;
      if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
      fVar7 = (float)fVar6 + 0.0;
      iVar4 = func_?(4,pMVar3);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if ((float)iVar4 < fVar7) {
        fVar7 = (float)iVar4;
      }
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    }
    func_?(5,pMVar2,fVar7);
  }
  return;
}


/* Void HealOverTime(AvatarModifierPackageType, MVPlayer) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HealOverTime
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *healer,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) && (cVar2 = (**(code **)(*unaff_EDI + 0x120))(), cVar2 == '\0')) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
      bVar1 = MVLocalPlayer::MVLocalPlayer_IsPlaying(this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (healer == (MVPlayer *)0x0) goto code_?;
        (**(code **)(*unaff_EDI + 0x108))();
        iVar3 = unaff_EDI[0xf];
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),0,healer,*(undefined4 *)(iVar3 + 0x14));
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable`1[System.Single],
   MVRuntimeDataVariable`1[System.Int32], MVRuntimeDataVariableClampedFloat,
   WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_Init
               (AvatarInteractable *this,MVRuntimeDataVariable *runtimeDataModifiers,
               MVRuntimeDataVariable_1_System_Single_ *health,
               MVRuntimeDataVariable_1_System_Int32_ *maxHealth,
               MVRuntimeDataVariableClampedFloat *shield,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarInteractable__HandlePoisonResistBoost__);
    func_?(&MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__);
    cRam_? = '\x01';
  }
  this_01 = skillDataManager;
  MVInteractable::MVInteractable_Init
            ((MVInteractable *)this,runtimeDataModifiers,health,maxHealth,shield,skillDataManager,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (this_01 != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (this_01,StringLiteral_DamageReduction,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (bVar1 != 0) {
      skillDataManager = (WorldObjectSkillDataManager *)0x0;
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (this_01,StringLiteral_DamageReduction,(MethodInfo *)0x0);
      fVar2 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this != (AvatarInteractable *)0x0) {
      (this->fields).damageMultiplier = fVar2;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (this_01,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
      this_00 = (this->fields).materialHitHandler;
      packages = (this->fields).hitPackages;
      (this->fields).canWallJumpAnySurfaces = bVar1;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (InteractableMaterialHitHandler *)0x0) {
        method = (MethodInfo *)0x0;
        skillDataManager = (WorldObjectSkillDataManager *)parent;
        InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
                  (this_00,packages,parent,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        skillDataManager = (WorldObjectSkillDataManager *)&UNK_?;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar4 != (MVNetworkGame *)0x0) {
          in_stack_5 = &UNK_?;
          pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          if (pMVar6 != (MVLocalPlayer *)0x0) {
            pBVar7 = (pMVar6->fields).boostController;
            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar8,(Object *)this,
                       MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
                       (MethodInfo *)0x0);
            if (pBVar7 != (BoostController *)0x0) {
              BoostController::BoostController_SubscribeToBoostChanged
                        (pBVar7,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar8,
                         (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__Int32);
                cRam_? = '\x01';
              }
              skillDataManager = (WorldObjectSkillDataManager *)0x0;
              (this->fields).boostedHealthMultiplier = 1.0;
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar4 != (MVNetworkGame *)0x0) &&
                  (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
                  pMVar6 != (MVLocalPlayer *)0x0)) &&
                 (pBVar7 = (pMVar6->fields).boostController, pBVar7 != (BoostController *)0x0)) {
                bVar1 = BoostController::BoostController_TryGetActiveBoost
                                  (pBVar7,BoostType__Enum_ExtraHealthFloatMultiplier,
                                   (Boost **)&skillDataManager,(MethodInfo *)0x0);
                if (bVar1 != 0) {
                  if ((skillDataManager == (WorldObjectSkillDataManager *)0x0) ||
                     (pOVar9 = Boost::Boost_get_Value((Boost *)skillDataManager,(MethodInfo *)0x0),
                     pOVar9 == (Object *)0x0)) goto code_?;
                  if ((pOVar9->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  piVar10 = (int *)func_?();
                  (this->fields).boostedHealthMultiplier =
                       (float)*piVar10 / _UNK_? + _UNK_?;
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar4 != (MVNetworkGame *)0x0) &&
                   (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
                   pMVar6 != (MVLocalPlayer *)0x0)) {
                  pBVar7 = (pMVar6->fields).boostController;
                  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar8,(Object *)this,
                             MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,
                             (MethodInfo *)0x0);
                  if (pBVar7 != (BoostController *)0x0) {
                    BoostController::BoostController_SubscribeToBoostChanged
                              (pBVar7,BoostType__Enum_PoisonResistPercentage,(Action *)pNVar8,
                               (MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__System__Int32);
                      cRam_? = '\x01';
                    }
                    skillDataManager = (WorldObjectSkillDataManager *)0x0;
                    (this->fields)._.poisonResist = 0.0;
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (((pMVar4 != (MVNetworkGame *)0x0) &&
                        (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar4,(MethodInfo *)0x0),
                        pMVar6 != (MVLocalPlayer *)0x0)) &&
                       (pBVar7 = (pMVar6->fields).boostController, pBVar7 != (BoostController *)0x0)
                       ) {
                      bVar1 = BoostController::BoostController_TryGetActiveBoost
                                        (pBVar7,BoostType__Enum_PoisonResistPercentage,
                                         (Boost **)&skillDataManager,(MethodInfo *)0x0);
                      if (bVar1 == 0) {
                        return;
                      }
                      if ((skillDataManager != (WorldObjectSkillDataManager *)0x0) &&
                         (pOVar9 = Boost::Boost_get_Value
                                             ((Boost *)skillDataManager,(MethodInfo *)0x0),
                         pOVar9 != (Object *)0x0)) {
                        if ((pOVar9->klass->_0).element_class ==
                            (TypeInfo__System__Int32->_0).element_class) {
                          piVar10 = (int *)func_?();
                          (this->fields)._.poisonResist = (float)*piVar10 / _UNK_?;
                          return;
                        }
                        goto code_?;
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_InitializeSkills
               (AvatarInteractable *this,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_DamageReduction);
    func_?(&StringLiteral_CanWallJumpAnySurface);
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_DamageReduction,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (bVar1 != 0) {
      iVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_DamageReduction,(MethodInfo *)0x0);
      fVar2 = (float)(100 - iVar3) / _UNK_?;
    }
    if (this != (AvatarInteractable *)0x0) {
      (this->fields).damageMultiplier = fVar2;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillDataManager,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
      (this->fields).canWallJumpAnySurfaces = bVar1;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsGroundedSafely(MVControllerColliderHit) */

bool Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_IsGroundedSafely
               (AvatarInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    cRam_? = '\x01';
  }
  if (moveHit.hit.interactionFlags._4_4_ != 0) {
    fVar1 = *(float *)(moveHit.hit.interactionFlags._4_4_ + 0x1c);
    bVar2 = moveHit.slopeNormal.z * moveHit.slopeNormal.z +
            moveHit.impactVelocity.x * moveHit.impactVelocity.x +
            moveHit.impactVelocity.y * moveHit.impactVelocity.y < _UNK_?;
    if (bVar2) {
code_?:
      if ((_UNK_? <= moveHit.slopeNormal.x * fVar1) &&
         (_UNK_? <= moveHit.slopeNormal.x)) {
        return _UNK_? < fVar1 && bVar2;
      }
      return 0;
    }
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
       (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar3->fields).reviveState,
       this_00 != (WebCompletionSource_1_System_Object_ *)0x0)) {
      this_01 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                WebCompletionSource_1_System_Object__get_Task
                          (this_00,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                          );
      if (this_01 != (Task *)0x0) {
        fVar1 = 1.0;
        ReviveState::ReviveState_SuppressSafeSpotSaving
                  ((ReviveState *)this_01,1.0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_OnDestroy
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarInteractable__HandlePoisonResistBoost__);
    func_?(&MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pBVar4 = (pMVar3->fields).boostController;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,unaff_EDI,MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
               (MethodInfo *)0x0);
    if (pBVar4 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (pBVar4,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar5,
                 (MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pBVar4 = (pMVar3->fields).boostController;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)&UNK_?,
                   MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,(MethodInfo *)0x0);
        if (pBVar4 != (BoostController *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    (pBVar4,BoostType__Enum_PoisonResistPercentage,(Action *)pNVar5,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_RestoreShield
               (AvatarInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  MVInteractable::MVInteractable_RestoreShield
            ((MVInteractable *)this,restoredShieldAmount,(MethodInfo *)0x0);
  pAVar1 = (this->fields).OnShieldReplenished;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)();
  }
  return;
}


/* Void SetupBoostedHealthMultiplier() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_SetupBoostedHealthMultiplier
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  (this->fields).boostedHealthMultiplier = 1.0;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 != (MVNetworkGame *)0x0) &&
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      pMVar1 != (MVLocalPlayer *)0x0)) &&
     (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
    this_02 = (Boost__Class *)&stack0xfffffff8;
    bVar2 = BoostController::BoostController_TryGetActiveBoost
                      (this_00,BoostType__Enum_ExtraHealthFloatMultiplier,(Boost **)this_02,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_02 != (Boost__Class *)0x0) {
      pOStack3 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOStack3);
      if (pOStack3 != (Object *)0x0) {
        if ((pOStack3->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int *)func_?();
          (this->fields).boostedHealthMultiplier = (float)*piVar5 / _UNK_? + _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _puStack00000010 = uVar4;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_TakeDamage
               (AvatarInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable__DamageSource);
    cRam_? = '\x01';
  }
  if (((0.0 < amount) &&
      (bVar1 = MVInteractable::MVInteractable_IgnoreDamage
                         ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0), bVar1 != 0)) ||
     (amount <= 0.0)) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) goto code_?;
  bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  cVar2 = (*(code *)(this->klass->vtable).HasModifierEffect.method)
                    (this,10,(this->klass->vtable).HandleModifierEffect.methodPtr);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = func_?(0);
  if ((cVar2 != '\0') &&
     (MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
     MVar3 == MVGameMode__Enum_Edit)) {
    return;
  }
  pMVar4 = (this->klass->vtable).HandleModifierEffect.method;
  fVar5 = (float10)(*(code *)pMVar4)(this,pMVar4,0x3f800000);
  fVar6 = (float)(fVar5 * (float10)amount) * (this->fields).damageMultiplier;
  if (0.0 <= fVar6) {
    pMVar7 = (this->fields)._.shield;
    if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar5 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                               (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
    pMVar7 = (this->fields)._.shield;
    if ((float)fVar5 < fVar6) {
      if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      fVar5 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                                 (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
      pMVar7 = (this->fields)._.shield;
      fVar8 = (float)fVar5;
      if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      (*(code *)(pMVar7->klass->vtable).set_Value.method)(pMVar7,0,pMVar7->klass[1]._0.image);
      fVar6 = fVar6 - fVar8;
    }
    else {
      if (pMVar7 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      fVar5 = (float10)(*(code *)(pMVar7->klass->vtable).get_Value.method)
                                 (pMVar7,(pMVar7->klass->vtable).set_Value.methodPtr);
      (*(code *)(pMVar7->klass->vtable).set_Value.method)
                (pMVar7,(float)fVar5 - fVar6,pMVar7->klass[1]._0.image);
      fVar6 = 0.0;
    }
  }
  pMVar9 = (this->fields)._.health;
  if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar8 = fVar6;
    (*(code *)(pMVar9->klass->vtable).get_Value.method)
              (pMVar9,(pMVar9->klass->vtable).set_Value.methodPtr);
    pMVar9 = (this->fields)._.health;
    if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar5 = (float10)(*(code *)(pMVar9->klass->vtable).get_Value.method)(pMVar9);
      fVar10 = (float)(fVar5 - (float10)fVar8);
      if ((float)(fVar5 - (float10)fVar8) <= _UNK_?) {
        fVar10 = _UNK_?;
      }
      (*(code *)(pMVar9->klass->vtable).set_Value.method)
                (pMVar9,fVar10,pMVar9->klass[1]._0.image);
      if (damageDealer != (MVPlayer *)0x0) {
        weaponName = AvatarInteractable_ExtractWeaponName
                               (this,damageDealer,damageType,(MethodInfo *)0x0);
        this_01 = (AvatarInteractable_DamageSource *)
                  func_?(TypeInfo__AvatarInteractable__DamageSource);
        AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                  (this_01,damageDealer,damageType,weaponName,(MethodInfo *)0x0);
        (this->fields).lastDamageSource = this_01;
        func_?(&(this->fields).lastDamageSource,this_01);
      }
      pAVar11 = (this->fields).OnDamageTaken;
      if (pAVar11 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        (*(pAVar11->fields)._._.invoke_impl)
                  ((pAVar11->fields)._._.method_code,fVar6,damageDealer,damageType,
                   (pAVar11->fields)._._.method);
      }
      pMVar9 = (this->fields)._.health;
      if (pMVar9 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        fVar5 = (float10)(*(code *)(pMVar9->klass->vtable).get_Value.method)
                                   (pMVar9,(pMVar9->klass->vtable).set_Value.methodPtr);
        if (0.0 < (float)fVar5) {
          return;
        }
        if ((float)pMVar9 <= 0.0) {
          return;
        }
        AvatarInteractable_DoKilledNotification(this,damageDealer,damageType,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_TakeDamageOverTime
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *damageDealer
               ,PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable__DamageSource);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) &&
       (cVar2 = (*(code *)(unaff_EBX->klass->vtable).HasModifierEffect.method)(), cVar2 == '\0')) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
      bVar1 = MVLocalPlayer::MVLocalPlayer_IsPlaying(this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (damageDealer == (MVPlayer *)0x0) goto code_?;
        (*(code *)(unaff_EBX->klass->vtable).AddModifier.method)();
        weaponName = AvatarInteractable_ExtractWeaponName
                               (unaff_EBX,damageDealer,damageType,(MethodInfo *)0x0);
        this_02 = (AvatarInteractable_DamageSource *)
                  func_?(TypeInfo__AvatarInteractable__DamageSource);
        AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                  (this_02,damageDealer,damageType,weaponName,(MethodInfo *)0x0);
        (unaff_EBX->fields).lastDamageSource = this_02;
        func_?(&(unaff_EBX->fields).lastDamageSource,this_02);
        pAVar3 = (unaff_EBX->fields).OnDamageTaken;
        if (pAVar3 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
          pvStack4 = (pAVar3->fields)._._.method;
          PStack5 = damageType;
          pMStack6 = damageDealer;
          (*(pAVar3->fields)._._.invoke_impl)();
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AvatarInteractable() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable);
    func_?(&TypeRef__AvatarModifierPackageType);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__AvatarModifierPackageType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar1 != (String__Array *)0x0) {
    TypeInfo__AvatarInteractable->static_fields->AvatarModifierPackagesCount = pSVar1->max_length;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarInteractable() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable__ctor
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable__DamageSource);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>
                   );
    func_?(&TypeInfo__InteractableMaterialHitHandler);
    func_?(&TypeInfo__MaterialHitPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarInteractable__DamageSource->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarInteractable__DamageSource);
  }
  pAVar1 = TypeInfo__AvatarInteractable__DamageSource->static_fields->none;
  (this->fields).lastDamageSource = pAVar1;
  func_?(&(this->fields).lastDamageSource,pAVar1);
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).damageMultiplier = 1.0;
  this_00 = (HashSet_1_System_ByteEnum_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
            );
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_00,6,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_00,0xe,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_00,10,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_00,5,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    (this->fields).KillNotificationBlacklist = (HashSet_1_MV_Common_PlayerKilledByType_ *)this_00;
    func_?(&(this->fields).KillNotificationBlacklist,this_00);
    pMVar2 = (MaterialHitPackage__Array *)func_?(TypeInfo__MaterialHitPackage,2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      VStack_4.Item1 = (void *)0x0;
      VStack_4.Item2 = (Object *)0x0;
      mscorlib.dll::System::ValueTuple`2[IntPtr,Object]::ValueTuple_2_IntPtr_Object___ctor
                (&VStack_4,(void *)0x4,(Object *)(pPVar3->fields).poisonParticles,(MethodInfo *)0x0)
      ;
      if (pMVar2 != (MaterialHitPackage__Array *)0x0) {
        if (pMVar2->max_length == 0) goto code_?;
        pOVar5 = VStack_4.Item2;
        pMVar2->vector[0].PackageType = (int32_t)VStack_4.Item1;
        VStack_4.Item2 = (Object *)0x0;
        VStack_4.Item1 = &pMVar2->vector[0].ParticlePrefab;
        pMVar2->vector[0].ParticlePrefab = (ParticleSystem *)pOVar5;
        VStack_6.Item2 = (Object *)&UNK_?;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          VStack_6.Item1 = (void *)0x0;
          VStack_6.Item2 = (Object *)0x0;
          mscorlib.dll::System::ValueTuple`2[IntPtr,Object]::ValueTuple_2_IntPtr_Object___ctor
                    (&VStack_6,(void *)0x14,(Object *)(pPVar3->fields).poisonParticles,
                     (MethodInfo *)0x0);
          if (1 < pMVar2->max_length) {
            pMVar2->vector[1].PackageType = (int32_t)VStack_6.Item1;
            VStack_4.Item2 = (Object *)0x0;
            VStack_4.Item1 = &pMVar2->vector[1].ParticlePrefab;
            pMVar2->vector[1].ParticlePrefab = (ParticleSystem *)VStack_6.Item2;
            VStack_6.Item2 = (Object *)&UNK_?;
            func_?();
            (this->fields).hitPackages = pMVar2;
            VStack_6.Item2 = (Object *)pMVar2;
            VStack_6.Item1 = &(this->fields).hitPackages;
            func_?();
            this_01 = (InteractableMaterialHitHandler *)
                      func_?(TypeInfo__InteractableMaterialHitHandler);
            InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
                      (this_01,(MethodInfo *)0x0);
            (this->fields).materialHitHandler = this_01;
            func_?(&(this->fields).materialHitHandler,this_01);
            MVInteractable::MVInteractable__ctor((MVInteractable *)this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  VStack_4.Item2 = (Object *)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AvatarInteractable+DamageSource get_LastDamageSource() */

AvatarInteractable_DamageSource *
Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_get_LastDamageSource
          (AvatarInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).lastDamageSource;
  if (pAVar1 == (AvatarInteractable_DamageSource *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pAVar1 = (AvatarInteractable_DamageSource *)(*pcVar2)();
    return pAVar1;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (_UNK_? < fVar3 - (pAVar1->fields).time) {
    return (AvatarInteractable_DamageSource *)0x0;
  }
  return (this->fields).lastDamageSource;
}

