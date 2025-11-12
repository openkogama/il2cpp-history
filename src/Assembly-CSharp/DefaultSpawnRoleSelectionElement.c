
/* Void Activate() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Activate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    uVar2 = (undefined7)((ulonglong)method >> 8);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71(uVar2,1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Deactivate
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_Initialize
               (DefaultSpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  iVar1 = iRam_?;
  (this->fields).woId = woId;
  (this->fields).onSelectedCallback = onSelectedCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onSelectedCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).onActivatedCallback = onActivatedCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onActivatedCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnDestroy
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
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
  pvVar2 = (void *)0x0;
  if (pSVar1 != (SpawnRolePreviewer *)0x0) {
    pvVar2 = (pSVar1->fields)._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnPointerUp
               (DefaultSpawnRoleSelectionElement *this,PointerEventData *eventData,
               MethodInfo *method)

{
  if ((this->fields).isDragging == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).Select.methodPtr)(this,(this->klass->vtable).Select.method);
    return;
  }
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_OnUnSelected
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  (this->fields).isSelected = 0;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_02 = (pSVar1->fields).grayScaleEffect, this_02 != (GrayscaleEffect *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_02,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Idle);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = (pSVar1->fields).body;
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
      if (pMVar2 != (MVBodyObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          iVar5 = (*pcRam_?)(0,80000);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar6 != (MVGameControllerBase *)0x0) &&
             (this_00 = (pMVar6->fields).game, this_00 != (MVNetworkGame *)0x0)) {
            iVar7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_00,(MethodInfo *)0x0);
            pMVar2 = (pSVar1->fields).body;
            if ((pMVar2 != (MVBodyObject *)0x0) &&
               (this_01 = (pMVar2->fields).boneAnimation, this_01 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_StartAnimation
                        (this_01,StringLiteral_Idle,iVar7 + (-500 - iVar5),(MethodInfo *)0x0);
              return;
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetAvatarRenderers(GameObject) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_ResetAvatarRenderers
               (DefaultSpawnRoleSelectionElement *this,GameObject *avatarObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
  ;
  if (avatarObject != (GameObject *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (avatarObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var8 = p_Var3->vector;
      for (uVar3 = uVar2;
          pMVar1 = 
          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
          , (int)uVar3 < (int)p_Var3->max_length; uVar3 = uVar3 + 1) {
        if ((uint)p_Var3->max_length <= uVar3) goto code_?;
        pOVar4 = (Object *)*pp_Var8;
        if (pOVar4 == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = pOVar4[1].klass;
        if (pOVar5 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar4,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pOVar5);
        pp_Var8 = pp_Var8 + 1;
      }
      if ((
          PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                     );
      }
      p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (avatarObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
      if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var8 = p_Var3->vector;
        do {
          if ((int)p_Var3->max_length <= (int)uVar2) {
            return;
          }
          if ((uint)p_Var3->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pOVar4 = (Object *)*pp_Var8;
          if (pOVar4 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar5 = pOVar4[1].klass;
          if (pOVar5 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar4,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          gcHandlePtr = (void *)(*pcRam_?)(pOVar5);
          pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (gcHandlePtr,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
          if (pOVar4 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar5 = pOVar4[1].klass;
          if (pOVar5 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar4,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pOVar5);
          uVar2 = uVar2 + 1;
          pp_Var8 = pp_Var8 + 1;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::DefaultSpawnRoleSelectionElement_Select
               (DefaultSpawnRoleSelectionElement *this,MethodInfo *method)

{
  if ((this->fields).isSelected != 0) {
    return;
  }
  pUVar1 = (this->fields).onSelectedCallback;
  if (pUVar1 != (UnityAction_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(this->fields).spawnRoleIndex,
               (pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::DefaultSpawnRoleSelectionElement::
     DefaultSpawnRoleSelectionElement_SetupPreviewImage
               (DefaultSpawnRoleSelectionElement *this,GameObject *spawnRoleObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnRole);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).spawnRolePreviewObject = spawnRoleObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRolePreviewObject >> 0xc);
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
  pSVar6 = (this->fields).spawnRolePreviewerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar6 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar6,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  bVar1 = iRam_? != 0;
  (this->fields).spawnRolePreviewer = pSVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
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
  avatarObject = (GameObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)spawnRoleObject,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
  DefaultSpawnRoleSelectionElement_ResetAvatarRenderers(this,avatarObject,(MethodInfo *)0x0);
  if (avatarObject == (GameObject *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (avatarObject,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar8 != (Transform *)0x0) {
    fStack_10 = (pQVar9->identityQuaternion).x;
    fStack_11 = (pQVar9->identityQuaternion).y;
    fStack_12 = (pQVar9->identityQuaternion).z;
    fStack_13 = (pQVar9->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar14,&fStack_10);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    name = StringLiteral_Preview_Root___TierShopItem;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,name,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pSVar6 = (this->fields).spawnRolePreviewer;
      if (pSVar6 != (SpawnRolePreviewer *)0x0) {
        VStack_16.y = _UNK_?;
        VStack_16.x = _UNK_?;
        VStack_17.z = _UNK_?;
        VStack_17._0_8_ = (ulonglong)_UNK_? << 0x20;
        VStack_16.z = (float)(this->fields).spawnRoleIndex * _UNK_? + _UNK_?;
        SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                  (pSVar6,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,
                   LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_17,pTVar8,
                   &VStack_16,StringLiteral_SpawnRole,(this->fields).spawnRoleIndex,avatarObject,
                   (MethodInfo *)0x0);
        pSVar6 = (this->fields).spawnRolePreviewer;
        if ((pSVar6 != (SpawnRolePreviewer *)0x0) &&
           (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pSVar6->fields).previewTexture,(MethodInfo *)0x0);
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

