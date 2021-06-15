
/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_CheckCanUse
               (MVPickupItemBase *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar1 = (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                      (avatarInteractable,7,
                       (avatarInteractable->klass->vtable).__unknown_5.methodPtr);
    if (cVar1 == '\0') {
      cVar1 = (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                        (avatarInteractable,8,
                         (avatarInteractable->klass->vtable).__unknown_5.methodPtr);
      if ((cVar1 == '\0') && ((this->fields).canPickUp != 0)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        instigator = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                               (this_00,woId,(MethodInfo *)0x0);
        bVar2 = MVPickupItemBase_ShouldDoAutoPickup(this,instigator,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_Destroy
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).baseObject;
  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).baseObject;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pUVar4 = (this->fields).useInteractor;
          if (pUVar4 == (UseInteractor *)0x0) {
code_?:
            if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
              func_?(TypeInfo__UpdateController);
            }
            UpdateController::UpdateController_RemoveUpdateObject
                      ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
            MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
            return;
          }
          pMVar1 = (this->fields).baseObject;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields).baseObject;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
                  pUVar4 = (this->fields).useInteractor;
                  data = (Dictionary_2_System_Object_System_Object_ *)
                         PrefabPool::PrefabPool_get_MVBatteryPrefab
                                   ((PrefabPool *)this,(MethodInfo *)0x0);
                  if (pUVar4 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_OnDestroy(pUVar4,data,(MethodInfo *)0x0);
                    (this->fields).useInteractor = (UseInteractor *)0x0;
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_DoPickup
               (MVPickupItemBase *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this_00 = (MVLocalObjectController *)
                PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar1,(MethodInfo *)0x0),
     this_00 != (MVLocalObjectController *)0x0)) {
    bVar2 = MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((((this_01 != (MVWorldObjectClientManager *)0x0) &&
         (pPVar1 = (PrefabPool *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,instigatorWOID,(MethodInfo *)0x0), pPVar1 != (PrefabPool *)0x0
         )) && (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                   ((DayNightCycle *)pPVar1,(MethodInfo *)0x0),
               pCVar3 != (CelestialParam *)0x0)) &&
       (pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           ((GameObject *)pCVar3,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           ), pUVar4 != (UseInteractorHandler *)0x0)) {
      cVar5 = (*(code *)pUVar4->klass[1]._0.castClass)();
      if (cVar5 != '\0') {
        return 0;
      }
      pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)pPVar1,(MethodInfo *)0x0);
      if (pCVar3 != (CelestialParam *)0x0) {
        pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           ((GameObject *)pCVar3,
                            MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                           );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pUVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          return 0;
        }
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pPVar1->fields).mvTeleporterPrefab;
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
        if (this_02 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
          AvatarItemType,EquipableData]::
          Dictionary_2_MV_Common_AvatarItemType_EquipableData__get_Item
                    (this_02,(AvatarItemType__Enum)(pPVar1->fields).mvTeleporterPrefab,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                    );
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
          if (this_03 !=
              (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
            pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&UNK_?;
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                    WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                    KogamaSettingWrapperBase]::
                    Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                              (this_03,StringLiteral_itemData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              );
            if (bVar2 != 0) {
              this_04 = (Dictionary_2_System_Type_Pool_ *)
                        PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar1,(MethodInfo *)0x0);
              if (this_04 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
              unaff_EDI = pDVar6;
              pPStack7 =
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_04,(Type *)StringLiteral_itemData,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
              if (pPStack7 != (Pool *)0x0) {
                bVar8 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((pPStack7->klass->_1).naturalAligment < bVar8) ||
                   ((Dictionary_2_System_Object_System_Object___Class *)
                    (pPStack7->klass->_1).typeHierarchy[bVar8 - 1] !=
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   )) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                pPVar10 = (Pool *)0x0;
                if (bVar9) {
                  pPVar10 = pPStack7;
                }
                pDStack11 =
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ;
                if (pPVar10 == (Pool *)0x0) goto code_?;
              }
            }
            if (pUVar4 != (UseInteractorHandler *)0x0) {
              cVar5 = (*pUVar4->klass[1]._0.gc_desc)();
              if (cVar5 == '\0') {
                return 0;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              triggerBoxOwnerId =
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pPVar1,(MethodInfo *)0x0);
              unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                          (this_05,(int32_t)triggerBoxOwnerId,(int32_t)pPVar1,(MethodInfo *)0x0);
                *(undefined1 *)&(pPVar1->fields).mvWaterPlanePrefab = 0;
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pPStack7 = extraout_EDX;
  pDStack11 = unaff_EDI;
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar2 = (*pcVar12)();
  return bVar2;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPickupItemBase *this,float gridSize,
                    Vector3 position,MethodInfo *method)

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
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* ObjectPrefab GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

