
/* Vector3 ApplyWaterGravity(Vector3, Single, Single) */

Vector3 * Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                    (Vector3 *__return_storage_ptr__,Vector3 velocity,float waterProximity,
                    float deltaTime,MethodInfo *method)

{
  velocity.y = deltaTime * _UNK_? * waterProximity + velocity.y;
  if ((_UNK_? < velocity.y) && (_UNK_? < velocity.y)) {
    velocity.y = _UNK_?;
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_DealImpactDamage
               (SimpleVehicleMotorBase *this,Vector3 curVelocity,Vector3 prevVelocity,
               MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 != (ImpactState *)0x0) {
    fVar1 = ImpactState::ImpactState_UpdateImpactState
                      (this_00,curVelocity,prevVelocity,(this->fields).interactableLocal,
                       (MethodInfo *)0x0);
    if (fVar1 != _UNK_?) {
      pMVar2 = (this->fields).interactableLocal;
      if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).__unknown.method)();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
               (SimpleVehicleMotorBase *this,SmoothCharacterController *smoothController,
               VehicleInteractable *interactableLocalParam,
               VehicleEnergyContainerConfig vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    func_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    func_?(&
                    WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                   );
    func_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    func_?(&TypeInfo__MVMovableMotorState);
    func_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    func_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppSVar1 = &(this->fields).smoothController;
  *ppSVar1 = smoothController;
  func_?(ppSVar1,smoothController);
  if ((*ppSVar1 == (SmoothCharacterController *)0x0) ||
     (pMVar2 = ((*ppSVar1)->fields).controller, pMVar2 == (MvCharacterController *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    ppAVar3 = &(pMVar2->fields).OnControllerColliderHit;
    pAVar4 = *ppAVar3;
    pAVar5 = (Action_1_MVControllerColliderHit_ *)
              func_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (interactableLocalParam == (VehicleInteractable *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::Action_1_MVControllerColliderHit___ctor
              (pAVar5,(Object *)interactableLocalParam,interactableLocalParam->klass[1]._0.image,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar4,(Delegate *)pAVar5,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      *ppAVar3 = (Action_1_MVControllerColliderHit_ *)0x0;
code_?:
      func_?();
      if ((smoothController == (SmoothCharacterController *)0x0) ||
         (pMVar2 = (smoothController->fields).controller, pMVar2 == (MvCharacterController *)0x0))
      goto code_?;
      pAVar4 = (pMVar2->fields).OnControllerColliderHit;
      object = (this->fields).impactState;
      pAVar5 = (Action_1_MVControllerColliderHit_ *)
                func_?(TypeInfo__System__Action<MVControllerColliderHit>);
      mscorlib.dll::System::Action`1[MVControllerColliderHit]::
      Action_1_MVControllerColliderHit___ctor
                (pAVar5,(Object *)object,
                 MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar4,(Delegate *)pAVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar2->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
        p_Var16 = (Il2CppMetadataTypeHandle)0x0;
code_?:
        func_?();
        this_00 = TypeInfo__MVMovableMotorState;
        this_01 = (Il2CppGenericClass *)func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0)
        ;
        ppIVar7 = &(this_00->_0).generic_class;
        *ppIVar7 = this_01;
        func_?(ppIVar7);
        pIVar8 = (this_00->_0).interopData;
        if (pIVar8 != (Il2CppInteropData *)0x0) {
          object_00 = (Object *)pIVar8->createCCWFunction;
          this_02 = (Func_1_Object_ *)
                    func_?(
                                   TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                                   );
          mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
                    (this_02,object_00,MethodInfo__MvCharacterController__GetOverlappingObjects__,
                     (MethodInfo *)0x0);
          this_03 = (Il2CppClass *)func_?(TypeInfo__MVRigidBody__StuckEvaluator);
          MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                    ((MVRigidBody_StuckEvaluator *)this_03,
                     (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_02,
                     (MethodInfo *)0x0);
          ppIVar9 = &(this_00->_0).klass;
          *ppIVar9 = this_03;
          func_?(ppIVar9,this_03);
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_04 != (GameObject *)0x0) {
            pFVar10 = (FieldInfo *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (this_04,
                                 WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                                );
            ppFVar11 = &(this_00->_0).fields;
            *ppFVar11 = pFVar10;
            func_?(ppFVar11,pFVar10);
            if ((VehicleEnergyContainer *)*ppFVar11 != (VehicleEnergyContainer *)0x0) {
              WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_Init
                        ((VehicleEnergyContainer *)*ppFVar11,vehicleEnergyContainerConfig,
                         (MethodInfo *)0x0);
              if (*ppFVar11 != (FieldInfo *)0x0) {
                *(undefined1 *)((int)&(*ppFVar11)->token + 1) = 1;
                pp_Var5 = &(this_00->_0).typeMetadataHandle;
                *pp_Var5 = p_Var16;
                func_?(pp_Var5,p_Var16);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pvVar12 = (void *)func_?();
      if (pvVar12 != (void *)0x0) {
        pDVar6[1].fields.interp_invoke_impl = pvVar12;
        p_Var16 = (Il2CppMetadataTypeHandle)func_?();
        if (p_Var16 != (Il2CppMetadataTypeHandle)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pDVar13 = (Delegate__Class *)func_?();
    if (pDVar13 == (Delegate__Class *)0x0) goto code_?;
    pDVar6->klass = pDVar13;
    iVar14 = func_?();
    if (iVar14 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_IsStuck
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 != (MVRigidBody_StuckEvaluator *)0x0) {
    this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<int>);
      func_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    pOStack_1 = (Object__Class *)0x0;
    pMVar2 = (MethodInfo *)0x0;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar3 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (pDVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                        );
      if (iVar5 == 0) goto code_?;
    }
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0;
    (this_00->fields).updateTime = fVar3;
    this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
              MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (MVRigidBody_StuckEvaluator_StuckObject__Class *)0x0) {
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if (pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
code_?:
        *unaff_FS_OFFSET = this_07;
        return 0;
      }
    }
    else {
      this_02 = (MethodInfo *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this_00->fields).stuckObjects;
      if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (pDVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar6 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&stack0xffffffa4,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar6->_dictionary;
        DStack_7._index = pDVar6->_index;
        DStack_7._version = pDVar6->_version;
        DStack_7._currentKey = (uint32_t)pDVar6->_currentValue;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                            );
          if (bVar8 == 0) break;
          in_stack_9 = (MethodInfo *)DStack_7._currentKey;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::
                  Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                            ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                             DStack_7._currentKey,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar8 == 0) {
            if (this_02 == (MethodInfo *)0x0) goto code_?;
            pMVar10 = this_02;
            func_?();
            in_stack_11 = this_02;
            this_02 = pMVar10;
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   ,in_stack_11);
        if (this_02 != (MethodInfo *)0x0) {
          pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffa4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_02,
                              MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
          pOStack_1 = (Object__Class *)pLVar12->_list;
          key = pLVar12->_current;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                   ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)&pOStack_1,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                   ), bVar8 != 0) {
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                      );
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_1,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,pMVar2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffff98,
                     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                    );
          while( true ) {
            this_06 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                      &stack0xffffffb4;
            pOVar14 = (Object__Class *)
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
            ;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                              (this_06,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                              );
            if (bVar8 == 0) break;
            key_00 = &UNK_?;
            pDVar13 = (this_00->fields).stuckObjects;
            if (pDVar13 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
            goto code_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar13,0xADDR,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                              );
            pMVar2 = (MethodInfo *)(this_00->fields).stuckObjects;
            if (bVar8 == 0) {
              this_01 = TypeInfo__MVRigidBody_StuckEvaluator__StuckObject;
              pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
              iVar5 = 0;
              overlapResult.localCubePos = (IntVector__Array *)pOVar14;
              overlapResult.woId = (int32_t)this_06;
              MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                        (pMVar15,overlapResult,(MethodInfo *)0x0);
              if (pMVar2 == (MethodInfo *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,iVar5,(Object *)pMVar15,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                        );
            }
            else {
              if ((pMVar2 == (MethodInfo *)0x0) ||
                 (this_01 = (MVRigidBody_StuckEvaluator_StuckObject__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 , pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pMVar2,
                                       (int32_t)key_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      ), pOVar16 == (Object *)0x0)) goto code_?;
              pOVar16[1].monitor = (MonitorData *)this_06;
              pOVar16[2].klass = pOVar14;
              func_?();
              in_stack_9 = pMVar2;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                     ,in_stack_9);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                    );
          pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this_00->fields).stuckObjects;
          if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (pDVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                  ),
             this_04 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            pDVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)&stack0xffffffa4,this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                               );
            pMVar15 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar6->_currentValue;
            while( true ) {
              this_05 = pMVar15;
              this_07 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                         *)&stack0xffffff78;
              bVar8 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                (this_07,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                );
              if (bVar8 == 0) break;
              if (this_05 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
              pMVar15 = this_05;
              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              if (_UNK_? <= fVar3 - (this_05->fields).stuckTime) {
                unaff_retaddr = (MethodInfo *)0x0;
                bVar8 = MVRigidBody+StuckEvaluator+StuckObject::
                        MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                  (this_05,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffff78,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                             ,in_stack_17);
                  *unaff_FS_OFFSET = this_07;
                  return 1;
                }
              }
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffff78,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                       ,unaff_retaddr);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  bVar8 = (*pcVar18)();
  return bVar8;
}


/* Void Move(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Move
               (SimpleVehicleMotorBase *this,Vector3 velocity,Vector3 baseVelocity,float deltaTime,
               MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    (*(code *)(pMVar2->klass->vtable).__unknown_1.method)
              (pMVar2,(velocity.x + baseVelocity.x) * deltaTime,
               (velocity.y + baseVelocity.y) * deltaTime,(velocity.z + baseVelocity.z) * deltaTime,
               (pMVar2->klass->vtable).__unknown_2.methodPtr);
    pSVar1 = (this->fields).smoothController;
    if ((pSVar1 != (SmoothCharacterController *)0x0) &&
       (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
      MVGroundState::MVGroundState_Update
                (this_00,(pSVar1->fields).controller,velocity,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLocalVehicleLeave() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_OnLocalVehicleLeave
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).DirectInputMoveMap.x = (pVVar1->zeroVector).x;
  (this->fields).DirectInputMoveMap.y = fVar2;
  (this->fields).DirectInputMoveMap.z = fVar3;
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_RefillEnergy
               (SimpleVehicleMotorBase *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyContainer;
  if (this_00 != (VehicleEnergyContainer *)0x0) {
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,vehicleEnergyRefill,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).smoothController;
  if (this_00 != (SmoothCharacterController *)0x0) {
    SmoothCharacterController::SmoothCharacterController_Reset(this_00,(MethodInfo *)0x0);
    pIVar1 = (this->fields).impactState;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    if (pIVar1 != (ImpactState *)0x0) {
      (pIVar1->fields).prevVelocityChangeVector.x = (pVVar2->zeroVector).x;
      (pIVar1->fields).prevVelocityChangeVector.y = fVar3;
      (pIVar1->fields).prevVelocityChangeVector.z = fVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::
     SimpleVehicleMotorBase_RollbackRefillEnergyPrediction
               (SimpleVehicleMotorBase *this,int32_t spawnerId,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = 0.0;
    pDVar3 = (pVVar1->fields).predictions;
    if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar3,spawnerId,(VehicleEnergyRefillPrediction *)&stack0xffffffe0,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar2 = (pVVar1->fields).energyStorage - fVar2 * (pVVar1->fields).originalEnergyStorage;
        (pVVar1->fields).energyStorage = fVar2;
        if (fVar2 < 0.0) {
          (pVVar1->fields).energyStorage = 0.0;
        }
        pDVar3 = (pVVar1->fields).predictions;
        if (pDVar3 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar3,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
      }
      return;
    }
  }
code_?:
  uVar5 = func_?(&stack0xffffffdc);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_SuspendImpactDamage
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (cRam_? == '\0') {
      ppVStack_2 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar3->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateFunction() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_UpdateFunction
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (this_00 = (pSVar1->fields).smoothPhysicsMovement, this_00 != (SmoothPhysicsMovement *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                     );
      cRam_? = '\x01';
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar4 = &(this_00->fields).current;
    ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar6,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        *ppSVar4 = pSVar7;
        ppSVar5 = ppSVar4;
        func_?();
      }
      if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    ppSVar8 = &(this_00->fields).next;
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar6 = (this_00->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar6->fields)._size) {
        pSVar7 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar6,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        *ppSVar8 = pSVar7;
        func_?();
        ppSVar5 = ppSVar8;
      }
    }
    if (*ppSVar4 != (SmoothPhysicsMovement_Package *)0x0) {
      pSVar7 = (this_00->fields).next;
      ppSVar8 = &(this_00->fields).next;
      if (pSVar7 != (SmoothPhysicsMovement_Package *)0x0) {
        do {
          if ((float)ppSVar5 < (pSVar7->fields).time) {
code_?:
            if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
            fVar2 = ((*ppSVar4)->fields).time;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            this_03 = (Component *)(((float)ppSVar5 - fVar2) / fVar3);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (this_03,(MethodInfo *)0x0);
            pSVar7 = *ppSVar4;
            if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
            uVar10 = (pSVar7->fields).position.x;
            uVar11 = (pSVar7->fields).position.y;
            pSVar12 = *ppSVar8;
            fVar2 = (pSVar7->fields).position.z;
            if (pSVar12 == (SmoothPhysicsMovement_Package *)0x0) break;
            uVar13 = (pSVar12->fields).position.x;
            uVar14 = (pSVar12->fields).position.y;
            pCVar15 = (Component *)0x0;
            if ((0.0 <= (float)this_03) &&
               (pCVar15 = _UNK_?, (float)this_03 <= (float)_UNK_?)) {
              pCVar15 = this_03;
            }
            if (pTVar9 == (Transform *)0x0) break;
            this = (SimpleVehicleMotorBase *)
                   (((pSVar12->fields).position.z - fVar2) * (float)pCVar15 + fVar2);
            fVar16 = ((float)uVar14 - (float)uVar11) * (float)pCVar15 + (float)uVar11;
            fVar17 = ((float)uVar13 - (float)uVar10) * (float)pCVar15 + (float)uVar10;
            VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar17);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar9,VVar18,(MethodInfo *)0x0);
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
            t = &UNK_?;
            pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                                 ((*ppSVar8)->fields).rotation,(float)pTVar9,(MethodInfo *)0x0);
            if (this_02 == (Transform *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (this_02,*pQVar19,(MethodInfo *)0x0);
            pMVar20 = (this_00->fields).worldObjectOwner;
            if (pMVar20 != (MVWorldObjectClient *)0x0) {
              if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
                 (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
              (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)();
              pMVar20 = (this_00->fields).worldObjectOwner;
              if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
                 ((*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0 ||
                  (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                       ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation
                                        ,((*ppSVar8)->fields).rotation,(float)t,(MethodInfo *)0x0),
                  pMVar20 == (MVWorldObjectClient *)0x0)))) break;
              MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                        (pMVar20,*pQVar19,(MethodInfo *)0x0);
            }
            this_01 = (this_00->fields).cullingSubscriberBase;
            if (this_01 == (CullingSubscriberBase *)0x0) {
              return;
            }
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
              uVar22 = pVVar21->x;
              uVar23 = pVVar21->y;
              this = (SimpleVehicleMotorBase *)pVVar21->z;
              fVar16 = (float)uVar23;
              fVar24 = (float)uVar22;
              VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar24);
              CullingSubscriberBase::CullingSubscriberBase_set_Position
                        (this_01,VVar18,(MethodInfo *)0x0);
              return;
            }
            break;
          }
          pQVar6 = (this_00->fields).packages;
          if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
          if ((pQVar6->fields)._size < 1) goto code_?;
          *ppSVar4 = *ppSVar8;
          func_?();
          pQVar6 = (this_00->fields).packages;
          if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
          pSVar7 = (SmoothPhysicsMovement_Package *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar6,
                               MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                              );
          *ppSVar8 = pSVar7;
          ppSVar5 = ppSVar8;
          func_?();
          pSVar7 = *ppSVar8;
        } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_UsesEnergy
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pVVar2 = (this->fields).vehicleEnergyContainer;
  if (pVVar2 != (VehicleEnergyContainer *)0x0) {
    return (pVVar2->fields)._UsingEnergy_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Single WaterProximity() */

float Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar1->x;
      uVar2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar4->upVector).x;
      uVar6 = (pVVar4->upVector).y;
      if (this_00 != (WaterPlaneManager *)0x0) {
        position.y = (float)((ulonglong)uVar2 >> 0x20) + (float)uVar6 * _UNK_?;
        position.x = (float)uVar2 + (float)uVar5 * _UNK_?;
        position.z = fVar3 + (pVVar4->upVector).z * _UNK_?;
        fVar3 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                          (this_00,position,(MethodInfo *)0x0);
        return fVar3;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* SimpleVehicleMotorBase() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase__ctor
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImpactState);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&_831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field);
    cRam_? = '\x01';
  }
  explosionEvents =
       (RuntimeEventType__Enum__Array *)func_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)explosionEvents,
             __831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field,
             (MethodInfo *)0x0);
  this_00 = (ImpactState *)func_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  ppIVar1 = &(this->fields).impactState;
  *ppIVar1 = this_00;
  func_?(ppIVar1,this_00);
  MVRigidBody::MVRigidBody__ctor((MVRigidBody *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Grounded
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 != (MVGroundState *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      cRam_? = '\x01';
    }
    value = (pMVar1->fields).grounded;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}

