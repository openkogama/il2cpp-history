
/* Void AddButton(String, UnityAction) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_AddButton
               (ContextMenu *this,String *buttonText,UnityAction *onClickCallback,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).contextMenuButtonPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                      );
  if ((this_01 != (Component *)0x0) &&
     (plVar1 = this_01[1].fields._.m_CachedPtr, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x5e8))(plVar1,buttonText);
    if ((this_01[1].monitor != (MonitorData *)0x0) &&
       (this_00 = *(UnityEvent **)(this_01[1].monitor + 0x100), this_00 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,onClickCallback,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      (this_01,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                        ,pTVar2,0,0,unaff_RDI);
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
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar2 == (Transform *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,pvVar5,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddLockedButton(String) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_AddLockedButton
               (ContextMenu *this,String *buttonText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).contextMenuLockedButtonPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                      );
  if ((this_00 != (Component *)0x0) &&
     (plVar1 = this_00[1].fields._.m_CachedPtr, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x5e8))(plVar1,buttonText,*(undefined8 *)(*plVar1 + 0x5f0));
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    (this_00,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                      ,pTVar2,0,0,unaff_RDI);
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pTVar2 == (Transform *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,pvVar5,0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Initialize
               (ContextMenu *this,int32_t woID,Vector3 *worldPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).woID = woID;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
            (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
             (MethodInfo *)0x0);
  fVar2 = worldPosition->y;
  fVar3 = worldPosition->z;
  (this->fields).worldPosition.x = worldPosition->x;
  (this->fields).worldPosition.y = fVar2;
  (this->fields).worldPosition.z = fVar3;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar4 != (MainCameraManager *)0x0) &&
     (obj = (pMVar4->fields).mainCamera, obj != (Camera *)0x0)) {
    uStack_5._0_4_ = (this->fields).worldPosition.x;
    uStack_5._4_4_ = (this->fields).worldPosition.y;
    uStack_6 = CONCAT44(uStack_6._4_4_,(this->fields).worldPosition.z);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    uStack_8 = 0;
    pvVar9 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar9,&uStack_5,2,&uStack_7);
    uVar11 = uStack_8;
    pRVar12 = (this->fields).rectTransform;
    uStack_13 = uStack_7;
    if (pRVar12 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_14 = 0;
      uStack_15 = 0;
      pvVar9 = (pRVar12->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar9);
      pRVar12 = (this->fields).rectTransform;
      if (pRVar12 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_5 = 0;
        uStack_6 = 0;
        pvVar9 = (pRVar12->fields)._._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar9);
        pRVar12 = (this->fields).rectTransform;
        if (pRVar12 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_16 = 0;
          uStack_17 = 0;
          pvVar9 = (pRVar12->fields)._._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(pvVar9);
          fVar3 = _UNK_?;
          fVar2 = (float)uStack_6 * (float)uStack_14 + _UNK_?;
          fVar18 = uStack_17._4_4_ * (float)uStack_14 + _UNK_?;
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          iVar19 = (*pcRam_?)();
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          fVar20 = (float)iVar19 - fVar3;
          iVar19 = (*pcRam_?)();
          fVar3 = (float)iVar19 - fVar3;
          if ((fVar2 <= (float)uStack_7) && (fVar2 = (float)uStack_7, fVar20 < (float)uStack_7))
          {
            fVar2 = fVar20;
          }
          if ((fVar18 <= uStack_13._4_4_) && (fVar18 = uStack_13._4_4_, fVar3 < uStack_13._4_4_)) {
            fVar18 = fVar3;
          }
          pRVar12 = (this->fields).rectTransform;
          if ((pRVar12 != (RectTransform *)0x0) &&
             (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar12,(MethodInfo *)0x0), obj_00 != (Transform *)0x0
             )) {
            uStack_5 = CONCAT44(fVar18,fVar2);
            uStack_6 = CONCAT44(uStack_6._4_4_,uVar11);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (obj_00->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar9,&uStack_5);
            return;
          }
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeLink(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_InitializeLink
               (ContextMenu *this,int32_t linkID,Vector3 *worldPosition,MethodInfo *method)

{
  fVar1 = worldPosition->y;
  fVar2 = worldPosition->z;
  (this->fields).worldPosition.x = worldPosition->x;
  (this->fields).worldPosition.y = fVar1;
  (this->fields).worldPosition.z = fVar2;
  (this->fields).linkMenu = 1;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar3 != (MainCameraManager *)0x0) &&
     (obj = (pMVar3->fields).mainCamera, obj != (Camera *)0x0)) {
    uStack_4._0_4_ = (this->fields).worldPosition.x;
    uStack_4._4_4_ = (this->fields).worldPosition.y;
    uStack_5 = CONCAT44(uStack_5._4_4_,(this->fields).worldPosition.z);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pvVar8 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_4,2,&uStack_6);
    uVar11 = uStack_7;
    pRVar12 = (this->fields).rectTransform;
    uStack_13 = uStack_6;
    if (pRVar12 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_14 = 0;
      uStack_15 = 0;
      pvVar8 = (pRVar12->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8);
      pRVar12 = (this->fields).rectTransform;
      if (pRVar12 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_4 = 0;
        uStack_5 = 0;
        pvVar8 = (pRVar12->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        pRVar12 = (this->fields).rectTransform;
        if (pRVar12 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_16 = 0;
          uStack_17 = 0;
          pvVar8 = (pRVar12->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar12,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar8);
          fVar2 = _UNK_?;
          fVar1 = (float)uStack_5 * (float)uStack_14 + _UNK_?;
          fVar18 = uStack_17._4_4_ * (float)uStack_14 + _UNK_?;
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          iVar19 = (*pcRam_?)();
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          fVar20 = (float)iVar19 - fVar2;
          iVar19 = (*pcRam_?)();
          fVar2 = (float)iVar19 - fVar2;
          if ((fVar1 <= (float)uStack_6) && (fVar1 = (float)uStack_6, fVar20 < (float)uStack_6))
          {
            fVar1 = fVar20;
          }
          if ((fVar18 <= uStack_13._4_4_) && (fVar18 = uStack_13._4_4_, fVar2 < uStack_13._4_4_)) {
            fVar18 = fVar2;
          }
          pRVar12 = (this->fields).rectTransform;
          if ((pRVar12 != (RectTransform *)0x0) &&
             (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar12,(MethodInfo *)0x0), obj_00 != (Transform *)0x0
             )) {
            uStack_4 = CONCAT44(fVar18,fVar1);
            uStack_5 = CONCAT44(uStack_5._4_4_,uVar11);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (obj_00->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar8,&uStack_4);
            return;
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
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


/* Void LateUpdate() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_LateUpdate(ContextMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_02 == (EventSystem *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ContextMenu____c);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ContextMenu____c);
      }
      this_01 = TypeInfo__ContextMenu____c->static_fields->__9__10_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ContextMenu____c);
        }
        object = TypeInfo__ContextMenu____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__ContextMenu____c->static_fields->__9__10_0 = this_01;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&TypeInfo__ContextMenu____c->static_fields->__9__10_0 >> 0xc);
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
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar3,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar4 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar4) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar3,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar1 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar4 = uVar4 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_OnDestroy(ContextMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).linkMenu == 0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    woID = (this->fields).woID;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Pop(ContextMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenu____c);
  }
  this_01 = TypeInfo__ContextMenu____c->static_fields->__9__10_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenu____c);
    }
    object = TypeInfo__ContextMenu____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenu____c->static_fields->__9__10_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenu____c->static_fields->__9__10_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_PopWoDestroyed
               (ContextMenu *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenu____c);
  }
  this_01 = TypeInfo__ContextMenu____c->static_fields->__9__10_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenu____c);
    }
    object = TypeInfo__ContextMenu____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenu____c___Pop_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenu____c->static_fields->__9__10_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenu____c->static_fields->__9__10_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_SetToScreenPoint
               (ContextMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
    uStack_2._0_4_ = (this->fields).worldPosition.x;
    uStack_2._4_4_ = (this->fields).worldPosition.y;
    uStack_3 = CONCAT44(uStack_3._4_4_,(this->fields).worldPosition.z);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    uStack_5 = 0;
    pvVar6 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_2,2,&uStack_4);
    uVar9 = uStack_5;
    pRVar10 = (this->fields).rectTransform;
    uStack_11 = uStack_4;
    if (pRVar10 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pRVar10 = (this->fields).rectTransform;
      if (pRVar10 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_2 = 0;
        uStack_3 = 0;
        pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6);
        pRVar10 = (this->fields).rectTransform;
        if (pRVar10 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_14 = 0;
          uStack_15 = 0;
          pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          fVar16 = _UNK_?;
          fVar17 = (float)uStack_3 * (float)uStack_12 + _UNK_?;
          fVar18 = uStack_15._4_4_ * (float)uStack_12 + _UNK_?;
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          iVar19 = (*pcRam_?)();
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          fVar20 = (float)iVar19 - fVar16;
          iVar19 = (*pcRam_?)();
          fVar16 = (float)iVar19 - fVar16;
          if ((fVar17 <= (float)uStack_4) && (fVar17 = (float)uStack_4, fVar20 < (float)uStack_4))
          {
            fVar17 = fVar20;
          }
          if ((fVar18 <= uStack_11._4_4_) && (fVar18 = uStack_11._4_4_, fVar16 < uStack_11._4_4_)) {
            fVar18 = fVar16;
          }
          pRVar10 = (this->fields).rectTransform;
          if ((pRVar10 != (RectTransform *)0x0) &&
             (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar10,(MethodInfo *)0x0), obj_00 != (Transform *)0x0
             )) {
            uStack_2 = CONCAT44(fVar18,fVar17);
            uStack_3 = CONCAT44(uStack_3._4_4_,uVar9);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (obj_00->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6,&uStack_2);
            return;
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ContextMenu::ContextMenu_Update(ContextMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
    uStack_2._0_4_ = (this->fields).worldPosition.x;
    uStack_2._4_4_ = (this->fields).worldPosition.y;
    uStack_3 = CONCAT44(uStack_3._4_4_,(this->fields).worldPosition.z);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    uStack_5 = 0;
    pvVar6 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_2,2,&uStack_4);
    uVar9 = uStack_5;
    pRVar10 = (this->fields).rectTransform;
    uStack_11 = uStack_4;
    if (pRVar10 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      pRVar10 = (this->fields).rectTransform;
      if (pRVar10 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_2 = 0;
        uStack_3 = 0;
        pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6);
        pRVar10 = (this->fields).rectTransform;
        if (pRVar10 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_14 = 0;
          uStack_15 = 0;
          pvVar6 = (pRVar10->fields)._._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          fVar16 = _UNK_?;
          fVar17 = (float)uStack_3 * (float)uStack_12 + _UNK_?;
          fVar18 = uStack_15._4_4_ * (float)uStack_12 + _UNK_?;
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          iVar19 = (*pcRam_?)();
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          fVar20 = (float)iVar19 - fVar16;
          iVar19 = (*pcRam_?)();
          fVar16 = (float)iVar19 - fVar16;
          if ((fVar17 <= (float)uStack_4) && (fVar17 = (float)uStack_4, fVar20 < (float)uStack_4))
          {
            fVar17 = fVar20;
          }
          if ((fVar18 <= uStack_11._4_4_) && (fVar18 = uStack_11._4_4_, fVar16 < uStack_11._4_4_)) {
            fVar18 = fVar16;
          }
          pRVar10 = (this->fields).rectTransform;
          if ((pRVar10 != (RectTransform *)0x0) &&
             (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar10,(MethodInfo *)0x0), obj_00 != (Transform *)0x0
             )) {
            uStack_2 = CONCAT44(fVar18,fVar17);
            uStack_3 = CONCAT44(uStack_3._4_4_,uVar9);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (obj_00->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6,&uStack_2);
            return;
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

