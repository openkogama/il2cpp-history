
/* Void Awake() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Awake(MVPickupOwner *this,MethodInfo *method)

{
  if ((this->fields)._.findWorldObjectParent != 0) {
    MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)this,(MethodInfo *)0x0);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevUpdateLineOfFireTime = fVar1;
  return;
}


/* PickupItem CreateAvatarItem(AvatarItemType, Int32) */

PickupItem *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CreateAvatarItem
          (MVPickupOwner *this,AvatarItemType__Enum type,int32_t variantId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&PickupItem_MethodInfo__UnityEngine__GameObject__GetComponent<PickupItem>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral___since_prefab_was_not_found);
    func_?(&StringLiteral_Cannot_equip_avatarItemType__);
    func_?(&StringLiteral_Item_to_equip_is_missing_the_Ava);
    cRam_? = '\x01';
  }
  this_00 = PickupItem::PickupItem_InstantiateAvatarItemType(type,variantId,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this_00 != (GameObject *)0x0) {
      pPVar2 = (PickupItem *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          PickupItem_MethodInfo__UnityEngine__GameObject__GetComponent<PickupItem>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Item_to_equip_is_missing_the_Ava,(MethodInfo *)0x0);
        return pPVar2;
      }
      if (pPVar2 != (PickupItem *)0x0) {
        (pPVar2->fields)._VariantID_k__BackingField = variantId;
        return pPVar2;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pPVar2 = (PickupItem *)(*pcVar3)();
    return pPVar2;
  }
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)0xffffffff,(MethodInfo *)type);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Cannot_equip_avatarItemType__,pSVar4,
                      StringLiteral___since_prefab_was_not_found,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)pSVar4,(MethodInfo *)0x0);
  return (PickupItem *)0x0;
}


/* Single GetAbsolutProjectileSpeed(Single) */

float Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                (MVPickupOwner *this,float projectileSpeed,MethodInfo *method)

{
  fStack_1 = (this->fields).lookDirection.z;
  uStack_2._0_4_ = (this->fields).lookDirection.x;
  uStack_2._4_4_ = (this->fields).lookDirection.y;
  puVar3 = (undefined8 *)func_?(auStack_4,&(this->fields).lookDirection,0);
  uStack_5._0_4_ = (float)*puVar3;
  uStack_5._4_4_ = (float)((ulonglong)*puVar3 >> 0x20);
  fStack_6 = fStack_1 - *(float *)(puVar3 + 1);
  uStack_5 = CONCAT44(uStack_2._4_4_ - uStack_5._4_4_,(float)uStack_2 - (float)uStack_5);
  fStack_1 = fStack_6;
  fVar7 = (float10)func_?(&uStack_5,0);
  return (float)(fVar7 + (float10)projectileSpeed);
}


/* Vector3 GetLookDirectionWithAddedVelocityMagnitude(Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::
          MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,Vector3 lookDirection,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
  x = (Object_1 *)
      MVWorldObjectClientManager::
      MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                (gameObject,
                 MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (x == (Object_1 *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    puVar4 = (undefined8 *)(*(code *)x->klass[1]._0.byval_arg.data)();
    uStack_5 = *puVar4;
    uStack_6 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)func_?(&uStack_7);
    uVar8 = *puVar4;
    fVar9 = *(float *)(puVar4 + 1);
    puVar4 = (undefined8 *)func_?(&uStack_7,&(this->fields).lookDirection,0);
    uStack_5 = *puVar4;
    uStack_6 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)func_?(&stack0xffffffc8,&uStack_5,0);
    uVar10 = *puVar4;
    fStack_11 = *(float *)(puVar4 + 1);
    uStack_7._0_4_ = (float)uVar10;
    fStack_12 = (float)uVar8;
    uStack_7._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    fStack_13 = (float)((ulonglong)uVar8 >> 0x20);
    fStack_14 = uStack_7._4_4_ * fStack_13 + (float)uStack_7 * fStack_12 + fStack_11 * fVar9;
    if (0.0 < fStack_14) {
      uStack_7 = uVar10;
      puVar4 = (undefined8 *)(*(code *)x->klass[1]._0.byval_arg.data)();
      uStack_5 = *puVar4;
      uStack_6 = *(undefined4 *)(puVar4 + 1);
      fVar15 = (float10)func_?();
      fVar9 = (float)(fVar15 * (float10)fStack_14);
      __return_storage_ptr__->x = lookDirection.x + lookDirection.x * fVar9;
      __return_storage_ptr__->y = lookDirection.y + lookDirection.y * fVar9;
      __return_storage_ptr__->z = lookDirection.z + lookDirection.z * fVar9;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->x = (float)(int)lookDirection._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)lookDirection._0_8_ >> 0x20);
  __return_storage_ptr__->z = lookDirection.z;
  return __return_storage_ptr__;
}


/* Transform GetTargetHolsterTransform() */

