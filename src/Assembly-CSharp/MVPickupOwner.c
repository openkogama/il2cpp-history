
/* Void Awake() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Awake(MVPickupOwner *this,MethodInfo *method)

{
  MVComponent::MVComponent_Awake((MVComponent *)this,(MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevUpdateLineOfFireTime = fVar1;
  return;
}


/* Void ChangeCurrentItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_ChangeCurrentItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  this_00 = newState;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__Common__AvatarItemType);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&StringLiteral_variantId);
      func_?(&StringLiteral_type);
      cRam_? = '\x01';
    }
    newState = (Dictionary_2_System_Object_System_Object_ *)0x0;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
      func_?();
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)StringLiteral_variantId,(Object **)&newState,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar1 == 0) {
        iVar3 = 0;
        this = unaff_EBX;
code_?:
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        iVar4 = 0;
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
code_?:
          MVPickupOwner_CreateAndEquipNewItem(this,this_00,(MethodInfo *)0x0);
          return;
        }
        pPVar5 = (this->fields).currentItem;
        if (pPVar5 != (PickupItem *)0x0) {
          iVar6 = (*(code *)(pPVar5->klass->vtable).__unknown.method)();
          if (iVar4 != iVar6) goto code_?;
          pPVar5 = (this->fields).currentItem;
          if (pPVar5 != (PickupItem *)0x0) {
            if (iVar3 != (pPVar5->fields)._VariantID_k__BackingField) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?(&StringLiteral_updateItemState);
              cRam_? = '\x01';
            }
            newState = (Dictionary_2_System_Object_System_Object_ *)0x0;
            bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              (this_00,(Object *)StringLiteral_updateItemState,(Object **)&newState,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                              );
            if (bVar1 == 0) {
              state = UpdateItemState__Enum_None;
            }
            else {
              if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              if ((newState->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
                 ) goto code_?;
              pUVar7 = (UpdateItemState__Enum *)func_?();
              state = *pUVar7;
            }
            pPVar5 = (this->fields).currentItem;
            if (pPVar5 != (PickupItem *)0x0) {
              (*(code *)(pPVar5->klass->vtable).OnStateChanged.method)(pPVar5);
              MVPickupOwner_CheckItemHolstering(this,state,(MethodInfo *)0x0);
              if ((state & UpdateItemState__Enum_ResetAmmo) == UpdateItemState__Enum_None) {
                return;
              }
              pPVar5 = (this->fields).currentItem;
              if (pPVar5 != (PickupItem *)0x0) {
                (*(code *)(pPVar5->klass->vtable).ResetAmmo.method)();
                return;
              }
            }
          }
        }
      }
      else {
        if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        if ((newState->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          this = (MVPickupOwner *)newState;
          piVar8 = (int *)func_?();
          iVar3 = *piVar8;
          goto code_?;
        }
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void CheckItemHolstering(UpdateItemState) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CheckItemHolstering
               (MVPickupOwner *this,UpdateItemState__Enum state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
  if (pPVar1 != (PickupItem *)0x0) {
    cVar2 = (*(code *)(pPVar1->klass->vtable).get_CanHolster.method)
                      (pPVar1,(pPVar1->klass->vtable).get_HasUnlimitedAmmo.methodPtr);
    if (cVar2 != '\0') {
      if ((state & UpdateItemState__Enum_Holster) != UpdateItemState__Enum_None) {
        pPVar1 = (this->fields).currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVAvatar);
            cRam_? = '\x01';
          }
          pMVar3 = (this->fields)._.worldObjectParent;
          if (((pMVar3 == (MVWorldObjectClient *)0x0) ||
              ((pMVar3->klass->_1).naturalAligment < (TypeInfo__MVAvatar->_1).naturalAligment)) ||
             ((MVAvatar__Class *)
              (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] !=
              TypeInfo__MVAvatar)) {
            targetHolsterTransform = (Transform *)0x0;
          }
          else {
            this_00 = (MVBody *)pMVar3[1].fields.PositionChanged;
            if ((this_00 == (MVBody *)0x0) ||
               (this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
               this_01 == (MethodCall *)0x0)) goto code_?;
            targetHolsterTransform =
                 (Transform *)
                 mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                           (this_01,8,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)targetHolsterTransform,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pPVar1 = (this->fields).currentItem;
            if (pPVar1 == (PickupItem *)0x0) goto code_?;
            PickupItem::PickupItem_HolsterPickup(pPVar1,targetHolsterTransform,(MethodInfo *)0x0);
            pAVar5 = (this->fields).OnHolsteredChanged;
            if (pAVar5 != (Action_1_Boolean_ *)0x0) {
              (*(pAVar5->fields)._._.invoke_impl)
                        ((pAVar5->fields)._._.method_code,1,(pAVar5->fields)._._.method);
            }
          }
        }
      }
      if ((state & UpdateItemState__Enum_Unholster) != UpdateItemState__Enum_None) {
        pPVar1 = (this->fields).currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        if ((pPVar1->fields)._IsHolstered_k__BackingField != 0) {
          PickupItem::PickupItem_UnholsterPickup(pPVar1,(MethodInfo *)0x0);
          pAVar5 = (this->fields).OnHolsteredChanged;
          if (pAVar5 != (Action_1_Boolean_ *)0x0) {
            (*(pAVar5->fields)._._.invoke_impl)
                      ((pAVar5->fields)._._.method_code,0,(pAVar5->fields)._._.method);
          }
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CheckResetAmmo(UpdateItemState) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CheckResetAmmo
               (MVPickupOwner *this,UpdateItemState__Enum state,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if ((state & UpdateItemState__Enum_ResetAmmo) != UpdateItemState__Enum_None) {
    pPStack_2 = (this->fields).currentItem;
    if (pPStack_2 == (PickupItem *)0x0) {
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIStack_1 = (pPStack_2->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr;
    (*(code *)(pPStack_2->klass->vtable).ResetAmmo.method)();
  }
  return;
}


/* Void CreateAndEquipNewItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CreateAndEquipNewItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                   );
    func_?(&
                    FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pOVar1 = extraout_ECX;
    pIVar2 = extraout_EDX;
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
    pAVar5 = (AvatarItemType__Enum *)func_?(TVar3.m_Index);
    type = *pAVar5;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_variantId,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar6 == 0) {
      variantId = 0;
code_?:
      pPVar7 = MVPickupOwner_CreateAvatarItem(this,type,variantId,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
        pPVar7 = MVPickupOwner_CreateAvatarItem
                           (this,AvatarItemType__Enum_Hand,variantId,(MethodInfo *)0x0);
      }
      if (pPVar7 != (PickupItem *)0x0) {
        (pPVar7->fields).owner = this;
        func_?(&(pPVar7->fields).owner,this);
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (pGVar8,
                     FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                    );
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar7,(MethodInfo *)0x0);
          if (pGVar8 != (GameObject *)0x0) {
            this_00 = (FadeableAvatarObject *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar8,
                                 FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                                );
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if (this_00 != (FadeableAvatarObject *)0x0) {
              FadeableAvatarObject::FadeableAvatarObject_Initialize
                        (this_00,pGVar8,(MethodInfo *)0x0);
              x = (this->fields).currentItem;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)x,(Object_1 *)pPVar7,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                (*(code *)(this->klass->vtable).__unknown_1.method)();
              }
              (this->fields).currentItem = pPVar7;
              func_?();
              pPVar7 = (this->fields).currentItem;
              if (pPVar7 != (PickupItem *)0x0) {
                (*(code *)(pPVar7->klass->vtable).OnStateChanged.method)
                          (pPVar7,&(this->fields).currentItem,
                           (pPVar7->klass->vtable).OnEquip.methodPtr);
                (*(code *)(this->klass->vtable).__unknown.method)
                          (this,(this->klass->vtable).__unknown_1.methodPtr);
                pMVar9 = (this->fields).onEquipItem;
                if (pMVar9 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                  (*(pMVar9->fields)._._.invoke_impl)
                            ((pMVar9->fields)._._.method_code,(this->fields).currentItem,
                             (pMVar9->fields)._._.method);
                }
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pOVar1 == (Object *)0x0) goto code_?;
    pIVar2 = TypeInfo__System__Int32;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar10 = (int32_t *)func_?(pOVar1);
      variantId = *piVar10;
      goto code_?;
    }
  }
  uVar4 = func_?(pOVar1,pIVar2);
code_?:
  func_?(uVar4);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = PickupItem::PickupItem_InstantiatePickupItem(type,variantId,(MethodInfo *)0x0);
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
                    fVar4 * 3.326879e-29 + 3.326879e-29);
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
  pMVar1 = (this->fields)._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    if (((TypeInfo__MVAvatar->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVAvatar__Class *)
        (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
        TypeInfo__MVAvatar)) {
      this_00 = (MVBody *)pMVar1[1].fields.PositionChanged;
      if (this_00 != (MVBody *)0x0) {
        this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0);
        if (this_01 != (MethodCall *)0x0) {
          pTVar2 = (Transform *)
                   mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                             (this_01,8,(MethodInfo *)0x0);
          return pTVar2;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      pTVar2 = (Transform *)(*pcVar3)();
      return pTVar2;
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
    func_?(&MethodInfo__MVPickupOwner___Init_b__41_0_System__Object_);
    func_?(&MethodInfo__MVPickupOwner___Init_b__41_1_System__Object_);
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
               MethodInfo__MVPickupOwner___Init_b__41_0_System__Object_,(MethodInfo *)0x0);
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
      MVPickupOwner_ChangeCurrentItem((MVPickupOwner *)this_00,newState,(MethodInfo *)0x0);
      if (isFiringRuntimeVariable == (MVRuntimeDataVariable *)0x0) goto code_?;
      pMVar1 = (isFiringRuntimeVariable->fields).OnChange;
      this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_01,(Object *)this_00,MethodInfo__MVPickupOwner___Init_b__41_1_System__Object_,
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


/* Boolean IsNewItem(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_IsNewItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pIStack_1 = (Int32__Class *)0x0;
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pIStack_1 = extraout_ECX;
    pIVar2 = extraout_EDX;
  }
  else {
    pIStack_1 = (Int32__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                           (Object *)StringLiteral_type,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uVar3 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,pIStack_1);
    if (pIStack_1 == (Int32__Class *)0x0) goto code_?;
    if (*(Il2CppClass **)(*(int *)pIStack_1 + 0x20) !=
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
    piVar4 = (int *)func_?();
    iVar5 = *piVar4;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_variantId,(Object **)&pIStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar6 == 0) {
      iVar7 = 0;
code_?:
      pPVar8 = (this->fields).currentItem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pPVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return 1;
      }
      pPVar8 = (this->fields).currentItem;
      if (pPVar8 != (PickupItem *)0x0) {
        pIStack_1 = (Int32__Class *)(pPVar8->klass->vtable).CanFire.methodPtr;
        iVar9 = (*(code *)(pPVar8->klass->vtable).__unknown.method)(pPVar8);
        if (iVar5 != iVar9) {
          return 1;
        }
        pPVar8 = (this->fields).currentItem;
        if (pPVar8 != (PickupItem *)0x0) {
          return iVar7 != (pPVar8->fields)._VariantID_k__BackingField;
        }
      }
      goto code_?;
    }
    if (pIStack_1 == (Int32__Class *)0x0) goto code_?;
    pIVar2 = TypeInfo__System__Int32;
    if ((Il2CppClass *)((pIStack_1->_0).image)->codeGenModule ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int *)func_?();
      iVar7 = *piVar4;
      goto code_?;
    }
  }
  pIVar10 = pIStack_1;
  pIStack_1 = pIVar2;
  uVar3 = func_?(pIVar10);
code_?:
  pIStack_1 = (Int32__Class *)((ulonglong)uVar3 >> 0x20);
  func_?((int)uVar3);
  pcVar11 = (code *)swi(3);
  bVar6 = (*pcVar11)();
  return bVar6;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_updateItemState);
    cRam_? = '\x01';
  }
  pIStack_1 = (Int32__Class *)0x0;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_updateItemState,(Object **)&pIStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 == 0) {
      state = UpdateItemState__Enum_None;
    }
    else {
      if (pIStack_1 == (Int32__Class *)0x0) goto code_?;
      pIVar3 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((pIStack_1->_0).image)->codeGenModule !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      pUVar4 = (UpdateItemState__Enum *)func_?();
      state = *pUVar4;
    }
    pPVar5 = (this->fields).currentItem;
    if (pPVar5 != (PickupItem *)0x0) {
      pIStack_1 = (Int32__Class *)(pPVar5->klass->vtable).OnEquip.methodPtr;
      (*(code *)(pPVar5->klass->vtable).OnStateChanged.method)(pPVar5,newState);
      MVPickupOwner_CheckItemHolstering(this,state,(MethodInfo *)0x0);
      if ((state & UpdateItemState__Enum_ResetAmmo) == UpdateItemState__Enum_None) {
        return;
      }
      pPVar5 = (this->fields).currentItem;
      if (pPVar5 != (PickupItem *)0x0) {
        pIStack_1 = (Int32__Class *)(pPVar5->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr;
        (*(code *)(pPVar5->klass->vtable).ResetAmmo.method)(pPVar5);
        return;
      }
    }
  }
code_?:
  func_?();
  pIStack_1 = extraout_ECX;
  pIVar3 = extraout_EDX;
code_?:
  pIVar6 = pIStack_1;
  pIStack_1 = pIVar3;
  func_?(pIVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Init>b__41_0(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__41_0
               (MVPickupOwner *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if (item == (Object *)0x0) {
    MVPickupOwner_ChangeCurrentItem
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
    MVPickupOwner_ChangeCurrentItem
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


/* Void <Init>b__41_1(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__41_1
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


/* Boolean get_HasGunWithAmmo() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_HasGunWithAmmo
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
      bVar2 = (*(code *)(pPVar1->klass->vtable).get_GunMode.method)
                        (pPVar1,(pPVar1->klass->vtable).get_IsHandEquippable.methodPtr);
      return bVar2;
    }
  }
  return 0;
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
      func_?();
      func_?();
      func_?(&
                      MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                     );
      func_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass51_0);
      cRam_? = '\x01';
    }
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    pHVar2 = (HashSet_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (pHVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)pHVar2;
      func_?();
      this_01 = (UnityAction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__MVWorldObjectClient____c__DisplayClass51_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      (*(code *)(pMVar1->klass->vtable).TraverseRecursiveTail.method)(pMVar1,this_01);
      return (HashSet_1_System_Int32_ *)(this_00->fields)._._defaultValue_k__BackingField;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pHVar2 = (HashSet_1_System_Int32_ *)(*pcVar4)();
  return pHVar2;
}


/* Boolean get_InFirstPerson() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_InFirstPerson
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
      bVar2 = (*(code *)(pPVar1->klass->vtable).get_FirstPerson.method)
                        (pPVar1,(pPVar1->klass->vtable).get_GunMode.methodPtr);
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

