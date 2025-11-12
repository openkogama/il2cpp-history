
/* Void Awake() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Awake(MVPickupOwner *this,MethodInfo *method)

{
  if ((this->fields)._.findWorldObjectParent != 0) {
    MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)this,(MethodInfo *)0x0);
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).prevUpdateLineOfFireTime = fVar3;
  return;
}


/* Void ChangeCurrentItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_ChangeCurrentItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)newState,(Object *)StringLiteral_type,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_1.methodPtr)(this,(this->klass->vtable).__unknown_1.method);
    return;
  }
  bVar3 = MVPickupOwner_IsNewItem(this,newState,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_updateItemState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    state = UpdateItemState__Enum_None;
    pOStackX_10 = (Object *)0x0;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_updateItemState,&pOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if (pOStackX_10 == (Object *)0x0) goto code_?;
      if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
      {
        FUN_?(pOStackX_10);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      state = *(UpdateItemState__Enum *)&pOStackX_10[1].klass;
    }
    pPVar4 = (this->fields).currentItem;
    if (pPVar4 == (PickupItem *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(pPVar4->klass->vtable).OnStateChanged.methodPtr)(pPVar4,newState);
    MVPickupOwner_CheckItemHolstering(this,state,(MethodInfo *)0x0);
    if ((state & UpdateItemState__Enum_ResetAmmo) != UpdateItemState__Enum_None) {
      pPVar4 = (this->fields).currentItem;
      if (pPVar4 == (PickupItem *)0x0) goto code_?;
      (*(pPVar4->klass->vtable).ResetAmmo.methodPtr)
                (pPVar4,(pPVar4->klass->vtable).ResetAmmo.method);
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType,newState,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_10 = (Object *)0x0;
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar5 == (Object *)0x0)) goto code_?;
  if ((pOVar5->klass->_0).element_class != (TypeInfo__MV__Common__AvatarItemType->_0).element_class)
  {
    FUN_?(pOVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  type = *(AvatarItemType__Enum *)&pOVar5[1].klass;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (newState,(Object *)StringLiteral_variantId,&pOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  iVar2 = 0;
  if (bVar3 != 0) {
    if (pOStackX_10 == (Object *)0x0) goto code_?;
    if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_10);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = *(int32_t *)&pOStackX_10[1].klass;
  }
  pPVar4 = MVPickupOwner_CreateAvatarItem(this,type,iVar2,(MethodInfo *)0x0);
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
  if (pPVar4 == (PickupItem *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    pPVar4 = MVPickupOwner_CreateAvatarItem(this,AvatarItemType__Enum_Hand,iVar2,(MethodInfo *)0x0)
    ;
    if (pPVar4 == (PickupItem *)0x0) goto code_?;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  bVar6 = iRam_? != 0;
  (pPVar4->fields).owner = this;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(pPVar4->fields).owner >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar11 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
              (pGVar11,
               FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__);
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar4,(MethodInfo *)0x0);
    if (pGVar11 != (GameObject *)0x0) {
      this_00 = (FadeableAvatarObject *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar11,
                           FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                          );
      pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (FadeableAvatarObject *)0x0) {
        bVar6 = iRam_? != 0;
        (this_00->fields).avatarObject = pGVar11;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this_00->fields).avatarObject >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
                  (this_00,(MethodInfo *)0x0);
        pPVar12 = (this->fields).currentItem;
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
        if (pPVar4 != (PickupItem *)0x0 || pPVar12 != (PickupItem *)0x0) {
          if (pPVar12 == (PickupItem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar6 = (pPVar4->fields)._._._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar6 = pPVar12 == pPVar4;
          }
          if (!bVar6) {
            (*(this->klass->vtable).__unknown_1.methodPtr)
                      (this,(this->klass->vtable).__unknown_1.method);
          }
        }
        bVar6 = iRam_? != 0;
        (this->fields).currentItem = pPVar4;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).currentItem >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pPVar4 = (this->fields).currentItem;
        if (pPVar4 != (PickupItem *)0x0) {
          (*(pPVar4->klass->vtable).OnStateChanged.methodPtr)
                    (pPVar4,newState,(pPVar4->klass->vtable).OnStateChanged.method);
          (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
          pMVar13 = (this->fields).onEquipItem;
          if (pMVar13 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            (*(pMVar13->fields)._._.invoke_impl)
                      ((pMVar13->fields)._._.method_code,(this->fields).currentItem,
                       (pMVar13->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CheckItemHolstering(UpdateItemState) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CheckItemHolstering
               (MVPickupOwner *this,UpdateItemState__Enum state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
  if (pPVar1 == (PickupItem *)0x0) goto code_?;
  cVar2 = (*(pPVar1->klass->vtable).get_CanHolster.methodPtr)();
  if (cVar2 == '\0') {
    return;
  }
  if ((state & UpdateItemState__Enum_Holster) != UpdateItemState__Enum_None) {
    pPVar1 = (this->fields).currentItem;
    if (pPVar1 == (PickupItem *)0x0) goto code_?;
    if ((pPVar1->fields)._IsHolstered_k__BackingField != 0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVAvatar);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = (this->fields)._.worldObjectParent;
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
code_?:
      targetHolsterTransform = (Transform *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatar__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVAvatar)) goto code_?;
      pUVar5 = pMVar3[1].fields.ScaleChanged;
      if ((((pUVar5 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) ||
           (pDVar6 = pUVar5[2].fields._.delegates, pDVar6 == (Delegate__Array *)0x0)) ||
          (pDVar7 = pDVar6->vector[5], pDVar7 == (Delegate *)0x0)) ||
         (pvVar8 = (pDVar7->fields).method, pvVar8 == (void *)0x0)) goto code_?;
      if (*(uint *)((longlong)pvVar8 + 0x18) < 9) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      targetHolsterTransform = *(Transform **)((longlong)pvVar8 + 0x60);
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
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (targetHolsterTransform != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((targetHolsterTransform->fields)._._.m_CachedPtr != (void *)0x0) {
        pPVar1 = (this->fields).currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        PickupItem::PickupItem_HolsterPickup(pPVar1,targetHolsterTransform,(MethodInfo *)0x0);
        pAVar10 = (this->fields).OnHolsteredChanged;
        if (pAVar10 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,1,(pAVar10->fields)._._.method);
        }
      }
    }
  }
code_?:
  if ((state & UpdateItemState__Enum_Unholster) != UpdateItemState__Enum_None) {
    pPVar1 = (this->fields).currentItem;
    if (pPVar1 == (PickupItem *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((pPVar1->fields)._IsHolstered_k__BackingField != 0) {
      PickupItem::PickupItem_RevertToOriginalTransform(pPVar1,(MethodInfo *)0x0);
      pPVar11 = pPVar1->klass;
      (pPVar1->fields)._IsHolstered_k__BackingField = 0;
      (*(pPVar11->vtable).OnUnholstered.methodPtr)(pPVar1,(pPVar11->vtable).OnUnholstered.method);
      pAVar10 = (this->fields).OnHolsteredChanged;
      if (pAVar10 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,0,(pAVar10->fields)._._.method);
      }
    }
  }
  return;
}


/* Void CheckResetAmmo(UpdateItemState) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CheckResetAmmo
               (MVPickupOwner *this,UpdateItemState__Enum state,MethodInfo *method)

{
  if ((state & UpdateItemState__Enum_ResetAmmo) == UpdateItemState__Enum_None) {
    return;
  }
  pPVar1 = (this->fields).currentItem;
  if (pPVar1 != (PickupItem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar1->klass->vtable).ResetAmmo.methodPtr)(pPVar1,(pPVar1->klass->vtable).ResetAmmo.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateAndEquipNewItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CreateAndEquipNewItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_10 = (Object *)0x0;
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 == (Object *)0x0)) goto code_?;
  if ((pOVar1->klass->_0).element_class != (TypeInfo__MV__Common__AvatarItemType->_0).element_class)
  {
    FUN_?(pOVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  type = *(AvatarItemType__Enum *)&pOVar1[1].klass;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (newState,(Object *)StringLiteral_variantId,&pOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  variantId = 0;
  if (bVar3 != 0) {
    if (pOStackX_10 == (Object *)0x0) goto code_?;
    if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_10);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    variantId = *(int32_t *)&pOStackX_10[1].klass;
  }
  pPVar4 = MVPickupOwner_CreateAvatarItem(this,type,variantId,(MethodInfo *)0x0);
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
  if (pPVar4 == (PickupItem *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    pPVar4 = MVPickupOwner_CreateAvatarItem
                       (this,AvatarItemType__Enum_Hand,variantId,(MethodInfo *)0x0);
    if (pPVar4 == (PickupItem *)0x0) goto code_?;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  bVar5 = iRam_? != 0;
  (pPVar4->fields).owner = this;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pPVar4->fields).owner >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar10 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
              (pGVar10,
               FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__);
    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar4,(MethodInfo *)0x0);
    if (pGVar10 != (GameObject *)0x0) {
      this_00 = (FadeableAvatarObject *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar10,
                           FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                          );
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (FadeableAvatarObject *)0x0) {
        bVar5 = iRam_? != 0;
        (this_00->fields).avatarObject = pGVar10;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this_00->fields).avatarObject >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
                  (this_00,(MethodInfo *)0x0);
        pPVar11 = (this->fields).currentItem;
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
        if (pPVar4 != (PickupItem *)0x0 || pPVar11 != (PickupItem *)0x0) {
          if (pPVar11 == (PickupItem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar5 = (pPVar4->fields)._._._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar5 = pPVar11 == pPVar4;
          }
          if (!bVar5) {
            (*(this->klass->vtable).__unknown_1.methodPtr)
                      (this,(this->klass->vtable).__unknown_1.method);
          }
        }
        bVar5 = iRam_? != 0;
        (this->fields).currentItem = pPVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).currentItem >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pPVar4 = (this->fields).currentItem;
        if (pPVar4 != (PickupItem *)0x0) {
          (*(pPVar4->klass->vtable).OnStateChanged.methodPtr)
                    (pPVar4,newState,(pPVar4->klass->vtable).OnStateChanged.method);
          (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
          pMVar12 = (this->fields).onEquipItem;
          if (pMVar12 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            (*(pMVar12->fields)._._.invoke_impl)
                      ((pMVar12->fields)._._.method_code,(this->fields).currentItem,
                       (pMVar12->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* PickupItem CreateAvatarItem(AvatarItemType, Int32) */

