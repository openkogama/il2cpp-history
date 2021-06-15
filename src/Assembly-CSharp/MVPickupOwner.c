
/* Void Awake() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Awake(MVPickupOwner *this,MethodInfo *method)

{
  MVComponent::MVComponent_Awake((MVComponent *)this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = PickupItem::PickupItem_InstantiateAvatarItemType(type,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this_00 != (GameObject *)0x0) {
      pPVar2 = (PickupItem *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (this_00,
                          PickupItem_MethodInfo__UnityEngine__GameObject__GetComponent<PickupItem>__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Item_to_equip_is_missing_the_Ava,(MethodInfo *)0x0);
        return pPVar2;
      }
      if (pPVar2 != (PickupItem *)0x0) {
        PickupItem::PickupItem_set_VariantID(pPVar2,0,(MethodInfo *)0x0);
        return pPVar2;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pPVar2 = (PickupItem *)(*pcVar3)();
    return pPVar2;
  }
  arg1 = (Object *)func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Concat_1
                      ((Object *)StringLiteral_Cannot_equip_avatarItemType__,arg1,
                       (Object *)StringLiteral___since_prefab_was_not_found,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)message,(MethodInfo *)0x0);
  return (PickupItem *)0x0;
}


/* Single GetAbsolutProjectileSpeed(Single) */

float Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                (MVPickupOwner *this,float projectileSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = &(this->fields).lookDirection;
  uStack_2 = 0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = pVVar1->x;
  uStack_4._4_4_ = pVVar1->y;
  fVar5 = (this->fields).lookDirection.z;
  puVar6 = (undefined8 *)func_?(&VStack_7,pVVar1,0);
  uStack_8 = *puVar6;
  fVar9 = *(float *)(puVar6 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar5;
  a.x = (float)(undefined4)uStack_4;
  a.y = (float)uStack_4._4_4_;
  b.z = fVar9;
  b.x = (float)(undefined4)uStack_8;
  b.y = (float)uStack_8._4_4_;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&VStack_7,a,b,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar1->x;
  uStack_2._4_4_ = pVVar1->y;
  fStack_3 = pVVar1->z;
  fVar10 = (float10)func_?(&uStack_2,0);
  return (float)(fVar10 + (float10)projectileSpeed);
}


/* Vector3 GetLookDirectionWithAddedVelocityMagnitude(Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::
          MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,Vector3 lookDirection,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
  x = MVWorldObjectClientManager::
      MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy_1
                (gameObject,
                 MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                );
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (x == (MVRigidBody *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    (*(code *)(x->klass->vtable).__unknown_1.method)();
    puVar4 = (undefined8 *)func_?(&stack0xffffffe8,&stack0xffffffdc);
    fVar5 = *(float *)(puVar4 + 1);
    uVar6 = (undefined4)*puVar4;
    uVar7 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    func_?(&stack0xffffffe8,&(this->fields).lookDirection,0);
    puVar4 = (undefined8 *)func_?(&stack0xffffffb8,&stack0xffffffd0,0);
    uVar8 = *puVar4;
    fVar9 = *(float *)(puVar4 + 1);
    uVar10 = (undefined4)uVar8;
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar8 = CONCAT44(uVar11,uVar10);
    }
    lhs.y = (float)uVar7;
    lhs.x = (float)uVar6;
    lhs.z = fVar5;
    rhs.z = fVar9;
    rhs.x = (float)(int)uVar8;
    rhs.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,rhs,(MethodInfo *)0x0)
    ;
    if (0.0 < fVar5) {
      (*(code *)(x->klass->vtable).__unknown_1.method)();
      fVar12 = (float10)func_?();
      fVar9 = (float)fVar12;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                         ((Vector3 *)&stack0xffffffb8,fVar9 * fVar5,lookDirection,(MethodInfo *)0x0
                         );
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffb8,*pVVar3,lookDirection,(MethodInfo *)0x0);
      fVar9 = pVVar3->y;
      fVar5 = pVVar3->z;
      __return_storage_ptr__->x = pVVar3->x;
      __return_storage_ptr__->y = fVar9;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->x = lookDirection.x;
  __return_storage_ptr__->y = lookDirection.y;
  __return_storage_ptr__->z = lookDirection.z;
  return __return_storage_ptr__;
}


/* Transform GetTargetHolsterTransform() */

Transform *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetTargetHolsterTransform
          (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVAvatar *)(this->fields)._.worldObjectParent;
  if (pMVar1 != (MVAvatar *)0x0) {
    bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVAvatar__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVAvatar)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (MVAvatar *)0x0;
    if (bVar3) {
      this_00 = pMVar1;
    }
    if (this_00 != (MVAvatar *)0x0) {
      this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
      if ((this_01 != (MVBody *)0x0) &&
         (this_02 = MVBody::MVBody_get_BodyData(this_01,(MethodInfo *)0x0),
         this_02 != (BodyData *)0x0)) {
        pTVar4 = BodyData::BodyData_GetPartBone
                           (this_02,BodyData_PartIndex__Enum_Holster,(MethodInfo *)0x0);
        return pTVar4;
      }
      func_?();
      pcVar5 = (code *)swi(3);
      pTVar4 = (Transform *)(*pcVar5)();
      return pTVar4;
    }
  }
  return (Transform *)0x0;
}


