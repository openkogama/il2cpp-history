
/* Void Destroy() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).onDestroy;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).localComponents;
  if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) {
    func_?(0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_01,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                     );
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
  CStack_6.monitor = (MonitorData *)pLVar9->next;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
  CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
  uStack_1 = 0;
  while (cVar11 = func_?(), cVar11 != '\0') {
    obj = (Object_1 *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    (&CStack_6,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                    );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
  }
  *puStack_7 = 0x54;
  uStack_1 = 0xffffffff;
  func_?(&CStack_6,
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                 );
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).onEnter;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = MVVehicleBase_LocalObjectsBase_GetLocalComponents_2
                      (this,
                       System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                      );
  this_02 = MVVehicleBase_LocalObjectsBase_GetLocalComponents_2
                      (this,
                       System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                      );
  if (this_02 != (List_1_VehicleInteractable_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                        MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                       );
    if (pOVar1 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
    }
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                        MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                       );
    if (pOVar1 == (Object *)0x1) {
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,0,
                          MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                         );
      if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
      (*(code *)pIVar2->klass[1]._0.events)();
    }
    if (this_01 != (List_1_VehicleInteractable_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (pOVar1 == (Object *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (1 < (int)pOVar1) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
      }
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (pOVar1 == (Object *)0x1) {
        this_03 = (TimedPlayReward *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,0,
                             MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_
                            );
        if (this_03 == (TimedPlayReward *)0x0) goto code_?;
        TimedPlayReward::TimedPlayReward_set_IsClaimable(this_03,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[VehicleInteractable] GetLocalComponents[VehicleInteractable]() */