ObjectPrefab *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                &stack0xfffffffb);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar3) {
        this = pDVar1;
      }
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
    if (this == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this,(Type *)StringLiteral_itemType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (pPVar4 == (Pool *)0x0)) goto code_?;
    if ((pPVar4->klass->_0).element_class ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      pAVar5 = (AvatarItemType__Enum *)func_?();
      EVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              AvatarItemType,EquipableData]::
              Dictionary_2_MV_Common_AvatarItemType_EquipableData__get_Item
                        ((Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)unaff_EDI,*pAVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                        );
      return EVar6.prefabObject;
    }
  }
  func_?();
  pDVar1 = extraout_EDX;
code_?:
  func_?(pDVar1,unaff_EDI);
  pcVar7 = (code *)swi(3);
  pOVar8 = (ObjectPrefab *)(*pcVar7)();
  return pOVar8;
}


/* Void HandleStateChange(PickupItemState) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_HandleStateChange
               (MVPickupItemBase *this,PickupItemState__Enum state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (state == PickupItemState__Enum_Listening) {
    pMVar1 = (this->fields).baseObject;
    (this->fields).canPickUp = 1;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).baseObject;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 == (TriggerBoxEvents *)0x0))
    goto code_?;
    pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  }
  else {
    if (state != PickupItemState__Enum_Pickup) {
      return;
    }
    pMVar1 = (this->fields).baseObject;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).baseObject;
    if (pMVar1 == (MVPickupItemBaseObject *)0x0) goto code_?;
    pAVar5 = (pMVar1->fields).audioSource;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pAVar5,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pMVar1 = (this->fields).baseObject;
      if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
         (pAVar5 = (pMVar1->fields).audioSource, pAVar5 == (AudioSource *)0x0))
      goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar5,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).baseObject;
    (this->fields).canPickUp = 0;
    if ((pMVar1 == (MVPickupItemBaseObject *)0x0) ||
       (pTVar3 = (pMVar1->fields).triggerBoxEvents, pTVar3 == (TriggerBoxEvents *)0x0))
    goto code_?;
    pCVar4 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
  }
  if (pCVar4 != (Collider *)0x0) {
    pcVar7 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar7 = (code *)func_?();
      if (pcVar7 == (code *)0x0) {
        puStack8 = (undefined *)0x0;
        puStack9 = (undefined *)0x0;
        puStack10 = (undefined *)func_?();
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pcRam_? = pcVar7;
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
    func_?(_UNK_?);
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
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    for (index = (undefined1 *)((int)&pOVar3[-1].monitor + 3); -1 < (int)index; index = index + -1)
    {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pLVar1 = (this->fields).instigatorsInTrigger;
      if ((pLVar1 == (List_1_System_Int32_ *)0x0) ||
         (iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__get_Item
                            (pLVar1,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
         this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,iVar4,(MethodInfo *)0x0);
      pLVar1 = (this->fields).instigatorsInTrigger;
      if (pMVar5 == (MVWorldObject *)0x0) {
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__RemoveAt
                  (pLVar1,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
      }
      else {
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
        iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__get_Item
                          (pLVar1,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        bVar6 = MVPickupItemBase_ShouldDoAutoPickup(this,iVar4,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pLVar1 = (this->fields).instigatorsInTrigger;
          if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
          iVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__get_Item
                            (pLVar1,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          MVPickupItemBase_DoPickup(this,iVar4,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVPickupItemBase_SetupUseInteractor(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar1 = (this->fields).baseObject;
    if ((((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
         (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) &&
        (this_01 = (pGVar2->fields).pickupObject, this_01 != (GameObject *)0x0)) &&
       (pWVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                           (this_01,
                            RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                           ), pWVar3 != (Worker *)0x0)) {
      pWVar3[1].klass = (Worker__Class *)0x42880000;
      pMVar1 = (this->fields).baseObject;
      if ((pMVar1 != (MVPickupItemBaseObject *)0x0) &&
         (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pGVar2->fields).pickupObject,2.0,(MethodInfo *)0x0);
        this_02 = (this->fields)._.cullingSubscriberBase;
        if (this_02 != (CullingSubscriberBase *)0x0) {
          LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                    ((LockCursorManager3DMode *)this_02,(Action_1_Boolean_ *)0x2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          pMVar1 = (this->fields).baseObject;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pTVar4 = (pMVar1->fields).triggerBoxEvents;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,
                       MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar4 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              pMVar1 = (this->fields).baseObject;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pTVar4 = (pMVar1->fields).triggerBoxEvents;
                pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar5,(Object *)this,
                           MethodInfo__MVPickupItemBase__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar4 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_03 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
                  if (this_03 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
                    EVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                            AvatarItemType,EquipableData]::
                            Dictionary_2_MV_Common_AvatarItemType_EquipableData__get_Item
                                      (this_03,(this->fields).pickupItemType,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                                      );
                    if (EVar6.equipableType != 0) {
                      return;
                    }
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (((this_04 != (MVNetworkGame *)0x0) &&
                        (this_05 = (PrefabPool *)
                                   MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                             (this_04,(MethodInfo *)0x0),
                        this_05 != (PrefabPool *)0x0)) &&
                       (this_06 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                            (this_05,(MethodInfo *)0x0),
                       this_06 != (ObjectiveArrow *)0x0)) {
                      BoostController::BoostController_AllowBoost
                                ((BoostController *)this_06,BoostType__Enum_AmmoIntMultiplier,1,
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_InitializeInventory
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0);
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


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_OnDataUpdate
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar1,StringLiteral_variantId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (pDVar1,StringLiteral_itemType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
code_?:
          this_00 = (this->fields).useInteractor;
          data = (Dictionary_2_System_Object_System_Object_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if (this_00 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pDVar3 = (Dictionary_2_System_Type_Pool_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if (pDVar3 != (Dictionary_2_System_Type_Pool_ *)0x0) {
            pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (pDVar3,(Type *)StringLiteral_itemType,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            uVar5 = CONCAT44(TypeInfo__MV__Common__AvatarItemType,pPVar4);
            if (pPVar4 != (Pool *)0x0) {
              if ((pPVar4->klass->_0).element_class !=
                  (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
              piVar6 = (int32_t *)func_?();
              (this->fields).pickupItemType = *piVar6;
              goto code_?;
            }
          }
        }
      }
    }
    else {
      pDVar3 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar3 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar3,(Type *)StringLiteral_variantId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
        if (pPVar4 != (Pool *)0x0) {
          if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar6 = (int32_t *)func_?();
          (this->fields).pickupVariantId = *piVar6;
          arg1 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          message = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_PtrPtrPtr_Update_variant_id_,arg1,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)message,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_SetupUseInteractor
               (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).baseObject;
  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVPickupItemBase__DoPickup_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_,
                 MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                );
      pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar4,(Func_3_Int32_MVInteractableBase_Boolean_ *)this_00
                 ,2.5,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar5;
      pMVar1 = (this->fields).baseObject;
      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
        pGVar2 = (pMVar1->fields).useInteractionRotator;
        this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
        GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar2,1,(MethodInfo *)0x0);
        pUVar5 = (this->fields).useInteractor;
        if (pUVar5 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
          pMVar1 = (this->fields).baseObject;
          if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
            pGVar2 = (pMVar1->fields).useInteractionRotator;
            this_02 = (LevelBasedUseRequirement *)
                      func_?(TypeInfo__LevelBasedUseRequirement);
            LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                      (this_02,pGVar2,1,(MethodInfo *)0x0);
            pUVar5 = (this->fields).useInteractor;
            if (pUVar5 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar5,(UseRequirement *)this_02,(MethodInfo *)0x0);
              pMVar1 = (this->fields).baseObject;
              if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                pGVar2 = (pMVar1->fields).useInteractionRotator;
                this_03 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_03,pGVar2,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                pUVar5 = (this->fields).useInteractor;
                if (pUVar5 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar5,(UseRequirement *)this_03,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).baseObject;
                  if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                    pTVar3 = (pMVar1->fields).triggerBoxEvents;
                    pUVar5 = (this->fields).useInteractor;
                    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar4,(Object *)pUVar5,
                               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                               ,
                               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                              );
                    if (pTVar3 != (TriggerBoxEvents *)0x0) {
                      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0
                                );
                      pMVar1 = (this->fields).baseObject;
                      if (pMVar1 != (MVPickupItemBaseObject *)0x0) {
                        pTVar3 = (pMVar1->fields).triggerBoxEvents;
                        pUVar5 = (this->fields).useInteractor;
                        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>
                                                   );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar4,(Object *)pUVar5,
                                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                   ,
                                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                                  );
                        if (pTVar3 != (TriggerBoxEvents *)0x0) {
                          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean ShouldDoAutoPickup(Int32) */

