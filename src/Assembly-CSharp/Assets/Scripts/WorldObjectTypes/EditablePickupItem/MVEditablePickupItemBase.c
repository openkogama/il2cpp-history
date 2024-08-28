
/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_Initialize
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                   );
    cRam_? = '\x01';
  }
  MVPickupItemBase::MVPickupItemBase_Initialize((MVPickupItemBase *)this,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = (MVEditablePickupItemBaseBlueprint *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseBlueprint *)0x0) {
      (this->fields).blueprint = (MVEditablePickupItemBaseBlueprint *)0x0;
code_?:
      func_?();
      MVEditablePickupItemBase_SetupUseInteractor(this,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).OnDataUpdate.method)(this);
      pMVar1 = (this->fields).blueprint;
      if ((pMVar1 != (MVEditablePickupItemBaseBlueprint *)0x0) &&
         (this_00 = (this->fields)._.useInteractor, this_00 != (UseInteractor *)0x0)) {
        UseInteractor::UseInteractor_UpdateData
                  (this_00,(pMVar1->fields)._._._._.data,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) goto code_?;
    (this->fields).blueprint = pMVar1;
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVEditablePickupItemBaseBlueprint__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsSameWeapon(PickupItem) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_IsSameWeapon
               (MVEditablePickupItemBase *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__PickupItemEditable);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if (pickupItem == (PickupItem *)0x0) goto code_?;
  iVar1 = (*(code *)(pickupItem->klass->vtable).__unknown.method)
                    (pickupItem,(pickupItem->klass->vtable).CanFire.methodPtr);
  if (iVar1 != (this->fields)._.pickupItemType) {
    return 0;
  }
  pPVar2 = pickupItem->klass;
  bVar3 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
  if ((pPVar2->_1).naturalAligment < bVar3) {
    return 0;
  }
  if ((PickupItemEditable__Class *)(pPVar2->_1).typeHierarchy[bVar3 - 1] !=
      TypeInfo__PickupItemEditable) {
    return 0;
  }
  bVar3 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
  pPVar4 = TypeInfo__PickupItemEditable;
  if (((pPVar2->_1).naturalAligment < bVar3) ||
     ((PickupItemEditable__Class *)(pPVar2->_1).typeHierarchy[bVar3 - 1] !=
      TypeInfo__PickupItemEditable)) goto code_?;
  pMVar5 = (this->fields).blueprint;
  unaff_EDI.m_Index = (int32_t)this;
  if (pMVar5 == (MVEditablePickupItemBaseBlueprint *)0x0) {
code_?:
    func_?();
    pDVar6 = extraout_EDX;
  }
  else {
    if (pickupItem[2].fields._.m_CancellationTokenSource !=
        (CancellationTokenSource *)(pMVar5->fields).cubeModelPid) {
      return 0;
    }
    pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar7,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 == 0) {
      return 0;
    }
    pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar7 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar7,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_EDI.m_Index == 0) {
      unaff_EDI.m_Index = 0;
code_?:
      bVar8 = (*(code *)pickupItem->klass[1]._0.klass)
                        (pickupItem,unaff_EDI.m_Index,pickupItem->klass[1]._0.fields);
      return bVar8;
    }
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((bVar3 <= *(byte *)(*(int *)unaff_EDI.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar3 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?(unaff_EDI.m_Index,pDVar6);
  pPVar4 = extraout_EDX_00;
code_?:
  func_?(pickupItem,pPVar4);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_OnDataUpdate
               (MVEditablePickupItemBase *this,MethodInfo *method)

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
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields)._._._._.data;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)StringLiteral_variantId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
code_?:
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar1->fields)._._._._.data;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar2,(Object *)StringLiteral_itemType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
code_?:
          if ((pMVar1->fields).blueprint == (MVEditablePickupItemBaseBlueprint *)0x0) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
            func_?(&TypeInfo__System__Int32);
            func_?(&StringLiteral_CubeModelId);
            func_?(&StringLiteral_itemData);
            cRam_? = '\x01';
          }
          pDVar4 = (pMVar1->fields)._._._._.data;
          this = (MVEditablePickupItemBase *)0x0;
          if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              (pDVar4,(Object *)StringLiteral_itemData,(Object **)&this,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                              );
            pMVar5 = this;
            if ((bVar3 != 0) && (this != (MVEditablePickupItemBase *)0x0)) {
              bVar6 = (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
              if ((bVar6 <= (this->klass->_1).naturalAligment) &&
                 (((Dictionary_2_System_Object_System_Object___Class *)
                   (this->klass->_1).typeHierarchy[bVar6 - 1] ==
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  && (this != (MVEditablePickupItemBase *)0x0)))) {
                if ((pMVar1->fields).blueprint != (MVEditablePickupItemBaseBlueprint *)0x0) {
                  method = (MethodInfo *)&stack0xfffffff8;
                  this = (MVEditablePickupItemBase *)TypeInfo__System__Int32;
                  value = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pMVar5,
                             (Object *)StringLiteral_CubeModelId,value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  pDVar4 = (pMVar1->fields)._._._._.data;
                  if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              (pDVar4,(Object *)StringLiteral_itemData,(Object *)pMVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    goto code_?;
                  }
                }
                goto code_?;
              }
            }
code_?:
            pMVar5 = (MVEditablePickupItemBase *)(pMVar1->fields)._.useInteractor;
            if (pMVar5 == (MVEditablePickupItemBase *)0x0) {
              return;
            }
            pMVar7 = (pMVar1->fields).blueprint;
            if (pMVar7 != (MVEditablePickupItemBaseBlueprint *)0x0) {
              method = (MethodInfo *)(pMVar7->fields)._._._._.data;
              this = pMVar5;
              UseInteractor::UseInteractor_UpdateData
                        ((UseInteractor *)pMVar5,(Dictionary_2_System_Object_System_Object_ *)method
                         ,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (pMVar1->fields)._._._._.data;
          if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            method = (MethodInfo *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (pDVar2,(Object *)StringLiteral_itemType,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar8 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,method);
            if (method != (MethodInfo *)0x0) {
              if (*(Il2CppClass **)(*(int *)method + 0x20) !=
                  (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
              this = (MVEditablePickupItemBase *)&UNK_?;
              piVar9 = (int32_t *)func_?();
              (pMVar1->fields)._.pickupItemType = *piVar9;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar1->fields)._._._._.data;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        method = (MethodInfo *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar2,(Object *)StringLiteral_variantId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar8 = CONCAT44(TypeInfo__System__Int32,method);
        if (method != (MethodInfo *)0x0) {
          if (*(Il2CppClass **)(*(int *)method + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          this = (MVEditablePickupItemBase *)&UNK_?;
          piVar9 = (int32_t *)func_?();
          (pMVar1->fields)._.pickupVariantId = *piVar9;
          goto code_?;
        }
      }
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  uVar8 = func_?();
code_?:
  method = (MethodInfo *)((ulonglong)uVar8 >> 0x20);
  this = (MVEditablePickupItemBase *)uVar8;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDataUpdateBlueprintReq() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_OnDataUpdateBlueprintReq
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDVar1 = (this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_itemData,(Object **)&stack0xfffffff8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((bVar2 != 0) && (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar3 <= (this_01->klass->_1).naturalAligment) &&
       (((Dictionary_2_System_Object_System_Object___Class *)
         (this_01->klass->_1).typeHierarchy[bVar3 - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> &&
        (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0)))) {
      if ((this->fields).blueprint == (MVEditablePickupItemBaseBlueprint *)0x0)
      goto code_?;
      value = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_01,(Object *)StringLiteral_CubeModelId,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pDVar1 = (this->fields)._._._._.data;
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar1,(Object *)StringLiteral_itemData,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
  }
  this_00 = (this->fields)._.useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    pMVar4 = (this->fields).blueprint;
    if (pMVar4 == (MVEditablePickupItemBaseBlueprint *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UseInteractor::UseInteractor_UpdateData(this_00,(pMVar4->fields)._._._._.data,(MethodInfo *)0x0)
    ;
  }
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_SetupUseInteractor
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_);
    func_?(&MethodInfo__MVPickupItemBase__DoPickup_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields)._.useInteractor;
  this_06 = (MVWorldObjectClient *)ppUVar1;
  if ((this->fields)._.useInteractor != (UseInteractor *)0x0) {
    pMVar2 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar2 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar3 = (pMVar2->fields)._.triggerBoxEvents;
    pUVar4 = *ppUVar1;
    pEVar5 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar5,(Object *)pUVar4,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
    pMVar2 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar2 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar3 = (pMVar2->fields)._.triggerBoxEvents;
    pUVar4 = *ppUVar1;
    pEVar5 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar5,(Object *)pUVar4,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar3 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
    if (*ppUVar1 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_OnDestroy(*ppUVar1,(this->fields)._._._._.data,(MethodInfo *)0x0);
    *ppUVar1 = (UseInteractor *)0x0;
    func_?(ppUVar1,0);
  }
  pMVar2 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
  if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
    pMVar2 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if ((pMVar2 != (MVEditablePickupItemBaseObject *)0x0) &&
       (pTVar3 = (pMVar2->fields)._.triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0)) {
      wo = (MVWorldObjectClient *)
           TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVPickupItemBase__DoPickup_int_,
                 (MethodInfo *)0x0);
      this_01 = (Func_3_Int32_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_,
                 (MethodInfo *)0x0);
      pMVar6 = (MVWorldObjectClient__Class *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                ((UseInteractor *)pMVar6,wo,(GameObject *)wo,0,(Collider *)wo,
                 (Func_2_Int32_Boolean_ *)this_00,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
      wo->klass = pMVar6;
      this_06 = wo;
      func_?();
      pMVar2 = MVEditablePickupItemBase_get_BaseObject
                         ((MVEditablePickupItemBase *)&UNK_?,(MethodInfo *)0x0);
      if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
        pGVar7 = (pMVar2->fields)._.useInteractionRotator;
        this_02 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar7,1,(MethodInfo *)0x0);
        if (wo->klass != (MVWorldObjectClient__Class *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    ((UseInteractor *)wo->klass,(UseRequirement *)this_02,(MethodInfo *)0x0);
          pMVar2 = MVEditablePickupItemBase_get_BaseObject
                             ((MVEditablePickupItemBase *)&UNK_?,(MethodInfo *)0x0);
          if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
            pGVar7 = (pMVar2->fields)._.useInteractionRotator;
            this_03 = (LevelBasedUseRequirement *)
                      func_?(TypeInfo__LevelBasedUseRequirement);
            LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                      (this_03,pGVar7,1,(MethodInfo *)0x0);
            if (wo->klass != (MVWorldObjectClient__Class *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        ((UseInteractor *)wo->klass,(UseRequirement *)this_03,(MethodInfo *)0x0);
              pMVar2 = MVEditablePickupItemBase_get_BaseObject
                                 ((MVEditablePickupItemBase *)&UNK_?,(MethodInfo *)0x0);
              if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
                pGVar7 = (pMVar2->fields)._.useInteractionRotator;
                this_04 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_04,pGVar7,(MVWorldObjectClient *)&UNK_?,0,(MethodInfo *)0x0);
                if (wo->klass != (MVWorldObjectClient__Class *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            ((UseInteractor *)wo->klass,(UseRequirement *)this_04,(MethodInfo *)0x0)
                  ;
                  pMVar2 = MVEditablePickupItemBase_get_BaseObject
                                     ((MVEditablePickupItemBase *)&UNK_?,(MethodInfo *)0x0);
                  if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
                    pGVar7 = (pMVar2->fields)._.useInteractionRotator;
                    this_05 = (RewardedAdRequirement *)
                              func_?(
                                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                             );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_05,pGVar7,(MethodInfo *)0x0);
                    if (wo->klass != (MVWorldObjectClient__Class *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                ((UseInteractor *)wo->klass,(UseRequirement *)this_05,
                                 (MethodInfo *)0x0);
                      pMVar2 = MVEditablePickupItemBase_get_BaseObject
                                         ((MVEditablePickupItemBase *)&UNK_?,
                                          (MethodInfo *)0x0);
                      if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
                        pTVar3 = (pMVar2->fields)._.triggerBoxEvents;
                        pMVar6 = wo->klass;
                        this_06 = (MVWorldObjectClient *)
                                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                                  ((EventHandler_1_Object_ *)this_06,(Object *)pMVar6,
                                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                   ,(MethodInfo *)0x0);
                        if (pTVar3 != (TriggerBoxEvents *)0x0) {
                          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)this_06,
                                     (MethodInfo *)0x0);
                          pMVar2 = MVEditablePickupItemBase_get_BaseObject
                                             ((MVEditablePickupItemBase *)&UNK_?,
                                              (MethodInfo *)0x0);
                          if (pMVar2 != (MVEditablePickupItemBaseObject *)0x0) {
                            pTVar3 = (pMVar2->fields)._.triggerBoxEvents;
                            pMVar6 = wo->klass;
                            pEVar5 = (EventHandler_1_Object_ *)
                                     func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                            mscorlib.dll::System::EventHandler`1[Object]::
                            EventHandler_1_Object___ctor
                                      (pEVar5,(Object *)pMVar6,
                                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pTVar3 != (TriggerBoxEvents *)0x0) {
                              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar5,
                                         (MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)(this_06);
  return;
}


/* Void UpdateUseInteractor(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_UpdateUseInteractor
               (MVEditablePickupItemBase *this,
               Dictionary_2_System_Object_System_Object_ *useInteractorData,MethodInfo *method)

{
  pUVar1 = (this->fields)._.useInteractor;
  if (pUVar1 != (UseInteractor *)0x0) {
    this_01 = (Func_2_Object_Boolean_ *)(pUVar1->fields).useInteractorVisuals;
    pMVar2 = (MonitorData *)(pUVar1->fields).woOwnerID;
    if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
        func_?(&
                        MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_
                       );
        func_?(&
                        MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                       );
        func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
        func_?(&TypeInfo__UseInteractorVisualization____c);
        cRam_? = '\x01';
      }
      value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0)
      ;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)useInteractorData;
        func_?();
        value[1].monitor = pMVar2;
        if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
        if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
          if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
          this_00 = (Func_2_UseRequirement_Boolean_ *)func_?();
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                     MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_
                     ,(MethodInfo *)0x0);
          TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_00;
          this_01 = (Func_2_Object_Boolean_ *)this_00;
          func_?();
          this = (MVEditablePickupItemBase *)func_?();
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this,value,
                     MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                     ,(MethodInfo *)0x0);
        }
        else {
          this = (MVEditablePickupItemBase *)func_?();
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this,value,
                     MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                     ,(MethodInfo *)0x0);
        }
        UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
                  ((UseInteractorVisualization *)this_01,this_00,
                   (Func_2_UseRequirement_Boolean_ *)this,(MethodInfo *)0x0);
        UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                  ((UseInteractorVisualization *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVEditablePickupItemBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase__ctor
               (MVEditablePickupItemBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPickupItemBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPickupItemBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPickupItemBase);
  }
  MVPickupItemBase::MVPickupItemBase__ctor
            ((MVPickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  return;
}


/* MVEditablePickupItemBaseObject get_BaseObject() */

MVEditablePickupItemBaseObject *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::MVEditablePickupItemBase
::MVEditablePickupItemBase_get_BaseObject(MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MVEditablePickupItemBaseObject *)(this->fields)._._BaseObject_k__BackingField;
  if (pMVar1 == (MVEditablePickupItemBaseObject *)0x0) {
    return pMVar1;
  }
  bVar2 = (
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
          ->_1).naturalAligment;
  if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
     ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
      (Il2CppClass *)
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
     )) {
    return pMVar1;
  }
  func_?(pMVar1,
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
                 );
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVEditablePickupItemBaseObject *)(*pcVar3)();
  return pMVar1;
}


/* Void set_BaseObject(MVEditablePickupItemBaseObject) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_set_BaseObject
               (MVEditablePickupItemBase *this,MVEditablePickupItemBaseObject *value,
               MethodInfo *method)

{
  ppMVar1 = &(this->fields)._._BaseObject_k__BackingField;
  *ppMVar1 = (MVPickupItemBaseObject *)value;
  func_?(ppMVar1,value);
  return;
}

