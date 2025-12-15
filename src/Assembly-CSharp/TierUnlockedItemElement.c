
/* GameObject CreatePreviewObjectClone() */

GameObject *
Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_CreatePreviewObjectClone
          (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JetPackVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TintObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).previewObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (*(pMVar1->klass->vtable).SetupTierInventory.methodPtr)();
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (pGVar2 = (pMVar1->fields).gameObject, pGVar2 == (GameObject *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar4)();
      return pGVar2;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar4)();
      return pGVar2;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (pGVar2 = (pMVar1->fields).gameObject, pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pMVar6 = 
    GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
    ;
    bVar7 = false;
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (pGVar2 = (pMVar1->fields).gameObject, pGVar2 == (GameObject *)0x0))
    goto code_?;
    if ((
        GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                   );
    }
    p_Var9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (pGVar2,0,((pMVar6->field7_0x38).rgctx_data)->method);
    pOVar8 = (Object *)0x0;
    if (p_Var9 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var16 = p_Var9->vector;
    pOVar9 = pOVar8;
    while (uVar10 = (uint)pOVar9, (int)uVar10 < (int)p_Var9->max_length) {
      if ((uint)p_Var9->max_length <= uVar10) goto code_?;
      pGVar11 = (GreyOutObjectScript *)*pp_Var16;
      if (pGVar11 == (GreyOutObjectScript *)0x0) goto code_?;
      if ((pGVar11->fields).isGreyedIn == 0) {
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar11,(MethodInfo *)0x0);
        bVar7 = true;
      }
      pp_Var16 = pp_Var16 + 1;
      pOVar9 = (Object *)(ulonglong)(uVar10 + 1);
    }
    pMVar1 = (this->fields).previewObject;
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    pGVar2 = (pMVar1->fields).gameObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar2 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pGVar2,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (pGVar12 = (pMVar1->fields).gameObject, pGVar12 == (GameObject *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar12->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar12,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar4)();
      return pGVar2;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar4)();
      return pGVar2;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pMVar6 = 
    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
    ;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                   );
    }
    p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (pGVar2,0,((pMVar6->field7_0x38).rgctx_data)->method);
    if (p_Var10 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var16 = p_Var10->vector;
    pOVar9 = pOVar8;
    obj = pOVar8;
    while (pMVar6 = 
           UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
          , uVar10 = (uint)pOVar9, (int)uVar10 < (int)p_Var10->max_length) {
      if ((uint)p_Var10->max_length <= uVar10) goto code_?;
      pOVar9 = (Object *)*pp_Var16;
      if (pOVar9 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar13 = pOVar9[1].klass;
      if (pOVar13 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar13,0);
      pOVar13 = pOVar9->klass;
      bVar14 = (TypeInfo__TintObject->_1).naturalAligment;
      if ((bVar14 <= (pOVar13->_1).naturalAligment) &&
         ((pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] == (Il2CppClass *)TypeInfo__TintObject))
      {
        bVar14 = (TypeInfo__TintObject->_1).naturalAligment;
        if (((pOVar13->_1).naturalAligment < bVar14) ||
           ((pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] != (Il2CppClass *)TypeInfo__TintObject)
           ) {
          FUN_?(pOVar9);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        (*(code *)pOVar13[1]._0.name)(pOVar9,(this->fields).team,pOVar13[1]._0.namespaze);
      }
      pOVar13 = pOVar9->klass;
      bVar14 = (TypeInfo__MVPickupOwner->_1).naturalAligment;
      if ((bVar14 <= (pOVar13->_1).naturalAligment) &&
         ((pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] == (Il2CppClass *)TypeInfo__MVPickupOwner
         )) {
        bVar14 = (TypeInfo__MVPickupOwner->_1).naturalAligment;
        if (((pOVar13->_1).naturalAligment < bVar14) ||
           ((pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
            (Il2CppClass *)TypeInfo__MVPickupOwner)) {
          FUN_?(pOVar9);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        *(undefined1 *)&pOVar9[2].klass = 0;
      }
      bVar14 = (TypeInfo__JetPackVisualization->_1).naturalAligment;
      if (((bVar14 <= (pOVar13->_1).naturalAligment) &&
          ((pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] ==
           (Il2CppClass *)TypeInfo__JetPackVisualization)) &&
         ((bVar14 = (TypeInfo__JetPackVisualization->_1).naturalAligment,
          (pOVar13->_1).naturalAligment < bVar14 ||
          (obj = pOVar9,
          (pOVar13->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
          (Il2CppClass *)TypeInfo__JetPackVisualization)))) {
        FUN_?(pOVar9);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pp_Var16 = pp_Var16 + 1;
      pOVar9 = (Object *)(ulonglong)(uVar10 + 1);
    }
    if ((
        UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                   );
    }
    p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (pGVar2,0,((pMVar6->field7_0x38).rgctx_data)->method);
    if (p_Var10 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var16 = p_Var10->vector;
    pOVar9 = pOVar8;
    while (pMVar6 = 
           UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
          , uVar10 = (uint)pOVar9, (int)uVar10 < (int)p_Var10->max_length) {
      if ((uint)p_Var10->max_length <= uVar10) goto code_?;
      this_00 = (ParticleSystem *)*pp_Var16;
      if (this_00 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                (this_00,1,(MethodInfo *)0x0);
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
      pvVar3 = (this_00->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcRam_? = pcVar4;
      pvVar3 = (void *)(*pcRam_?)(pvVar3);
      pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar3,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                          );
      if (pOVar9 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar13 = pOVar9[1].klass;
      if (pOVar13 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar13);
      pp_Var16 = pp_Var16 + 1;
      pOVar9 = (Object *)(ulonglong)(uVar10 + 1);
    }
    if ((
        UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                   );
    }
    p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (pGVar2,0,((pMVar6->field7_0x38).rgctx_data)->method);
    if (p_Var10 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var16 = p_Var10->vector;
    pOVar9 = pOVar8;
    while (uVar10 = (uint)pOVar9, (int)uVar10 < (int)p_Var10->max_length) {
      if ((uint)p_Var10->max_length <= uVar10) goto code_?;
      if ((UseInteractorVisualization *)*pp_Var16 == (UseInteractorVisualization *)0x0)
      goto code_?;
      UseInteractorVisualization::UseInteractorVisualization_Disable
                ((UseInteractorVisualization *)*pp_Var16,(MethodInfo *)0x0);
      pp_Var16 = pp_Var16 + 1;
      pOVar9 = (Object *)(ulonglong)(uVar10 + 1);
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
    if (obj != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (obj[1].klass != (Object__Class *)0x0) {
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
        pOVar13 = obj[1].klass;
        if (pOVar13 == (Object__Class *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        pcRam_? = pcVar4;
        pvVar3 = (void *)(*pcRam_?)(pOVar13);
        pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar3,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if ((pGVar12 == (GameObject *)0x0) ||
           (pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar12,
                                 RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                ), pOVar9 == (Object *)0x0)) goto code_?;
        bVar15 = cRam_? == '\0';
        *(undefined4 *)&pOVar9[2].klass = 0x428c0000;
        if (bVar15) {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar13 = obj[1].klass;
        if (pOVar13 == (Object__Class *)0x0) goto code_?;
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        pcRam_? = pcVar4;
        pvVar3 = (void *)(*pcRam_?)(pOVar13);
        pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar3,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar9 == (Object *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar13 = pOVar9[1].klass;
        if (pOVar13 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pGVar2 = (GameObject *)(*pcVar4)();
          return pGVar2;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pOVar13);
        fVar16 = (this->fields).cameraOffset.z - _UNK_?;
        (this->fields).cameraOffset.x = (this->fields).cameraOffset.x + _UNK_?;
        (this->fields).cameraOffset.z = fVar16;
        goto code_?;
      }
    }
    pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                        );
    if (pOVar9 != (Object *)0x0) {
      *(undefined4 *)&pOVar9[2].klass = 0x428c0000;
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pGVar2 = (GameObject *)(*pcVar4)();
        return pGVar2;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,1);
      if (bVar7) {
        pp_Var16 = p_Var9->vector;
        while (uVar10 = (uint)pOVar8, (int)uVar10 < (int)p_Var9->max_length) {
          if ((uint)p_Var9->max_length <= uVar10) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            pGVar2 = (GameObject *)(*pcVar4)();
            return pGVar2;
          }
          pGVar11 = (GreyOutObjectScript *)*pp_Var16;
          if (pGVar11 == (GreyOutObjectScript *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (UnityAction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_01,(Object *)pGVar11,
                     MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (pGVar11,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                     (MethodInfo *)0x0);
          (pGVar11->fields).isGreyedIn = 0;
          pp_Var16 = pp_Var16 + 1;
          pOVar8 = (Object *)(ulonglong)(uVar10 + 1);
        }
      }
      return pGVar2;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar4)();
  return pGVar2;
}


/* Color GetTeamColor(MVTeam) */

Color * Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_GetTeamColor
                  (Color *__return_storage_ptr__,TierUnlockedItemElement *this,MVTeam__Enum team,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_OffWhite;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Void Initialize(List`1[MVWorldObjectClient], Int32) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_Initialize
               (TierUnlockedItemElement *this,List_1_MVWorldObjectClient_ *tierShopItemData,
               int32_t itemIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).objectPreviewerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = (InventoryItemPreviewer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar1,
                       InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                      );
  iVar2 = iRam_?;
  (this->fields).objectPreviewer = pIVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectPreviewer >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  if (tierShopItemData != (List_1_MVWorldObjectClient_ *)0x0) {
    if ((tierShopItemData->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pMVar9 = (tierShopItemData->fields)._items;
    if (pMVar9 != (MVWorldObjectClient__Array *)0x0) {
      if ((int)pMVar9->max_length == 0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (this->fields).previewObject = pMVar9->vector[0];
      if (iVar2 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).previewObject >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__InventoryItem);
      }
      pMVar10 = (this->fields).previewObject;
      this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      if ((pMVar10 != (MVWorldObjectClient *)0x0) &&
         (IVar11 = (*(pMVar10->klass->vtable).get_DocumentationType.methodPtr)
                            (pMVar10,(pMVar10->klass->vtable).get_DocumentationType.method),
         this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)) {
        iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                 Int32Enum,UnityEngine::Vector3]::
                 Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                           (this_00,IVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar12) {
          if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__InventoryItem);
          }
          pMVar10 = (this->fields).previewObject;
          this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (((pMVar10 == (MVWorldObjectClient *)0x0) ||
              (IVar11 = (*(pMVar10->klass->vtable).get_DocumentationType.methodPtr)
                                 (pMVar10,(pMVar10->klass->vtable).get_DocumentationType.method),
              this_01 ==
              (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0)) ||
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,IVar11,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                  ), pOVar13 == (Object *)0x0)) goto DAT_?;
          fVar14 = *(float *)&pOVar13[3].klass;
          *(MonitorData **)&(this->fields).cameraOffset = pOVar13[2].monitor;
          (this->fields).cameraOffset.z = fVar14;
        }
        this_03 = TierUnlockedItemElement_CreatePreviewObjectClone(this,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_03,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar16 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if (pTVar15 != (Transform *)0x0) {
            fStack_17 = (pQVar16->identityQuaternion).x;
            fStack_18 = (pQVar16->identityQuaternion).y;
            fStack_19 = (pQVar16->identityQuaternion).z;
            fStack_20 = (pQVar16->identityQuaternion).w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar21 = (pTVar15->fields)._._.m_CachedPtr;
            if (pvVar21 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar22 = func_?(&UNK_?);
              FUN_?(uVar22,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar21,&fStack_17);
            self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
            pSVar23 = StringLiteral_Preview_Root___TierShopItem;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
            GameObject_Internal_CreateGameObject(self,pSVar23,(MethodInfo *)0x0);
            if (self != (GameObject *)0x0) {
              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(self,(MethodInfo *)0x0);
              bVar7 = iRam_? != 0;
              (this->fields).rootTransform = pTVar15;
              if (bVar7) {
                uVar3 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar5 == *puVar6;
                  if (bVar7) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              fVar14 = _UNK_?;
              pMVar10 = (this->fields).previewObject;
              pIVar1 = (this->fields).objectPreviewer;
              iVar12 = (this->fields).previewWidth;
              textureHeight = (this->fields).previewHeight;
              fVar24 = (float)itemIndex * _UNK_?;
              if (pMVar10 != (MVWorldObjectClient *)0x0) {
                layersToRender = (pMVar10->fields).previewLayerMask;
                pMVar10 = (this->fields).previewObject;
                pTVar15 = (this->fields).rootTransform;
                if (pMVar10 != (MVWorldObjectClient *)0x0) {
                  iStack_25 = (pMVar10->fields)._.type;
                  auStack_26._8_8_ = (MonitorData *)0xffffffffffffffff;
                  auStack_26._0_8_ = TypeInfo__MV__WorldObject__WorldObjectType;
                  pSVar23 = mscorlib.dll::System::Enum::Enum_ToString
                                      ((Enum *)auStack_26,(MethodInfo *)0x0);
                  if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                    VStack_27.y = fVar14;
                    VStack_27.x = fVar14;
                    auStack_26._0_4_ = (this->fields).cameraOffset.x;
                    auStack_26._4_4_ = (this->fields).cameraOffset.y;
                    auStack_26._8_4_ = (this->fields).cameraOffset.z;
                    VStack_27.z = fVar24;
                    InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                              (pIVar1,iVar12,textureHeight,CameraClearFlags__Enum_Color,
                               layersToRender,(Vector3 *)auStack_26,pTVar15,&VStack_27,pSVar23,
                               (this->fields).previewObject,this_03,(MethodInfo *)0x0);
                    pIVar1 = (this->fields).objectPreviewer;
                    if ((pIVar1 != (InventoryItemPreviewer *)0x0) &&
                       (this_02 = (this->fields).previewImage, this_02 != (RawImage *)0x0)) {
                      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                (this_02,(Texture *)(pIVar1->fields).previewTexture,
                                 (MethodInfo *)0x0);
                      pTVar28 = (this->fields).itemAmountText;
                      iVar12 = (tierShopItemData->fields)._size;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      auStack_26 = ZEXT416(0);
                      pSVar23 = mscorlib.dll::System::Number::Number_FormatInt32
                                          (iVar12,(ReadOnlySpan_1_Char_ *)auStack_26,
                                           (IFormatProvider *)0x0,(MethodInfo *)0x0);
                      pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                          (StringLiteral_x,pSVar23,(MethodInfo *)0x0);
                      if (pTVar28 != (Text *)0x0) {
                        (*(pTVar28->klass->vtable).set_text.methodPtr)
                                  (pTVar28,pSVar23,(pTVar28->klass->vtable).set_text.method);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_OnDestroy
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).rootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
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
  bVar2 = iRam_? != 0;
  (this->fields).rootTransform = (Transform *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar7 = (this->fields).previewObject;
  if (pMVar7 != (MVWorldObjectClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar7->klass->vtable).UnSetupTierInventory.methodPtr)
              (pMVar7,(pMVar7->klass->vtable).UnSetupTierInventory.method);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
               (TierUnlockedItemElement *this,MVTeam__Enum team,MethodInfo *method)

{
  (this->fields).team = team;
  pIVar1 = (this->fields).teamRequirementImage;
  if ((pIVar1 != (Image *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).teamRequirementImage;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    switch(team) {
    case MVTeam__Enum_Blue:
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_TeamBlue;
      break;
    case MVTeam__Enum_Red:
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_TeamRed;
      break;
    case MVTeam__Enum_Green:
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_TeamGreen;
      break;
    case MVTeam__Enum_Yellow:
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_TeamYellow;
      break;
    default:
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_OffWhite;
    }
    pCVar2 = Styles::Styles_GetColor(&CStack_3,colorStyle,(MethodInfo *)0x0);
    CStack_3.r = pCVar2->r;
    CStack_3.g = pCVar2->g;
    CStack_3.b = pCVar2->b;
    CStack_3.a = pCVar2->a;
    if (pIVar1 != (Image *)0x0) {
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,&CStack_3,(pIVar1->klass->vtable).set_color.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TierUnlockedItemElement() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement__ctor
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).team = 5;
  (this->fields).cameraOffset.x = 0.0;
  (this->fields).cameraOffset.y = 0.0;
  (this->fields).cameraOffset.z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