bool Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_ShouldDoAutoPickup
               (MVPickupItemBase *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  bVar2 = true;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) goto code_?;
  EVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
           AvatarItemType,EquipableData]::
           Dictionary_2_MV_Common_AvatarItemType_EquipableData__get_Item
                     (this_00,(this->fields).pickupItemType,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                     );
  if (EVar3.equipableType == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar4,instigator,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar4,id,(MethodInfo *)0x0);
    if (this_01 != (DayNightCycle *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
      if (this_02 == (CelestialParam *)0x0) goto code_?;
      x_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       ((GameObject *)this_02,
                        MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                       );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if ((bVar5 != 0) && (iVar6 = func_?(x_00,TypeInfo__VehiclePickupOwner), iVar6 == 0))
      {
        if (x_00 == (UseInteractorHandler *)0x0) goto code_?;
        x = *(Object_1 **)&x_00[1].fields._.findWorldObjectParent;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          iVar6 = *(int *)&x_00[1].fields._.findWorldObjectParent;
          if (iVar6 == 0) goto code_?;
          iVar6 = func_?(0xc,iVar6);
          bVar1 = iVar6 == (this->fields).pickupItemType;
          bVar2 = true;
          if (!bVar1) {
            iVar6 = *(int *)&x_00[1].fields._.findWorldObjectParent;
            if (iVar6 == 0) goto code_?;
            iVar6 = func_?(0xc,iVar6);
            bVar2 = iVar6 == 5;
          }
        }
      }
    }
  }
  pUVar7 = (this->fields).useInteractor;
  if (pUVar7 != (UseInteractor *)0x0) {
    UVar8 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar7,(MethodInfo *)0x0);
    if (((UVar8 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) == 0) && (bVar2))
    {
      return 1;
    }
    pUVar7 = (this->fields).useInteractor;
    if (pUVar7 != (UseInteractor *)0x0) {
      SVar9 = UseInteractor::UseInteractor_GetGUIShowOptions(pUVar7,(MethodInfo *)0x0);
      if ((SVar9 & ShowUseOption__Enum_UsingGameCoins) == ShowUseOption__Enum_Normal) {
        pUVar7 = (this->fields).useInteractor;
        if (pUVar7 == (UseInteractor *)0x0) goto code_?;
        UVar8 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(pUVar7,(MethodInfo *)0x0)
        ;
        if ((((UVar8 & UseGUIResult__Enum_CannotAfford) == 0) && (bVar1)) && (bVar2)) {
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar5 = (*pcVar10)();
  return bVar5;
}


/* MVPickupItemBase() */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Dictionary__
            );
  if (this != (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Health,MVWorldObjectDocumentationType__Enum_HealthPack,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_CenterGun,MVWorldObjectDocumentationType__Enum_Centergun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_ImpulseGun,MVWorldObjectDocumentationType__Enum_ImpulseGun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Bazooka,MVWorldObjectDocumentationType__Enum_Bazooka,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_RailGun,MVWorldObjectDocumentationType__Enum_Railgun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Sword,MVWorldObjectDocumentationType__Enum_Sword,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Mutant,MVWorldObjectDocumentationType__Enum_Mutant,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Flamethrower,
               MVWorldObjectDocumentationType__Enum_Flamethrower,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_Shotgun,MVWorldObjectDocumentationType__Enum_Shotgun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_GrowthPack,MVWorldObjectDocumentationType__Enum_GrowthPill,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_MousePack,MVWorldObjectDocumentationType__Enum_MousePill,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_MouseGun,MVWorldObjectDocumentationType__Enum_MouseGun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_ThrowingStar,
               MVWorldObjectDocumentationType__Enum_ThrowingStar,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_MultiThrowingStar,
               MVWorldObjectDocumentationType__Enum_MultiThrowingStar,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_CubeGun,MVWorldObjectDocumentationType__Enum_CubeGun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_DoubleSixShooter,
               MVWorldObjectDocumentationType__Enum_DoubleSixShooter,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_GrowthGun,MVWorldObjectDocumentationType__Enum_GrowthGun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_SixShooter,MVWorldObjectDocumentationType__Enum_SixShooter,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_NinjaRun,MVWorldObjectDocumentationType__Enum_NinjaRun,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,MVWorldObjectDocumentationType]::
    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__Add
              (this,AvatarItemType__Enum_HealRay,MVWorldObjectDocumentationType__Enum_HealRay,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__Add_MV__Common__AvatarItemType__MVWorldObjectDocumentationType_
              );
    TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip = this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVPickupItemBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase__ctor
               (MVPickupItemBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).canPickUp = 1;
  this_02 = (Dictionary_2_System_Object_System_Object___Class *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_02,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this_00->fields).instigatorsInTrigger = (List_1_System_Int32_ *)this_02;
  if ((((uint)(TypeInfo__MVPickupItemBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPickupItemBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPickupItemBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (MVPickupItemBase *)CONCAT13(7,this._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                   (int)&this + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    this = (MVPickupItemBase *)0x0;
    func_?();
    pAVar2 = extraout_EDX;
  }
  else {
    pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar3 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      this_02 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    }
    else {
      pIVar4 = (pDVar3->_0).image;
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)&pIVar4[4].assembly < bVar5) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((pIVar4[2].typeCount - 4) + (uint)bVar5 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      this_02 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (bVar6) {
        this_02 = pDVar3;
      }
      if (this_02 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        func_?(pDVar3,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_03 = PrefabPool::PrefabPool_get_PickupPrefabLUT((MethodInfo *)0x0);
    if (this_02 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    this = (MVPickupItemBase *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_02,(Type *)StringLiteral_itemType,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if ((this_03 == (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) ||
       (this == (MVPickupItemBase *)0x0)) goto code_?;
    pAVar2 = TypeInfo__MV__Common__AvatarItemType;
    if ((this->klass->_0).element_class == (TypeInfo__MV__Common__AvatarItemType->_0).element_class)
    {
      pAVar7 = (AvatarItemType__Enum *)func_?();
      EVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               AvatarItemType,EquipableData]::
               Dictionary_2_MV_Common_AvatarItemType_EquipableData__get_Item
                         (this_03,*pAVar7,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                         );
      this_01 = data;
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)this_00,data,EVar8.prefabObject,worldObjects,(MethodInfo *)0x0);
      pDVar9 = (Dictionary_2_System_Type_Pool_ *)(this_00->fields)._._.component;
      if (pDVar9 == (Dictionary_2_System_Type_Pool_ *)0x0) {
        pDVar10 = (Dictionary_2_System_Type_Pool_ *)0x0;
      }
      else {
        bVar5 = (TypeInfo__MVPickupItemBaseObject->_1).naturalAligment;
        if (((pDVar9->klass->_1).naturalAligment < bVar5) ||
           ((pDVar9->klass->_1).typeHierarchy[bVar5 - 1] !=
            (Il2CppClass *)TypeInfo__MVPickupItemBaseObject)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar6) {
          pDVar10 = pDVar9;
        }
        this_02 = (Dictionary_2_System_Object_System_Object___Class *)
                  TypeInfo__MVPickupItemBaseObject;
        if (pDVar10 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      piVar11 = &(this_00->fields)._._.interactionFlags;
      *(uint *)piVar11 = (uint)*piVar11 | 0xADDR;
      (this_00->fields).baseObject = (MVPickupItemBaseObject *)pDVar10;
      *(undefined4 *)((int)&(this_00->fields)._._.interactionFlags + 4) =
           *(undefined4 *)((int)&(this_00->fields)._._.interactionFlags + 4);
      pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                       CONCAT13(7,(int3)&stack0xfffffffb));
      pDVar9 = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      this_02 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar9->klass->_1).naturalAligment < bVar5) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar9->klass->_1).typeHierarchy[bVar5 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar6) {
          pDVar10 = pDVar9;
        }
        if (pDVar10 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
        this = (MVPickupItemBase *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar10,(Type *)StringLiteral_itemType,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
        if (this != (MVPickupItemBase *)0x0) {
          pAVar2 = TypeInfo__MV__Common__AvatarItemType;
          if ((this->klass->_0).element_class !=
              (TypeInfo__MV__Common__AvatarItemType->_0).element_class) goto code_?;
          pAVar7 = (AvatarItemType__Enum *)func_?();
          pDVar12 = TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip;
          if (pDVar12 != (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)0x0
             ) {
            this_02 = (Dictionary_2_System_Object_System_Object___Class *)*pAVar7;
            bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AvatarItemType,MVWorldObjectDocumentationType]::
                    Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__ContainsKey
                              (pDVar12,(AvatarItemType__Enum)this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__ContainsKey_MV__Common__AvatarItemType_
                              );
            if (bVar13 == 0) {
              (this_00->fields).documentationType = 0;
              return;
            }
            if ((((uint)(TypeInfo__MVPickupItemBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVPickupItemBase->_1).cctor_started == 0)) {
              this = (MVPickupItemBase *)TypeInfo__MVPickupItemBase;
              func_?();
            }
            pDVar12 = TypeInfo__MVPickupItemBase->static_fields->avatarItemToToinventoryItemDescrip;
            if (pDVar12 != (Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType_ *)
                          0x0) {
              this = (MVPickupItemBase *)
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
              ;
              MVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       AvatarItemType,MVWorldObjectDocumentationType]::
                       Dictionary_2_MV_Common_AvatarItemType_MVWorldObjectDocumentationType__get_Item
                                 (pDVar12,(AvatarItemType__Enum)this_02,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_MVWorldObjectDocumentationType>__get_Item_MV__Common__AvatarItemType_
                                 );
              (this_00->fields).documentationType = MVar14;
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  this = (MVPickupItemBase *)pAVar2;
  func_?();
  pDVar9 = extraout_EDX_00;
code_?:
  func_?(pDVar9,this_02);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Dictionary`2[System.Object,System.Object] get_ItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_get_ItemData
          (MVPickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDStack2 =
           (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_itemData,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      if (pDStack2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        return (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDStack2->klass->_1).naturalAligment < bVar3) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDStack2->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pDVar5 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar4) {
        pDVar5 = pDStack2;
      }
      pDStack6 =
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        return pDVar5;
      }
      goto code_?;
    }
  }
  func_?();
  pDStack2 = extraout_EDX;
  pDStack6 = (Dictionary_2_System_Object_System_Object___Class *)this;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar5;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerEnter
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    item = (e->fields).instigatorWOID;
    if (item != ~UIPushOption__Enum_None) {
      this_00 = (List_1_UIPushOption_ *)(this->fields).instigatorsInTrigger;
      if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                (this_00,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPickupItemBase::MVPickupItemBase_triggerBoxEvents_TriggerExit
               (MVPickupItemBase *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  triggerBoxOwnerId =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
       Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_01,(int32_t)triggerBoxOwnerId,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).instigatorsInTrigger;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
      item.rgba = (e->fields).instigatorWOID;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(this_00,item,(MethodInfo *)e);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