PickupItem *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_CreateAvatarItem
          (MVPickupOwner *this,AvatarItemType__Enum type,int32_t variantId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&PickupItem_MethodInfo__UnityEngine__GameObject__GetComponent<PickupItem>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___since_prefab_was_not_found);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cannot_equip_avatarItemType__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_to_equip_is_missing_the_Ava);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = PickupItem::PickupItem_InstantiatePickupItem(type,variantId,(MethodInfo *)0x0);
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
  if (this_00 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (PickupItem *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          PickupItem_MethodInfo__UnityEngine__GameObject__GetComponent<PickupItem>__
                         );
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
      if (pPVar1 != (PickupItem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
          (pPVar1->fields)._VariantID_k__BackingField = variantId;
          return pPVar1;
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Item_to_equip_is_missing_the_Ava,(MethodInfo *)0x0);
      return pPVar1;
    }
  }
  EStack_2.klass = (Enum__Class *)TypeInfo__MV__Common__AvatarItemType;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  AStack_3 = type;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Cannot_equip_avatarItemType__,pSVar4,
                      StringLiteral___since_prefab_was_not_found,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)pSVar4,(MethodInfo *)0x0);
  return (PickupItem *)0x0;
}


/* Single GetAbsolutProjectileSpeed(Single) */

float Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                (MVPickupOwner *this,float projectileSpeed,MethodInfo *method)