List_1_VehicleInteractable_ *
Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
MVVehicleBase_LocalObjectsBase_GetLocalComponents_2
          (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  pIVar8 = *method->parameters;
  puStack_9 = (undefined4 *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  if ((pIVar8[0x17].type & 1) == 0) {
    puStack_9 = (undefined4 *)&stack0xffffff94;
    puStack_4 = &stack0xffffff94;
    func_?(pIVar8);
  }
  pLVar10 = (List_1_VehicleInteractable_ *)func_?(pIVar8);
  pLStack_11 = pLVar10;
  (*(code *)method->parameters[1]->data)(pLVar10,method->parameters[1]);
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).localComponents;
  pLStack_12 = pLVar10;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__GetEnumerator
                        ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_14,this_00,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                        );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l;
    CStack_7.monitor = (MonitorData *)pLVar13->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar13->current).rgba;
    uStack_1 = 0;
    while (cVar15 = func_?(), cVar15 != '\0') {
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
      JsonProperty]::
      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                (&CStack_7,
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                );
      if ((method->parameters[2][0x17].type & 1) == 0) {
        func_?();
      }
      iVar16 = func_?();
      pLVar10 = pLStack_11;
      if (iVar16 != 0) {
        if (pLStack_11 == (List_1_VehicleInteractable_ *)0x0) goto code_?;
        func_?();
        func_?();
        pLVar10 = pLStack_11;
        (*(code *)method->parameters[3]->data)();
      }
    }
    *puStack_9 = 0x55;
    pOVar17 = CStack_7.fields.syncRoot;
    pIVar18 = CStack_7.fields.list;
    pMVar19 = CStack_7.monitor;
    pCVar20 = CStack_7.klass;
    uStack_1 = 0xffffffff;
    uVar21 = 0;
    uVar22._0_1_ = (
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>
                  ->_1).rank;
    uVar22._1_1_ = (
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>
                  ->_1).minimumAlignment;
    if (uVar22 != 0) {
      do {
        pLVar10 = pLStack_11;
        if (TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>->
            interfaceOffsets[uVar21].interfaceType == (Il2CppClass *)TypeInfo__System__IDisposable)
        {
          ppMVar23 = &(&(
                        TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>
                        ->vtable).Equals)
                      [TypeInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>
                       ->interfaceOffsets[uVar21].offset].method;
          goto code_?;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar22);
    }
    ppMVar23 = (MethodInfo **)func_?();
code_?:
    (*(code *)*ppMVar23)();
    CStack_7.klass = pCVar20;
    CStack_7.monitor = pMVar19;
    CStack_7.fields.list = pIVar18;
    CStack_7.fields.syncRoot = pOVar17;
    if (iStack_6 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return pLVar10;
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pLVar10 = (List_1_VehicleInteractable_ *)(*pcVar24)();
  return pLVar10;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).onLeave;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  pLVar1 = MVVehicleBase_LocalObjectsBase_GetLocalComponents_2
                     (this,
                      System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                     );
  if (pLVar1 != (List_1_VehicleInteractable_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
    }
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__
                       );
    if (pOVar2 == (Object *)0x1) {
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,0,
                          MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                         );
      if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
      (*(code *)pIVar3->klass[1]._0.typeMetadataHandle)();
    }
    pLVar1 = MVVehicleBase_LocalObjectsBase_GetLocalComponents_2
                       (this,
                        System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                       );
    if (pLVar1 != (List_1_VehicleInteractable_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (pOVar2 == (Object *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
      }
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (1 < (int)pOVar2) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
      }
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
      if (0 < (int)pOVar2) {
        this_01 = (TimedPlayReward *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,0,
                             MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_
                            );
        if (this_01 == (TimedPlayReward *)0x0) goto code_?;
        TimedPlayReward::TimedPlayReward_set_IsClaimable(this_01,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
     MVVehicleBase_LocalObjectsBase_OnHealthChange
               (MVVehicleBase_LocalObjectsBase *this,Object *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (v != (Object *)0x0) {
    if ((v->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?(v);
      if (0.0 < *pfVar1) {
        return;
      }
      iVar2 = (*(code *)(this->klass->vtable).__unknown_1.method)
                        (this,(this->klass->vtable).Destroy.methodPtr);
      if ((iVar2 != 0) &&
         (*(MVRuntimeDataVariable **)(iVar2 + 0xf0) != (MVRuntimeDataVariable *)0x0)) {
        pOVar3 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                           (*(MVRuntimeDataVariable **)(iVar2 + 0xf0),(MethodInfo *)0x0);
        uVar4 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pcVar5 = (char *)func_?(pOVar3);
          if (*pcVar5 != '\0') {
            return;
          }
          pMVar6 = (MethodInfo *)&UNK_?;
          this_02 = (ScaleAnimationBase *)
                    func_?(
                                   TypeInfo__MVVehicleBase_LocalObjectsBase___OnHealthChange_c__AnonStorey0
                                   );
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar6);
          if (this_02 != (ScaleAnimationBase *)0x0) {
            (this_02->fields)._._._._.m_CachedPtr = (void *)0x0;
            iVar2 = func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
            pMVar6 = 
            MethodInfo__MVVehicleBase_LocalObjectsBase___OnHealthChange_c__AnonStorey0____m__0_MVWorldObjectClient_
            ;
            *(Il2CppMethodPointer *)(iVar2 + 8) =
                 MethodInfo__MVVehicleBase_LocalObjectsBase___OnHealthChange_c__AnonStorey0____m__0_MVWorldObjectClient_
                 ->methodPointer;
            *(MethodInfo **)(iVar2 + 0x14) = pMVar6;
            *(ScaleAnimationBase **)(iVar2 + 0x10) = this_02;
            piVar7 = (int *)(*(code *)(this->klass->vtable).__unknown_1.method)
                                      (this,(this->klass->vtable).Destroy.methodPtr);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 0x210))(piVar7,iVar2,*(undefined4 *)(*piVar7 + 0x214));
              this_00 = (this_02->fields)._._._._.m_CachedPtr;
              if (this_00 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_00,0,(MethodInfo *)0x0);
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_03 = (PrefabPool *)
                        MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (this_03 != (PrefabPool *)0x0) {
                this_04 = (MVLocalObjectController *)
                          PrefabPool::PrefabPool_get_MVSmokePrefab(this_03,(MethodInfo *)0x0);
                woID = (*(code *)(this->klass->vtable).__unknown.method)
                                 (this,(this->klass->vtable).__unknown_1.methodPtr);
                if (this_04 != (MVLocalObjectController *)0x0) {
                  MVLocalObjectController::
                  MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
                            (this_04,woID,(this->fields).timeBeforeUnregisterAfterDeath,
                             (MethodInfo *)0x0);
                  iVar2 = (*(code *)(this->klass->vtable).__unknown_1.method)
                                    (this,(this->klass->vtable).Destroy.methodPtr);
                  if (iVar2 != 0) {
                    this_01 = *(MVRuntimeDataVariable **)(iVar2 + 0xf0);
                    v = (Object *)CONCAT13(1,v._0_3_);
                    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,(int)&v + 3);
                    if (this_01 != (MVRuntimeDataVariable *)0x0) {
                      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                                (this_01,pOVar3,(MethodInfo *)0x0);
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
    else {
      func_?(v,TypeInfo__System__Single);
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVVehicleBase+LocalObjectsBase() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).timeBeforeUnregisterAfterDeath = 3.0;
  method_00 = TypeInfo__System__Collections__Generic__List<UnityEngine::Component>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__)
  ;
  (this->fields).localComponents = (List_1_UnityEngine_Component_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