Transform *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetTargetHolsterTransform
          (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)0x0;
  pMVar2 = (this->fields)._.worldObjectParent;
  if (((pMVar2 != (MVWorldObjectClient *)0x0) &&
      ((TypeInfo__MVAvatar->_1).typeHierarchyDepth <= (pMVar2->klass->_1).typeHierarchyDepth)) &&
     ((MVAvatar__Class *)
      (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] ==
      TypeInfo__MVAvatar)) {
    this_00 = (MVBody *)pMVar2[1].fields.PositionChanged;
    if ((this_00 == (MVBody *)0x0) ||
       (this_01 = MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0), this_01 == (BodyData *)0x0
       )) {
      func_?();
      pcVar3 = (code *)swi(3);
      pTVar1 = (Transform *)(*pcVar3)();
      return pTVar1;
    }
    pTVar1 = BodyData::BodyData_GetPartBone
                       (this_01,BodyData_PartIndex__Enum_Holster,(MethodInfo *)0x0);
  }
  return pTVar1;
}


/* Void HandleFire(Boolean, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_HandleFire
               (MVPickupOwner *this,bool inputFire,MVRuntimeDataVariable *isFiringRuntimeVariable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_get_FireDirection(&VStack_2,pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      pVVar3 = MainCameraManager::MainCameraManager_get_FireOrigin
                          ((Vector3 *)&stack0xffffffd4,pMVar1,(MethodInfo *)0x0);
      VStack_2.y = pVVar3->x;
      VStack_2.z = pVVar3->y;
      fVar4 = pVVar3->z;
      pVVar3 = (Vector3 *)func_?(&stack0xffffffd4);
      pVVar3 = MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                          ((Vector3 *)&stack0xffffffd4,this,*pVVar3,(MethodInfo *)0x0);
      fVar5 = pVVar3->x;
      fVar6 = pVVar3->y;
      fVar7 = pVVar3->z;
      (this->fields).lookOrigin.x = VStack_2.y;
      (this->fields).lookOrigin.y = VStack_2.z;
      (this->fields).lookDirection.x = fVar5;
      (this->fields).lookDirection.y = fVar6;
      (this->fields).lookOrigin.z = fVar4;
      pPVar8 = (this->fields).currentItem;
      (this->fields).lookDirection.z = fVar7;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pPVar8,(MethodInfo *)0x0);
      if (bVar9 == 0) {
code_?:
        inputFire = 0;
      }
      else {
        pPVar8 = (this->fields).currentItem;
        if (pPVar8 == (PickupItem *)0x0) goto code_?;
        cVar10 = (*(pPVar8->klass->vtable).CanFire.methodPtr)();
        if (cVar10 == '\0') goto code_?;
      }
      if ((isFiringRuntimeVariable != (MVRuntimeDataVariable *)0x0) &&
         (pOVar11 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                              (isFiringRuntimeVariable,(MethodInfo *)0x0), pOVar11 != (Object *)0x0)
         ) {
        if ((pOVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar12 = (bool *)func_?();
        if (*pbVar12 != inputFire) {
          bStack_13 = inputFire;
          pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_13);
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (isFiringRuntimeVariable,pOVar11,(MethodInfo *)0x0);
        }
        if (inputFire == 0) {
          return;
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        VStack_2.z = fVar4;
        if (fVar4 - (this->fields).prevUpdateLineOfFireTime <= _UNK_?) {
          return;
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar14 = (this->fields)._.worldObjectParent;
        if ((pMVar14 != (MVWorldObjectClient *)0x0) &&
           (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateLineOfFire
                    (this_00,(pMVar14->fields)._.id,(this->fields).lookDirection,
                     (this->fields).lookOrigin,(MethodInfo *)0x0);
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).prevUpdateLineOfFireTime = fVar4;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleFiring(Boolean) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_HandleFiring
               (MVPickupOwner *this,bool isFiring,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).onHandleFiring != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    pMVar1 = (this->fields).onHandleFiring;
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,_isFiring,(pMVar1->fields)._._.method);
  }
  pPVar2 = (this->fields).currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if (isFiring == 0) {
    pPVar2 = (this->fields).currentItem;
    if (pPVar2 != (PickupItem *)0x0) {
      (*(pPVar2->klass->vtable).TriggerEnd.methodPtr)(pPVar2);
      return;
    }
  }
  else {
    pMVar4 = (this->fields)._.worldObjectParent;
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (pPVar2 = (this->fields).currentItem, pPVar2 != (PickupItem *)0x0)) {
      (*(pPVar2->klass->vtable).TriggerBegin.methodPtr)(pPVar2,(pMVar4->fields)._.id);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Init
               (MVPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__MVPickupOwner___Init_b__39_0_System__Object_);
    func_?(&MethodInfo__MVPickupOwner___Init_b__39_1_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  if (currentItemRuntimeVariable == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = (currentItemRuntimeVariable->fields).OnChange;
    this_01 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_01 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__MVPickupOwner___Init_b__39_0_System__Object_,
               (MethodInfo *)0x0);
    pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (currentItemRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      this_00 = &(currentItemRuntimeVariable->fields).OnChange;
      func_?();
      currentItemRuntimeVariable =
           (MVRuntimeDataVariable *)
           MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                     (currentItemRuntimeVariable,(MethodInfo *)0x0);
      if (((UnityAction_1_System_Object_ *)currentItemRuntimeVariable !=
           (UnityAction_1_System_Object_ *)0x0) &&
         ((pDVar2 = 
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
          (((Dictionary_2_System_Object_System_Object___Class *)
           ((UnityAction_1_System_Object_ *)currentItemRuntimeVariable)->klass)->_1).
          typeHierarchyDepth <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)
            ((UnityAction_1_System_Object_ *)currentItemRuntimeVariable)->klass)->_1).typeHierarchy
           [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .typeHierarchyDepth - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      MVPickupOwner_UpdateCurrentItem
                ((MVPickupOwner *)this_00,
                 (Dictionary_2_System_Object_System_Object_ *)currentItemRuntimeVariable,
                 (MethodInfo *)0x0);
      if (isFiringRuntimeVariable != (MVRuntimeDataVariable *)0x0) {
        pMVar1 = (isFiringRuntimeVariable->fields).OnChange;
        currentItemRuntimeVariable =
             (MVRuntimeDataVariable *)
             func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        if ((UnityAction_1_System_Object_ *)currentItemRuntimeVariable !=
            (UnityAction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    ((UnityAction_1_System_Object_ *)currentItemRuntimeVariable,(Object *)this_00,
                     MethodInfo__MVPickupOwner___Init_b__39_1_System__Object_,(MethodInfo *)0x0);
          pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar1,(Delegate *)currentItemRuntimeVariable,
                              (MethodInfo *)0x0);
          if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (isFiringRuntimeVariable->fields).OnChange =
                 (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            func_?();
            return;
          }
          pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar3 = pMVar1;
          }
          if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (isFiringRuntimeVariable->fields).OnChange = pMVar3;
            pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar3 = pMVar1;
            }
            if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar3 = pMVar1;
    }
    if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (currentItemRuntimeVariable->fields).OnChange = pMVar3;
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar1;
      }
      if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
  pDVar2 = extraout_EDX;
code_?:
  func_?(currentItemRuntimeVariable,pDVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAvatarItemAsCurrent(PickupItem) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
               (MVPickupOwner *this,PickupItem *avatarItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                   );
    func_?(&
                    FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (avatarItem != (PickupItem *)0x0) {
    (avatarItem->fields).owner = this;
    func_?(&(avatarItem->fields).owner,this);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar1,
                 FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__)
      ;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)avatarItem,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        this_00 = (FadeableAvatarObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (this_00 != (FadeableAvatarObject *)0x0) {
          FadeableAvatarObject::FadeableAvatarObject_Initialize(this_00,pGVar1,(MethodInfo *)0x0);
          x = (this->fields).currentItem;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)avatarItem,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            (*(this->klass->vtable).__unknown_1.methodPtr)();
          }
          (this->fields).currentItem = avatarItem;
          func_?();
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


/* Void SetLineOfFire(Vector3, Vector3) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetLineOfFire
               (MVPickupOwner *this,Vector3 lookOrigin,Vector3 lookDirection,MethodInfo *method)

{
  (this->fields).lookOrigin.x = lookOrigin.x;
  (this->fields).lookOrigin.y = lookOrigin.y;
  (this->fields).lookOrigin.z = lookOrigin.z;
  (this->fields).lookDirection.x = lookDirection.x;
  (this->fields).lookDirection.y = lookDirection.y;
  (this->fields).lookDirection.z = lookDirection.z;
  return;
}


/* Void SetLineOfFireLocal() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetLineOfFireLocal
               (MVPickupOwner *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_get_FireDirection(&VStack_2,pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      pVVar3 = MainCameraManager::MainCameraManager_get_FireOrigin
                         ((Vector3 *)&stack0xffffffd8,pMVar1,(MethodInfo *)0x0);
      VStack_2.y = pVVar3->x;
      VStack_2.z = pVVar3->y;
      fVar4 = pVVar3->z;
      pVVar3 = (Vector3 *)func_?();
      pVVar3 = MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                         ((Vector3 *)&stack0xffffffd8,this,*pVVar3,(MethodInfo *)0x0);
      fVar5 = pVVar3->x;
      fVar6 = pVVar3->y;
      fVar7 = pVVar3->z;
      (this->fields).lookOrigin.x = VStack_2.y;
      (this->fields).lookOrigin.y = VStack_2.z;
      (this->fields).lookOrigin.z = fVar4;
      (this->fields).lookDirection.x = fVar5;
      (this->fields).lookDirection.y = fVar6;
      (this->fields).lookDirection.z = fVar7;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateCurrentItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_UpdateCurrentItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_updateItemState);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      (*(this->klass->vtable).__unknown_1.methodPtr)(this,(this->klass->vtable).__unknown_1.method);
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (newState,(Object *)StringLiteral_type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class !=
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
      puVar4 = (undefined4 *)func_?(pOVar2);
      pPVar5 = (PickupItem *)*puVar4;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                         (Object *)StringLiteral_variantId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar1 == 0) {
        pMVar6 = (MethodInfo *)0x0;
      }
      else {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (newState,(Object *)StringLiteral_variantId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 == (Object *)0x0) goto code_?;
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar4 = (undefined4 *)func_?(pOVar2);
        pMVar6 = (MethodInfo *)*puVar4;
      }
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)newState,
                         (Object *)StringLiteral_updateItemState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar1 == 0) {
        uVar7 = 0;
      }
      else {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (newState,(Object *)StringLiteral_updateItemState,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 == (Object *)0x0) goto code_?;
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pMVar6 = (MethodInfo *)&UNK_?;
        puVar8 = (uint *)func_?(pOVar2);
        uVar7 = *puVar8;
      }
      pPVar9 = (this->fields).currentItem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pPVar5 = (this->fields).currentItem;
        if (pPVar5 == (PickupItem *)0x0) goto code_?;
        pMVar6 = (pPVar5->klass->vtable).__unknown.method;
        pPVar9 = (PickupItem *)(*(pPVar5->klass->vtable).__unknown.methodPtr)();
        if (pPVar5 != pPVar9) goto code_?;
        pPVar9 = (this->fields).currentItem;
        if (pPVar9 == (PickupItem *)0x0) goto code_?;
        if (pMVar6 != (MethodInfo *)(pPVar9->fields)._VariantID_k__BackingField)
        goto code_?;
        if ((uVar7 & 4) != 0) {
          func_?(0x13,pPVar9);
        }
      }
      else {
code_?:
        (*(this->klass->vtable).__unknown.methodPtr)
                  (this,pPVar5,pMVar6,(this->klass->vtable).__unknown.method);
      }
      pPVar5 = (this->fields).currentItem;
      if (pPVar5 != (PickupItem *)0x0) {
        cVar10 = (*(pPVar5->klass->vtable).get_CanHolster.methodPtr)
                          (pPVar5,(pPVar5->klass->vtable).get_CanHolster.method);
        if (cVar10 != '\0') {
          if ((uVar7 & 1) != 0) {
            pPVar5 = (this->fields).currentItem;
            if (pPVar5 == (PickupItem *)0x0) goto code_?;
            if ((pPVar5->fields)._IsHolstered_k__BackingField == 0) {
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVAvatar);
                cRam_? = '\x01';
              }
              pMVar11 = (this->fields)._.worldObjectParent;
              targetHolsterTransform = (Transform *)0x0;
              if (((pMVar11 != (MVWorldObjectClient *)0x0) &&
                  ((TypeInfo__MVAvatar->_1).typeHierarchyDepth <=
                   (pMVar11->klass->_1).typeHierarchyDepth)) &&
                 ((MVAvatar__Class *)
                  (pMVar11->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1]
                  == TypeInfo__MVAvatar)) {
                this_00 = (MVBody *)pMVar11[1].fields.PositionChanged;
                if ((this_00 == (MVBody *)0x0) ||
                   (this_01 = MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
                   this_01 == (BodyData *)0x0)) goto code_?;
                targetHolsterTransform =
                     BodyData::BodyData_GetPartBone
                               (this_01,BodyData_PartIndex__Enum_Holster,(MethodInfo *)0x0);
              }
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)targetHolsterTransform,(Object_1 *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1 != 0) {
                pPVar5 = (this->fields).currentItem;
                if (pPVar5 == (PickupItem *)0x0) goto code_?;
                PickupItem::PickupItem_HolsterPickup
                          (pPVar5,targetHolsterTransform,(MethodInfo *)0x0);
                if ((this->fields).OnHolsteredChanged != (Action_1_Boolean_ *)0x0) {
                  pAVar12 = (this->fields).OnHolsteredChanged;
                  (*(pAVar12->fields)._._.invoke_impl)
                            ((pAVar12->fields)._._.method_code,1,(pAVar12->fields)._._.method);
                }
              }
            }
          }
          if ((uVar7 & 2) != 0) {
            pPVar5 = (this->fields).currentItem;
            if (pPVar5 == (PickupItem *)0x0) goto code_?;
            if (((pPVar5->fields)._IsHolstered_k__BackingField != 0) &&
               (PickupItem::PickupItem_UnholsterPickup(pPVar5,(MethodInfo *)0x0),
               (this->fields).OnHolsteredChanged != (Action_1_Boolean_ *)0x0)) {
              pAVar12 = (this->fields).OnHolsteredChanged;
              (*(pAVar12->fields)._._.invoke_impl)((pAVar12->fields)._._.method_code);
            }
          }
        }
        pPVar5 = (this->fields).currentItem;
        if (pPVar5 != (PickupItem *)0x0) {
          (*(pPVar5->klass->vtable).OnStateChanged.methodPtr)
                    (pPVar5,newState,(pPVar5->klass->vtable).OnStateChanged.method);
          return;
        }
      }
    }
  }
code_?:
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <Init>b__39_0(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__39_0
               (MVPickupOwner *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if (item == (Object *)0x0) {
    MVPickupOwner_UpdateCurrentItem
              (this,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
    return;
  }
  if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth <= (item->klass->_1).typeHierarchyDepth) &&
     ((Dictionary_2_System_Object_System_Object___Class *)
      (item->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth - 1] ==
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    MVPickupOwner_UpdateCurrentItem
              (this,(Dictionary_2_System_Object_System_Object_ *)item,(MethodInfo *)0x0);
    return;
  }
  func_?(item,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Init>b__39_1(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__39_1
               (MVPickupOwner *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((value->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar2 = (byte *)func_?(value);
    bVar3 = *pbVar2;
    value = (Object *)(uint)bVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((this->fields).onHandleFiring != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      pMVar4 = (this->fields).onHandleFiring;
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,value,(pMVar4->fields)._._.method);
    }
    pPVar5 = (this->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      return;
    }
    if (bVar3 == 0) {
      pPVar5 = (this->fields).currentItem;
      if (pPVar5 != (PickupItem *)0x0) {
        (*(pPVar5->klass->vtable).TriggerEnd.methodPtr)
                  (pPVar5,(pPVar5->klass->vtable).TriggerEnd.method);
        return;
      }
    }
    else {
      pMVar7 = (this->fields)._.worldObjectParent;
      if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
         (pPVar5 = (this->fields).currentItem, pPVar5 != (PickupItem *)0x0)) {
        (*(pPVar5->klass->vtable).TriggerBegin.methodPtr)
                  (pPVar5,(pMVar7->fields)._.id,(pPVar5->klass->vtable).TriggerBegin.method);
        return;
      }
    }
  }
  func_?();
  value = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(value,pBVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVPickupOwner() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__ctor(MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields).lookOrigin.x = (pVVar1->oneVector).x;
  (this->fields).lookOrigin.y = fVar2;
  (this->fields).lookOrigin.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields).lookDirection.x = (pVVar1->oneVector).x;
  (this->fields).lookDirection.y = fVar2;
  (this->fields).lookDirection.z = fVar3;
  (this->fields)._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs
          (MVPickupOwner *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldObjectParent;
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
code_?:
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    pHVar4 = (HashSet_1_System_Int32_ *)(*pcVar3)();
    return pHVar4;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass51_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVWorldObjectClient____c__DisplayClass51_0);
  if (value == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_retaddr);
  this_00 = (Object__Class *)func_?();
  if (this_00 == (Object__Class *)0x0) goto code_?;
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor
            ((HashSet_1_UnityEngine_Vector3_ *)this_00,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  value[1].klass = this_00;
  func_?();
  iVar5 = func_?();
  pMVar6 = 
  MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
  ;
  if (iVar5 == 0) goto code_?;
  uVar2 = func_?();
  *(undefined4 *)(iVar5 + 8) = uVar2;
  *(MethodInfo **)(iVar5 + 0x14) = pMVar6;
  *(Object **)(iVar5 + 0x10) = value;
  func_?();
  uVar7 = pMVar6->parameters_count;
  *(int *)(iVar5 + 0x20) = iVar5;
  cVar8 = func_?();
  if (cVar8 == '\0') {
    if (uVar7 == 0) {
      if (*(char *)(iVar5 + 0x38) == '\0') {
        puVar9 = &UNK_?;
      }
      else {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            puVar9 = &UNK_?;
          }
          else {
            puVar9 = &UNK_?;
          }
        }
        else {
          cVar8 = func_?();
          puVar9 = &UNK_?;
          if (cVar8 != '\0') {
            puVar9 = &UNK_?;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if (pMVar6->indirect_call_via_invokers != 0) {
      puVar9 = &UNK_?;
      if (uVar7 != 1) {
        puVar9 = &UNK_?;
      }
      goto code_?;
    }
    if (uVar7 == 1) {
      puVar9 = &UNK_?;
      goto code_?;
    }
  }
  puVar9 = *(undefined **)(iVar5 + 8);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar5 + 0x10);
code_?:
  *(undefined **)(iVar5 + 0xc) = puVar9;
  *(undefined **)(iVar5 + 0x1c) = &UNK_?;
  (*(pMVar1->klass->vtable).TraverseRecursiveTail_1.methodPtr)();
  return (HashSet_1_System_Int32_ *)value[1].klass;
}


/* Boolean get_InGunMode() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_InGunMode
               (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pPVar1 = (this->fields).currentItem;
    if (pPVar1 == (PickupItem *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
      bVar2 = (*(pPVar1->klass->vtable).get_ActivateGunModeOnEquip.methodPtr)
                        (pPVar1,(pPVar1->klass->vtable).get_ActivateGunModeOnEquip.method);
      return bVar2;
    }
  }
  return 0;
}


/* Vector3 get_LookDirection() */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_LookDirection
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&(this->fields).lookDirection,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean get_PickupItemIsInHand() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
               (MVPickupOwner *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pPStack_2 = (this->fields).currentItem;
  if (pPStack_2 == (PickupItem *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pPStack_2->fields)._IsHolstered_k__BackingField != 0) {
    return 0;
  }
  pMStack_1 = (pPStack_2->klass->vtable).__unknown.method;
  iVar7 = (*(pPStack_2->klass->vtable).__unknown.methodPtr)();
  return iVar7 != 5;
}

