
/* Void Awake() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Awake(MVPickupOwner *this,MethodInfo *method)

{
  if ((this->fields)._.findWorldObjectParent != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&StringLiteral_worldObjectParent_already_set_);
      func_?(&StringLiteral___worldobjectParent_not_found_on);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields)._.worldObjectParent;
    (this->fields)._.findWorldObjectParent = 1;
    pSVar2 = StringLiteral_worldObjectParent_already_set_;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pMVar1 = (this->fields)._.worldObjectParent;
      pMVar3 = pMVar1->klass;
      str1 = (String *)
             (*(code *)(pMVar3->vtable).ToString.method)
                       (pMVar1,(pMVar3->vtable).get_Position.methodPtr);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((pGVar4 == (GameObject *)0x0) ||
       (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0),
       this_00 == (MVWorldObjectClientManager *)0x0)) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                       (this_00,goId,(MethodInfo *)0x0);
    (this->fields)._.worldObjectParent = pMVar1;
    func_?(&(this->fields)._.worldObjectParent,pMVar1);
    if ((this->fields)._.worldObjectParent == (MVWorldObjectClient *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,StringLiteral___worldobjectParent_not_found_on,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
    }
  }
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevUpdateLineOfFireTime = fVar6;
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)pSVar4,(MethodInfo *)0x0);
  return (PickupItem *)0x0;
}


/* Single GetAbsolutProjectileSpeed(Single) */

float Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                (MVPickupOwner *this,float projectileSpeed,MethodInfo *method)

