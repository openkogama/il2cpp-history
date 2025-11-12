
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_AddModifier
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 != '\0') {
        if (*(int *)&(TypeInfo__AvatarInteractable->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AvatarInteractable);
        }
        length = TypeInfo__AvatarInteractable->static_fields->AvatarModifierPackagesCount;
        this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
        mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1
                  (this_00,length,0,(MethodInfo *)0x0);
        if (this_00 == (BitArray *)0x0) goto code_?;
        mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_00,0,1,(MethodInfo *)0x0);
        bVar3 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                          (this,0xb,(this->klass->vtable).HasModifierEffect.method);
        mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_00,4,bVar3,(MethodInfo *)0x0)
        ;
        bVar3 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                          (this,0xb,(this->klass->vtable).HasModifierEffect.method);
        mscorlib.dll::System::Collections::BitArray::BitArray_Set(this_00,6,bVar3,(MethodInfo *)0x0)
        ;
        bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (this_00,type,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          MVInteractable::MVInteractable_AddModifier
                    ((MVInteractable *)this,type,id,additionalModifers,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                             (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    pMVar1 = (this->fields)._.shield;
    if (fVar2 < amount) {
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                                 (pMVar1,(pMVar1->klass->vtable).get_Value.method);
        pMVar1 = (this->fields)._.shield;
        if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          (*(pMVar1->klass->vtable).set_Value.methodPtr)
                    (pMVar1,0,(pMVar1->klass->vtable).set_Value.method);
          return amount - fVar2;
        }
      }
    }
    else if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
      (*(pMVar1->klass->vtable).set_Value.methodPtr)
                (pMVar1,fVar2 - amount,(pMVar1->klass->vtable).set_Value.method);
      return 0.0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Void DieFromBeingStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromBeingStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar4->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,
                               (PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)in_R8 >> 8),0xe)
                               ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar2->fields).operationRequests,
         pMVar5 != (MVNetworkGame_OperationRequests *)0x0)) {
        uVar6 = 0;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
        pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            aiStackX_18[0] = (pMVar4->fields)._._ActorNr_k__BackingField;
            pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = avatarId;
              pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0]._0_1_ = 8;
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0xe);
              pOVar8 = (Object *)FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18)
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                this_02 = NotificationController::NotificationController_get_NotificationsManager
                                    ((MethodInfo *)0x0);
                if (this_02 == (NotificationsManager *)0x0) goto code_?;
                pOVar7 = (Object *)0x0;
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this_02,NotificationType__Enum_Kill,
                           (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,(ByteEnum__Enum)
                                           CONCAT71((int7)((ulonglong)pOVar7 >> 8),0xe),
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar9 == 0) {
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar10 = (this->fields).OnDamageTaken;
                if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar10->fields)._._.invoke_impl)
                            ((pAVar10->fields)._._.method_code,_UNK_?,0,0xe,
                             (pAVar10->fields)._._.method);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DieFromFalling() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromFalling
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar4->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,
                               (PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)in_R8 >> 8),10),
                               (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar2->fields).operationRequests,
         pMVar5 != (MVNetworkGame_OperationRequests *)0x0)) {
        uVar6 = 0;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
        pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            aiStackX_18[0] = (pMVar4->fields)._._ActorNr_k__BackingField;
            pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = avatarId;
              pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0]._0_1_ = 8;
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,10);
              pOVar8 = (Object *)FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18)
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                this_02 = NotificationController::NotificationController_get_NotificationsManager
                                    ((MethodInfo *)0x0);
                if (this_02 == (NotificationsManager *)0x0) goto code_?;
                pOVar7 = (Object *)0x0;
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this_02,NotificationType__Enum_Kill,
                           (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,(ByteEnum__Enum)
                                           CONCAT71((int7)((ulonglong)pOVar7 >> 8),10),
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar9 == 0) {
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar10 = (this->fields).OnDamageTaken;
                if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar10->fields)._._.invoke_impl)
                            ((pAVar10->fields)._._.method_code,_UNK_?,0,10,
                             (pAVar10->fields)._._.method);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DieFromRespawn(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromRespawn
               (AvatarInteractable *this,MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.health;
  uVar2 = (uint8_t)damageType;
  if (pMVar1 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (*(pMVar1->klass->vtable).get_Value.methodPtr)
                     (pMVar1,(pMVar1->klass->vtable).get_Value.method);
  pMVar1 = (this->fields)._.health;
  if (pMVar1 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
  (*(pMVar1->klass->vtable).set_Value.methodPtr)(pMVar1,0,(pMVar1->klass->vtable).set_Value.method);
  pAVar5 = (this->fields).OnDamageTaken;
  if (pAVar5 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
    (*(pAVar5->fields)._._.invoke_impl)
              ((pAVar5->fields)._._.method_code,uVar4,damageDealer,uVar2,
               (pAVar5->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (damageDealer == (MVPlayer *)0x0) {
    pAVar6 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
    if (pAVar6 == (AvatarInteractable_DamageSource *)0x0) {
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 == (MVNetworkGame *)0x0) ||
         (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0))
      goto code_?;
      pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
      if (pMVar9 == (MVLocalPlayer *)0x0) goto code_?;
      killerId = (pMVar9->fields)._._ActorNr_k__BackingField;
      value = ::StringLiteral__;
    }
    else {
      pAVar6 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if ((pAVar6 == (AvatarInteractable_DamageSource *)0x0) ||
         (pMVar10 = (pAVar6->fields).shooter, pMVar10 == (MVPlayer *)0x0)) goto code_?;
      killerId = (pMVar10->fields)._ActorNr_k__BackingField;
      pAVar6 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if (pAVar6 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
      uVar2 = (pAVar6->fields).damageType;
      pAVar6 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if (pAVar6 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
      value = (pAVar6->fields).weaponName;
    }
  }
  else {
    killerId = (damageDealer->fields)._ActorNr_k__BackingField;
    value = AvatarInteractable_ExtractWeaponName
                      (this,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar11 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar11->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) {
    pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
    if (pMVar9 != (MVLocalPlayer *)0x0) {
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              ((pMVar9->fields)._._ActorNr_k__BackingField,killerId,(uint)uVar2,
                               (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar11 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar11->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (pMVar12 = (pMVar7->fields).operationRequests,
         pMVar12 != (MVNetworkGame_OperationRequests *)0x0)) {
        uVar13 = 0;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar12,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
        pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar11 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar11->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) {
          pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
          if (pMVar9 != (MVLocalPlayer *)0x0) {
            aiStackX_18[0] = (pMVar9->fields)._._ActorNr_k__BackingField;
            pOVar15 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar14,pOVar15,
                         (InsertionBehavior__Enum)uVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
              pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = killerId;
              pOVar15 = (Object *)FUN_?(uRam_?,aiStackX_18);
              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar14,pOVar15,
                         (InsertionBehavior__Enum)uVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0]._0_1_ = 8;
              pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0]._0_1_ = uVar2;
              pOVar15 = (Object *)
                        FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18);
              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar14,pOVar15,
                         (InsertionBehavior__Enum)uVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0x13);
              pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar14,
                         (Object *)value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                this_02 = NotificationController::NotificationController_get_NotificationsManager
                                    ((MethodInfo *)0x0);
                if (this_02 == (NotificationsManager *)0x0) goto code_?;
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this_02,NotificationType__Enum_Kill,
                           (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,(uint)uVar2,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar16 == 0) {
                  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (pMVar12 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar12,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DieFromStuck() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DieFromStuck
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      avatarId = (pMVar4->fields)._._ActorNr_k__BackingField;
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              (avatarId,avatarId,
                               (PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)in_R8 >> 8),0xe)
                               ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar2->fields).operationRequests,
         pMVar5 != (MVNetworkGame_OperationRequests *)0x0)) {
        uVar6 = 0;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar5,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
        pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            aiStackX_18[0] = (pMVar4->fields)._._ActorNr_k__BackingField;
            pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = avatarId;
              pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0]._0_1_ = 8;
              pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0xe);
              pOVar8 = (Object *)FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18)
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar7,pOVar8,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                this_02 = NotificationController::NotificationController_get_NotificationsManager
                                    ((MethodInfo *)0x0);
                if (this_02 == (NotificationsManager *)0x0) goto code_?;
                pOVar7 = (Object *)0x0;
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this_02,NotificationType__Enum_Kill,
                           (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,(ByteEnum__Enum)
                                           CONCAT71((int7)((ulonglong)pOVar7 >> 8),0xe),
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar9 == 0) {
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (pMVar5 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar5,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                pAVar10 = (this->fields).OnDamageTaken;
                if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                  (*(pAVar10->fields)._._.invoke_impl)
                            ((pAVar10->fields)._._.method_code,_UNK_?,0,0xe,
                             (pAVar10->fields)._._.method);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DoKilledNotification(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_DoKilledNotification
               (AvatarInteractable *this,MVPlayer *damageDealer,
               PlayerKilledByType__Enum defaultDamageType,MethodInfo *method)

{
  uVar1 = (uint8_t)defaultDamageType;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (damageDealer == (MVPlayer *)0x0) {
    pAVar2 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
    if (pAVar2 == (AvatarInteractable_DamageSource *)0x0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
      goto code_?;
      pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
      if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
      killerId = (pMVar5->fields)._._ActorNr_k__BackingField;
      value = ::StringLiteral__;
    }
    else {
      pAVar2 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if ((pAVar2 == (AvatarInteractable_DamageSource *)0x0) ||
         (pMVar6 = (pAVar2->fields).shooter, pMVar6 == (MVPlayer *)0x0)) goto code_?;
      killerId = (pMVar6->fields)._ActorNr_k__BackingField;
      pAVar2 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if (pAVar2 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
      uVar1 = (pAVar2->fields).damageType;
      pAVar2 = AvatarInteractable_get_LastDamageSource(this,(MethodInfo *)0x0);
      if (pAVar2 == (AvatarInteractable_DamageSource *)0x0) goto code_?;
      value = (pAVar2->fields).weaponName;
    }
  }
  else {
    killerId = (damageDealer->fields)._ActorNr_k__BackingField;
    value = AvatarInteractable_ExtractWeaponName
                      (this,damageDealer,defaultDamageType & 0xff,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar7->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
    pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                              ((pMVar5->fields)._._ActorNr_k__BackingField,killerId,(uint)uVar1,
                               (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar7 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar7->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar8 = (pMVar3->fields).operationRequests,
         pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
        uVar9 = 0;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                  (pMVar8,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,7);
        pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar7 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar7->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
          pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          if (pMVar5 != (MVLocalPlayer *)0x0) {
            aiStackX_18[0] = (pMVar5->fields)._._ActorNr_k__BackingField;
            pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_18);
            if (this_01 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar10,pOVar11,
                         (InsertionBehavior__Enum)uVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,6);
              pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0] = killerId;
              pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_18);
              uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar10,pOVar11,
                         (InsertionBehavior__Enum)uVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0]._0_1_ = 8;
              pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_18);
              aiStackX_18[0]._0_1_ = uVar1;
              pOVar11 = (Object *)
                        FUN_?(TypeInfo__MV__Common__PlayerKilledByType,aiStackX_18);
              uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar10,pOVar11,
                         (InsertionBehavior__Enum)uVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0x13);
              pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_18);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar10,(Object *)value
                         ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                this_02 = NotificationController::NotificationController_get_NotificationsManager
                                    ((MethodInfo *)0x0);
                if (this_02 == (NotificationsManager *)0x0) goto code_?;
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this_02,NotificationType__Enum_Kill,
                           (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
              }
              this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).KillNotificationBlacklist;
              if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
                bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                        HashSet_1_System_ByteEnum__Contains
                                  (this_00,(uint)uVar1,
                                   MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Contains_MV__Common__PlayerKilledByType_
                                  );
                if (bVar12 == 0) {
                  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  if (pMVar8 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::
                  MVNetworkGame_OperationRequests_PostNotificationOperation
                            (pMVar8,NotificationType__Enum_Kill,
                             (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
                  ;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* String ExtractWeaponName(MVPlayer, PlayerKilledByType) */

String * Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_ExtractWeaponName
                   (AvatarInteractable *this,MVPlayer *damageDealer,
                   PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemEditable);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((char)damageType - 7U & 0xef) != 0) {
    return ::StringLiteral__;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((damageDealer != (MVPlayer *)0x0) &&
       (pSVar1 = (damageDealer->fields).spawnRolesManager, pSVar1 != (SpawnRolesManager *)0x0)) &&
      (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) &&
     ((this_00 != (MVWorldObjectClientManager *)0x0 &&
      (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_00,(pSVar2->fields).activeSpawnRole,(MethodInfo *)0x0),
      pMVar3 != (MVWorldObjectClient *)0x0)))) {
    bVar4 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
       ((MVAvatar__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__MVAvatar)) {
      FUN_?(pMVar3,TypeInfo__MVAvatar);
      pcVar5 = (code *)swi(3);
      pSVar6 = (String *)(*pcVar5)();
      return pSVar6;
    }
    lVar7 = *(longlong *)&pMVar3[1].fields._.type;
    if (lVar7 != 0) {
      plVar8 = *(longlong **)(lVar7 + 0x50);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (plVar8 == (longlong *)0x0) {
        return ::StringLiteral__;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (plVar8[2] == 0) {
        return ::StringLiteral__;
      }
      lVar7 = *plVar8;
      bVar4 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
      if (*(byte *)(lVar7 + 0x130) < bVar4) {
        return ::StringLiteral__;
      }
      if (*(PickupItemEditable__Class **)(*(longlong *)(lVar7 + 200) + -8 + (ulonglong)bVar4 * 8) !=
          TypeInfo__PickupItemEditable) {
        return ::StringLiteral__;
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar6 = (String *)(**(code **)(lVar7 + 0x368))(plVar8,*(undefined8 *)(lVar7 + 0x370));
      return pSVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Single GetBoostedHealth(Single) */

float Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_GetBoostedHealth
                (AvatarInteractable *this,float defaultHealth,MethodInfo *method)

{
  return defaultHealth * (this->fields).boostedHealthMultiplier;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandleMoveHit
               (AvatarInteractable *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
  MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
  MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
  MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
  MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
  MStack_1.moveDirection.y = (moveHit->moveDirection).y;
  MStack_1.moveDirection.z = (moveHit->moveDirection).z;
  MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
  MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
  MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
  MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
  MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
  MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
  MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
  MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
  MStack_1.hit.point.x = (moveHit->hit).point.x;
  MStack_1.hit.point.y = (moveHit->hit).point.y;
  MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
  MStack_1.hit.normal.y = (moveHit->hit).normal.y;
  MStack_1.hit.normal.z = (moveHit->hit).normal.z;
  MStack_1.hit.cubePos = (moveHit->hit).cubePos;
  MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
  MStack_1.hit.face = (moveHit->hit).face;
  MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
  MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
  MStack_1.hit.woId = (moveHit->hit).woId;
  MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
  MStack_1.hit.collider = (moveHit->hit).collider;
  MStack_1.hit.transform = (moveHit->hit).transform;
  MStack_1.hit.cube = (moveHit->hit).cube;
  MStack_1.hit.distance = (moveHit->hit).distance;
  MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
  MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
  MStack_1.material = moveHit->material;
  if (MStack_1.material == (MVMaterial *)0x0) goto code_?;
  iVar2 = ((MStack_1.material)->fields)._ModifierPackageType_k__BackingField;
  if (((iVar2 != 0) && (iVar2 == 0x18)) &&
     (cVar3 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                         (this,0x1b,(this->klass->vtable).HasModifierEffect.method), cVar3 == '\0')
     ) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0))
    goto code_?;
    MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
    MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
    MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    this_00 = (RuntimeEventManager *)(pWVar5->fields)._.runtimeEventManagerNetwork;
    MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
    MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
    MStack_1.moveDirection.y = (moveHit->moveDirection).y;
    MStack_1.moveDirection.z = (moveHit->moveDirection).z;
    MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
    MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
    MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
    MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
    MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
    MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
    MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
    MStack_1.hit.point.x = (moveHit->hit).point.x;
    MStack_1.hit.point.y = (moveHit->hit).point.y;
    MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
    MStack_1.hit.normal.y = (moveHit->hit).normal.y;
    MStack_1.hit.normal.z = (moveHit->hit).normal.z;
    MStack_1.hit.cubePos = (moveHit->hit).cubePos;
    MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
    MStack_1.hit.face = (moveHit->hit).face;
    MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
    MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    MStack_1.hit.woId = (moveHit->hit).woId;
    MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
    MStack_1.hit.cube = (moveHit->hit).cube;
    MStack_1.hit.distance = (moveHit->hit).distance;
    MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
    MStack_1.hit.collider = (moveHit->hit).collider;
    MStack_1.hit.transform = (moveHit->hit).transform;
    MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
    MStack_1.material = moveHit->material;
    if (this_00 == (RuntimeEventManager *)0x0) goto code_?;
    VStack_6.point._0_8_ = MStack_1.hit.point._0_8_;
    VStack_6._8_8_ = MStack_1.hit._8_8_;
    VStack_6.normal._4_8_ = MStack_1.hit.normal._4_8_;
    VStack_6._24_8_ = MStack_1.hit._24_8_;
    VStack_6._32_8_ = MStack_1.hit._32_8_;
    VStack_6._40_8_ = MStack_1.hit._40_8_;
    VStack_6.cube = MStack_1.hit.cube;
    VStack_6._56_8_ = MStack_1.hit._56_8_;
    VStack_6.collider = MStack_1.hit.collider;
    VStack_6.transform = MStack_1.hit.transform;
    VStack_6.interactionFlags = MStack_1.hit.interactionFlags;
    RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
              (this_00,&VStack_6,_UNK_?,(MethodInfo *)0x0);
  }
  MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
  MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
  MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
  MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
  MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
  MStack_1.moveDirection.y = (moveHit->moveDirection).y;
  MStack_1.moveDirection.z = (moveHit->moveDirection).z;
  MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
  MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
  MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
  MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
  MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
  MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
  MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
  MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
  MStack_1.hit.point.x = (moveHit->hit).point.x;
  MStack_1.hit.point.y = (moveHit->hit).point.y;
  MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
  MStack_1.hit.normal.y = (moveHit->hit).normal.y;
  MStack_1.hit.normal.z = (moveHit->hit).normal.z;
  MStack_1.hit.cubePos = (moveHit->hit).cubePos;
  MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
  MStack_1.hit.face = (moveHit->hit).face;
  MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
  MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
  MStack_1.hit.woId = (moveHit->hit).woId;
  MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
  MStack_1.hit.cube = (moveHit->hit).cube;
  MStack_1.hit.distance = (moveHit->hit).distance;
  MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
  MStack_1.hit.collider = (moveHit->hit).collider;
  MStack_1.hit.transform = (moveHit->hit).transform;
  MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
  MStack_1.material = moveHit->material;
  if (MStack_1.material != (MVMaterial *)0x0) {
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,(ulonglong)
                    (uint)((MStack_1.material)->fields)._ModifierPackageType_k__BackingField,
               0xffffffff,0,(this->klass->vtable).AddModifier.method);
    if (iVar2 == 0) {
      MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
      MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
      MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
      MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
      MStack_1.moveDirection.y = (moveHit->moveDirection).y;
      MStack_1.moveDirection.z = (moveHit->moveDirection).z;
      MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
      MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
      MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
      MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
      MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
      MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
      MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
      MStack_1.hit.point.x = (moveHit->hit).point.x;
      MStack_1.hit.point.y = (moveHit->hit).point.y;
      MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
      MStack_1.hit.normal.y = (moveHit->hit).normal.y;
      MStack_1.hit.normal.z = (moveHit->hit).normal.z;
      MStack_1.hit.cubePos = (moveHit->hit).cubePos;
      MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
      MStack_1.hit.face = (moveHit->hit).face;
      MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
      MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      MStack_1.hit.woId = (moveHit->hit).woId;
      MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
      MStack_1.hit.cube = (moveHit->hit).cube;
      MStack_1.hit.distance = (moveHit->hit).distance;
      MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
      MStack_1.hit.collider = (moveHit->hit).collider;
      MStack_1.hit.transform = (moveHit->hit).transform;
      MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
      MStack_1.material = moveHit->material;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_6.point.x = (moveHit->positionTouchingHit).x;
      VStack_6.point.y = (moveHit->positionTouchingHit).y;
      VStack_6._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      uStack_7 = *(undefined8 *)&moveHit->testWithOutMoving;
      VStack_6.normal.y = (moveHit->moveDirection).y;
      VStack_6.normal.z = (moveHit->moveDirection).z;
      VStack_6._24_8_ = *(undefined8 *)&moveHit->elipsoidNormal;
      VStack_6._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      VStack_6.woId = (int32_t)(moveHit->slopeNormal).y;
      VStack_6._44_4_ = (moveHit->slopeNormal).z;
      VStack_6.cube = *(Cube **)&moveHit->impactVelocity;
      VStack_6._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
      VStack_6.collider = *(Collider **)&(moveHit->hit).point;
      VStack_6.transform = *(Transform **)&(moveHit->hit).point.z;
      VStack_6.interactionFlags._0_4_ = (moveHit->hit).normal.y;
      VStack_6.interactionFlags._4_4_ = (moveHit->hit).normal.z;
      uStack_8 = *(undefined8 *)&(moveHit->hit).cubePos;
      uStack_9._0_4_ = (moveHit->hit).face;
      uStack_9._4_1_ = (moveHit->hit).isCubeHit;
      uStack_9._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      uStack_10 = *(undefined8 *)&(moveHit->hit).woId;
      pCStack_11 = (moveHit->hit).cube;
      uStack_12 = *(undefined8 *)&(moveHit->hit).distance;
      pCStack_13 = (moveHit->hit).collider;
      pTStack_14 = (moveHit->hit).transform;
      iStack_15 = (moveHit->hit).interactionFlags;
      pMStack_16 = moveHit->material;
      if (pMStack_16 == (MVMaterial *)0x0) goto code_?;
      VStack_6.point.x = (moveHit->positionTouchingHit).x;
      VStack_6.point.y = (moveHit->positionTouchingHit).y;
      VStack_6._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      VStack_6.normal.y = (moveHit->moveDirection).y;
      VStack_6.normal.z = (moveHit->moveDirection).z;
      VStack_6._24_8_ = *(undefined8 *)&moveHit->elipsoidNormal;
      fVar17 = (pMStack_16->fields)._PhysicalProperties_k__BackingField.friction;
      fStack_18 = (pMStack_16->fields)._PhysicalProperties_k__BackingField.toughness;
      VStack_6._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      VStack_6.woId = (int32_t)(moveHit->slopeNormal).y;
      VStack_6._44_4_ = (moveHit->slopeNormal).z;
      uStack_7 = *(undefined8 *)&moveHit->testWithOutMoving;
      VStack_6.cube = *(Cube **)&moveHit->impactVelocity;
      VStack_6._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
      VStack_6.collider = *(Collider **)&(moveHit->hit).point;
      VStack_6.transform = *(Transform **)&(moveHit->hit).point.z;
      VStack_6.interactionFlags._0_4_ = (moveHit->hit).normal.y;
      VStack_6.interactionFlags._4_4_ = (moveHit->hit).normal.z;
      uStack_8 = *(undefined8 *)&(moveHit->hit).cubePos;
      uStack_9._0_4_ = (moveHit->hit).face;
      uStack_9._4_1_ = (moveHit->hit).isCubeHit;
      uStack_9._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      uStack_10 = *(undefined8 *)&(moveHit->hit).woId;
      pCStack_11 = (moveHit->hit).cube;
      uStack_12 = *(undefined8 *)&(moveHit->hit).distance;
      pCStack_13 = (moveHit->hit).collider;
      pTStack_14 = (moveHit->hit).transform;
      iStack_15 = (moveHit->hit).interactionFlags;
      pMStack_16 = moveHit->material;
      bVar19 = MStack_1.impactVelocity.y * MStack_1.impactVelocity.y +
              MStack_1.impactVelocity.x * MStack_1.impactVelocity.x +
              MStack_1.impactVelocity.z * MStack_1.impactVelocity.z < _UNK_?;
      if (!bVar19) {
        pSVar20 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (((pSVar20 == (SpawnRoleDataMediator *)0x0) ||
            (pSVar21 = (pSVar20->fields).reviveState,
            pSVar21 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) ||
           ((pSVar22 = (pSVar21->fields)._.subscribableVariable,
            pSVar22 == (SubscribableVariable_1_ReviveState_ *)0x0 ||
            (pRVar23 = (pSVar22->fields)._.value, pRVar23 == (ReviveState *)0x0))))
        goto code_?;
        pcVar24 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar24 = (code *)FUN_?(), pcVar24 == (code *)0x0)) {
          uVar25 = func_?(&UNK_?);
          FUN_?(uVar25,0);
          pcVar24 = (code *)swi(3);
          (*pcVar24)();
          return;
        }
        pcRam_? = pcVar24;
        fVar26 = (float)(*pcRam_?)();
        (pRVar23->fields).safeSpotSuppressedTime = fVar26;
        (pRVar23->fields).safeSpotSuppressedDuration = 1.0;
      }
      if (((float)VStack_6.woId * fVar17 < _UNK_?) ||
         ((float)VStack_6.woId < _UNK_?)) {
        bVar27 = false;
      }
      else {
        bVar27 = _UNK_? < fVar17;
      }
      if ((bool)(bVar19 & bVar27)) {
        pSVar20 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (((pSVar20 == (SpawnRoleDataMediator *)0x0) ||
            (pSVar28 = (pSVar20->fields).spawnRoleMode,
            pSVar28 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                       *)0x0)) ||
           (pSVar29 = (pSVar28->fields)._.subscribableVariable,
           pSVar29 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
        goto code_?;
        if (((pSVar29->fields)._.value == 1) &&
           ((this->fields).OnNewSafePosition != (Action_1_UnityEngine_Vector3_ *)0x0)) {
          pAVar30 = (this->fields).OnNewSafePosition;
          VStack_31.x = (moveHit->positionTouchingHit).x;
          VStack_31.y = (moveHit->positionTouchingHit).y;
          MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
          MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
          MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
          MStack_1.moveDirection.y = (moveHit->moveDirection).y;
          MStack_1.moveDirection.z = (moveHit->moveDirection).z;
          MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
          MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
          MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
          MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
          MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
          MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
          MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
          MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
          MStack_1.hit.point.x = (moveHit->hit).point.x;
          MStack_1.hit.point.y = (moveHit->hit).point.y;
          MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
          MStack_1.hit.normal.y = (moveHit->hit).normal.y;
          MStack_1.hit.normal.z = (moveHit->hit).normal.z;
          MStack_1.hit.cubePos = (moveHit->hit).cubePos;
          MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
          MStack_1.hit.face = (moveHit->hit).face;
          MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
          MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
          MStack_1.hit.woId = (moveHit->hit).woId;
          MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
          MStack_1.hit.cube = (moveHit->hit).cube;
          MStack_1.hit.distance = (moveHit->hit).distance;
          MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
          MStack_1.hit.collider = (moveHit->hit).collider;
          MStack_1.hit.transform = (moveHit->hit).transform;
          MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
          MStack_1.material = moveHit->material;
          VStack_31.z = MStack_1.positionTouchingHit.z;
          MStack_1.positionTouchingHit._0_8_ = VStack_31._0_8_;
          (*(pAVar30->fields)._._.invoke_impl)((pAVar30->fields)._._.method_code,&VStack_31);
        }
      }
    }
    if ((this->fields).canWallJumpAnySurfaces != 0) {
      (*(this->klass->vtable).AddModifier.methodPtr)
                (this,5,0xffffffff,0,(this->klass->vtable).AddModifier.method);
    }
    this_01 = (this->fields).materialHitHandler;
    if (this_01 != (InteractableMaterialHitHandler *)0x0) {
      MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
      MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
      MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
      MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
      MStack_1.moveDirection.y = (moveHit->moveDirection).y;
      MStack_1.moveDirection.z = (moveHit->moveDirection).z;
      MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
      MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
      MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
      MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
      MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
      MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
      MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
      MStack_1.hit.point.x = (moveHit->hit).point.x;
      MStack_1.hit.point.y = (moveHit->hit).point.y;
      MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
      MStack_1.hit.normal.y = (moveHit->hit).normal.y;
      MStack_1.hit.normal.z = (moveHit->hit).normal.z;
      MStack_1.hit.cubePos = (moveHit->hit).cubePos;
      MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
      MStack_1.hit.face = (moveHit->hit).face;
      MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
      MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      MStack_1.hit.woId = (moveHit->hit).woId;
      MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
      MStack_1.hit.cube = (moveHit->hit).cube;
      MStack_1.hit.distance = (moveHit->hit).distance;
      MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
      MStack_1.hit.collider = (moveHit->hit).collider;
      MStack_1.hit.transform = (moveHit->hit).transform;
      MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
      MStack_1.material = moveHit->material;
      InteractableMaterialHitHandler::InteractableMaterialHitHandler_HandleHit
                (this_01,&MStack_1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void HandlePoisonResistBoost() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HandlePoisonResistBoost
               (AvatarInteractable *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  apBStackX_8[0] = (Boost *)0x0;
  (this->fields)._.poisonResist = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)))) {
    bVar5 = BoostController::BoostController_TryGetActiveBoost
                      (this_01,BoostType__Enum_PoisonResistPercentage,apBStackX_8,(MethodInfo *)0x0)
    ;
    if (bVar5 == 0) {
      return;
    }
    if ((apBStackX_8[0] != (Boost *)0x0) &&
       (pOVar6 = Boost::Boost_get_Value(apBStackX_8[0],(MethodInfo *)0x0), pOVar6 != (Object *)0x0))
    {
      if ((pOVar6->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        (this->fields)._.poisonResist = (float)*(int *)&pOVar6[1].klass / _UNK_?;
        return;
      }
      FUN_?(pOVar6,lRam_?);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      fVar3 = (float)(*(pMVar2->klass->vtable).get_Value.methodPtr)
                                (pMVar2,(pMVar2->klass->vtable).get_Value.method);
      pMVar4 = (this->fields)._.maxHealth;
      if (pMVar4 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) goto code_?;
      iVar5 = (*(pMVar4->klass->vtable).get_Value.methodPtr)();
      if ((float)iVar5 <= fVar3) {
        (*(this->klass->vtable).HandleModifierEffect.methodPtr)
                  (this,0x15,0,(this->klass->vtable).HandleModifierEffect.method);
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        (*(this->klass->vtable).RestoreShield.methodPtr)(this);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 == (MVGameControllerBase *)0x0) ||
       (this_00 = (pMVar6->fields).game, this_00 == (MVNetworkGame *)0x0))
    goto code_?;
    bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    cVar7 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                      (this,10,(this->klass->vtable).HasModifierEffect.method);
    if (cVar7 != '\0') {
      return;
    }
    cVar7 = FUN_?();
    if ((cVar7 != '\0') &&
       (MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
       MVar8 == MVGameMode__Enum_Edit)) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) goto code_?;
      (*(pMVar2->klass->vtable).get_Value.methodPtr)
                (pMVar2,(pMVar2->klass->vtable).get_Value.method);
      pIVar9 = (pMVar2->klass->vtable).set_Value.methodPtr;
    }
    else {
      if (pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (*(pMVar2->klass->vtable).get_Value.methodPtr)
                (pMVar2,(pMVar2->klass->vtable).get_Value.method);
      pMVar4 = (this->fields)._.maxHealth;
      if ((pMVar4 == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) ||
         ((*(pMVar4->klass->vtable).get_Value.methodPtr)
                    (pMVar4,(pMVar4->klass->vtable).get_Value.method),
         pMVar2 == (MVRuntimeDataVariable_1_System_Single_ *)0x0)) goto code_?;
      pIVar9 = (pMVar2->klass->vtable).set_Value.methodPtr;
    }
    (*pIVar9)(pMVar2);
  }
  return;
}


/* Void HealOverTime(AvatarModifierPackageType, MVPlayer) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_HealOverTime
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *healer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 != '\0') {
        player = (MVPlayer *)0xa;
        method_00 = (this->klass->vtable).HasModifierEffect.method;
        cVar2 = (*(this->klass->vtable).HasModifierEffect.methodPtr)();
        if (cVar2 == '\0') {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
          pMVar3 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_00,(MethodInfo *)0x0);
          if (pMVar3 != (MVAvatarLocal *)0x0) {
            pMVar4 = (pMVar3->fields).avatarLocalModes;
            if (pMVar4 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
            if ((pMVar4->fields).currentState == 1) {
              if (healer == (MVPlayer *)0x0) goto code_?;
              (*(this->klass->vtable).AddModifier.methodPtr)
                        (this,(ulonglong)type,
                         (ulonglong)(uint)(healer->fields)._ActorNr_k__BackingField,0,
                         (this->klass->vtable).AddModifier.method);
              pAVar5 = (this->fields).OnHealing;
              if (pAVar5 != (Action_2_Single_MVPlayer_ *)0x0) {
                (*(pAVar5->fields)._._.invoke_impl)
                          ((pAVar5->fields)._._.method_code,0,healer,(pAVar5->fields)._._.method);
              }
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
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
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarInteractable__HandlePoisonResistBoost__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = skillDataManager;
  MVInteractable::MVInteractable_Init
            ((MVInteractable *)this,runtimeDataModifiers,health,maxHealth,shield,skillDataManager,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DamageReduction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CanWallJumpAnySurface);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (this_01,StringLiteral_DamageReduction,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    if (bVar1 != 0) {
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
        InteractableMaterialHitHandler::InteractableMaterialHitHandler_Initialize
                  (this_00,packages,parent,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
             (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
            (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) &&
           (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pMVar7 != (MVLocalPlayer *)0x0)) {
          pBVar8 = (pMVar7->fields).boostController;
          pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar9,(Object *)this,
                     MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
                     (MethodInfo *)0x0);
          if (pBVar8 != (BoostController *)0x0) {
            BoostController::BoostController_SubscribeToBoostChanged
                      (pBVar8,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar9,
                       (MethodInfo *)0x0);
            bVar10 = cRam_? == '\0';
            skillDataManager = (WorldObjectSkillDataManager *)0x0;
            (this->fields).boostedHealthMultiplier = 1.0;
            if (bVar10) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar4 == (MVGameControllerBase *)0x0) ||
                (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
               ((pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0 ||
                ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (pMVar6,(MethodInfo *)0x0), pMVar7 == (MVLocalPlayer *)0x0 ||
                 (pBVar8 = (pMVar7->fields).boostController, pBVar8 == (BoostController *)0x0))))))
            {
code_?:
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            bVar1 = BoostController::BoostController_TryGetActiveBoost
                              (pBVar8,BoostType__Enum_ExtraHealthFloatMultiplier,
                               (Boost **)&skillDataManager,(MethodInfo *)0x0);
            if (bVar1 != 0) {
              if ((skillDataManager == (WorldObjectSkillDataManager *)0x0) ||
                 (pOVar12 = Boost::Boost_get_Value((Boost *)skillDataManager,(MethodInfo *)0x0),
                 pOVar12 == (Object *)0x0)) goto code_?;
              if ((pOVar12->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar12,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields).boostedHealthMultiplier =
                   (float)*(int *)&pOVar12[1].klass / _UNK_? + _UNK_?;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
                 (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
                (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) &&
               (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar6,(MethodInfo *)0x0), pMVar7 != (MVLocalPlayer *)0x0)) {
              pBVar8 = (pMVar7->fields).boostController;
              pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar9,(Object *)this,
                         MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,(MethodInfo *)0x0
                        );
              if (pBVar8 != (BoostController *)0x0) {
                BoostController::BoostController_SubscribeToBoostChanged
                          (pBVar8,BoostType__Enum_PoisonResistPercentage,(Action *)pNVar9,
                           (MethodInfo *)0x0);
                bVar10 = cRam_? == '\0';
                skillDataManager = (WorldObjectSkillDataManager *)0x0;
                (this->fields)._.poisonResist = 0.0;
                if (bVar10) {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar4 != (MVGameControllerBase *)0x0) &&
                    (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
                   ((pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0
                    && ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (pMVar6,(MethodInfo *)0x0),
                        pMVar7 != (MVLocalPlayer *)0x0 &&
                        (pBVar8 = (pMVar7->fields).boostController, pBVar8 != (BoostController *)0x0
                        )))))) {
                  bVar1 = BoostController::BoostController_TryGetActiveBoost
                                    (pBVar8,BoostType__Enum_PoisonResistPercentage,
                                     (Boost **)&skillDataManager,(MethodInfo *)0x0);
                  if (bVar1 != 0) {
                    if ((skillDataManager == (WorldObjectSkillDataManager *)0x0) ||
                       (pOVar12 = Boost::Boost_get_Value
                                            ((Boost *)skillDataManager,(MethodInfo *)0x0),
                       pOVar12 == (Object *)0x0)) goto code_?;
                    if ((pOVar12->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar12,lRam_?);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    (this->fields)._.poisonResist =
                         (float)*(int *)&pOVar12[1].klass / _UNK_?;
                  }
                  return;
                }
code_?:
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
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
    FUN_?(&StringLiteral_DamageReduction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CanWallJumpAnySurface);
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsGroundedSafely(MVControllerColliderHit) */

bool Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_IsGroundedSafely
               (AvatarInteractable *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (moveHit->material == (MVMaterial *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  fVar3 = (moveHit->material->fields)._PhysicalProperties_k__BackingField.friction;
  uVar4 = (moveHit->slopeNormal).y;
  fVar5 = (moveHit->impactVelocity).y;
  fVar6 = (moveHit->impactVelocity).x;
  fVar7 = (moveHit->impactVelocity).z;
  bVar8 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 < _UNK_?;
  if (!bVar8) {
    pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((((pSVar9 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar10 = (pSVar9->fields).reviveState,
         pSVar10 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) ||
        (pSVar11 = (pSVar10->fields)._.subscribableVariable,
        pSVar11 == (SubscribableVariable_1_ReviveState_ *)0x0)) ||
       (pRVar12 = (pSVar11->fields)._.value, pRVar12 == (ReviveState *)0x0)) goto code_?;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pcRam_? = pcVar1;
    fVar5 = (float)(*pcRam_?)();
    (pRVar12->fields).safeSpotSuppressedTime = fVar5;
    (pRVar12->fields).safeSpotSuppressedDuration = 1.0;
  }
  if (((float)uVar4 * fVar3 < _UNK_?) || ((float)uVar4 < _UNK_?)) {
    bVar14 = false;
  }
  else {
    bVar14 = _UNK_? < fVar3;
  }
  return bVar14 & bVar8;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_OnDestroy
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarInteractable__HandlePoisonResistBoost__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    pBVar6 = (pMVar5->fields).boostController;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,MethodInfo__AvatarInteractable__SetupBoostedHealthMultiplier__,
               (MethodInfo *)0x0);
    if (pBVar6 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (pBVar6,BoostType__Enum_ExtraHealthFloatMultiplier,(Action *)pNVar7,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
          (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
          pMVar5 != (MVLocalPlayer *)0x0)))) {
        pBVar6 = (pMVar5->fields).boostController;
        pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar7,(Object *)this,MethodInfo__AvatarInteractable__HandlePoisonResistBoost__,
                   (MethodInfo *)0x0);
        if (pBVar6 != (BoostController *)0x0) {
          BoostController::BoostController_UnSubscribeToBoostChanged
                    (pBVar6,BoostType__Enum_PoisonResistPercentage,(Action *)pNVar7,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_RestoreShield
               (AvatarInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields)._.shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                             (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    (*(pMVar1->klass->vtable).set_Value.methodPtr)
              (pMVar1,fVar2 + restoredShieldAmount,(pMVar1->klass->vtable).set_Value.method);
    pAVar3 = (this->fields).OnShieldReplenished;
    if (pAVar3 != (Action *)0x0) {
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupBoostedHealthMultiplier() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_SetupBoostedHealthMultiplier
               (AvatarInteractable *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  apBStackX_8[0] = (Boost *)0x0;
  (this->fields).boostedHealthMultiplier = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)))) {
    bVar5 = BoostController::BoostController_TryGetActiveBoost
                      (this_01,BoostType__Enum_ExtraHealthFloatMultiplier,apBStackX_8,
                       (MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    if ((apBStackX_8[0] != (Boost *)0x0) &&
       (pOVar6 = Boost::Boost_get_Value(apBStackX_8[0],(MethodInfo *)0x0), pOVar6 != (Object *)0x0))
    {
      if ((pOVar6->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        (this->fields).boostedHealthMultiplier =
             (float)*(int *)&pOVar6[1].klass / _UNK_? + _UNK_?;
        return;
      }
      FUN_?(pOVar6,lRam_?);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_TakeDamage
               (AvatarInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable__DamageSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((0.0 < amount) &&
      (bVar1 = MVInteractable::MVInteractable_IgnoreDamage
                         ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0), bVar1 != 0)) ||
     (amount <= 0.0)) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 == (MVGameControllerBase *)0x0) ||
     (this_00 = (pMVar2->fields).game, this_00 == (MVNetworkGame *)0x0)) goto DAT_?;
  bVar1 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  cVar3 = (*(this->klass->vtable).HasModifierEffect.methodPtr)
                    (this,10,(this->klass->vtable).HasModifierEffect.method);
  if (cVar3 != '\0') {
    return;
  }
  cVar3 = FUN_?();
  if ((cVar3 != '\0') &&
     (MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
     MVar4 == MVGameMode__Enum_Edit)) {
    return;
  }
  fVar5 = (float)(*(this->klass->vtable).HandleModifierEffect.methodPtr)(this,6,_UNK_?);
  fVar5 = fVar5 * amount * (this->fields).damageMultiplier;
  if (0.0 <= fVar5) {
    pMVar6 = (this->fields)._.shield;
    if (pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0) goto DAT_?;
    fVar7 = (float)(*(pMVar6->klass->vtable).get_Value.methodPtr)
                              (pMVar6,(pMVar6->klass->vtable).get_Value.method);
    pMVar6 = (this->fields)._.shield;
    if (fVar7 < fVar5) {
      if (pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0) goto DAT_?;
      fVar7 = (float)(*(pMVar6->klass->vtable).get_Value.methodPtr)
                                (pMVar6,(pMVar6->klass->vtable).get_Value.method);
      pMVar6 = (this->fields)._.shield;
      if (pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0) goto DAT_?;
      (*(pMVar6->klass->vtable).set_Value.methodPtr)
                (pMVar6,0,(pMVar6->klass->vtable).set_Value.method);
      fVar5 = fVar5 - fVar7;
    }
    else {
      if (pMVar6 == (MVRuntimeDataVariableClampedFloat *)0x0) goto DAT_?;
      fVar7 = (float)(*(pMVar6->klass->vtable).get_Value.methodPtr)
                                (pMVar6,(pMVar6->klass->vtable).get_Value.method);
      (*(pMVar6->klass->vtable).set_Value.methodPtr)
                (pMVar6,fVar7 - fVar5,(pMVar6->klass->vtable).set_Value.method);
      fVar5 = 0.0;
    }
  }
  pMVar8 = (this->fields)._.health;
  if (pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    fVar7 = (float)(*(pMVar8->klass->vtable).get_Value.methodPtr)
                              (pMVar8,(pMVar8->klass->vtable).get_Value.method);
    pMVar8 = (this->fields)._.health;
    if (pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar9 = (float)(*(pMVar8->klass->vtable).get_Value.methodPtr)
                                (pMVar8,(pMVar8->klass->vtable).get_Value.method);
      fVar9 = fVar9 - fVar5;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      (*(pMVar8->klass->vtable).set_Value.methodPtr)
                (pMVar8,fVar9,(pMVar8->klass->vtable).set_Value.method);
      if (damageDealer != (MVPlayer *)0x0) {
        weaponName = AvatarInteractable_ExtractWeaponName
                               (this,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
        this_01 = (AvatarInteractable_DamageSource *)
                  FUN_?(TypeInfo__AvatarInteractable__DamageSource);
        AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                  (this_01,damageDealer,damageType & 0xff,weaponName,(MethodInfo *)0x0);
        (this->fields).lastDamageSource = this_01;
        func_?(&(this->fields).lastDamageSource);
      }
      pAVar10 = (this->fields).OnDamageTaken;
      if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,fVar5,damageDealer,(char)damageType,
                   (pAVar10->fields)._._.method);
      }
      pMVar8 = (this->fields)._.health;
      if (pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        fVar5 = (float)(*(pMVar8->klass->vtable).get_Value.methodPtr)
                                 (pMVar8,(pMVar8->klass->vtable).get_Value.method);
        if (0.0 < fVar5) {
          return;
        }
        if (fVar7 <= 0.0) {
          return;
        }
        AvatarInteractable_DoKilledNotification
                  (this,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_TakeDamageOverTime
               (AvatarInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *damageDealer
               ,PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable__DamageSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 != '\0') {
        player = (MVPlayer *)0xa;
        method_00 = (this->klass->vtable).HasModifierEffect.method;
        cVar2 = (*(this->klass->vtable).HasModifierEffect.methodPtr)();
        if (cVar2 == '\0') {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
          pMVar3 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_00,(MethodInfo *)0x0);
          if (pMVar3 != (MVAvatarLocal *)0x0) {
            pMVar4 = (pMVar3->fields).avatarLocalModes;
            if (pMVar4 == (MVAvatarLocal_AvatarLocalModes *)0x0) goto code_?;
            if ((pMVar4->fields).currentState == 1) {
              if (damageDealer == (MVPlayer *)0x0) goto code_?;
              (*(this->klass->vtable).AddModifier.methodPtr)
                        (this,(ulonglong)type,
                         (ulonglong)(uint)(damageDealer->fields)._ActorNr_k__BackingField,0,
                         (this->klass->vtable).AddModifier.method);
              weaponName = AvatarInteractable_ExtractWeaponName
                                     (this,damageDealer,damageType & 0xff,(MethodInfo *)0x0);
              this_01 = (AvatarInteractable_DamageSource *)
                        FUN_?(TypeInfo__AvatarInteractable__DamageSource);
              AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
                        (this_01,damageDealer,damageType & 0xff,weaponName,(MethodInfo *)0x0);
              (this->fields).lastDamageSource = this_01;
              func_?(&(this->fields).lastDamageSource);
              pAVar5 = (this->fields).OnDamageTaken;
              if (pAVar5 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                (*(pAVar5->fields)._._.invoke_impl)
                          ((pAVar5->fields)._._.method_code,0,damageDealer,(char)damageType,
                           (pAVar5->fields)._._.method);
              }
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AvatarInteractable() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__AvatarModifierPackageType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
    if (lVar3 != 0) {
      TypeInfo__AvatarInteractable->static_fields->AvatarModifierPackagesCount =
           *(int32_t *)(lVar3 + 0x18);
      return;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar5);
  paramName = (String *)func_?(&StringLiteral_enumType);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar5 = func_?(&MethodInfo__System__Enum__GetNames_System__Type_);
  FUN_?(this,uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AvatarInteractable() */

void Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable__ctor
               (AvatarInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInteractable__DamageSource);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InteractableMaterialHitHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialHitPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarInteractable__DamageSource->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarInteractable__DamageSource);
  }
  bVar1 = iRam_? != 0;
  (this->fields).lastDamageSource = TypeInfo__AvatarInteractable__DamageSource->static_fields->none;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).lastDamageSource >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).boostedHealthMultiplier = 1.0;
  (this->fields).damageMultiplier = 1.0;
  this_00 = (HashSet_1_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>
                         );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__HashSet__
            );
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
                            ->klass >> 8),6);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (this_00,(ByteEnum__Enum)uVar6,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
               ->klass->rgctx_data[0x15].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),0xe);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (this_00,(ByteEnum__Enum)uVar6,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
               ->klass->rgctx_data[0x15].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),10);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (this_00,(ByteEnum__Enum)uVar6,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__AddIfNotPresent
              (this_00,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),5),
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::PlayerKilledByType>__Add_MV__Common__PlayerKilledByType_
               ->klass->rgctx_data[0x15].method);
    bVar1 = iRam_? != 0;
    (this->fields).KillNotificationBlacklist = (HashSet_1_MV_Common_PlayerKilledByType_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).KillNotificationBlacklist >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar7 = (MaterialHitPackage__Array *)FUN_?(TypeInfo__MaterialHitPackage,2);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      uStack_9 = (pPVar8->fields).poisonParticles;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_9 >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (pMVar7 != (MaterialHitPackage__Array *)0x0) {
        if ((int)pMVar7->max_length != 0) {
          bVar1 = iRam_? != 0;
          uStack_9._4_4_ = (undefined4)((ulonglong)uStack_9 >> 0x20);
          pMVar7->vector[0].PackageType = 4;
          *(undefined4 *)&pMVar7->vector[0].field_0x4 = 0;
          *(undefined4 *)&pMVar7->vector[0].ParticlePrefab = (undefined4)uStack_9;
          *(undefined4 *)((longlong)&pMVar7->vector[0].ParticlePrefab + 4) = uStack_9._4_4_;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&pMVar7->vector[0].ParticlePrefab >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar8 == (PrefabPool *)0x0) goto code_?;
          uStack_10 = (pPVar8->fields).poisonParticles;
          uStack_11 = 0x14;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&uStack_10 >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          if (1 < (uint)pMVar7->max_length) {
            bVar1 = iRam_? != 0;
            uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
            pMVar7->vector[1].PackageType = 0x14;
            *(undefined4 *)&pMVar7->vector[1].field_0x4 = 0;
            *(undefined4 *)&pMVar7->vector[1].ParticlePrefab = (undefined4)uStack_10;
            *(undefined4 *)((longlong)&pMVar7->vector[1].ParticlePrefab + 4) = uStack_10._4_4_;
            if (bVar1) {
              uVar2 = (uint)((ulonglong)&pMVar7->vector[1].ParticlePrefab >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            bVar1 = iRam_? != 0;
            (this->fields).hitPackages = pMVar7;
            if (bVar1) {
              uVar2 = (uint)((ulonglong)&(this->fields).hitPackages >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            pIVar12 = (InteractableMaterialHitHandler *)
                     FUN_?(TypeInfo__InteractableMaterialHitHandler);
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>
                                   );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,GamePassesHighScoreList+HighScoreListData]::
            Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_UnityEngine::ParticleSystem>__Dictionary__
                      );
            iVar13 = iRam_?;
            (pIVar12->fields).particles =
                 (Dictionary_2_AvatarModifierPackageType_UnityEngine_ParticleSystem_ *)this_01;
            if (iVar13 != 0) {
              uVar2 = (uint)((ulonglong)&pIVar12->fields >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
                iVar13 = iRam_?;
              } while (!bVar1);
            }
            (pIVar12->fields).prevPos.x = 0.0;
            (pIVar12->fields).prevPos.y = 0.0;
            (pIVar12->fields).prevPos.z = 0.0;
            (this->fields).materialHitHandler = pIVar12;
            if (iVar13 != 0) {
              uVar2 = (uint)((ulonglong)&(this->fields).materialHitHandler >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            MVInteractable::MVInteractable__ctor((MVInteractable *)this,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AvatarInteractable+DamageSource get_LastDamageSource() */

AvatarInteractable_DamageSource *
Assembly-CSharp.dll::AvatarInteractable::AvatarInteractable_get_LastDamageSource
          (AvatarInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).lastDamageSource;
  if (pAVar1 == (AvatarInteractable_DamageSource *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pAVar1 = (AvatarInteractable_DamageSource *)(*pcVar2)();
    return pAVar1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pAVar1 = (AvatarInteractable_DamageSource *)(*pcVar2)();
    return pAVar1;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 - (pAVar1->fields).time <= _UNK_?) {
    return (this->fields).lastDamageSource;
  }
  return (AvatarInteractable_DamageSource *)0x0;
}

