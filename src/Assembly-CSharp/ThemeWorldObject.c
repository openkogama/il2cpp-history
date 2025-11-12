
/* Void CommitSettings() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_CommitSettings
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_settings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).operationRequests;
    iVar4 = (this->fields)._._.id;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    value = ThemeWorldObject_get_SettingsData(this,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      pIVar5 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_settings,(Object *)value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),2),
                 pIVar5[0x22].method);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        uVar6 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ,iVar4,this_00,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        value_00 = (Object *)FUN_?(uRam_?,&stack0x00000010);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar8 = (undefined7)((ulonglong)method_00 >> 8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x16,value_00,(InsertionBehavior__Enum)uVar7,method_00);
          uVar6 = CONCAT71(uVar8,0x12);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x12,(Object *)this_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pPVar9 = (pMVar3->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar9 != (PhotonPeer *)0x0) {
            (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                      (pPVar9,CONCAT71((int7)((ulonglong)uVar6 >> 8),4),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar9->klass->vtable).SendOperation.method);
            return;
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Destroy
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    Theme::Theme_Deactivate(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._Visualization_k__BackingField;
    if (pTVar1 != (Theme *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
      pvVar3 = (void *)0x0;
      if (pGVar2 != (GameObject *)0x0) {
        pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Initialize
               (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  identifier = ThemeWorldObject_get_Identifier(this,(MethodInfo *)0x0);
  if (this_01 == (ThemeRepository *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = ThemeRepository::ThemeRepository_GetThemePrefab(this_01,identifier,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar2 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar2,
                               Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
  bVar3 = iRam_? != 0;
  (this->fields)._Visualization_k__BackingField = pTVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._Visualization_k__BackingField >> 0xc);
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
  pTVar2 = (this->fields)._Visualization_k__BackingField;
  if (pTVar2 == (Theme *)0x0) goto code_?;
  Theme::Theme_Initialize(pTVar2,(this->fields)._._.id,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._Visualization_k__BackingField;
  if (pTVar2 == (Theme *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pTVar2->fields).overrideSkyboxManager != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar8 == (MVGameControllerBase *)0x0) ||
       (this_00 = (pMVar8->fields).skyboxManager, this_00 == (SkyboxManager *)0x0))
    goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_00,(MethodInfo *)0x0);
  }
  LStack_9._list = (List_1_System_Object_ *)(pTVar2->fields).components;
  if ((List_1_ThemeComponent_ *)LStack_9._list != (List_1_ThemeComponent_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
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
    puStack_11 = (undefined1 *)
                 ((ulonglong)(uint)(((List_1_ThemeComponent_ *)LStack_9._list)->fields)._version <<
                 0x20);
    puStack_12 = (undefined *)0x0;
    LStack_9._8_8_ = puStack_11;
    LStack_9._current = (Object *)0x0;
    uStack_10 = 0;
    puStack_11 = (undefined1 *)&LStack_9;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar13 == 0) {
        return;
      }
      if (LStack_9._current == (Object *)0x0) break;
      (*(code *)(LStack_9._current)->klass[1]._0.image)
                (LStack_9._current,(LStack_9._current)->klass[1]._0.gc_desc);
    }
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_OnDataUpdate
               (ThemeWorldObject *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 == (Theme *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  woid = (this->fields)._._.id;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeSettings__SettingsSerialized);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (SettingsSerialized *)FUN_?(TypeInfo__ThemeSettings__SettingsSerialized);
  ThemeSettings::SettingsSerialized::SettingsSerialized__ctor(this_01,woid,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (pTVar1->fields)._Settings_k__BackingField = (SettingsWrapper *)this_01;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pTVar1->fields)._Settings_k__BackingField >> 0xc);
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
  (*(pTVar1->klass->vtable).__unknown_4.methodPtr)(pTVar1);
  this_00 = (pTVar1->fields)._Settings_k__BackingField;
  if (this_00 == (SettingsWrapper *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pTVar1->klass->vtable).__unknown_3.methodPtr)
            (pTVar1,(pTVar1->klass->vtable).__unknown_3.method);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_Reset
               (ThemeWorldObject *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).ThemeReset.methodPtr)
              (pTVar1,(pTVar1->klass->vtable).ThemeReset.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ThemeWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject__ctor
               (ThemeWorldObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
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
            (pGVar2,(String *)0x0,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._.gameObject = pGVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.gameObject >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pGVar2 = (this->fields)._.gameObject;
  if (pGVar2 != (GameObject *)0x0) {
    iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._.gameObject;
    (this->fields)._.goId = iVar8;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._.transform = pTVar9;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._.transform >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pMVar10 = MVWorldObjectClient::MVWorldObjectClient_GetTransformData
                         ((MVWorldObjectClient_TransformData *)auStack_1,
                          (MVWorldObjectClient *)this,data,(MethodInfo *)0x0);
      pTVar9 = (this->fields)._.transform;
      uStack_11._0_4_ = (pMVar10->rotation).y;
      uStack_11._4_4_ = (pMVar10->rotation).z;
      fStack_12 = (pMVar10->rotation).w;
      uStack_13._0_4_ = (pMVar10->position).x;
      uStack_13._4_4_ = (pMVar10->position).y;
      uStack_14 = *(undefined8 *)&(pMVar10->position).z;
      uStack_15._0_4_ = (pMVar10->rotation).y;
      uStack_15._4_4_ = (pMVar10->rotation).z;
      fStack_16 = fStack_12;
      if (pTVar9 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(pvVar17);
        pTVar9 = (this->fields)._.transform;
        if (pTVar9 != (Transform *)0x0) {
          uStack_20 = uStack_14._4_4_;
          uStack_21 = (undefined4)uStack_11;
          uStack_22 = uStack_11._4_4_;
          fStack_23 = fStack_16;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar17 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          (*pcRam_?)(pvVar17,&uStack_20);
          pGVar2 = (this->fields)._.gameObject;
          if (pGVar2 != (GameObject *)0x0) {
            pCVar24 = (Collider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar2,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                );
            bVar3 = iRam_? != 0;
            (this->fields)._.collider = pCVar24;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(this->fields)._.collider >> 0xc);
              lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
              do {
                uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                LOCK();
                bVar3 = uVar6 == *puVar7;
                if (bVar3) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
                      ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* String get_Identifier() */

String * Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_Identifier
                   (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_identifier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pSVar3 = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_00,(Object *)StringLiteral_identifier,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pSVar2 = pSVar3;
  if (pSVar3 != (String *)0x0) {
    pSVar2 = (String *)0x0;
    if (pSVar3->klass == pSRam0000000182db2460) {
      pSVar2 = pSVar3;
    }
    if (pSVar2 == (String *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
  }
  return pSVar2;
}


/* Dictionary`2[System.Object,System.Object] get_SettingsData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SettingsData
          (ThemeWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_settings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar1;
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (pDVar1,(Object *)StringLiteral_settings,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar2 = (code *)swi(3);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
      return pDVar1;
    }
  }
  return pDVar1;
}


/* Boolean get_SkyboxOverride() */

bool Assembly-CSharp.dll::ThemeWorldObject::ThemeWorldObject_get_SkyboxOverride
               (ThemeWorldObject *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._Visualization_k__BackingField;
  if (pTVar1 != (Theme *)0x0) {
    return (pTVar1->fields).overrideSkyboxManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