{
  pVVar1 = &(this->fields).lookDirection;
  uStack_2._0_4_ = pVVar1->x;
  uStack_2._4_4_ = pVVar1->y;
  fStack_3 = (this->fields).lookDirection.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_4,*pVVar1,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fStack_7 = fStack_3 - pVVar1->z;
  uStack_8 = CONCAT44(uStack_2._4_4_ - (float)uVar6,(float)uStack_2 - (float)uVar5);
  fStack_3 = fStack_7;
  fVar9 = (float10)func_?(&uStack_8,0);
  return (float)(fVar9 + (float10)projectileSpeed);
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
    pVVar3 = (Vector3 *)(**(code **)&x->klass[1]._0.byval_arg.attrs)();
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffec,*pVVar3,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    pVVar3 = (Vector3 *)&stack0xffffffec;
    puVar5 = &UNK_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (pVVar3,(this->fields).lookDirection,(MethodInfo *)0x0);
    uVar7 = pVVar6->y;
    lookDirection.x = 0.0;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffd4,*pVVar6,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar4 = (float)uVar9 * (float)puVar5 + (float)uVar8 * fVar4 + pVVar6->z * (float)pVVar3;
    __return_storage_ptr__ = (Vector3 *)uVar7;
    if (0.0 < fVar4) {
      _Stack00000020 = x->klass[1]._0.this_arg.data;
      pOStack10 = x;
      (**(code **)&x->klass[1]._0.byval_arg.attrs)();
      fVar11 = (float10)func_?();
      fVar4 = (float)(fVar11 * (float10)fVar4);
      *(ulonglong *)uVar7 =
           CONCAT44((float)&stack0xffffffe0 + (float)&stack0xffffffe0 * fVar4,
                    fVar4 * 3.312454e-29 + 3.312454e-29);
      *(float *)(uVar7 + 8) = fVar4 * 0.0 + 0.0;
      return (Vector3 *)uVar7;
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
    func_?(&TypeInfo__MVAvatar);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)0x0;
  pMVar2 = (this->fields)._.worldObjectParent;
  if (((pMVar2 != (MVWorldObjectClient *)0x0) &&
      ((TypeInfo__MVAvatar->_1).naturalAligment <= (pMVar2->klass->_1).naturalAligment)) &&
     ((MVAvatar__Class *)
      (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
      TypeInfo__MVAvatar)) {
    this_00 = (MVBody *)pMVar2[1].fields.PositionChanged;
    if ((this_00 == (MVBody *)0x0) ||
       (this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
       this_01 == (MethodCall *)0x0)) {
      func_?();
      pcVar3 = (code *)swi(3);
      pTVar1 = (Transform *)(*pcVar3)();
      return pTVar1;
    }
    pTVar1 = (Transform *)
             mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                       (this_01,8,(MethodInfo *)0x0);
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
    pVVar2 = MainCameraManager::MainCameraManager_get_FireDirection
                        ((Vector3 *)&stack0xffffffe4,pMVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      pVVar2 = MainCameraManager::MainCameraManager_get_FireOrigin
                          ((Vector3 *)&stack0xffffffd8,pMVar1,(MethodInfo *)0x0);
      method_00 = pVVar2->x;
      fVar6 = pVVar2->z;
      value.y = (float)uVar4;
      value.x = (float)uVar3;
      value.z = fVar5;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd8,value,(MethodInfo *)method_00);
      uVar7._4_4_ = (float)this;
      uVar7._0_4_ = (float)&stack0xffffffd8;
      pVVar2 = MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                          ((Vector3 *)&stack0xffffffd8,this,*pVVar2,(MethodInfo *)0x0);
      fVar8 = pVVar2->x;
      fVar9 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields).lookOrigin.x = (float)uVar7;
      (this->fields).lookOrigin.y = SUB84(uVar7,4);
      (this->fields).lookDirection.x = fVar8;
      (this->fields).lookDirection.y = fVar9;
      (this->fields).lookOrigin.z = fVar6;
      pPVar10 = (this->fields).currentItem;
      (this->fields).lookDirection.z = fVar5;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pPVar10,(MethodInfo *)0x0);
      if (bVar11 == 0) {
code_?:
        inputFire = 0;
      }
      else {
        pPVar10 = (this->fields).currentItem;
        if (pPVar10 == (PickupItem *)0x0) goto code_?;
        cVar12 = (*(code *)(pPVar10->klass->vtable).CanFire.method)();
        if (cVar12 == '\0') goto code_?;
      }
      pOVar13 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)&UNK_?,(MethodInfo *)0x0);
      if (pOVar13 != (Object *)0x0) {
        if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar14 = (bool *)func_?();
        if (*pbVar14 != inputFire) {
          pOVar13 = (Object *)func_?();
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    ((MVRuntimeDataVariable *)&UNK_?,pOVar13,(MethodInfo *)0x0);
        }
        if ((inputFire == 0) ||
           (fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0),
           fVar5 - (this->fields).prevUpdateLineOfFireTime <= _UNK_?)) {
          return;
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar15 = (this->fields)._.worldObjectParent;
        if ((pMVar15 != (MVWorldObjectClient *)0x0) &&
           (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateLineOfFire
                    (this_00,(pMVar15->fields)._.id,(this->fields).lookDirection,
                     (this->fields).lookOrigin,(MethodInfo *)0x0);
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).prevUpdateLineOfFireTime = fVar5;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
      (*(code *)(pPVar2->klass->vtable).TriggerEnd.method)(pPVar2);
      return;
    }
  }
  else {
    pMVar4 = (this->fields)._.worldObjectParent;
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (pPVar2 = (this->fields).currentItem, pPVar2 != (PickupItem *)0x0)) {
      (*(code *)(pPVar2->klass->vtable).TriggerBegin.method)(pPVar2,(pMVar4->fields)._.id);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)unaff_ESI,(Object *)this,
               MethodInfo__MVPickupOwner___Init_b__39_0_System__Object_,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar1,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      (currentItemRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      this_00 = &(currentItemRuntimeVariable->fields).OnChange;
      func_?();
      newState = (Dictionary_2_System_Object_System_Object_ *)
                 MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                           (currentItemRuntimeVariable,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if ((newState != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (((newState->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (newState->klass->_1).typeHierarchy
           [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      MVPickupOwner_UpdateCurrentItem((MVPickupOwner *)this_00,newState,(MethodInfo *)0x0);
      if (isFiringRuntimeVariable == (MVRuntimeDataVariable *)0x0) goto code_?;
      pMVar1 = (isFiringRuntimeVariable->fields).OnChange;
      this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_01,(Object *)this_00,MethodInfo__MVPickupOwner___Init_b__39_1_System__Object_,
                 (MethodInfo *)0x0);
      pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isFiringRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        func_?();
        return;
      }
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar1;
      }
      unaff_ESI = pDVar3;
      if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isFiringRuntimeVariable->fields).OnChange = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar1->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar1;
        }
        if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          func_?();
          return;
        }
      }
    }
    else {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pDVar2->_0).image ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        (currentItemRuntimeVariable->fields).OnChange =
             (MVRuntimeDataVariable_OnChangeDelegate *)pDVar3;
        pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pDVar2->_0).image ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pDVar3 = pDVar2;
        }
        if (pDVar3 != (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
    }
  }
  func_?();
  newState = extraout_EDX;