{
  fVar1 = (this->fields).lookDirection.z;
  uVar2 = (this->fields).lookDirection.x;
  uVar3 = (this->fields).lookDirection.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (aVStack_5,&(this->fields).lookDirection,method);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  aVStack_5[0].z = fVar1 - pVVar4->z;
  aVStack_5[0].y = (float)uVar3 - (float)uVar7;
  aVStack_5[0].x = (float)uVar2 - (float)uVar6;
  fVar1 = (float)FUN_?(aVStack_5);
  return fVar1 + projectileSpeed;
}


/* Vector3 GetLookDirectionWithAddedVelocityMagnitude(Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::
          MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,Vector3 *lookDirection,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
  pOVar1 = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetEnabledMonoBehaviourHighestInHierarchy
                     (gameObject,
                      MVRigidBody_MethodInfo__MVWorldObjectClientManager__GetEnabledMonoBehaviourHighestInHierarchy<MVRigidBody>_UnityEngine__GameObject_
                     );
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
  if (pOVar1 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar1[1].klass != (Object__Class *)0x0) {
      method_00 = *(MethodInfo **)&pOVar1->klass[1]._0.byval_arg.attrs;
      puVar2 = (undefined8 *)(*(code *)pOVar1->klass[1]._0.byval_arg.data)(&uStack_3,pOVar1);
      uStack_4 = *puVar2;
      fVar5 = *(float *)(puVar2 + 1);
      uStack_6 = uStack_4;
      fStack_7 = fVar5;
      fVar8 = (float)FUN_?(&uStack_6);
      fVar9 = _UNK_?;
      if (_UNK_? < fVar8) {
        fVar5 = fVar5 / fVar8;
        uStack_6 = CONCAT44(uStack_4._4_4_ / fVar8,(float)uStack_4 / fVar8);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_6._0_4_ = (pVVar10->zeroVector).x;
        uStack_6._4_4_ = (pVVar10->zeroVector).y;
        fVar5 = (pVVar10->zeroVector).z;
      }
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                         (aVStack_12,&(this->fields).lookDirection,method_00);
      uStack_4._0_4_ = pVVar11->x;
      uStack_4._4_4_ = pVVar11->y;
      fVar8 = pVVar11->z;
      fStack_13 = fVar8;
      uStack_3 = uStack_4;
      fVar14 = (float)FUN_?(&uStack_4);
      if (fVar9 < fVar14) {
        fVar8 = fVar8 / fVar14;
        uVar15 = CONCAT44(uStack_3._4_4_ / fVar14,(float)uStack_3 / fVar14);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar15._0_4_ = (pVVar10->zeroVector).x;
        uVar15._4_4_ = (pVVar10->zeroVector).y;
        fVar8 = (pVVar10->zeroVector).z;
      }
      uStack_4._0_4_ = (float)uVar15;
      uStack_4._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
      fVar5 = uStack_4._4_4_ * uStack_6._4_4_ + (float)uStack_4 * (float)uStack_6 +
               fVar8 * fVar5;
      if (0.0 < fVar5) {
        pOVar16 = pOVar1->klass;
        uVar17._0_2_ = pOVar16[1]._0.byval_arg.attrs;
        uVar17._2_1_ = pOVar16[1]._0.byval_arg.type;
        uVar17._3_5_ = *(undefined5 *)&pOVar16[1]._0.byval_arg.field_0xb;
        uStack_4 = uVar15;
        puVar2 = (undefined8 *)(*(code *)pOVar16[1]._0.byval_arg.data)(aVStack_12,pOVar1,uVar17);
        uVar18 = lookDirection->x;
        uVar19 = lookDirection->y;
        uStack_3 = *puVar2;
        uStack_20 = *(undefined4 *)(puVar2 + 1);
        fVar8 = (float)FUN_?(&uStack_3);
        fVar8 = fVar8 * fVar5;
        fVar5 = lookDirection->z;
        fVar9 = lookDirection->z;
        __return_storage_ptr__->x = (float)uVar18 * fVar8 + (float)uVar18;
        __return_storage_ptr__->y = (float)uVar19 * fVar8 + (float)uVar19;
        __return_storage_ptr__->z = fVar5 * fVar8 + fVar9;
        return __return_storage_ptr__;
      }
    }
  }
  fVar9 = lookDirection->y;
  fVar5 = lookDirection->z;
  __return_storage_ptr__->x = lookDirection->x;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Transform GetTargetHolsterTransform() */

