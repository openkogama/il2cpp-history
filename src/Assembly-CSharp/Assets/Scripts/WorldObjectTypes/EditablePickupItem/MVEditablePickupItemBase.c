
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
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVEditablePickupItemBaseBlueprint *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseBlueprint *)0x0) {
      (this->fields).blueprint = (MVEditablePickupItemBaseBlueprint *)0x0;
    }
    else {
      if (((pMVar1->klass->_1).naturalAligment <
           (
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
           ->_1).naturalAligment) ||
         ((MVEditablePickupItemBaseBlueprint__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
           ->_1).naturalAligment - 1] !=
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         )) goto code_?;
      (this->fields).blueprint = pMVar1;
      if (((pMVar1->klass->_1).naturalAligment <
           (
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
           ->_1).naturalAligment) ||
         ((MVEditablePickupItemBaseBlueprint__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
           ->_1).naturalAligment - 1] !=
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
         )) goto code_?;
    }
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
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if ((pPVar2->_1).naturalAligment < (TypeInfo__PickupItemEditable->_1).naturalAligment) {
    return 0;
  }
  if ((PickupItemEditable__Class *)
      (pPVar2->_1).typeHierarchy[(TypeInfo__PickupItemEditable->_1).naturalAligment - 1] !=
      TypeInfo__PickupItemEditable) {
    return 0;
  }
  pPVar3 = TypeInfo__PickupItemEditable;
  if (((pPVar2->_1).naturalAligment < (TypeInfo__PickupItemEditable->_1).naturalAligment) ||
     ((PickupItemEditable__Class *)
      (pPVar2->_1).typeHierarchy[(TypeInfo__PickupItemEditable->_1).naturalAligment - 1] !=
      TypeInfo__PickupItemEditable)) goto code_?;
  pMVar4 = (this->fields).blueprint;
  unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
  if (pMVar4 == (MVEditablePickupItemBaseBlueprint *)0x0) {
code_?:
    func_?();
    TVar5.m_Index = extraout_EDX;
  }
  else {
    if (pickupItem[2].klass != (PickupItem__Class *)(pMVar4->fields).cubeModelPid) {
      return 0;
    }
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar6,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
      return 0;
    }
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._._.data;
    if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar6,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((TVar5.m_Index == 0) ||
       ((unaff_EDI = 
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
        (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment <= *(byte *)(*(int *)TVar5.m_Index + 0xb8) &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)TVar5.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      bVar7 = (*(code *)pickupItem->klass[1]._0.events)
                        (pickupItem,TVar5.m_Index,pickupItem->klass[1]._0.properties);
      return bVar7;
    }
  }
  func_?(TVar5.m_Index,unaff_EDI);
  pPVar3 = extraout_EDX_00;
code_?:
  func_?(pickupItem,pPVar3);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
            this_00 = this;
            if ((((bVar3 == 0) || (this == (MVEditablePickupItemBase *)0x0)) ||
                ((this->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment)) ||
               (((Dictionary_2_System_Object_System_Object___Class *)
                 (this->klass->_1).typeHierarchy
                 [(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                || (this == (MVEditablePickupItemBase *)0x0)))) {
code_?:
              if ((pMVar1->fields)._.useInteractor == (UseInteractor *)0x0) {
                return;
              }
              pMVar5 = (pMVar1->fields).blueprint;
              if (pMVar5 != (MVEditablePickupItemBaseBlueprint *)0x0) {
                method = (MethodInfo *)(pMVar5->fields)._._._._.data;
                this = (MVEditablePickupItemBase *)(pMVar1->fields)._.useInteractor;
                UseInteractor::UseInteractor_UpdateData
                          ((UseInteractor *)this,(Dictionary_2_System_Object_System_Object_ *)method
                           ,(MethodInfo *)0x0);
                return;
              }
            }
            else if ((pMVar1->fields).blueprint != (MVEditablePickupItemBaseBlueprint *)0x0) {
              this = (MVEditablePickupItemBase *)&stack0xfffffff8;
              value = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,
                         (Object *)StringLiteral_CubeModelId,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              pDVar4 = (pMVar1->fields)._._._._.data;
              if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (pDVar4,(Object *)StringLiteral_itemData,(Object *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                goto code_?;
              }
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
            uVar6 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,method);
            if (method != (MethodInfo *)0x0) {
              if (*(Il2CppClass **)(*(int *)method + 0x20) !=
                  (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
              this = (MVEditablePickupItemBase *)&UNK_?;
              piVar7 = (int32_t *)func_?();
              (pMVar1->fields)._.pickupItemType = *piVar7;
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
        uVar6 = CONCAT44(TypeInfo__System__Int32,method);
        if (method != (MethodInfo *)0x0) {
          if (*(Il2CppClass **)(*(int *)method + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          this = (MVEditablePickupItemBase *)&UNK_?;
          piVar7 = (int32_t *)func_?();
          (pMVar1->fields)._.pickupVariantId = *piVar7;
          goto code_?;
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  uVar6 = func_?();
code_?:
  method = (MethodInfo *)((ulonglong)uVar6 >> 0x20);
  this = (MVEditablePickupItemBase *)uVar6;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDVar1 = (this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_itemData,(Object **)&stack0xfffffff8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((((bVar2 != 0) && (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) &&
      ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment <= (this_00->klass->_1).naturalAligment)) &&
     (((Dictionary_2_System_Object_System_Object___Class *)
       (this_00->klass->_1).typeHierarchy
       [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment - 1] ==
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> &&
      (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)))) {
    if ((this->fields).blueprint == (MVEditablePickupItemBaseBlueprint *)0x0) goto code_?;
    value = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_CubeModelId,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    pDVar1 = (this->fields)._._._._.data;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (pDVar1,(Object *)StringLiteral_itemData,(Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  if ((this->fields)._.useInteractor != (UseInteractor *)0x0) {
    pMVar3 = (this->fields).blueprint;
    if (pMVar3 == (MVEditablePickupItemBaseBlueprint *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UseInteractor::UseInteractor_UpdateData
              ((this->fields)._.useInteractor,(pMVar3->fields)._._._._.data,(MethodInfo *)0x0);
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
  if ((this->fields)._.useInteractor != (UseInteractor *)0x0) {
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
    pUVar3 = (this->fields)._.useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
    pUVar3 = (this->fields)._.useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
    pUVar3 = (this->fields)._.useInteractor;
    if (pUVar3 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_OnDestroy(pUVar3,(this->fields)._._._._.data,(MethodInfo *)0x0);
    (this->fields)._.useInteractor = (UseInteractor *)0x0;
    func_?(&(this->fields)._.useInteractor,0);
  }
  wo = (this->fields).blueprint;
  pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
    pGVar5 = (pMVar1->fields)._.useInteractionRotator;
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__MVPickupItemBase__DoPickup_int_,
                 (MethodInfo *)0x0);
      this_01 = (MVEditablePickupItemBase *)
                func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                ((Func_3_Int32_Object_Boolean_ *)this_01,(Object *)this,
                 MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_,
                 (MethodInfo *)0x0);
      pUVar3 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar3,(MVWorldObjectClient *)wo,pGVar5,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
      (this_01->fields)._.useInteractor = pUVar3;
      func_?();
      pMVar1 = MVEditablePickupItemBase_get_BaseObject(this_01,(MethodInfo *)0x0);
      if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
        pGVar5 = (pMVar1->fields)._.useInteractionRotator;
        this_02 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar5,1,(MethodInfo *)0x0);
        pUVar3 = (this_01->fields)._.useInteractor;
        if (pUVar3 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pUVar3,(UseRequirement *)this_02,(MethodInfo *)0x0);
          pMVar1 = MVEditablePickupItemBase_get_BaseObject(this_01,(MethodInfo *)0x0);
          if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
            pGVar5 = (pMVar1->fields)._.useInteractionRotator;
            this_03 = (LevelBasedUseRequirement *)
                      func_?(TypeInfo__LevelBasedUseRequirement);
            LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                      (this_03,pGVar5,1,(MethodInfo *)0x0);
            pUVar3 = (this_01->fields)._.useInteractor;
            if (pUVar3 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar3,(UseRequirement *)this_03,(MethodInfo *)0x0);
              pMVar1 = MVEditablePickupItemBase_get_BaseObject(this_01,(MethodInfo *)0x0);
              if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                pGVar5 = (pMVar1->fields)._.useInteractionRotator;
                this_04 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_04,pGVar5,(MVWorldObjectClient *)this_01,0,(MethodInfo *)0x0);
                pUVar3 = (this_01->fields)._.useInteractor;
                if (pUVar3 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar3,(UseRequirement *)this_04,(MethodInfo *)0x0);
                  pMVar1 = MVEditablePickupItemBase_get_BaseObject(this_01,(MethodInfo *)0x0);
                  if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                    pGVar5 = (pMVar1->fields)._.useInteractionRotator;
                    this_05 = (RewardedAdRequirement *)
                              func_?(
                                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                             );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_05,pGVar5,(MethodInfo *)0x0);
                    pUVar3 = (this_01->fields)._.useInteractor;
                    if (pUVar3 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar3,(UseRequirement *)this_05,(MethodInfo *)0x0);
                      pMVar1 = MVEditablePickupItemBase_get_BaseObject(this_01,(MethodInfo *)0x0);
                      if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                        pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
                        pUVar3 = (this_01->fields)._.useInteractor;
                        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  (pUVar4,(Object *)pUVar3,
                                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                   ,(MethodInfo *)0x0);
                        if (pTVar2 != (TriggerBoxEvents *)0x0) {
                          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
                                     (MethodInfo *)0x0);
                          pMVar1 = MVEditablePickupItemBase_get_BaseObject
                                             (this_01,(MethodInfo *)0x0);
                          if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                            pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
                            pUVar3 = (this_01->fields)._.useInteractor;
                            pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                     func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      (pUVar4,(Object *)pUVar3,
                                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pTVar2 != (TriggerBoxEvents *)0x0) {
                              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    this_00 = (pUVar1->fields).useInteractorVisuals;
    pMVar2 = (MonitorData *)(pUVar1->fields).woOwnerID;
    if (this_00 != (UseInteractorVisualization *)0x0) {
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,unaff_ESI);
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)useInteractorData;
        func_?();
        value[1].monitor = pMVar2;
        if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
        if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
          if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
          this_01 = (Func_2_UseRequirement_Boolean_ *)func_?();
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    ((Func_2_Object_Boolean_ *)this_01,(Object *)object,
                     MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_
                     ,(MethodInfo *)0x0);
          TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
          func_?();
        }
        this_02 = (Func_2_Object_Boolean_ *)func_?();
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_02,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                   ,(MethodInfo *)0x0);
        UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
                  (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
        UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                  (this_00,(MethodInfo *)0x0);
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
    return (MVEditablePickupItemBaseObject *)0x0;
  }
  if (((
       TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
       ->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
     ((pMVar1->klass->_1).typeHierarchy
      [(
       TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
       ->_1).naturalAligment - 1] ==
      (Il2CppClass *)
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
     )) {
    return pMVar1;
  }
  func_?(pMVar1,
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
                 );
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVEditablePickupItemBaseObject *)(*pcVar2)();
  return pMVar1;
}


/* Void set_BaseObject(MVEditablePickupItemBaseObject) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_set_BaseObject
               (MVEditablePickupItemBase *this,MVEditablePickupItemBaseObject *value,
               MethodInfo *method)

{
  (this->fields)._._BaseObject_k__BackingField = (MVPickupItemBaseObject *)value;
  func_?(&(this->fields)._._BaseObject_k__BackingField,value);
  return;
}

