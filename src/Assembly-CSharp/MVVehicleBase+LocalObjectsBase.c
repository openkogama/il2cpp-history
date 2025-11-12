
/* Void Destroy() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).onDestroy != (Action *)0x0) {
    pAVar1 = (this->fields).onDestroy;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  LStack_2._list = (List_1_System_Object_ *)(this->fields).localComponents;
  if ((List_1_UnityEngine_Component_ *)LStack_2._list == (List_1_UnityEngine_Component_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_Component_ *)LStack_2._list)->fields)._version << 0x20)
  ;
  uStack_11 = 0;
  LStack_2._8_8_ = pLStack_10;
  LStack_2._current = (Object *)0x0;
  uStack_5 = 0;
  pLStack_10 = &LStack_2;
  while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_2,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                           ), obj = LStack_2._current, bVar12 != 0) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_More_than_1_rigidBody__This_is_u);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_VehicleInteractabl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_rigid_bodies);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).onEnter != (Action *)0x0) {
    pAVar1 = (this->fields).onEnter;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  pLVar2 = MVVehicleBase_LocalObjectsBase_GetLocalComponents
                     (this,
                      System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                     );
  pLVar3 = MVVehicleBase_LocalObjectsBase_GetLocalComponents
                     (this,
                      System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                     );
  if (pLVar3 == (List_1_System_Object_ *)0x0) goto code_?;
  if ((pLVar3->fields)._size == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
  }
  if ((pLVar3->fields)._size == 1) {
    if ((pLVar3->fields)._size == 0) goto code_?;
    pOVar4 = (pLVar3->fields)._items;
    if (pOVar4 == (Object__Array *)0x0) goto code_?;
    if ((int)pOVar4->max_length == 0) goto code_?;
    pOVar5 = pOVar4->vector[0];
    if (pOVar5 == (Object *)0x0) goto code_?;
    (*(code *)pOVar5->klass[1]._0.interopData)(pOVar5,0xe,0xffffffff,pOVar5->klass[1]._0.klass);
  }
  if (pLVar2 != (List_1_System_Object_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
    }
    iVar6 = (pLVar2->fields)._size;
    if (1 < iVar6) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
      iVar6 = (pLVar2->fields)._size;
    }
    if (iVar6 != 1) {
      return;
    }
    if ((pLVar2->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pOVar4 = (pLVar2->fields)._items;
    if (pOVar4 != (Object__Array *)0x0) {
      if ((int)pOVar4->max_length == 0) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pOVar4->vector[0] != (Object *)0x0) {
        *(undefined1 *)&pOVar4->vector[0][4].klass = 1;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* List`1[System.Object] GetLocalComponents[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
MVVehicleBase_LocalObjectsBase_GetLocalComponents
          (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pLVar2 = (List_1_System_Object_ *)FUN_?(pvVar1);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             (method->field7_0x38).rgctx_data[1].method);
  pLVar3 = (this->fields).localComponents;
  if (pLVar3 == (List_1_UnityEngine_Component_ *)0x0) {
    FUN_?();
code_?:
    FUN_?(unaff_RDI,this);
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = (List_1_System_Object_ *)pLVar3;
    while( true ) {
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Component>__MoveNext__
                          );
        unaff_RDI = LStack_11._current;
        if (bVar12 == 0) {
          return pLVar2;
        }
        pvVar1 = (method->field7_0x38).rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
          pvVar1 = (void *)FUN_?(pvVar1);
        }
        lVar13 = FUN_?(unaff_RDI,pvVar1);
      } while (lVar13 == 0);
      if (pLVar2 == (List_1_System_Object_ *)0x0) break;
      pvVar1 = (method->field7_0x38).rgctx_data[3].rgctxDataDummy;
      this = (method->field7_0x38).rgctx_data[2].rgctxDataDummy;
      if (((ulonglong)this[5].fields.onLeave & 0x10000000000) == 0) {
        this = (MVVehicleBase_LocalObjectsBase *)FUN_?(this);
      }
      if (unaff_RDI == (Object *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = FUN_?(unaff_RDI,this);
        if (lVar13 == 0) goto code_?;
      }
      FUN_?(pLVar2,lVar13,pvVar1);
    }
  }
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pLVar2 = (List_1_System_Object_ *)(*pcVar14)();
  return pLVar2;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<VehicleInteractable>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRigidBody>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_More_than_1_rigidBody__This_is_u);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_VehicleInteractabl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_rigid_bodies);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onLeave;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  pLVar2 = MVVehicleBase_LocalObjectsBase_GetLocalComponents
                     (this,
                      System__Collections__Generic__List<VehicleInteractable>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<VehicleInteractable>__
                     );
  if (pLVar2 == (List_1_System_Object_ *)0x0) goto code_?;
  if ((pLVar2->fields)._size == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_get_VehicleInteractabl,(MethodInfo *)0x0);
  }
  if ((pLVar2->fields)._size == 1) {
    if ((pLVar2->fields)._size == 0) goto code_?;
    pOVar3 = (pLVar2->fields)._items;
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if ((int)pOVar3->max_length == 0) goto code_?;
    pOVar4 = pOVar3->vector[0];
    if (pOVar4 == (Object *)0x0) goto code_?;
    (*(code *)pOVar4->klass[1]._0.declaringType)(pOVar4,0xe,0xffffffff,0,pOVar4->klass[1]._0.parent)
    ;
  }
  pLVar2 = MVVehicleBase_LocalObjectsBase_GetLocalComponents
                     (this,
                      System__Collections__Generic__List<MVRigidBody>_MethodInfo__MVVehicleBase__LocalObjectsBase__GetLocalComponents<MVRigidBody>__
                     );
  if (pLVar2 != (List_1_System_Object_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_get_rigid_bodies,(MethodInfo *)0x0);
    }
    if (1 < (pLVar2->fields)._size) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_More_than_1_rigidBody__This_is_u,(MethodInfo *)0x0);
    }
    iVar5 = (pLVar2->fields)._size;
    if (iVar5 < 1) {
      return;
    }
    if (iVar5 == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pOVar3 = (pLVar2->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      if ((int)pOVar3->max_length == 0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pOVar3->vector[0] != (Object *)0x0) {
        *(undefined1 *)&pOVar3->vector[0][4].klass = 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::
     MVVehicleBase_LocalObjectsBase_OnHealthChange
               (MVVehicleBase_LocalObjectsBase *this,Object *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0___OnHealthChange_g__DetachLocalAvatar_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0);
  plVar2 = (longlong *)
           (*(this->klass->vtable).__unknown_1.methodPtr)
                     (this,(this->klass->vtable).__unknown_1.method);
  if ((plVar2 != (longlong *)0x0) && (v != (Object *)0x0)) {
    if ((v->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(v,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStackX_8 = (**(code **)(*plVar2 + 0x6f8))
                          (plVar2,*(undefined4 *)&v[1].klass,*(undefined8 *)(*plVar2 + 0x700));
    if ((char)uStackX_8 == '\0') {
      return;
    }
    if (pOVar1 != (Object *)0x0) {
      bVar4 = iRam_? != 0;
      pOVar1[1].klass = (Object__Class *)0x0;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      plVar2 = (longlong *)
               (*(this->klass->vtable).__unknown_1.methodPtr)
                         (this,(this->klass->vtable).__unknown_1.method);
      this_03 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_03,pOVar1,
                 MethodInfo__MVVehicleBase_LocalObjectsBase____c__DisplayClass15_0___OnHealthChange_g__DetachLocalAvatar_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x408))(plVar2);
        if ((MVAvatarLocal *)pOVar1[1].klass != (MVAvatarLocal *)0x0) {
          MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                    ((MVAvatarLocal *)pOVar1[1].klass,0,(MethodInfo *)0x0);
        }
        cVar9 = uStackX_8._1_1_;
        if (uStackX_8._1_1_ == '\0') {
          (*(this->klass->vtable).Leave.methodPtr)(this,(this->klass->vtable).Leave.method);
        }
        else {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
          pMVar11 = (pMVar10->fields)._PlayerController_k__BackingField;
          key = (*(this->klass->vtable).__unknown.methodPtr)
                          (this,(this->klass->vtable).__unknown.method);
          fVar12 = (this->fields).timeBeforeUnregisterAfterDeath;
          if (pMVar11 == (MVLocalObjectController *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Dismounted_object_not_found);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    (pMVar11->fields).dismountedLocalControlledObjects;
          if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
          goto code_?;
          iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                            (this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                             ->klass->rgctx_data[0x21].method);
          if (iVar13 < 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Dismounted_object_not_found,(MethodInfo *)0x0);
          }
          else {
            this_01 = (pMVar11->fields).dismountedLocalControlledObjects;
            if ((this_01 ==
                 (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                  *)0x0) ||
               (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                                   ), pOVar1 == (Object *)0x0)) goto code_?;
            fVar12 = _UNK_? - fVar12;
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            fVar15 = (float)(*pcRam_?)();
            *(float *)&pOVar1[1].klass = fVar15 - fVar12;
          }
        }
        lVar16 = (*(this->klass->vtable).__unknown_1.methodPtr)
                           (this,(this->klass->vtable).__unknown_1.method);
        if (lVar16 != 0) {
          this_02 = *(MVRuntimeDataVariable **)(lVar16 + 0x168);
          uStackX_8 = CONCAT11(uStackX_8._1_1_,cVar9);
          pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_8);
          if (this_02 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_02,pOVar1,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVVehicleBase+LocalObjectsBase() */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
               (MVVehicleBase_LocalObjectsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).timeBeforeUnregisterAfterDeath = 3.0;
  this_00 = (List_1_UnityEngine_Component_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).localComponents = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).localComponents >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

