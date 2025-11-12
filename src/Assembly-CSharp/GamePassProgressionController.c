
/* Int32 GetXPReward(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassProgressionController::
        GamePassProgressionController_GetXPReward(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject ==
      (MVGamePassProgressionDataObject *)0x0) {
    return 0;
  }
  pGVar1 = MVGamePassProgressionDataObject::
           MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                     (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject,
                      (MethodInfo *)0x0);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
  ;
  if (((pGVar1 == (GamePassProgressionDataObjectShared *)0x0) ||
      (pGVar3 = (pGVar1->fields).xpTierRewards,
      pGVar3 == (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) ||
     (this = (Dictionary_2_System_ByteEnum_System_Single_ *)(pGVar3->fields).xpTierRewards,
     this == (Dictionary_2_System_ByteEnum_System_Single_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  uVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]
          ::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                    (this,tier & 0xff,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar6 < 0) {
    uVar7 = func_?(pMVar2->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar7);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  pDVar8 = (this->fields)._entries;
  if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_System_Single___Array *)0x0) {
    if (uVar6 < (uint)pDVar8->max_length) {
      return (int32_t)pDVar8->vector[(int)uVar6].value;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* RangeValidator`1[System.Int32] GetXPRewardRangeValidator(GamePassTier) */

RangeValidator_1_System_Int32_ *
Assembly-CSharp.dll::GamePassProgressionController::
GamePassProgressionController_GetXPRewardRangeValidator(GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  this = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
  if (this != (MVGamePassProgressionDataObject *)0x0) {
    pGVar1 = MVGamePassProgressionDataObject::
             MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectSharedValidator
                       (this,(MethodInfo *)0x0);
    if (((pGVar1 != (GamePassProgressionDataObjectSharedValidator *)0x0) &&
        (pGVar2 = (pGVar1->fields).XpTiersRewardsValidator,
        pGVar2 != (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *)0x0)) &&
       (this_00 = (pGVar2->fields).xpTierRewardsValidators,
       this_00 !=
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,tier & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (RangeValidator_1_System_Int32_ *)pOVar3[1].monitor;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pRVar5 = (RangeValidator_1_System_Int32_ *)(*pcVar4)();
  return pRVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (this,WorldObjectType__Enum_GamePassProgressionDataObject,(MethodInfo *)0x0
                         ), pLVar1 != (List_1_MVWorldObjectClient_ *)0x0)) {
    iVar2 = (pLVar1->fields)._size;
    if (0 < iVar2) {
      if (iVar2 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar4 = (pLVar1->fields)._items;
      if (pMVar4 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if ((int)pMVar4->max_length == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar5 = pMVar4->vector[0];
      if (pMVar5 == (MVWorldObjectClient *)0x0) {
        TypeInfo__GamePassProgressionController->static_fields->progressionDataObject =
             (MVGamePassProgressionDataObject *)0x0;
      }
      else {
        bVar6 = (TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar6) ||
           ((MVGamePassProgressionDataObject__Class *)
            (pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
            TypeInfo__MVGamePassProgressionDataObject)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TypeInfo__GamePassProgressionController->static_fields->progressionDataObject =
             (MVGamePassProgressionDataObject *)pMVar5;
        bVar6 = (TypeInfo__MVGamePassProgressionDataObject->_1).naturalAligment;
        if (((pMVar5->klass->_1).naturalAligment < bVar6) ||
           ((MVGamePassProgressionDataObject__Class *)
            (pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
            TypeInfo__MVGamePassProgressionDataObject)) {
          FUN_?(pMVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)TypeInfo__GamePassProgressionController->static_fields >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
    }
    TypeInfo__GamePassProgressionController->static_fields->isInitialized = 1;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetXPReward(GamePassTier, Int32) */

void Assembly-CSharp.dll::GamePassProgressionController::GamePassProgressionController_SetXPReward
               (GamePassTier__Enum tier,int32_t xpReward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  pRVar1 = GamePassProgressionController_GetXPRewardRangeValidator(tier & 0xff,(MethodInfo *)0x0);
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    iVar2 = (pRVar1->fields).min;
    if ((xpReward < iVar2) || (iVar2 = (pRVar1->fields).max, iVar2 < xpReward)) {
      xpReward = iVar2;
    }
    pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
      value = MVGamePassProgressionDataObject::
              MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                        (pMVar3,(MethodInfo *)0x0);
      if (((value != (GamePassProgressionDataObjectShared *)0x0) &&
          (pGVar4 = (value->fields).xpTierRewards,
          pGVar4 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this = (pGVar4->fields).xpTierRewards,
         this != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
        uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
        Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Int32_ *)this,tier & 0xff,xpReward,
                   (InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   ->klass->rgctx_data[0x22].method);
        pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
        if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
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
            FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_gamePassProgressionDataObject);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
            FUN_?();
          }
          value_00 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                               ((Object *)value,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_00 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_gamePassProgressionDataObject,(Object *)value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(pMVar3->klass->vtable).PartialUpdateWOData.methodPtr)
                      (pMVar3,this_00,(pMVar3->klass->vtable).PartialUpdateWOData.method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
               (pMVar8 = (pMVar7->fields).operationRequests,
               pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
              uVar5 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              ,(pMVar3->fields)._._.id,this_00,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              value_01 = (Object *)FUN_?(uRam_?,&stack0x00000010);
              if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                uVar9 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                uVar10 = (undefined7)((ulonglong)method_00 >> 8);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_01,0x16,value_01,(InsertionBehavior__Enum)uVar9,method_00);
                uVar5 = CONCAT71(uVar10,0x12);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_01,0x12,(Object *)this_00,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pPVar11 = (pMVar8->fields).peer;
                if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0)
                {
                  FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                if (pPVar11 != (PhotonPeer *)0x0) {
                  (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                            (pPVar11,CONCAT71((int7)((ulonglong)uVar5 >> 8),4),this_01,
                             TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                             SendReliable,(pPVar11->klass->vtable).SendOperation.method);
                  return;
                }
              }
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
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


/* Boolean get_IsProgressionEnabled() */

bool Assembly-CSharp.dll::GamePassProgressionController::
     GamePassProgressionController_get_IsProgressionEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->progressionDataObject !=
      (MVGamePassProgressionDataObject *)0x0) {
    pMVar1 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_gamePassProgressionEnabled);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (pMVar1->fields)._._.data;
    if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this,(Object *)StringLiteral_gamePassProgressionEnabled,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
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
  return 0;
}

