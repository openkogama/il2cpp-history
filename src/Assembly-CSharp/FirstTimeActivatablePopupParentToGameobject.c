
/* Void DoShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_DoShow
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeChildDestroyedCallback_MethodInfo__UnityEngine__Component__GetComponent<FirstTimeChildDestroyedCallback>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatablePopupParentToGameobject__OnGameObjectDestroyed__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatablePopup::FirstTimeActivatablePopup_CreatePopup
            ((FirstTimeActivatablePopup *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields)._.popup;
  if (pFVar1 != (FirstTimeEventPopup *)0x0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pFVar1,
                        FirstTimeChildDestroyedCallback_MethodInfo__UnityEngine__Component__GetComponent<FirstTimeChildDestroyedCallback>__
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
    if (pOVar2 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        this_00 = (Object__Class *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this_00,(Object *)this,
                   MethodInfo__FirstTimeActivatablePopupParentToGameobject__OnGameObjectDestroyed__,
                   (MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        pOVar2[2].klass = this_00;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)(pOVar2 + 2) >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
      }
    }
    pFVar1 = (this->fields)._.popup;
    if (pFVar1 != (FirstTimeEventPopup *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pFVar1,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                        ,pTVar8,0,0,unaff_RDI);
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pvVar10 = (obj->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar8 == (Transform *)0x0) {
          pvVar11 = (void *)0x0;
        }
        else {
          pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar10,pvVar11,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_OnDestroy
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
  }
  pFVar1 = (this->fields)._.popup;
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
  if (pFVar1 != (FirstTimeEventPopup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pFVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pFVar1 = (this->fields)._.popup;
      if (pFVar1 == (FirstTimeEventPopup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pFVar1,(MethodInfo *)0x0);
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
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)this_00,(MethodInfo *)0x0);
  pAVar4 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar5 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar3,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar5 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar3,pAVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar5;
    pAVar4 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar6 = FUN_?(pDVar3,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar6 == 0) {
      FUN_?(pDVar3,pAVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Void OnGameObjectDestroyed() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_OnGameObjectDestroyed
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._._.firstTimeEvent,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  CVar1._.m_CachedPtr = (Object_1__Fields)(void *)0x0;
  if (this != (FirstTimeActivatablePopupParentToGameobject *)0x0) {
    CVar1._.m_CachedPtr = (this->fields)._._._._._._._;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(CVar1._.m_CachedPtr,0);
  return;
}


/* Void ParentToTransform() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject_ParentToTransform
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  this_00 = (this->fields)._.popup;
  if (this_00 != (FirstTimeEventPopup *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                      ,pTVar1,0,0,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pTVar1 == (Transform *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,pvVar4,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FirstTimeActivatablePopupParentToGameobject() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupParentToGameobject::
     FirstTimeActivatablePopupParentToGameobject__ctor
               (FirstTimeActivatablePopupParentToGameobject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UIPushOption>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._.pushOptions = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.pushOptions >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.skipAllowed = 1;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

