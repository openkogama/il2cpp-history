
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
    if (this_01 == (BitArray *)0x0) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_01,length,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,0,1,(MethodInfo *)0x0);
    bVar2 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                      (this,0xb,(this->klass->vtable).HasModifierEffect.method);
    mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_01,4,bVar2,(MethodInfo *)0x0);
    bVar2 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                      (this,0xb,(this->klass->vtable).HasModifierEffect.method);
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
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.shield;
    if ((float)fVar2 < amount) {
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                                   (pMVar1,(pMVar1->klass->vtable).get_Value.method);
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(pMVar1->klass->vtable).set_Value.methodPtr)
                    (pMVar1,0,(pMVar1->klass->vtable).set_Value.method);
          return amount - (float)fVar2;
        }
      }
    }
    else if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                                 (pMVar1,(pMVar1->klass->vtable).get_Value.method);
      (*(pMVar1->klass->vtable).set_Value.methodPtr)
                (pMVar1,(float)fVar2 - amount,(pMVar1->klass->vtable).set_Value.method);
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
      pDVar3 = GameMessages::GameMessages_MakePlayerKilledMessage
                         (avatarId,avatarId,PlayerKilledByType__Enum_Crushed,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar4,MVGameMsgType__Enum_AvatarKilled,pDVar3,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?();
              pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar7 == 0) {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar4,NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
                }
                pAVar8 = (this->fields).OnDamageTaken;
                if (pAVar8 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar8->fields)._._.invoke_impl)();
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      pDVar3 = GameMessages::GameMessages_MakePlayerKilledMessage
                         (avatarId,avatarId,PlayerKilledByType__Enum_FallOffWorld,(MethodInfo *)0x0)
      ;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar4,MVGameMsgType__Enum_AvatarKilled,pDVar3,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?();
              pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,10,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar7 == 0) {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar4,NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
                }
                pAVar8 = (this->fields).OnDamageTaken;
                if (pAVar8 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar8->fields)._._.invoke_impl)();
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DieFromRespawn(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromRespawn
               (AvatarInteractable *this,MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.health;
  if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.health;
    if (pMVar1 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      (*(pMVar1->klass->vtable).set_Value.methodPtr)
                (pMVar1,0,(pMVar1->klass->vtable).set_Value.method);
      if ((this->fields).OnDamageTaken !=
          (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        pAVar3 = (this->fields).OnDamageTaken;
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
      pDVar3 = GameMessages::GameMessages_MakePlayerKilledMessage
                         (avatarId,avatarId,PlayerKilledByType__Enum_Crushed,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar4,MVGameMsgType__Enum_AvatarKilled,pDVar3,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)func_?();
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?();
              pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pOVar5 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
              pOVar6 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar3,pOVar5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__NotificationController);
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,0xe,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar7 == 0) {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar4,NotificationType__Enum_Kill,pDVar3,(MethodInfo *)0x0);
                }
                pAVar8 = (this->fields).OnDamageTaken;
                if (pAVar8 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar8->fields)._._.invoke_impl)();
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    cRam_? = '\x01';
  }
  if (damageDealer == (MVPlayer *)0x0) {
    pAVar1 = (this->fields).lastDamageSource;
    if (pAVar1 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
    damageDealer = (MVPlayer *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
    ;
    if ((_UNK_? < (float)damageDealer - (pAVar1->fields).time) ||
       ((this->fields).lastDamageSource == (AvatarInteractable_DamageSource *)0x0)) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
      killerId = (pMVar3->fields)._._ActorNr_k__BackingField;
    }
    else {
      pAVar1 = (this->fields).lastDamageSource;
      if ((((pAVar1 == (AvatarInteractable_DamageSource *)0x0) ||
           (defaultDamageType =
                 (PlayerKilledByType__Enum)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
           _UNK_? < (float)defaultDamageType - (pAVar1->fields).time)) ||
          (pAVar1 = (this->fields).lastDamageSource,
          pAVar1 == (AvatarInteractable_DamageSource *)0x0)) ||
         (pMVar4 = (pAVar1->fields).shooter, pMVar4 == (MVPlayer *)0x0)) goto code_?;
      killerId = (pMVar4->fields)._ActorNr_k__BackingField;
      defaultDamageType =
           (PlayerKilledByType__Enum)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((_UNK_? < (float)defaultDamageType - (pAVar1->fields).time) ||
         (pAVar1 = (this->fields).lastDamageSource, pAVar1 == (AvatarInteractable_DamageSource *)0x0
         )) goto code_?;
      uVar5 = defaultDamageType >> 8;
      defaultDamageType = CONCAT31((undefined3)(int3)uVar5,(pAVar1->fields).damageType);
    }
  }
  else {
    killerId = (damageDealer->fields)._ActorNr_k__BackingField;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pDVar6 = GameMessages::GameMessages_MakePlayerKilledMessage
                       ((pMVar3->fields)._._ActorNr_k__BackingField,killerId,
                        PlayerKilledByType__Enum_None,(MethodInfo *)0x0);
    item = 0;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                (pMVar7,MVGameMsgType__Enum_AvatarKilled,pDVar6,(MethodInfo *)0x0);
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        damageDealer = (MVPlayer *)CONCAT13(7,damageDealer._0_3_);
        pOVar8 = (Object *)func_?(TypeInfo__System__Byte,(int)&damageDealer + 3);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar6,pOVar8,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar8 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
          pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar6,pOVar8,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar8 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
          pOVar9 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar6,pOVar8,pOVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
          this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
          if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
            bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                    HashSet_1_System_ByteEnum__Contains
                              (this_00,item,
                               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                              );
            if (bVar10 == 0) {
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar7 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_PostNotificationOperation
                        (pMVar7,NotificationType__Enum_Kill,pDVar6,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
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
    cVar3 = (*(this->klass->vtable).HasModifierEffect.methodPtr)();
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
  (*(this->klass->vtable).AddModifier.methodPtr)();
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
         (pSVar30 = (SpawnRoleVariable_1_System_Object_ *)(pSVar29->fields).reviveState,
         pSVar30 == (SpawnRoleVariable_1_System_Object_ *)0x0)) goto code_?;
      puVar22 = &UNK_?;
      unaff_EDI = (MethodInfo *)
                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
                  SpawnRoleVariable_1_System_Object__get_Value
                            (pSVar30,
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
         (pSVar30 = (SpawnRoleVariable_1_System_Object_ *)(pSVar29->fields).spawnRoleMode,
         pSVar30 == (SpawnRoleVariable_1_System_Object_ *)0x0)) goto code_?;
      puVar22 = &UNK_?;
      unaff_EDI = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
      ;
      pOVar32 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                          (pSVar30,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                          );
      if ((pOVar32 == (Object *)0x1) &&
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
    (*(this->klass->vtable).AddModifier.methodPtr)();
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
            if ((pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
               (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)this,
                           MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
                           (MethodInfo *)0x0), pBVar7 != (BoostController *)0x0)) {
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
                  if ((pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
                     (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (pNVar8,(Object *)this,
                                 MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,
                                 (MethodInfo *)0x0), pBVar7 != (BoostController *)0x0)) {
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
       (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).reviveState,
       this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
      this_01 = (ReviveState *)
                Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                          (this_00,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                          );
      if (this_01 != (ReviveState *)0x0) {
        fVar1 = 1.0;
        ReviveState::ReviveState_SuppressSafeSpotSaving(this_01,1.0,(MethodInfo *)0x0);
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
    if ((pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
       (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,unaff_EDI,MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
                   (MethodInfo *)0x0), pBVar4 != (BoostController *)0x0)) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (pBVar4,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar5,
                 (MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pBVar4 = (pMVar3->fields).boostController;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if ((pNVar5 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
           (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)&UNK_?,
                       MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,(MethodInfo *)0x0),
           pBVar4 != (BoostController *)0x0)) {
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
  if ((this->fields).OnShieldReplenished != (Action *)0x0) {
    pAVar1 = (this->fields).OnShieldReplenished;
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
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
  if (_UNK_? < amount) {
    bVar1 = MVInteractable::MVInteractable_IgnoreDamage
                      ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
  }
  else {
    bVar1 = MVInteractable::MVInteractable_IgnoreHealing
                      ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(pMVar2->klass->vtable).get_Value.methodPtr)
              (pMVar2,(pMVar2->klass->vtable).get_Value.method);
    pMVar3 = (this->fields)._.maxHealth;
    if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
    pMVar4 = (pMVar3->klass->vtable).get_Value.method;
    iVar5 = (*(pMVar3->klass->vtable).get_Value.methodPtr)(pMVar3);
    if ((float)iVar5 <= (float)pMVar4) {
      fVar6 = (float10)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                  (this,0x14,0,(this->klass->vtable).HandleModifierEffect.method);
      fVar7 = (float)fVar6;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (*(this->klass->vtable).RestoreShield.methodPtr)(this,fVar8 * fVar7);
    }
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) goto code_?;
  bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
  if ((bVar1 != 0) &&
     (cVar9 = (*(this->klass->vtable).HasModifierEffect.methodPtr)(this,10), cVar9 == '\0')) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField != 0)
       && (MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
          MVar10 == MVGameMode__Enum_Edit)) {
      return;
    }
    pIVar11 = (this->klass->vtable).HandleModifierEffect.methodPtr;
    fVar6 = (float10)(*pIVar11)(this,6,pIVar11,(this->klass->vtable).HandleModifierEffect.method);
    fVar7 = (float)(fVar6 * (float10)amount) * (this->fields).damageMultiplier;
    if (0.0 <= fVar7) {
      pMVar12 = (this->fields)._.shield;
      if (pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
      fVar6 = (float10)(*(pMVar12->klass->vtable).get_Value.methodPtr)(pMVar12);
      pMVar12 = (this->fields)._.shield;
      if ((float)fVar6 < fVar7) {
        if (pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        (*(pMVar12->klass->vtable).get_Value.methodPtr)(pMVar12);
        pMVar12 = (this->fields)._.shield;
        if (pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        pMVar4 = (pMVar12->klass->vtable).set_Value.method;
        (*(pMVar12->klass->vtable).set_Value.methodPtr)(pMVar12,0);
        fVar7 = fVar7 - (float)pMVar4;
      }
      else {
        if (pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
        fVar6 = (float10)(*(pMVar12->klass->vtable).get_Value.methodPtr)(pMVar12);
        (*(pMVar12->klass->vtable).set_Value.methodPtr)
                  (pMVar12,(float)fVar6 - fVar7,(pMVar12->klass->vtable).set_Value.method);
        fVar7 = 0.0;
      }
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    (*(pMVar2->klass->vtable).get_Value.methodPtr)(pMVar2);
    pMVar2 = (this->fields)._.health;
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      fVar6 = (float10)func_?(4,pMVar2);
      fVar8 = (float)fVar6 - fVar7;
    }
    else {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      fVar6 = (float10)func_?(4,pMVar2);
      pMVar3 = (this->fields)._.maxHealth;
      if (pMVar3 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
      fVar8 = (float)fVar6 - fVar7;
      iVar5 = (*(pMVar3->klass->vtable).get_Value.methodPtr)(pMVar3);
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if ((float)iVar5 < fVar8) {
        fVar8 = (float)iVar5;
      }
      pMVar2 = (this->fields)._.health;
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
    }
    func_?(5,pMVar2,fVar8);
    if (damageDealer != (MVPlayer *)0x0) {
      this_01 = (AvatarInteractable_DamageSource *)
                func_?(TypeInfo__AvatarInteractable__DamageSource);
      if (this_01 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
      AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                (this_01,damageDealer,damageType,(MethodInfo *)0x0);
      (this->fields).lastDamageSource = this_01;
      func_?(&(this->fields).lastDamageSource,this_01);
    }
    if ((this->fields).OnDamageTaken !=
        (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
      pAVar13 = (this->fields).OnDamageTaken;
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,fVar7,damageDealer,damageType,
                 (pAVar13->fields)._._.method);
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
code_?:
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    fVar6 = (float10)(*(pMVar2->klass->vtable).get_Value.methodPtr)
                                (pMVar2,(pMVar2->klass->vtable).get_Value.method);
    if (((float)fVar6 <= 0.0) && (0.0 < (float)pMVar2)) {
      AvatarInteractable_DoKilledNotification(this,damageDealer,damageType,(MethodInfo *)0x0);
    }
  }
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
    if ((bVar1 == 0) || (cVar2 = (**(code **)(*unaff_ESI + 0x10c))(), cVar2 != '\0')) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVLocalPlayer::MVLocalPlayer_IsPlaying(this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      if (damageDealer != (MVPlayer *)0x0) {
        (**(code **)(*unaff_ESI + 0xf4))();
        this_02 = (AvatarInteractable_DamageSource *)
                  func_?(TypeInfo__AvatarInteractable__DamageSource);
        if (this_02 != (AvatarInteractable_DamageSource *)0x0) {
          AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                    (this_02,damageDealer,damageType,(MethodInfo *)0x0);
          unaff_ESI[0x10] = (int)this_02;
          func_?(unaff_ESI + 0x10,this_02);
          if (unaff_ESI[0xd] == 0) {
            return;
          }
          (**(code **)(unaff_ESI[0xd] + 0xc))();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>
                           );
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)0x6,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)0xe,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)0xa,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)this_00,(Object *)0x5,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
              );
    (this->fields).KillNotificationBlacklist = (HashSet_1_MV_Common_PlayerKilledByType_ *)this_00;
    func_?(&(this->fields).KillNotificationBlacklist,this_00);
    pMVar2 = (MaterialHitPackage__Array *)func_?();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      KStack_4.key = 0;
      KStack_4.value = (Object *)0x0;
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Int32Enum,System::Object]::
      KeyValuePair_2_System_Int32Enum_System_Object___ctor
                (&KStack_4,4,(Object *)(pPVar3->fields).poisonParticles,(MethodInfo *)0x0);
      if (pMVar2 != (MaterialHitPackage__Array *)0x0) {
        if (pMVar2->max_length == 0) goto code_?;
        pMVar2->vector[0].PackageType = KStack_4.key;
        KStack_5.value = (Object *)0x0;
        KStack_5.key = (int32_t)&pMVar2->vector[0].ParticlePrefab;
        pMVar2->vector[0].ParticlePrefab = (ParticleSystem *)KStack_4.value;
        func_?();
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          KStack_5.key = 0;
          KStack_5.value = (Object *)0x0;
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Int32Enum,System::
          Object]::KeyValuePair_2_System_Int32Enum_System_Object___ctor
                    (&KStack_5,0x14,(Object *)(pPVar3->fields).poisonParticles,(MethodInfo *)0x0);
          if (pMVar2->max_length < 2) goto code_?;
          pOVar6 = KStack_5.value;
          pMVar2->vector[1].PackageType = KStack_5.key;
          KStack_5.value = (Object *)0x0;
          KStack_5.key = (int32_t)&pMVar2->vector[1].ParticlePrefab;
          pMVar2->vector[1].ParticlePrefab = (ParticleSystem *)pOVar6;
          func_?();
          (this->fields).hitPackages = pMVar2;
          func_?(&(this->fields).hitPackages,pMVar2);
          this_01 = (InteractableMaterialHitHandler *)
                    func_?(TypeInfo__InteractableMaterialHitHandler);
          if (this_01 != (InteractableMaterialHitHandler *)0x0) {
            InteractableMaterialHitHandler::InteractableMaterialHitHandler__ctor
                      (this_01,(MethodInfo *)0x0);
            (this->fields).materialHitHandler = this_01;
            func_?(&(this->fields).materialHitHandler,this_01);
            MVInteractable::MVInteractable__ctor((MVInteractable *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  KStack_5.value = (Object *)&UNK_?;
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

