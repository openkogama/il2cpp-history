
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_OnDataUpdate
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate !=
      (Action *)0x0) {
    pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* MVGamePassProgressionDataObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
               (MVGamePassProgressionDataObject *this,
               Dictionary_2_System_Object_System_Object_ *data,
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


/* Boolean get_EnableProgression() */

bool Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_get_EnableProgression
               (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassProgressionEnabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_gamePassProgressionEnabled,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* GamePassProgressionDataObjectShared get_GamePassProgressionDataObjectShared() */

GamePassProgressionDataObjectShared *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassProgressionDataObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.data;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GamePassProgressionDataObjectShared *)(*pcVar1)();
    return pGVar2;
  }
  pSVar3 = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_00,(Object *)StringLiteral_gamePassProgressionDataObject,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar4 = 
  MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
  ;
  value = (String *)0x0;
  if (pSVar3 != (String *)0x0) {
    if (pSVar3->klass == pSRam0000000182db2460) {
      value = pSVar3;
    }
    if (value == (String *)0x0) {
      FUN_?(pSVar3);
      pcVar1 = (code *)swi(3);
      pGVar2 = (GamePassProgressionDataObjectShared *)(*pcVar1)();
      return pGVar2;
    }
  }
  if ((
      MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectShared>_System__String_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  lVar5 = *(longlong *)(pMVar4->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar5 + 0x38) == 0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar5 + 0x38) == 0) {
      FUN_?(lVar5);
    }
  }
  lVar6 = **(longlong **)(lVar5 + 0x38);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pTVar7 = (Type *)0x0;
  type = pTVar7;
  if (lVar6 != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(lVar6,1);
    type = (Type *)FUN_?(lVar6 + 0x20);
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                     (value,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_?(lVar5);
  }
  if ((pOVar8 != (Object *)0x0) &&
     (pTVar7 = (Type *)FUN_?(pOVar8,lVar5), pTVar7 == (Type *)0x0)) {
    FUN_?(pOVar8,lVar5);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GamePassProgressionDataObjectShared *)(*pcVar1)();
    return pGVar2;
  }
  return (GamePassProgressionDataObjectShared *)pTVar7;
}


/* GamePassProgressionDataObjectSharedValidator get_GamePassProgressionDataObjectSharedValidator()
    */

GamePassProgressionDataObjectSharedValidator *
Assembly-CSharp.dll::MVGamePassProgressionDataObject::
MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectSharedValidator
          (MVGamePassProgressionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassProgressionDataObjectVal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey
                    (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return (GamePassProgressionDataObjectSharedValidator *)0x0;
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar3 = (ObscuredString *)
           Extensions::Extensions_GetObscuredType
                     (pDVar1,StringLiteral_gamePassProgressionDataObjectVal,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  value = (ObscuredString *)0x0;
  this_00 = value;
  if (pOVar3 != (ObscuredString *)0x0) {
    if ((Object__Class *)pOVar3->klass ==
        (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
      this_00 = pOVar3;
    }
    if (this_00 == (ObscuredString *)0x0) {
      FUN_?(pOVar3);
      pcVar4 = (code *)swi(3);
      pGVar5 = (GamePassProgressionDataObjectSharedValidator *)(*pcVar4)();
      return pGVar5;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (ObscuredString *)0x0) {
    value = (ObscuredString *)
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
            ObscuredString_InternalDecrypt(this_00,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
  ;
  if ((
      MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator>_System__String_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  lVar7 = *(longlong *)(pMVar6->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar7 + 0x38) == 0) {
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar7 + 0x38) == 0) {
      FUN_?(lVar7);
    }
  }
  lVar8 = **(longlong **)(lVar7 + 0x38);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pTVar9 = (Type *)0x0;
  type = pTVar9;
  if (lVar8 != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar8 = FUN_?(lVar8,1);
    type = (Type *)FUN_?(lVar8 + 0x20);
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                     ((String *)value,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_?(lVar7);
  }
  if ((pOVar10 != (Object *)0x0) &&
     (pTVar9 = (Type *)FUN_?(pOVar10,lVar7), pTVar9 == (Type *)0x0)) {
    FUN_?(pOVar10,lVar7);
    pcVar4 = (code *)swi(3);
    pGVar5 = (GamePassProgressionDataObjectSharedValidator *)(*pcVar4)();
    return pGVar5;
  }
  return (GamePassProgressionDataObjectSharedValidator *)pTVar9;
}


/* Void set_GamePassProgressionDataObjectShared(GamePassProgressionDataObjectShared) */

void Assembly-CSharp.dll::MVGamePassProgressionDataObject::
     MVGamePassProgressionDataObject_set_GamePassProgressionDataObjectShared
               (MVGamePassProgressionDataObject *this,GamePassProgressionDataObjectShared *value,
               MethodInfo *method)

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
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassProgressionDataObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)value,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_gamePassProgressionDataObject,(Object *)value_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    (*(this->klass->vtable).PartialUpdateWOData.methodPtr)
              (this,this_00,(this->klass->vtable).PartialUpdateWOData.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).operationRequests,
       pMVar3 != (MVNetworkGame_OperationRequests *)0x0)) {
      uVar4 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,(this->fields)._._.id,this_00,0);
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
      value_01 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar6 = (undefined7)((ulonglong)method_00 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x16,value_01,(InsertionBehavior__Enum)uVar5,method_00);
        uVar4 = CONCAT71(uVar6,0x12);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x12,(Object *)this_00,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar7 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar7 != (PhotonPeer *)0x0) {
          (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                    (pPVar7,CONCAT71((int7)((ulonglong)uVar4 >> 8),4),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar7->klass->vtable).SendOperation.method);
          return;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