Transform *
Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_GetTargetHolsterTransform
          (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVAvatar__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatar)) {
      pUVar3 = pMVar1[1].fields.ScaleChanged;
      if ((((pUVar3 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) &&
           (pDVar4 = pUVar3[2].fields._.delegates, pDVar4 != (Delegate__Array *)0x0)) &&
          (pDVar5 = pDVar4->vector[5], pDVar5 != (Delegate *)0x0)) &&
         (pvVar6 = (pDVar5->fields).method, pvVar6 != (void *)0x0)) {
        if (8 < *(uint *)((longlong)pvVar6 + 0x18)) {
          return *(Transform **)((longlong)pvVar6 + 0x60);
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        pTVar8 = (Transform *)(*pcVar7)();
        return pTVar8;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      pTVar8 = (Transform *)(*pcVar7)();
      return pTVar8;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVPickupOwner_SetLineOfFireLocal(this,(MethodInfo *)0x0);
  pPVar1 = (this->fields).currentItem;
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
  if (pPVar1 == (PickupItem *)0x0) {
code_?:
    inputFire = 0;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pPVar1 = (this->fields).currentItem;
    if (pPVar1 == (PickupItem *)0x0) goto code_?;
    cVar2 = (*(pPVar1->klass->vtable).CanFire.methodPtr)();
    if (cVar2 == '\0') goto code_?;
  }
  if ((isFiringRuntimeVariable != (MVRuntimeDataVariable *)0x0) &&
     (pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((isFiringRuntimeVariable->fields).value,(MethodInfo *)0x0),
     pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(bool *)&pOVar3[1].klass != inputFire) {
      abStackX_8[0] = inputFire;
      pOVar3 = (Object *)FUN_?(lRam_?,abStackX_8);
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (isFiringRuntimeVariable,pOVar3,(MethodInfo *)0x0);
    }
    if (inputFire != 0) {
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcRam_?)();
      if (_UNK_? < fVar6 - (this->fields).prevUpdateLineOfFireTime) {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar7 = (this->fields)._.worldObjectParent;
        if ((pMVar7 == (MVWorldObjectClient *)0x0) ||
           (this_00 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
        VStack_8.x = (this->fields).lookOrigin.x;
        VStack_8.y = (this->fields).lookOrigin.y;
        VStack_8.z = (this->fields).lookOrigin.z;
        VStack_9.z = (this->fields).lookDirection.z;
        VStack_9.x = (this->fields).lookDirection.x;
        VStack_9.y = (this->fields).lookDirection.y;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateLineOfFire
                  (this_00,(pMVar7->fields)._.id,&VStack_9,&VStack_8,(MethodInfo *)0x0);
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar6 = (float)(*pcRam_?)();
        (this->fields).prevUpdateLineOfFireTime = fVar6;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleFiring(Boolean) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_HandleFiring
               (MVPickupOwner *this,bool isFiring,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).onHandleFiring != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    pMVar1 = (this->fields).onHandleFiring;
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,isFiring,(pMVar1->fields)._._.method);
  }
  pPVar2 = (this->fields).currentItem;
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
  if (pPVar2 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar2 = (this->fields).currentItem;
      if (isFiring == 0) {
        if (pPVar2 != (PickupItem *)0x0) {
          (*(pPVar2->klass->vtable).TriggerEnd.methodPtr)
                    (pPVar2,(pPVar2->klass->vtable).TriggerEnd.method);
          return;
        }
      }
      else {
        pMVar3 = (this->fields)._.worldObjectParent;
        if ((pMVar3 != (MVWorldObjectClient *)0x0) && (pPVar2 != (PickupItem *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar2->klass->vtable).TriggerBegin.methodPtr)
                    (pPVar2,(ulonglong)(uint)(pMVar3->fields)._.id,
                     (pPVar2->klass->vtable).TriggerBegin.method);
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_Init
               (MVPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupOwner___Init_b__41_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupOwner___Init_b__41_1_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (currentItemRuntimeVariable != (MVRuntimeDataVariable *)0x0) {
    pMVar1 = (currentItemRuntimeVariable->fields).OnChange;
    pUVar2 = (UnityAction_1_System_Object_ *)
             FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar2,(Object *)this,MethodInfo__MVPickupOwner___Init_b__41_0_System__Object_,
               (MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pMVar1 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (currentItemRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar4 = pMVar1;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (currentItemRuntimeVariable->fields).OnChange = pMVar4;
      pMVar4 = pMVar1;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(currentItemRuntimeVariable->fields).OnChange >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((currentItemRuntimeVariable->fields).value,(MethodInfo *)0x0);
    pMVar3 = pMVar1;
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pMVar4->klass->_1).naturalAligment < bVar11) ||
         (pMVar3 = pMVar4,
         (Dictionary_2_System_Object_System_Object___Class *)
         (pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pMVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    MVPickupOwner_ChangeCurrentItem
              (this,(Dictionary_2_System_Object_System_Object_ *)pMVar3,(MethodInfo *)0x0);
    if (isFiringRuntimeVariable != (MVRuntimeDataVariable *)0x0) {
      pMVar3 = (isFiringRuntimeVariable->fields).OnChange;
      pUVar2 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar2,(Object *)this,MethodInfo__MVPickupOwner___Init_b__41_1_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)pUVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (isFiringRuntimeVariable->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar4 = pMVar1;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (isFiringRuntimeVariable->fields).OnChange = pMVar4;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar1 = pMVar3;
        }
        if (pMVar1 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(isFiringRuntimeVariable->fields).OnChange >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pOStackX_10 = (Object *)0x0;
  if ((newState == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pOVar2->klass->_0).element_class != (TypeInfo__MV__Common__AvatarItemType->_0).element_class)
  {
    FUN_?(pOVar2,TypeInfo__MV__Common__AvatarItemType);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  iVar5 = *(int *)&pOVar2[1].klass;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (newState,(Object *)StringLiteral_variantId,&pOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar4 != 0) {
    if (pOStackX_10 == (Object *)0x0) goto code_?;
    if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_10);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    iVar1 = *(int *)&pOStackX_10[1].klass;
  }
  pPVar6 = (this->fields).currentItem;
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
  if (pPVar6 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar6 = (this->fields).currentItem;
      if (pPVar6 != (PickupItem *)0x0) {
        iVar7 = (*(pPVar6->klass->vtable).__unknown.methodPtr)
                          (pPVar6,(pPVar6->klass->vtable).__unknown.method);
        if (iVar5 != iVar7) {
          return 1;
        }
        pPVar6 = (this->fields).currentItem;
        if (pPVar6 != (PickupItem *)0x0) {
          return iVar1 != (pPVar6->fields)._VariantID_k__BackingField;
        }
      }
      goto code_?;
    }
  }
  return 1;
}


/* Void SetLineOfFire(Vector3, Vector3) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetLineOfFire
               (MVPickupOwner *this,Vector3 *lookOrigin,Vector3 *lookDirection,MethodInfo *method)

{
  fVar1 = lookOrigin->y;
  fVar2 = lookOrigin->z;
  (this->fields).lookOrigin.x = lookOrigin->x;
  (this->fields).lookOrigin.y = fVar1;
  fVar1 = lookDirection->x;
  fVar3 = lookDirection->y;
  (this->fields).lookOrigin.z = fVar2;
  fVar2 = lookDirection->z;
  (this->fields).lookDirection.x = fVar1;
  (this->fields).lookDirection.y = fVar3;
  (this->fields).lookDirection.z = fVar2;
  return;
}


/* Void SetLineOfFireLocal() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_SetLineOfFireLocal
               (MVPickupOwner *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    VStack_7._0_8_ = uVar5;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pMVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (aVStack_10,pTVar2,(MethodInfo *)0x0);
        pMVar11 = (pMVar1->fields).cameraController;
        VStack_4.x = pVVar3->x;
        VStack_4.y = pVVar3->y;
        fVar12 = pVVar3->z;
        if (((pMVar11 != (MVCameraController *)0x0) &&
            (this_00 = (pMVar11->fields).cameraStack,
            this_00 != (MVCameraController_CameraStack *)0x0)) &&
           (pMVar13 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                (this_00,(MethodInfo *)0x0), pMVar13 != (MVCameraBase *)0x0)) {
          fVar14 = (pMVar13->fields).cameraRadius;
          fVar15 = fVar14 * VStack_4.x;
          fVar16 = fVar14 * VStack_4.y;
          VStack_4._0_8_ = uVar5;
          VStack_4.z = fVar6;
          fVar17 = (float)FUN_?(&VStack_4);
          if (_UNK_? < fVar17) {
            VStack_7.x = VStack_7.x / fVar17;
            VStack_7.z = fVar6 / fVar17;
            VStack_7.y = VStack_7.y / fVar17;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_7.x = (pVVar18->zeroVector).x;
            VStack_7.y = (pVVar18->zeroVector).y;
            VStack_7.z = (pVVar18->zeroVector).z;
          }
          pVVar3 = MVPickupOwner_GetLookDirectionWithAddedVelocityMagnitude
                              (aVStack_10,this,&VStack_7,(MethodInfo *)0x0);
          fVar17 = pVVar3->x;
          fVar19 = pVVar3->y;
          fVar6 = pVVar3->z;
          (this->fields).lookOrigin.x = fVar15 + 0.0;
          (this->fields).lookOrigin.y = fVar16 + 0.0;
          (this->fields).lookOrigin.z = fVar14 * fVar12 + 0.0;
          (this->fields).lookDirection.x = fVar17;
          (this->fields).lookDirection.y = fVar19;
          (this->fields).lookDirection.z = fVar6;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateCurrentItem(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_UpdateCurrentItem
               (MVPickupOwner *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_updateItemState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  state = UpdateItemState__Enum_None;
  pOStackX_10 = (Object *)0x0;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (newState,(Object *)StringLiteral_updateItemState,&pOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar1 != 0) {
      if (pOStackX_10 == (Object *)0x0) goto code_?;
      if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
      {
        FUN_?(pOStackX_10);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      state = *(UpdateItemState__Enum *)&pOStackX_10[1].klass;
    }
    pPVar3 = (this->fields).currentItem;
    if (pPVar3 != (PickupItem *)0x0) {
      (*(pPVar3->klass->vtable).OnStateChanged.methodPtr)(pPVar3,newState);
      MVPickupOwner_CheckItemHolstering(this,state,(MethodInfo *)0x0);
      if ((state & UpdateItemState__Enum_ResetAmmo) != UpdateItemState__Enum_None) {
        pPVar3 = (this->fields).currentItem;
        if (pPVar3 == (PickupItem *)0x0) goto code_?;
        (*(pPVar3->klass->vtable).ResetAmmo.methodPtr)
                  (pPVar3,(pPVar3->klass->vtable).ResetAmmo.method);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Init>b__41_0(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__41_0
               (MVPickupOwner *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (Object *)0x0) {
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((item->klass->_1).naturalAligment < bVar1) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (item->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(item);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,item,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)item,(Object *)StringLiteral_type,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_1.methodPtr)(this,(this->klass->vtable).__unknown_1.method);
    return;
  }
  bVar4 = MVPickupOwner_IsNewItem
                    (this,(Dictionary_2_System_Object_System_Object_ *)item,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_updateItemState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    state = UpdateItemState__Enum_None;
    apOStackX_10[0] = (Object *)0x0;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)item,
                       (Object *)StringLiteral_updateItemState,apOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar4 != 0) {
      if (apOStackX_10[0] == (Object *)0x0) goto code_?;
      if ((apOStackX_10[0]->klass->_0).element_class !=
          *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(apOStackX_10[0]);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      state = *(UpdateItemState__Enum *)&apOStackX_10[0][1].klass;
    }
    pPVar5 = (this->fields).currentItem;
    if (pPVar5 == (PickupItem *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pPVar5->klass->vtable).OnStateChanged.methodPtr)(pPVar5,item);
    MVPickupOwner_CheckItemHolstering(this,state,(MethodInfo *)0x0);
    if ((state & UpdateItemState__Enum_ResetAmmo) != UpdateItemState__Enum_None) {
      pPVar5 = (this->fields).currentItem;
      if (pPVar5 == (PickupItem *)0x0) goto code_?;
      (*(pPVar5->klass->vtable).ResetAmmo.methodPtr)
                (pPVar5,(pPVar5->klass->vtable).ResetAmmo.method);
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType,item,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStackX_10[0] = (Object *)0x0;
  if ((item == (Object *)0x0) ||
     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)item,
                           (Object *)StringLiteral_type,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar6 == (Object *)0x0)) goto code_?;
  if ((pOVar6->klass->_0).element_class != (TypeInfo__MV__Common__AvatarItemType->_0).element_class
     ) {
    FUN_?(pOVar6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  type = *(AvatarItemType__Enum *)&pOVar6[1].klass;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)item,
                     (Object *)StringLiteral_variantId,apOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  iVar3 = 0;
  if (bVar4 != 0) {
    if (apOStackX_10[0] == (Object *)0x0) goto code_?;
    if ((apOStackX_10[0]->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
       ) {
      FUN_?(apOStackX_10[0]);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = *(int32_t *)&apOStackX_10[0][1].klass;
  }
  pPVar5 = MVPickupOwner_CreateAvatarItem(this,type,iVar3,(MethodInfo *)0x0);
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
  if (pPVar5 == (PickupItem *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    pPVar5 = MVPickupOwner_CreateAvatarItem(this,AvatarItemType__Enum_Hand,iVar3,(MethodInfo *)0x0)
    ;
    if (pPVar5 == (PickupItem *)0x0) goto code_?;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar5->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  bVar7 = iRam_? != 0;
  (pPVar5->fields).owner = this;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(pPVar5->fields).owner >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar12 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
              (pGVar12,
               FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__);
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar5,(MethodInfo *)0x0);
    if (pGVar12 != (GameObject *)0x0) {
      this_00 = (FadeableAvatarObject *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar12,
                           FadeableAvatarObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableAvatarObject>__
                          );
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (FadeableAvatarObject *)0x0) {
        bVar7 = iRam_? != 0;
        (this_00->fields).avatarObject = pGVar12;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this_00->fields).avatarObject >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
                  (this_00,(MethodInfo *)0x0);
        pPVar13 = (this->fields).currentItem;
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
        if (pPVar5 != (PickupItem *)0x0 || pPVar13 != (PickupItem *)0x0) {
          if (pPVar13 == (PickupItem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar7 = (pPVar5->fields)._._._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar7 = pPVar13 == pPVar5;
          }
          if (!bVar7) {
            (*(this->klass->vtable).__unknown_1.methodPtr)
                      (this,(this->klass->vtable).__unknown_1.method);
          }
        }
        bVar7 = iRam_? != 0;
        (this->fields).currentItem = pPVar5;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).currentItem >> 0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pPVar5 = (this->fields).currentItem;
        if (pPVar5 != (PickupItem *)0x0) {
          (*(pPVar5->klass->vtable).OnStateChanged.methodPtr)
                    (pPVar5,item,(pPVar5->klass->vtable).OnStateChanged.method);
          (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
          pMVar14 = (this->fields).onEquipItem;
          if (pMVar14 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            (*(pMVar14->fields)._._.invoke_impl)
                      ((pMVar14->fields)._._.method_code,(this->fields).currentItem,
                       (pMVar14->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Init>b__41_1(Object) */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__Init_b__41_1
               (MVPickupOwner *this,Object *value,MethodInfo *method)

{
  if (value == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(value);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar2 = *(char *)&value[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).onHandleFiring != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
    pMVar3 = (this->fields).onHandleFiring;
    (*(pMVar3->fields)._._.invoke_impl)
              ((pMVar3->fields)._._.method_code,cVar2,(pMVar3->fields)._._.method);
  }
  pPVar4 = (this->fields).currentItem;
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
  if (pPVar4 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar4 = (this->fields).currentItem;
      if (cVar2 == '\0') {
        if (pPVar4 != (PickupItem *)0x0) {
          (*(pPVar4->klass->vtable).TriggerEnd.methodPtr)
                    (pPVar4,(pPVar4->klass->vtable).TriggerEnd.method);
          return;
        }
      }
      else {
        pMVar5 = (this->fields)._.worldObjectParent;
        if ((pMVar5 != (MVWorldObjectClient *)0x0) && (pPVar4 != (PickupItem *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar4->klass->vtable).TriggerBegin.methodPtr)
                    (pPVar4,(ulonglong)(uint)(pMVar5->fields)._.id,
                     (pPVar4->klass->vtable).TriggerBegin.method);
          return;
        }
      }
      goto code_?;
    }
  }
  return;
}


/* MVPickupOwner() */

void Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner__ctor(MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields).lookOrigin.x = (pVVar2->oneVector).x;
  (this->fields).lookOrigin.y = fVar3;
  (this->fields).lookOrigin.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields).lookDirection.x = (pVVar2->oneVector).x;
  (this->fields).lookDirection.y = fVar3;
  (this->fields).lookDirection.z = fVar4;
  (this->fields)._.findWorldObjectParent = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar9;
      LOCK();
      bVar5 = uVar10 != uRam_?;
      uVar11 = uVar10;
      uVar12 = uVar10 + 1;
      if (bVar5) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar5) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar11, uVar10 = uVar11, uVar11 != 2)
            );
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar13 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar5 = *(int *)puVar13 == 1;
  if (bVar5) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar5 = *puVar14 == 1;
  if (bVar5) {
    *puVar14 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar15 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar5 = (ulonglong)uVar10 == *psVar15;
    if (bVar5) {
      *psVar15 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar5) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar5 = *(int *)puVar13 == 1;
      if (bVar5) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar5) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar17 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar9 = pIVar17->methods;
            pMVar18 = *ppMVar9;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar7;
                while (ppMVar20 = ppMVar19 + 0x30528cee,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar21 = _UNK_?;
    uVar22 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar20 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar20 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar20);
    if (uStack_25 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar20 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
      }
      uStack_24 = uVar22;
      uStack_25 = uVar21;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar20);
      if (lVar8 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar27 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar28 = *puVar27;
            LOCK();
            uVar21 = *puVar27;
            if (uVar28 == uVar21) {
              *puVar27 = uVar28 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar28 != uVar21);
        }
      }
      FUN_?(pOVar6,lVar16);
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
        if ((0xfff < uStack_26 + 1) &&
           (pppppppuVar20 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar20))))
        goto code_?;
        func_?(pppppppuVar20);
      }
      goto code_?;
    }
    pppppppuVar20 = pppppppuStack_78;
    if ((uStack_25 + 1 < 0x1000) ||
       (pppppppuVar20 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar20)) < 0x20)) {
      func_?(pppppppuVar20);
      uVar22 = _UNK_?;
      uVar21 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar22._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar22._4_4_ = (pOVar6->_1).cctor_started;
  uVar22 = FUN_?(uVar22);
  FUN_?(uVar22,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Boolean get_HasGunWithAmmo() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_HasGunWithAmmo
               (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
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
  if (pPVar1 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).currentItem;
      if (pPVar1 == (PickupItem *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar3 = (*(pPVar1->klass->vtable).get_GunMode.methodPtr)
                          (pPVar1,(pPVar1->klass->vtable).get_GunMode.method);
        return bVar3;
      }
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
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
    return pHVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVWorldObjectClient____c__DisplayClass53_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass53_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVWorldObjectClient____c__DisplayClass53_0);
  pOVar4 = (Object__Class *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pOVar4,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
    return pHVar3;
  }
  bVar5 = iRam_? != 0;
  object[1].klass = pOVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__MVWorldObjectClient____c__DisplayClass53_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
             ,(MethodInfo *)0x0);
  (*(pMVar1->klass->vtable).TraverseRecursiveTail.methodPtr)
            (pMVar1,this_00,(pMVar1->klass->vtable).TraverseRecursiveTail.method);
  return (HashSet_1_System_Int32_ *)object[1].klass;
}


/* Boolean get_InFirstPerson() */

bool Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_InFirstPerson
               (MVPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).currentItem;
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
  if (pPVar1 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).currentItem;
      if (pPVar1 == (PickupItem *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar3 = (*(pPVar1->klass->vtable).get_FirstPerson.methodPtr)
                          (pPVar1,(pPVar1->klass->vtable).get_FirstPerson.method);
        return bVar3;
      }
    }
  }
  return 0;
}


/* Vector3 get_LookDirection() */

Vector3 * Assembly-CSharp.dll::MVPickupOwner::MVPickupOwner_get_LookDirection
                    (Vector3 *__return_storage_ptr__,MVPickupOwner *this,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (&VStack_2,&(this->fields).lookDirection,method);
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
  pPVar1 = (this->fields).currentItem;
  if (pPVar1 == (PickupItem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pPVar1->fields)._IsHolstered_k__BackingField != 0) {
    return 0;
  }
  iVar4 = (*(pPVar1->klass->vtable).__unknown.methodPtr)
                    (pPVar1,(pPVar1->klass->vtable).__unknown.method);
  return iVar4 != 5;
}