code_?:
  func_?(newState,unaff_ESI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
            (*(code *)(this->klass->vtable).__unknown_1.method)();
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
    pVVar2 = MainCameraManager::MainCameraManager_get_FireDirection
                       ((Vector3 *)&stack0xffffffe8,pMVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      pVVar2 = MainCameraManager::MainCameraManager_get_FireOrigin
                         ((Vector3 *)&stack0xffffffdc,pMVar1,(MethodInfo *)0x0);
      method_00 = pVVar2->y;
      fVar6 = pVVar2->z;
      value.y = (float)uVar4;
      value.x = (float)uVar3;
      value.z = fVar5;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffdc,value,(MethodInfo *)method_00);
      pVVar2 = (Vector3 *)&stack0xffffffdc;
      puVar8 = &UNK_?;
      pVVar7 = MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                          (pVVar2,this,*pVVar7,(MethodInfo *)0x0);
      fVar9 = pVVar7->x;
      fVar10 = pVVar7->y;
      fVar5 = pVVar7->z;
      (this->fields).lookOrigin.x = (float)puVar8;
      (this->fields).lookOrigin.y = (float)pVVar2;
      (this->fields).lookOrigin.z = fVar6;
      (this->fields).lookDirection.x = fVar9;
      (this->fields).lookDirection.y = fVar10;
      (this->fields).lookDirection.z = fVar5;
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
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
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      (*(code *)(this->klass->vtable).__unknown_1.method)
                (this,(this->klass->vtable).get_IgnoreWOIDs.methodPtr);
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
    pOVar3 = (Object *)&UNK_?;
    func_?();
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_variantId,(Object **)&stack0xfffffff4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar1 == 0) {
      iVar4 = 0;
code_?:
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (newState,(Object *)StringLiteral_updateItemState,
                         (Object **)&stack0xfffffff0,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar1 == 0) {
        uVar5 = 0;
      }
      else {
        if (pOVar3 == (Object *)0x0) goto code_?;
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar6 = (uint *)func_?();
        uVar5 = *puVar6;
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pPVar7 = (this->fields).currentItem;
        if (pPVar7 == (PickupItem *)0x0) goto code_?;
        unaff_ESI = &UNK_?;
        puVar8 = (undefined *)(*(code *)(pPVar7->klass->vtable).__unknown.method)();
        if (unaff_ESI != puVar8) goto code_?;
        pPVar7 = (this->fields).currentItem;
        if (pPVar7 == (PickupItem *)0x0) goto code_?;
        if (iVar4 != (pPVar7->fields)._VariantID_k__BackingField) goto code_?;
        if ((uVar5 & 4) != 0) {
          func_?();
        }
      }
      else {
code_?:
        (*(code *)(this->klass->vtable).__unknown.method)(this,unaff_ESI);
      }
      pPVar7 = (this->fields).currentItem;
      if (pPVar7 != (PickupItem *)0x0) {
        cVar9 = (*(code *)(pPVar7->klass->vtable).get_CanHolster.method)();
        if (cVar9 != '\0') {
          if ((uVar5 & 1) != 0) {
            pPVar7 = (this->fields).currentItem;
            if (pPVar7 == (PickupItem *)0x0) goto code_?;
            if ((pPVar7->fields)._IsHolstered_k__BackingField == 0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pMVar10 = (this->fields)._.worldObjectParent;
              targetHolsterTransform = (Transform *)0x0;
              if (((pMVar10 != (MVWorldObjectClient *)0x0) &&
                  ((TypeInfo__MVAvatar->_1).naturalAligment <= (pMVar10->klass->_1).naturalAligment))
                 && ((MVAvatar__Class *)
                     (pMVar10->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1]
                     == TypeInfo__MVAvatar)) {
                this_00 = (MVBody *)pMVar10[1].fields.PositionChanged;
                if ((this_00 == (MVBody *)0x0) ||
                   (this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
                   this_01 == (MethodCall *)0x0)) goto code_?;
                targetHolsterTransform =
                     (Transform *)
                     mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::
                     MethodCall_GetArg(this_01,8,(MethodInfo *)0x0);
              }
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)targetHolsterTransform,(Object_1 *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1 != 0) {
                pPVar7 = (this->fields).currentItem;
                if (pPVar7 == (PickupItem *)0x0) goto code_?;
                PickupItem::PickupItem_HolsterPickup
                          (pPVar7,targetHolsterTransform,(MethodInfo *)0x0);
                if ((this->fields).OnHolsteredChanged != (Action_1_Boolean_ *)0x0) {
                  pAVar11 = (this->fields).OnHolsteredChanged;
                  (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code);
                }
              }
            }
          }
          if ((uVar5 & 2) != 0) {
            pPVar7 = (this->fields).currentItem;
            if (pPVar7 == (PickupItem *)0x0) goto code_?;
            if (((pPVar7->fields)._IsHolstered_k__BackingField != 0) &&
               (PickupItem::PickupItem_UnholsterPickup(pPVar7,(MethodInfo *)0x0),
               (this->fields).OnHolsteredChanged != (Action_1_Boolean_ *)0x0)) {
              (*(((this->fields).OnHolsteredChanged)->fields)._._.invoke_impl)();
            }
          }
        }
        pPVar7 = (this->fields).currentItem;
        if (pPVar7 != (PickupItem *)0x0) {
          (*(code *)(pPVar7->klass->vtable).OnStateChanged.method)(pPVar7);
          return;
        }
      }
      goto code_?;
    }
    if ((Object *)TVar2.m_Index == (Object *)0x0) goto code_?;
    if ((((Object *)TVar2.m_Index)->klass->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      pOVar3 = (Object *)&UNK_?;
      piVar12 = (int *)func_?();
      iVar4 = *piVar12;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
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
       naturalAligment <= (item->klass->_1).naturalAligment) &&
     ((Dictionary_2_System_Object_System_Object___Class *)
      (item->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment - 1] ==
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
        (*(code *)(pPVar5->klass->vtable).TriggerEnd.method)
                  (pPVar5,(pPVar5->klass->vtable).OnStateChanged.methodPtr);
        return;
      }
    }
    else {
      pMVar7 = (this->fields)._.worldObjectParent;
      if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
         (pPVar5 = (this->fields).currentItem, pPVar5 != (PickupItem *)0x0)) {
        (*(code *)(pPVar5->klass->vtable).TriggerBegin.method)
                  (pPVar5,(pMVar7->fields)._.id,(pPVar5->klass->vtable).TriggerEnd.methodPtr);
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs
          (MVPickupOwner *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
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
    method_00 = TypeInfo__MVWorldObjectClient____c__DisplayClass51_0;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    this_00 = (Object__Class *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>)
    ;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              ((HashSet_1_System_Int32_ *)this_00,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (value != (Object *)0x0) {
      value[1].klass = this_00;
      func_?();
      iVar2 = func_?();
      pMVar3 = 
      MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
      ;
      *(Il2CppMethodPointer *)(iVar2 + 8) =
           MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
           ->virtualMethodPointer;
      *(MethodInfo **)(iVar2 + 0x14) = pMVar3;
      *(Object **)(iVar2 + 0x10) = value;
      func_?(iVar2 + 0x10);
      uVar4 = pMVar3->parameters_count;
      *(int *)(iVar2 + 0x20) = iVar2;
      cVar5 = func_?(pMVar3);
      if (cVar5 == '\0') {
        if (uVar4 == 0) {
          if (*(char *)(iVar2 + 0x38) == '\0') {
            puVar6 = &UNK_?;
          }
          else {
            cVar5 = func_?();
            if (cVar5 == '\0') {
              cVar5 = func_?();
              if (cVar5 == '\0') {
                puVar6 = &UNK_?;
              }
              else {
                puVar6 = &UNK_?;
              }
            }
            else {
              cVar5 = func_?();
              puVar6 = &UNK_?;
              if (cVar5 == '\0') {
                puVar6 = &UNK_?;
              }
            }
          }
        }
        else {
          puVar6 = *(undefined **)(iVar2 + 8);
          *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x10);
        }
      }
      else if (uVar4 == 1) {
        puVar6 = &UNK_?;
      }
      else {
        puVar6 = *(undefined **)(iVar2 + 8);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x10);
      }
      *(undefined **)(iVar2 + 0xc) = puVar6;
      *(undefined **)(iVar2 + 0x1c) = &UNK_?;
      (*(code *)(pMVar1->klass->vtable).TraverseRecursiveTail.method)();
      return (HashSet_1_System_Int32_ *)(pMVar1->fields)._.id;
    }
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pHVar9 = (HashSet_1_System_Int32_ *)(*pcVar8)();
  return pHVar9;
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
      bVar2 = (*(code *)(pPVar1->klass->vtable).get_ActivateGunModeOnEquip.method)
                        (pPVar1,(pPVar1->klass->vtable).get_CanHolster.methodPtr);
      return bVar2;
    }
  }
  return 0;
}


/* Vector3 get_LookDirection() */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_LookDirection
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,(this->fields).lookDirection,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean get_PickupItemIsInHand() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_PickupItemIsInHand
               (MVPickupOwner *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
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
  pIStack_1 = (pPStack_2->klass->vtable).CanFire.methodPtr;
  iVar7 = (*(code *)(pPStack_2->klass->vtable).__unknown.method)();
  return iVar7 != 5;
}

