
/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._.id;
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = (this->fields)._._.gameObject;
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
  if (pGVar6 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar6 = (this->fields)._._.gameObject;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 != (MVGameControllerBase *)0x0) &&
     (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
    pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar9 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar9->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar10 != 0) {
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 == (MVNetworkGame *)0x0) ||
             (pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager,
             pRVar9 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar9,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
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


/* Int32 GetGamePointsRewardAmount(Dictionary`2[System.Object,System.Object]) */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                  (MVGamePointRewardLogicObject *this,
                  Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)data,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_gamePointAmount);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)StringLiteral_gamePointAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int32_t *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      iVar1 = (*pcVar3)();
      return iVar1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Boolean HasGamePoints(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_HasGamePoints
               (MVGamePointRewardLogicObject *this,
               Dictionary_2_System_Object_System_Object_ *dataToCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (dataToCheck != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)dataToCheck,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = (this->fields)._._._.id;
  value = (*(this->klass->vtable).get_GamePointRewardAmount.methodPtr)
                    (this,(this->klass->vtable).get_GamePointRewardAmount.method);
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_,
                  value,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePointAmountManager);
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePointAmountManager);
      }
      pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
      if (pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,key,value,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePointAmountManager);
    }
    pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,key,value,CONCAT31((int3)(in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVGamePointRewardLogicObject(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
               (MVGamePointRewardLogicObject *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  key = (this->fields)._._._.id;
  value = (*(this->klass->vtable).get_GamePointRewardAmount.methodPtr)
                    (this,(this->klass->vtable).get_GamePointRewardAmount.method);
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_,
                  value,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePointAmountManager);
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePointAmountManager);
      }
      pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
      if (pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
                     CONCAT71((int7)((ulonglong)worldObjects >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,key,value,(InsertionBehavior__Enum)worldObjects,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePointAmountManager);
    }
    pDVar2 = TypeInfo__GamePointAmountManager->static_fields->gamePointRewardWorldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar2,key,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)worldObjects >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_get_GamePointRewardAmount
                  (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_gamePointAmount);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_gamePointAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int32_t *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      iVar1 = (*pcVar3)();
      return iVar1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* String get_GamePointString() */

String * Assembly-CSharp.dll::MVGamePointRewardLogicObject::
         MVGamePointRewardLogicObject_get_GamePointString
                   (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_gamePointAmount;
}

