
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_CheckCanUse
               (MVPickupItemBase *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar1 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                      (avatarInteractable,7,
                       (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
    if (cVar1 == '\0') {
      cVar1 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                        (avatarInteractable,8,
                         (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
      if ((cVar1 == '\0') && ((this->fields).canPickUp != 0)) {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        instigator = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                               (this_00,woId,(MethodInfo *)0x0);
        bVar2 = MVPickupItemBase_ShouldDoAutoPickup(this,instigator,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          bVar2 = (*(code *)(this->klass->vtable).CheckCanUse.method)();
          return bVar2;
        }
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_Destroy
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UpdateController);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._BaseObject_k__BackingField;
  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
            if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UpdateController);
            }
            UpdateController::UpdateController_RemoveUpdateObject
                      ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
            MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
            return;
          }
          pMVar1 = (this->fields)._BaseObject_k__BackingField;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._BaseObject_k__BackingField;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                         func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar3,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
                  pUVar4 = (this->fields).useInteractor;
                  if (pUVar4 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_OnDestroy
                              (pUVar4,(this->fields)._._._.data,(MethodInfo *)0x0);
                    (this->fields).useInteractor = (UseInteractor *)0x0;
                    func_?(&(this->fields).useInteractor,0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_DoPickup
               (MVPickupItemBase *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._PlayerController_k__BackingField,
     this_00 != (MVLocalObjectController *)0x0)) {
    bVar2 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((((this_01 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,instigatorWOID,(MethodInfo *)0x0),
         pMVar3 != (MVWorldObject *)0x0)) &&
        (pLVar4 = pMVar3[1].fields.inputLinkRefs, pLVar4 != (List_1_MV_WorldObject_Link_ *)0x0)) &&
       (pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)pLVar4,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           ), pOVar5 != (Object *)0x0)) {
      pIVar6 = pOVar5->klass[1]._0.interopData;
      cVar7 = (*(code *)pOVar5->klass[1]._0.typeMetadataHandle)(pOVar5);
      if (cVar7 != '\0') {
        return 0;
      }
      pLVar4 = pMVar3[1].fields.inputLinkRefs;
      if (pLVar4 != (List_1_MV_WorldObject_Link_ *)0x0) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      ((GameObject *)pLVar4,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 0;
        }
        EVar8 = PrefabPool::PrefabPool_GetPickupPrefab
                           ((AvatarItemType__Enum)pIVar6[9].pinvokeMarshalFromNativeFunction,
                            (int32_t)pIVar6->createCCWFunction,(MethodInfo *)0x0);
        iVar9 = EVar8.equipableType;
        itemId = pIVar6->createCCWFunction;
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData)
          ;
        }
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
        MeleeWeaponData_IsLegacySword((int32_t)itemId,(MethodInfo *)0x0);
        pPVar10 = pIVar6[9].pinvokeMarshalFromNativeFunction;
        pPVar11 = pPVar10;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          pPVar11 = (PInvokeMarshalFromNativeFunc)&UNK_?;
          func_?(&StringLiteral_itemData);
          cRam_? = '\x01';
        }
        if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            pIVar6[3].pinvokeMarshalToNativeFunction !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          puVar12 = &UNK_?;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             pIVar6[3].pinvokeMarshalToNativeFunction,
                             (Object *)StringLiteral_itemData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar2 == 0) {
            TVar13.m_Index = 0;
          }
          else {
            instigatorWOID = (int32_t)pIVar6[3].pinvokeMarshalToNativeFunction;
            if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)instigatorWOID ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
            goto code_?;
            pPVar10 = pPVar11;
            TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                instigatorWOID,(Object *)StringLiteral_itemData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((TVar13.m_Index != 0) &&
               ((*(byte *)(*(int *)TVar13.m_Index + 0xb8) <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment ||
                (*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(int *)(*(int *)TVar13.m_Index + 100) + -4 +
                  (uint)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment * 4) !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ))) goto code_?;
          }
          if (x != (Object_1 *)0x0) {
            cVar7 = (*(code *)x->klass[1]._0.namespaze)(x,pPVar10,iVar9,TVar13.m_Index,puVar12);
            if (cVar7 == '\0') {
              return 0;
            }
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                        (this_02,(int32_t)pIVar6->pinvokeMarshalFromNativeFunction,instigatorWOID,
                         (MethodInfo *)0x0);
              *(undefined1 *)&pIVar6[9].createCCWFunction = 0;
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  bVar2 = (*pcVar14)();
  return bVar2;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPickupItemBase *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  pSVar4 = (SharedCubeFunctions__Class *)((float)uVar2 * _UNK_?);
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      pSVar7 = TypeInfo__SharedCubeFunctions;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar4 = pSVar7;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar4;
      rotation.x = gridSize;
      rotation.z = fVar5;
      rotation.w = fVar6;
      scale.y = fVar5;
      scale.x = (float)pSVar4;
      scale.z = fVar6;
      pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar8->y;
      fVar6 = pVVar8->z;
      __return_storage_ptr__->x = pVVar8->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar9)();
  return pVVar8;
}


