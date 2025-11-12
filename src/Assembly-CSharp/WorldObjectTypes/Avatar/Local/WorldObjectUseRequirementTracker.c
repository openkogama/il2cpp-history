
/* Boolean HasUnlocked(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_HasUnlocked
               (WorldObjectUseRequirementTracker *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_float>__TryGetValue_int__System__Single__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__FindEntry
                    ((Dictionary_2_System_Int32_System_Single_ *)this,worldObjectID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__TryGetValue_int__System__Single__
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar1 < 0) {
    return 0;
  }
  pDVar2 = (this->fields)._._entries;
  if (pDVar2 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((uint)pDVar2->max_length <= uVar1) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  fVar5 = pDVar2->vector[(int)uVar1].value;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pcRam_? = pcVar3;
  fVar7 = (float)(*pcRam_?)();
  return fVar7 < fVar5;
}


/* Void PayUse(UseRequirementType, Int32, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_PayUse
               (WorldObjectUseRequirementTracker *this,UseRequirementType__Enum requirementType,
               int32_t worldObjectID,UnityAction_1_System_Boolean_ *onAdFinished,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>,
                  CONCAT44(in_register_00000014,requirementType),
                  CONCAT44(in_register_00000084,worldObjectID));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_ad_is_already_on_going);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar1 != (IAdManager *)0x0) {
      cVar2 = FUN_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
      if (cVar2 == '\0') {
        if (onAdFinished != (UnityAction_1_System_Boolean_ *)0x0) {
          UNRECOVERED_JUMPTABLE = (onAdFinished->fields)._._.invoke_impl;
          uVar3 = 0;
          pvVar4 = (onAdFinished->fields)._._.method;
          goto code_?;
        }
      }
      else {
        if ((this->fields).onAdFinishedCallback != (UnityAction_1_System_Boolean_ *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar5 = StringLiteral_An_ad_is_already_on_going;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar6 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,0,pSVar5);
            return;
          }
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        (this->fields).onAdFinishedCallback = onAdFinished;
        func_?();
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar1 != (IAdManager *)0x0) {
          pIVar7 = pIVar1->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                pVVar10 = &(pIVar7->vtable).get_RewardedAdNotAvailableText +
                         (pIVar7->interfaceOffsets[uVar8].offset + 6);
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          pVVar10 = (VirtualInvokeData *)
                   FUN_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6,
                                 this_00,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar10->methodPtr)(pIVar1,this_00,0xe,pVVar10->method);
          return;
        }
      }
    }
  }
  else if (onAdFinished != (UnityAction_1_System_Boolean_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (onAdFinished->fields)._._.invoke_impl;
    uVar3 = 1;
    pvVar4 = (onAdFinished->fields)._._.method;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((onAdFinished->fields)._._.method_code,uVar3,pvVar4);
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_RewardedAdCallback
               (WorldObjectUseRequirementTracker *this,RewardedAdResult__Enum obj,MethodInfo *method
               )

{
  pUVar1 = (this->fields).onAdFinishedCallback;
  if (pUVar1 != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,
               CONCAT71((int7)(CONCAT44(in_register_00000014,obj) >> 8),
                        obj == RewardedAdResult__Enum_RewardUnlocked),(pUVar1->fields)._._.method);
  }
  bVar2 = iRam_? != 0;
  (this->fields).onAdFinishedCallback = (UnityAction_1_System_Boolean_ *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).onAdFinishedCallback >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void UseRequirementFulfilled(UseRequirementType, Int32) */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker_UseRequirementFulfilled
               (WorldObjectUseRequirementTracker *this,UseRequirementType__Enum requirementType,
               int32_t worldObjectID,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                  ,CONCAT44(in_register_00000014,requirementType),
                  CONCAT44(in_register_00000084,worldObjectID),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  this_00 = (this->fields).timeouts;
  if (this_00 == (Dictionary_2_UseRequirementType_System_Single_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__get_Item
                    ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,requirementType,
                     MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__get_Item_UseRequirementType_
                    );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
  Dictionary_2_System_Int32_System_Single__TryInsert
            ((Dictionary_2_System_Int32_System_Single_ *)this,worldObjectID,fVar5 + fVar4,
             CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* WorldObjectUseRequirementTracker() */

void Assembly-CSharp.dll::WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
     WorldObjectUseRequirementTracker__ctor
               (WorldObjectUseRequirementTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
            );
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,5,_UNK_?,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
             ->klass->rgctx_data[0x22].method);
  bVar2 = iRam_? != 0;
  (this->fields).timeouts = (Dictionary_2_UseRequirementType_System_Single_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).timeouts >> 0xc);
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
  pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
           EqualityComparer_1_System_Int32__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar7 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     (bVar2 = iRam_? != 0,
     (this->fields)._._comparer = (IEqualityComparer_1_System_Int32_ *)0x0, bVar2)) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._comparer >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar6;
      LOCK();
      uVar4 = *puVar6;
      if (uVar5 == uVar4) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar4);
  }
  return;
}