/* Void HandleFire(Boolean, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_HandleFire
               (MVPickupOwner *this,bool inputFire,MVRuntimeDataVariable *isFiringRuntimeVariable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  MVPickupOwner_SetLineOfFireLocal(this,(MethodInfo *)0x0);
  pPVar2 = (pMVar1->fields).currentItem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pPVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    bVar3 = 0;
code_?:
    this_01 = isFiringRuntimeVariable;
    if (isFiringRuntimeVariable != (MVRuntimeDataVariable *)0x0) {
      pMVar4 = (MVPickupOwner *)
               ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((isFiringRuntimeVariable->fields).value,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Boolean,pMVar4);
      if (pMVar4 != (MVPickupOwner *)0x0) {
        if ((pMVar4->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        this = pMVar4;
        pbVar6 = (bool *)func_?();
        if (*pbVar6 != bVar3) {
          this = (MVPickupOwner *)CONCAT13(bVar3,this._0_3_);
          value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_01,value,(MethodInfo *)0x0);
        }
        if ((bVar3 == 0) ||
           (this = (MVPickupOwner *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
           , (float)this - (pMVar1->fields).prevUpdateLineOfFireTime <= _UNK_?)) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        this_00 = (pMVar1->fields)._.worldObjectParent;
        if ((this_00 != (MVWorldObjectClient *)0x0) &&
           (worldObjectIDPickupOwner =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0),
           this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateLineOfFire
                    (this_02,(int32_t)worldObjectIDPickupOwner,(pMVar1->fields).lookDirection,
                     (pMVar1->fields).lookOrigin,(MethodInfo *)0x0);
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (pMVar1->fields).prevUpdateLineOfFireTime = fVar7;
          return;
        }
      }
    }
  }
  else {
    pPVar2 = (pMVar1->fields).currentItem;
    if (pPVar2 != (PickupItem *)0x0) {
      cVar8 = (*(code *)(pPVar2->klass->vtable).CanFire.method)
                        (pPVar2,(pPVar2->klass->vtable).TriggerBegin.methodPtr);
      bVar3 = inputFire;
      if (cVar8 == '\0') goto code_?;
      goto code_?;
    }
  }
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleFiring(Boolean) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_HandleFiring
               (MVPickupOwner *this,bool isFiring,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Boolean_ *)(this->fields).onHandleFiring;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke(this_00,isFiring,(MethodInfo *)0x0);
  }
  pPVar1 = (this->fields).currentItem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pPVar1 = (this->fields).currentItem;
  if (isFiring == 0) {
    if (pPVar1 != (PickupItem *)0x0) {
      (*(code *)(pPVar1->klass->vtable).TriggerEnd.method)();
      return;
    }
  }
  else {
    this_01 = (this->fields)._.worldObjectParent;
    if ((this_01 != (MVWorldObjectClient *)0x0) &&
       (mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
       pPVar1 != (PickupItem *)0x0)) {
      pIStack3 = (pPVar1->klass->vtable).TriggerEnd.methodPtr;
      (*(code *)(pPVar1->klass->vtable).TriggerBegin.method)();
      return;
    }
  }
  pIStack3 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Init
               (MVPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (currentItemRuntimeVariable == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?(0);
    pMVar1 = extraout_ECX;
    pMVar2 = extraout_EDX;
  }
  else {
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                (currentItemRuntimeVariable->fields).OnChange;
    pDVar3 = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    pMVar4 = MethodInfo__MVPickupOwner___Init_m__0_System__Object_;
    (pDVar3->fields).method_ptr =
         MethodInfo__MVPickupOwner___Init_m__0_System__Object_->methodPointer;
    (pDVar3->fields).method = pMVar4;
    (pDVar3->fields).m_target = (Object *)this;
    pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_ESI,pDVar3,(MethodInfo *)0x0);
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
      (currentItemRuntimeVariable->fields).OnChange = pMVar5;
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
               ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((currentItemRuntimeVariable->fields).value,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      newState = pDVar6;
      if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar6->klass->_1).naturalAligment < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar6->klass->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        newState = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar8) {
          newState = pDVar6;
        }
        if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)&UNK_?;
      MVPickupOwner_UpdateCurrentItem(this,newState,(MethodInfo *)0x0);
      if (isFiringRuntimeVariable == (MVRuntimeDataVariable *)0x0) goto code_?;
      pMVar5 = (isFiringRuntimeVariable->fields).OnChange;
      pDVar3 = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      pMVar4 = MethodInfo__MVPickupOwner___Init_m__1_System__Object_;
      (pDVar3->fields).method_ptr =
           MethodInfo__MVPickupOwner___Init_m__1_System__Object_->methodPointer;
      (pDVar3->fields).method = pMVar4;
      (pDVar3->fields).m_target = (Object *)this;
      unaff_ESI = pDVar9;
      pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar5,pDVar3,(MethodInfo *)0x0);
      pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
        (isFiringRuntimeVariable->fields).OnChange = pMVar5;
        return;
      }
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar1;
      }
      pMVar2 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    else {
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar1;
      }
      pMVar2 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
  }
  func_?(pMVar1,pMVar2);
  pDVar6 = extraout_EDX_00;
code_?:
  func_?(pDVar6,unaff_ESI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetAvatarItemAsCurrent(PickupItem) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
               (MVPickupOwner *this,PickupItem *avatarItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (avatarItem != (PickupItem *)0x0) {
    (avatarItem->fields).owner = this;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                (pGVar1,
                 FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__)
      ;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)avatarItem,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        this_00 = (FadeableAvatarObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (pGVar1,
                             FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_00 != (FadeableAvatarObject *)0x0) {
          FadeableAvatarObject::FadeableAvatarObject_Initialize(this_00,pGVar1,(MethodInfo *)0x0);
          x = (this->fields).currentItem;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)avatarItem,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pIStack3 = (this->klass->vtable).get_IgnoreWOIDs.methodPtr;
            pMStack4 = this;
            (*(code *)(this->klass->vtable).__unknown_1.method)();
          }
          (this->fields).currentItem = avatarItem;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  pDVar1 = newState;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      (*(code *)(this->klass->vtable).__unknown_1.method)
                (this,(this->klass->vtable).get_IgnoreWOIDs.methodPtr);
      return;
    }
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,pPVar3);
    if (pPVar3 != (Pool *)0x0) {
      if ((pPVar3->klass->_0).element_class !=
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
      func_?(pPVar3);
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)newState,StringLiteral_variantId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) {
        pOVar5 = (ObjectPrefab *)0x0;
      }
      else {
        pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)newState,
                            (Type *)StringLiteral_variantId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
        if (pPVar3 == (Pool *)0x0) goto code_?;
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar6 = (undefined4 *)func_?(pPVar3);
        pOVar5 = (ObjectPrefab *)*puVar6;
      }
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)newState,StringLiteral_updateItemState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 != 0) {
        newState = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)newState,
                              (Type *)StringLiteral_updateItemState,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
        uVar4 = CONCAT44(TypeInfo__System__Int32,newState);
        if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        if ((newState->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        this = (MVPickupOwner *)&UNK_?;
        func_?();
      }
      pPVar7 = (this->fields).currentItem;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      puVar8 = (undefined *)0x0;
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar7 = (this->fields).currentItem;
        if (pPVar7 == (PickupItem *)0x0) goto code_?;
        puVar9 = (undefined *)(*(code *)(pPVar7->klass->vtable).__unknown.method)();
        if (puVar8 != puVar9) goto code_?;
        this_03 = (PrefabPool *)(this->fields).currentItem;
        if (this_03 == (PrefabPool *)0x0) goto code_?;
        puVar8 = &UNK_?;
        pOVar10 = PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
        if (pOVar5 != pOVar10) goto code_?;
        if (((uint)this_03 & 4) != 0) {
          if ((this->fields).currentItem == (PickupItem *)0x0) goto code_?;
          func_?();
        }
      }
      else {
code_?:
        this_03 = (PrefabPool *)this;
        (*(code *)(this->klass->vtable).__unknown.method)(this,puVar8);
      }
      pPVar7 = (this->fields).currentItem;
      if (pPVar7 != (PickupItem *)0x0) {
        cVar11 = (*(code *)(pPVar7->klass->vtable).get_CanHolster.method)();
        if (cVar11 != '\0') {
          if (((uint)this_03 & 1) != 0) {
            pMVar12 = (MvCharacterController *)(this->fields).currentItem;
            if (pMVar12 == (MvCharacterController *)0x0) goto code_?;
            pPVar13 = this_03;
            bVar2 = MvCharacterController::MvCharacterController_get_IsGrounded
                              (pMVar12,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              this_03 = pPVar13;
              if (cRam_? == '\0') {
                this_03 = (PrefabPool *)&UNK_?;
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pMVar14 = (MVAvatar *)(this->fields)._.worldObjectParent;
              targetHolsterTransform = (Transform *)0x0;
              if (pMVar14 != (MVAvatar *)0x0) {
                bVar15 = (TypeInfo__MVAvatar->_1).naturalAligment;
                if (((pMVar14->klass->_1).naturalAligment < bVar15) ||
                   (pDVar1 = newState,
                   (MVAvatar__Class *)(pMVar14->klass->_1).typeHierarchy[bVar15 - 1] !=
                   TypeInfo__MVAvatar)) {
                  bVar16 = false;
                }
                else {
                  bVar16 = true;
                }
                this_00 = (MVAvatar *)0x0;
                if (bVar16) {
                  this_00 = pMVar14;
                }
                if (this_00 != (MVAvatar *)0x0) {
                  this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
                  if ((this_01 == (MVBody *)0x0) ||
                     (this_02 = MVBody::MVBody_get_BodyData(this_01,(MethodInfo *)0x0),
                     this_02 == (BodyData *)0x0)) goto code_?;
                  targetHolsterTransform =
                       BodyData::BodyData_GetPartBone
                                 (this_02,BodyData_PartIndex__Enum_Holster,(MethodInfo *)0x0);
                }
              }
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)targetHolsterTransform,(Object_1 *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2 != 0) {
                pPVar7 = (this->fields).currentItem;
                if (pPVar7 == (PickupItem *)0x0) goto code_?;
                PickupItem::PickupItem_HolsterPickup
                          (pPVar7,targetHolsterTransform,(MethodInfo *)0x0);
                pAVar17 = (Action_1_UIPushOption_ *)(this->fields).OnHolsteredChanged;
                if (pAVar17 != (Action_1_UIPushOption_ *)0x0) {
                  mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                            (pAVar17,UIPushOption__Enum_Blocking,
                             MethodInfo__System__Action<bool>__Invoke_bool_);
                }
              }
            }
          }
          if (((uint)this_03 & 2) != 0) {
            pMVar12 = (MvCharacterController *)(this->fields).currentItem;
            if (pMVar12 == (MvCharacterController *)0x0) goto code_?;
            bVar2 = MvCharacterController::MvCharacterController_get_IsGrounded
                              (pMVar12,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              pPVar7 = (this->fields).currentItem;
              if (pPVar7 == (PickupItem *)0x0) goto code_?;
              PickupItem::PickupItem_UnholsterPickup(pPVar7,(MethodInfo *)0x0);
              pAVar17 = (Action_1_UIPushOption_ *)(this->fields).OnHolsteredChanged;
              if (pAVar17 != (Action_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                          (pAVar17,UIPushOption__Enum_None,
                           MethodInfo__System__Action<bool>__Invoke_bool_);
              }
            }
          }
        }
        pPVar7 = (this->fields).currentItem;
        if (pPVar7 != (PickupItem *)0x0) {
          (*(code *)(pPVar7->klass->vtable).OnStateChanged.method)
                    (pPVar7,pDVar1,(pPVar7->klass->vtable).OnEquip.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void <Init>m__0(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_m__0
               (MVPickupOwner *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item == (Object *)0x0) {
    item = (Object *)0x0;
    pOVar1 = item;
  }
  else {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((item->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (item->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pOVar1 = (Object *)0x0;
    if (bVar3) {
      pOVar1 = item;
    }
    if (pOVar1 == (Object *)0x0) {
      func_?(item,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  item = pOVar1;
  pOVar1 = item;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (Object *)0x0) {
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)item,StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      (*(code *)(this->klass->vtable).__unknown_1.method)
                (this,(this->klass->vtable).get_IgnoreWOIDs.methodPtr);
      return;
    }
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)item,(Type *)StringLiteral_type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar7 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,pPVar6);
    if (pPVar6 != (Pool *)0x0) {
      if ((pPVar6->klass->_0).element_class !=
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
      func_?(pPVar6);
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)item,StringLiteral_variantId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 == 0) {
        pOVar8 = (ObjectPrefab *)0x0;
      }
      else {
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)item,(Type *)StringLiteral_variantId,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar7 = CONCAT44(TypeInfo__System__Int32,pPVar6);
        if (pPVar6 == (Pool *)0x0) goto code_?;
        if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar9 = (undefined4 *)func_?(pPVar6);
        pOVar8 = (ObjectPrefab *)*puVar9;
      }
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)item,StringLiteral_updateItemState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar5 != 0) {
        item = (Object *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)item,
                          (Type *)StringLiteral_updateItemState,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
        uVar7 = CONCAT44(TypeInfo__System__Int32,item);
        if ((Pool *)item == (Pool *)0x0) goto code_?;
        if ((((Pool *)item)->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
           ) goto code_?;
        this = (MVPickupOwner *)&UNK_?;
        func_?();
      }
      pPVar10 = (this->fields).currentItem;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object,unaff_ESI);
      }
      puVar11 = (undefined *)0x0;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pPVar10 = (this->fields).currentItem;
        if (pPVar10 == (PickupItem *)0x0) goto code_?;
        puVar12 = (undefined *)(*(code *)(pPVar10->klass->vtable).__unknown.method)();
        if (puVar11 != puVar12) goto code_?;
        this_03 = (PrefabPool *)(this->fields).currentItem;
        if (this_03 == (PrefabPool *)0x0) goto code_?;
        puVar11 = &UNK_?;
        pOVar13 = PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0);
        if (pOVar8 != pOVar13) goto code_?;
        if (((uint)this_03 & 4) != 0) {
          if ((this->fields).currentItem == (PickupItem *)0x0) goto code_?;
          func_?();
        }
      }
      else {
code_?:
        this_03 = (PrefabPool *)this;
        (*(code *)(this->klass->vtable).__unknown.method)(this,puVar11);
      }
      pPVar10 = (this->fields).currentItem;
      if (pPVar10 != (PickupItem *)0x0) {
        cVar14 = (*(code *)(pPVar10->klass->vtable).get_CanHolster.method)();
        if (cVar14 != '\0') {
          if (((uint)this_03 & 1) != 0) {
            pMVar15 = (MvCharacterController *)(this->fields).currentItem;
            if (pMVar15 == (MvCharacterController *)0x0) goto code_?;
            pPVar16 = this_03;
            bVar5 = MvCharacterController::MvCharacterController_get_IsGrounded
                              (pMVar15,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              this_03 = pPVar16;
              if (cRam_? == '\0') {
                this_03 = (PrefabPool *)&UNK_?;
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pMVar17 = (MVAvatar *)(this->fields)._.worldObjectParent;
              targetHolsterTransform = (Transform *)0x0;
              if (pMVar17 != (MVAvatar *)0x0) {
                bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
                if (((pMVar17->klass->_1).naturalAligment < bVar2) ||
                   (pOVar1 = item,
                   (MVAvatar__Class *)(pMVar17->klass->_1).typeHierarchy[bVar2 - 1] !=
                   TypeInfo__MVAvatar)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                this_00 = (MVAvatar *)0x0;
                if (bVar3) {
                  this_00 = pMVar17;
                }
                if (this_00 != (MVAvatar *)0x0) {
                  this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
                  if ((this_01 == (MVBody *)0x0) ||
                     (this_02 = MVBody::MVBody_get_BodyData(this_01,(MethodInfo *)0x0),
                     this_02 == (BodyData *)0x0)) goto code_?;
                  targetHolsterTransform =
                       BodyData::BodyData_GetPartBone
                                 (this_02,BodyData_PartIndex__Enum_Holster,(MethodInfo *)0x0);
                }
              }
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)targetHolsterTransform,(Object_1 *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar5 != 0) {
                pPVar10 = (this->fields).currentItem;
                if (pPVar10 == (PickupItem *)0x0) goto code_?;
                PickupItem::PickupItem_HolsterPickup
                          (pPVar10,targetHolsterTransform,(MethodInfo *)0x0);
                pAVar18 = (Action_1_UIPushOption_ *)(this->fields).OnHolsteredChanged;
                if (pAVar18 != (Action_1_UIPushOption_ *)0x0) {
                  mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                            (pAVar18,UIPushOption__Enum_Blocking,
                             MethodInfo__System__Action<bool>__Invoke_bool_);
                }
              }
            }
          }
          if (((uint)this_03 & 2) != 0) {
            pMVar15 = (MvCharacterController *)(this->fields).currentItem;
            if (pMVar15 == (MvCharacterController *)0x0) goto code_?;
            bVar5 = MvCharacterController::MvCharacterController_get_IsGrounded
                              (pMVar15,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pPVar10 = (this->fields).currentItem;
              if (pPVar10 == (PickupItem *)0x0) goto code_?;
              PickupItem::PickupItem_UnholsterPickup(pPVar10,(MethodInfo *)0x0);
              pAVar18 = (Action_1_UIPushOption_ *)(this->fields).OnHolsteredChanged;
              if (pAVar18 != (Action_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                          (pAVar18,UIPushOption__Enum_None,
                           MethodInfo__System__Action<bool>__Invoke_bool_);
              }
            }
          }
        }
        pPVar10 = (this->fields).currentItem;
        if (pPVar10 != (PickupItem *)0x0) {
          (*(code *)(pPVar10->klass->vtable).OnStateChanged.method)
                    (pPVar10,pOVar1,(pPVar10->klass->vtable).OnEquip.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  uVar7 = func_?(0);
code_?:
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Init>m__1(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_m__1
               (MVPickupOwner *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((value->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar2 = (bool *)func_?(value);
    arg0 = *pbVar2;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_1_System_Boolean_ *)(this->fields).onHandleFiring;
    if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke(this_00,arg0,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).currentItem;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pPVar3 = (this->fields).currentItem;
    if (arg0 == 0) {
      if (pPVar3 != (PickupItem *)0x0) {
        (*(code *)(pPVar3->klass->vtable).TriggerEnd.method)
                  (pPVar3,(pPVar3->klass->vtable).OnStateChanged.methodPtr);
        return;
      }
    }
    else {
      this_01 = (this->fields)._.worldObjectParent;
      if ((this_01 != (MVWorldObjectClient *)0x0) &&
         (pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
         pPVar3 != (PickupItem *)0x0)) {
        (*(code *)(pPVar3->klass->vtable).TriggerBegin.method)
                  (pPVar3,pIVar5,(pPVar3->klass->vtable).TriggerEnd.methodPtr);
        return;
      }
    }
  }
  func_?(0);
  value = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(value,pBVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVPickupOwner() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__ctor(MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).lookOrigin.x = pVVar1->x;
  (this->fields).lookOrigin.y = fVar3;
  (this->fields).lookOrigin.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).lookDirection.x = pVVar1->x;
  (this->fields).lookDirection.y = fVar3;
  (this->fields).lookDirection.z = fVar4;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs
          (MVPickupOwner *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldObjectParent;
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
    return pHVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVWorldObjectClient____c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this_01;
    iVar4 = func_?();
    pMVar5 = MethodInfo__MVWorldObjectClient____c__AnonStorey0____m__0_MVWorldObjectClient_;
    *(Il2CppMethodPointer *)(iVar4 + 8) =
         MethodInfo__MVWorldObjectClient____c__AnonStorey0____m__0_MVWorldObjectClient_->
         methodPointer;
    *(MethodInfo **)(iVar4 + 0x14) = pMVar5;
    *(ScaleAnimationBase **)(iVar4 + 0x10) = this_00;
    (*(code *)(pMVar1->klass->vtable).TraverseRecursiveTail.method)
              (pMVar1,iVar4,(pMVar1->klass->vtable).CompareWithKoGaMaPackage.methodPtr);
    return (this_00->fields)._._._._.m_CachedPtr;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
  return pHVar3;
}


/* Boolean get_InGunMode() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_InGunMode
               (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 0;
  }
  this_00 = (MvCharacterController *)(this->fields).currentItem;
  if (this_00 != (MvCharacterController *)0x0) {
    bVar2 = MvCharacterController::MvCharacterController_get_IsGrounded(this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    pPVar1 = (this->fields).currentItem;
    if (pPVar1 != (PickupItem *)0x0) {
      bVar2 = (*(code *)(pPVar1->klass->vtable).get_ActivateGunModeOnEquip.method)();
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsLocal() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_IsLocal
               (MVPickupOwner *this,MethodInfo *method)

{
  return (this->fields)._IsLocal_k__BackingField;
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
  this_00 = (MvCharacterController *)(this->fields).currentItem;
  if (this_00 != (MvCharacterController *)0x0) {
    bVar1 = MvCharacterController::MvCharacterController_get_IsGrounded(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pPVar2 = (this->fields).currentItem;
    if (pPVar2 != (PickupItem *)0x0) {
      iVar3 = (*(code *)(pPVar2->klass->vtable).__unknown.method)
                        (pPVar2,(pPVar2->klass->vtable).CanFire.methodPtr);
      return iVar3 != 5;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void set_IsLocal(Boolean) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_set_IsLocal
               (MVPickupOwner *this,bool value,MethodInfo *method)

{
  (this->fields)._IsLocal_k__BackingField = value;
  return;
}