/* ObjectPrefab GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

ObjectPrefab *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pAVar2 = extraout_ECX;
code_?:
    uVar3 = func_?(unaff_ESI.m_Index,pAVar2);
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI.m_Index == 0) goto code_?;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (unaff_ESI.m_Index,(Object *)StringLiteral_itemType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffa);
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar6 = (int32_t *)func_?(TVar5.m_Index);
      itemId = *piVar6;
      if (unaff_ESI.m_Index == 0) goto code_?;
      pAVar2 = TypeInfo__MV__Common__AvatarItemType;
      if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
          (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
        pAVar7 = (AvatarItemType__Enum *)func_?(unaff_ESI.m_Index);
        EVar8 = PrefabPool::PrefabPool_GetPickupPrefab(*pAVar7,itemId,(MethodInfo *)0x0);
        return EVar8.prefabObject;
      }
      goto code_?;
    }
  }
  func_?(uVar3);
  pDVar4 = extraout_EDX;
code_?:
  func_?(unaff_ESI.m_Index,pDVar4);
  pcVar9 = (code *)swi(3);
  pOVar10 = (ObjectPrefab *)(*pcVar9)();
  return pOVar10;
}


/* Void HandleStateChange(PickupItemState) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_HandleStateChange
               (MVPickupItemBase *this,PickupItemState__Enum state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (state == PickupItemState__Enum_Listening) {
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    (this->fields).canPickUp = 1;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 == (TriggerBoxEvents *)0x0))
    goto code_?;
    pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  }
  else {
    if (state != PickupItemState__Enum_Pickup) {
      return;
    }
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    if (pMVar1 == (MVPickupItemBaseObject *)0x0) goto code_?;
    pAVar5 = (pMVar1->fields).audioSource;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pAVar5,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
         (pAVar5 = (pMVar1->fields).audioSource, pAVar5 == (AudioSource *)0x0))
      goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (pAVar5,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    (this->fields).canPickUp = 0;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 == (TriggerBoxEvents *)0x0))
    goto code_?;
    pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  }
  if (pCVar4 != (Collider *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void IUpdatecontrollerSubscriberUpdate.UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVPickupItemBase::
     MVPickupItemBase_IUpdatecontrollerSubscriberUpdate_UpdateControllerUpdate
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((this->fields).canPickUp != 0) {
    pLVar1 = (this->fields).instigatorsInTrigger;
    if (pLVar1 == (List_1_System_Int32_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    index = (pLVar1->fields)._size;
    while (index = index + -1, -1 < index) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).instigatorsInTrigger;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
         this_01 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,(int32_t)RVar4,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
                (this->fields).instigatorsInTrigger;
      if (pMVar5 == (MVWorldObject *)0x0) {
        if (this_00 ==
            (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
        Implementation::UIRStylePainter+RepeatRectUV]::
        List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                  (this_00,index,MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_)
        ;
      }
      else {
        if (this_00 ==
            (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
        goto code_?;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_00,index,
                           MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        bVar6 = MVPickupItemBase_ShouldDoAutoPickup(this,(int32_t)RVar4,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).instigatorsInTrigger;
          if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          MVPickupItemBase_DoPickup(this,(int32_t)RVar4,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_Initialize
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                   );
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    func_?(&
                    MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVPickupItemBase_SetupUseInteractor(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._BaseObject_k__BackingField;
    if ((((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
         (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) &&
        (this_01 = (pGVar2->fields).pickupObject, this_01 != (GameObject *)0x0)) &&
       (pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (this_01,
                            RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3[2].klass = (Object__Class *)0x42880000;
      pMVar1 = (this->fields)._BaseObject_k__BackingField;
      if ((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
         (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pGVar2->fields).pickupObject,2.0,(MethodInfo *)0x0);
        pCVar4 = (this->fields)._.cullingSubscriberBase;
        if (pCVar4 != (CullingSubscriberBase *)0x0) {
          (pCVar4->fields)._DistanceBandIndex_k__BackingField = 2;
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._BaseObject_k__BackingField;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pTVar5 = (pMVar1->fields).triggerBoxEvents;
            pUVar6 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar6,(Object *)this,
                       MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar5 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._BaseObject_k__BackingField;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pTVar5 = (pMVar1->fields).triggerBoxEvents;
                pUVar6 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar6,(Object *)this,
                           MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar5 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar5,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
                  this_03 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
                  if (this_03 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
                    GVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                            Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                                      ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                        *)this_03,(this->fields).pickupItemType,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                                      );
                    if (GVar7.topRank != 0) {
                      return;
                    }
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((this_04 != (MVNetworkGame *)0x0) &&
                        (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_04,(MethodInfo *)0x0),
                        pMVar8 != (MVLocalPlayer *)0x0)) &&
                       (this_02 = (pMVar8->fields).boostController,
                       this_02 != (BoostController *)0x0)) {
                      BoostController::BoostController_AllowBoost
                                (this_02,BoostType__Enum_AmmoIntMultiplier,1,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_InitializeInventory
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Cube);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Find
                         (pTVar2,StringLiteral_Cube,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
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


/* Boolean IsSameWeapon(PickupItem) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_IsSameWeapon
               (MVPickupItemBase *this,PickupItem *pickupItem,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (pickupItem != (PickupItem *)0x0) {
    pIStack_1 = (pickupItem->klass->vtable).CanFire.methodPtr;
    pPStack_2 = pickupItem;
    iVar3 = (*(code *)(pickupItem->klass->vtable).__unknown.method)();
    return iVar3 == (this->fields).pickupItemType;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_OnDataUpdate
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_PtrPtrPtr_Update_variant_id_);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_variantId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar1,(Object *)StringLiteral_itemType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
code_?:
          this_00 = (this->fields).useInteractor;
          if (this_00 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_UpdateData
                      (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._._._.data;
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar1,(Object *)StringLiteral_itemType,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar3.m_Index != 0) {
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                  (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
              piVar4 = (int32_t *)func_?();
              (this->fields).pickupItemType = *piVar4;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)StringLiteral_variantId,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar3.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar4 = (int32_t *)func_?();
          (this->fields).pickupVariantId = *piVar4;
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&(this->fields).pickupVariantId,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_PtrPtrPtr_Update_variant_id_,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_SetupUseInteractor
               (MVPickupItemBase *this,MethodInfo *method)

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
  if ((this->fields)._BaseObject_k__BackingField != (MVPickupItemBaseObject *)0x0) {
    pTVar1 = (((this->fields)._BaseObject_k__BackingField)->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
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
      pUVar2 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar2,(MVWorldObjectClient *)0x40200000,(GameObject *)0x0,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
      pURam402000fc = pUVar2;
      func_?();
      if (iRam_? != 0) {
        pGVar3 = *(GameObject **)(iRam_? + 0x24);
        this_02 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar3,1,(MethodInfo *)0x0);
        if (pURam402000fc != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pURam402000fc,(UseRequirement *)this_02,(MethodInfo *)0x0);
          if (iRam_? != 0) {
            pGVar3 = *(GameObject **)(iRam_? + 0x24);
            this_03 = (LevelBasedUseRequirement *)
                      func_?(TypeInfo__LevelBasedUseRequirement);
            LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                      (this_03,pGVar3,1,(MethodInfo *)0x0);
            if (pURam402000fc != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pURam402000fc,(UseRequirement *)this_03,(MethodInfo *)0x0);
              if (iRam_? != 0) {
                pGVar3 = *(GameObject **)(iRam_? + 0x24);
                this_04 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_04,pGVar3,(MVWorldObjectClient *)0x40200000,0,(MethodInfo *)0x0);
                if (pURam402000fc != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pURam402000fc,(UseRequirement *)this_04,(MethodInfo *)0x0);
                  if (iRam_? != 0) {
                    pGVar3 = *(GameObject **)(iRam_? + 0x24);
                    this_05 = (RewardedAdRequirement *)
                              func_?(
                                             TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                             );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_05,pGVar3,(MethodInfo *)0x0);
                    if (pURam402000fc != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pURam402000fc,(UseRequirement *)this_05,(MethodInfo *)0x0);
                      if (iRam_? != 0) {
                        (**(code **)(iRam_? + 0x390))
                                  (0x40200000,*(undefined4 *)(iRam_? + 0x24),pURam402000fc,
                                   *(undefined4 *)(iRam_? + 0x394));
                        pUVar2 = pURam402000fc;
                        if (iRam_? != 0) {
                          pTVar1 = *(TriggerBoxEvents **)(iRam_? + 0x18);
                          pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>)
                          ;
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    (pUVar4,(Object *)pUVar2,
                                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                     ,(MethodInfo *)0x0);
                          if (pTVar1 != (TriggerBoxEvents *)0x0) {
                            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                      (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
                                       (MethodInfo *)0x0);
                            pUVar2 = pURam402000fc;
                            if (iRam_? != 0) {
                              pTVar1 = *(TriggerBoxEvents **)(iRam_? + 0x18);
                              pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                       func_?(
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        (pUVar4,(Object *)pUVar2,
                                         MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                         ,(MethodInfo *)0x0);
                              if (pTVar1 != (TriggerBoxEvents *)0x0) {
                                TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                          (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
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
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean ShouldDoAutoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_ShouldDoAutoPickup
               (MVPickupItemBase *this,int32_t instigator,MethodInfo *method)

{
  pMVar1 = (MVPickupOwner *)0x0;
  bVar2 = MVPickupItemBase_TryGetPickupOwner
                    (this,instigator,(MVPickupOwner **)&stack0xfffffff4,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
    pPVar3 = (pMVar1->fields).currentItem;
    cVar4 = (*(code *)(this->klass->vtable).IsSameWeapon.method)(this);
    if (cVar4 == '\0') {
      if ((pPVar3 == (PickupItem *)0x0) ||
         (piVar5 = (int *)(pPVar3->fields).originalRot.y, piVar5 == (int *)0x0))
      goto code_?;
      iVar6 = (**(code **)(*piVar5 + 0x120))();
      bVar7 = iVar6 == 5;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) {
      return 0;
    }
  }
  pUVar8 = (this->fields).useInteractor;
  if (pUVar8 == (UseInteractor *)0x0) {
code_?:
    func_?();
    pcVar9 = (code *)swi(3);
    bVar2 = (*pcVar9)();
    return bVar2;
  }
  UVar10 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar8,(MethodInfo *)0x0);
  if ((UVar10 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
    pUVar8 = (this->fields).useInteractor;
    if (pUVar8 == (UseInteractor *)0x0) goto code_?;
    cVar4 = '\x10';
    SVar11 = UseInteractor::UseInteractor_GetGUIShowOptions(pUVar8,(MethodInfo *)0x0);
    if ((((~SVar11 & 1) == 0) || ((~(byte)(UVar10 >> 3) & 1) == 0)) || (cVar4 == '\0')) {
      return 0;
    }
  }
  return 1;
}


/* Boolean TryGetPickupOwner(Int32, MVPickupOwner ByRef) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_TryGetPickupOwner
               (MVPickupItemBase *this,int32_t instigator,MVPickupOwner **pickupOwner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                   );
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__VehiclePickupOwner);
    cRam_? = '\x01';
  }
  *pickupOwner = (MVPickupOwner *)0x0;
  func_?(pickupOwner,0);
  this_01 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
  if (this_01 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    GVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32Enum,GamePassesHighScoreList+HighScoreListData]::
            Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                      ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                       this_01,(this->fields).pickupItemType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                      );
    if (GVar1.topRank != 0) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar2,instigator,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar2,id,(MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObject *)0x0) {
          this_00 = pMVar3[1].fields.inputLinkRefs;
          if (this_00 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
          pMVar4 = (MVPickupOwner *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             ((GameObject *)this_00,
                              MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                             );
          *pickupOwner = pMVar4;
          func_?();
          pMVar4 = *pickupOwner;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            if (*pickupOwner == (MVPickupOwner *)0x0) goto code_?;
            pMVar6 = (*pickupOwner)->klass;
            if (((pMVar6->_1).naturalAligment < (TypeInfo__VehiclePickupOwner->_1).naturalAligment)
               || ((pMVar6->_1).typeHierarchy
                   [(TypeInfo__VehiclePickupOwner->_1).naturalAligment - 1] !=
                   (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
              x = ((*pickupOwner)->fields).currentItem;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* MVPickupItemBase() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>
                   );
    func_?(&TypeInfo__MVPickupItemBase);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Dictionary__
            );
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,3,1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,1,2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,2,3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,4,4,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,6,5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,8,6,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,7,7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,10,8,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,9,9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x40,0xb,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3f,0xc,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3c,0xd,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x2d,0xe,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x2e,0xf,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xb,0x10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xd,0x13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x3e,0x14,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xc,0x15,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0xe,0x16,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::
    Dictionary_2_System_Int32Enum_System_Int32Enum__Add
              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x46,0x43,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip =
         (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)this;
    pMStack1 = TypeInfo__MVPickupItemBase->static_fields;
    pDStack2 = this;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVPickupItemBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__ctor
               (MVPickupItemBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__ContainsKey_MV__Common__AvatarItemType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__MVPickupItemBaseObject);
    func_?(&TypeInfo__MVPickupItemBase);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  this_02 = this;
  (this->fields).canPickUp = 1;
  this_04.m_Index = func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04.m_Index,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this_02->fields).instigatorsInTrigger = (List_1_System_Int32_ *)this_04.m_Index;
  func_?(&(this_02->fields).instigatorsInTrigger,this_04.m_Index);
  if ((TypeInfo__MVPickupItemBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPickupItemBase);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  this = (MVPickupItemBase *)CONCAT13(7,this._0_3_);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&this + 3);
  this_03 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    data = (Dictionary_2_System_Object_System_Object_ *)((ulonglong)uVar2 >> 0x20);
    this = (MVPickupItemBase *)uVar2;
    func_?();
  }
  else {
    this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_04.m_Index == 0) goto code_?;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)this_04.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_04.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_04.m_Index,(Object *)StringLiteral_itemType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        this = (MVPickupItemBase *)&UNK_?;
        data = (Dictionary_2_System_Object_System_Object_ *)TVar3;
        puVar4 = (undefined4 *)func_?();
        data = (Dictionary_2_System_Object_System_Object_ *)*puVar4;
        if (this_04.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)this_04.m_Index + 0x20) ==
              (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
            pAVar5 = (AvatarItemType__Enum *)func_?();
            EVar6 = PrefabPool::PrefabPool_GetPickupPrefab(*pAVar5,(int32_t)data,(MethodInfo *)0x0)
            ;
            MVLogicObject::MVLogicObject__ctor
                      ((MVLogicObject *)this_02,this_03,EVar6.prefabObject,worldObjects,
                       (MethodInfo *)0x0);
            in_stack_7 = (MVPickupItemBaseObject__Class *)(this_02->fields)._._.component;
            if ((in_stack_7 != (MVPickupItemBaseObject__Class *)0x0) &&
               ((this_04.m_Index = (int32_t)TypeInfo__MVPickupItemBaseObject,
                (((ObjectPrefab__Class *)((MVPickupItemBaseObject *)in_stack_7)->klass)->_1).
                naturalAligment < (TypeInfo__MVPickupItemBaseObject->_1).naturalAligment ||
                ((((ObjectPrefab__Class *)((MVPickupItemBaseObject *)in_stack_7)->klass)->_1)
                 .typeHierarchy[(TypeInfo__MVPickupItemBaseObject->_1).naturalAligment - 1] !=
                 (Il2CppClass *)TypeInfo__MVPickupItemBaseObject)))) goto code_?;
            in_stack_8 =
                 (MVPickupItemBaseObject *)&(this_02->fields)._BaseObject_k__BackingField;
            (this_02->fields)._BaseObject_k__BackingField =
                 (MVPickupItemBaseObject *)in_stack_7;
            in_stack_9 = &UNK_?;
            func_?();
            in_stack_9 = &stack0xfffffffa;
            method = (MethodInfo *)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
            worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
            pOVar1 = (Object *)func_?();
            this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_03,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (this_04.m_Index != 0) {
              if ((*(byte *)(*(int *)this_04.m_Index + 0xb8) <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment) ||
                 (*(Dictionary_2_System_Object_System_Object___Class **)
                   (*(int *)(*(int *)this_04.m_Index + 100) + -4 +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment * 4) !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) goto code_?;
              TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (this_04.m_Index,(Object *)StringLiteral_itemType,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              uVar2 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,TVar3.m_Index);
              if (TVar3.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                    (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
                this = (MVPickupItemBase *)&UNK_?;
                data = (Dictionary_2_System_Object_System_Object_ *)TVar3;
                pIVar10 = (Int32Enum__Enum *)func_?();
                iVar11 = (this_02->fields)._._.interactionFlags;
                key = *pIVar10;
                *(undefined4 *)((int)&(this_02->fields)._._.interactionFlags + 4) =
                     *(undefined4 *)((int)&(this_02->fields)._._.interactionFlags + 4);
                puVar12 = (uint *)((int)&(this_02->fields)._._.interactionFlags + 4);
                *puVar12 = *puVar12 | 2;
                (this_02->fields).pickupItemType = key;
                *(uint *)&(this_02->fields)._._.interactionFlags = (uint)iVar11 | 0xADDR;
                this_00 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                          TypeInfo__MVPickupItemBase->static_fields->
                          avatarItemToToinventoryItemDescrip;
                if (this_00 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
                  bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Single]::
                          Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                                    (this_00,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__ContainsKey_MV__Common__AvatarItemType_
                                    );
                  if (bVar13 == 0) {
                    (this_02->fields).documentationType = 0;
                    return;
                  }
                  if ((TypeInfo__MVPickupItemBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  this_01 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                            TypeInfo__MVPickupItemBase->static_fields->
                            avatarItemToToinventoryItemDescrip;
                  if (this_01 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       (this_01,(this_02->fields).pickupItemType,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
                                       );
                    (this_02->fields).documentationType = (int32_t)pOVar1;
                    return;
                  }
                }
              }
            }
          }
          else {
            func_?(this_04.m_Index);
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(this_04.m_Index);
  in_stack_7 = (MVPickupItemBaseObject__Class *)extraout_EDX;
code_?:
  in_stack_9 = &UNK_?;
  in_stack_8 = (MVPickupItemBaseObject *)in_stack_7;
  in_stack_7 = (MVPickupItemBaseObject__Class *)this_04.m_Index;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Dictionary`2[System.Object,System.Object] get_ItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_get_ItemData
          (MVPickupItemBase *this,MethodInfo *method)

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
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index == 0) {
        return (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= *(byte *)(*(int *)TVar3.m_Index + 0xb8)) &&
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        return (Dictionary_2_System_Object_System_Object_ *)TVar3.m_Index;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
  return pDVar5;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerEnter
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
  if (e != (TriggerEventArgs *)0x0) {
    if ((e->fields).instigatorWOID == -1) {
      return;
    }
    item = (e->fields).instigatorWOID;
    this_00 = (this->fields).instigatorsInTrigger;
    if (this_00 != (List_1_System_Int32_ *)0x0) {
      pIVar2 = (this_00->fields)._items;
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      if (pIVar2 != (Int32__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if (pIVar2->max_length <= uVar4) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__AddWithResize(this_00,item,pMVar1->klass->rgctx_data[0xe].method);
          return;
        }
        (this_00->fields)._size = uVar4 + 1;
        if (uVar4 < pIVar2->max_length) {
          pIVar2->vector[uVar4] = item;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerExit
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_01,(this->fields)._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    this_00 = (this->fields).instigatorsInTrigger;
    if (this_00 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__Remove
                (this_00,(e->fields).instigatorWOID,
                 MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

