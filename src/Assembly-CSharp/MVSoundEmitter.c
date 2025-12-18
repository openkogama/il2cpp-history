
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Delete
               (MVSoundEmitter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).soundLoader;
  if (this_00 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_StopAndDestroySound(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (worldObjectClientManager,(this->fields)._._._.id,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Destroy
               (MVSoundEmitter *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  object = (this->fields).soundLoader;
  if (object == (SoundLoader *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)object,
             MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = 0;
  DStack_2._current._4_4_ = 0;
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  DStack_2._36_4_ = 0;
  QStack_3._q = (Queue_1_System_Object_ *)0x0;
  QStack_3._version = 0;
  QStack_3._index = 0;
  QStack_3._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar4 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar4 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pHStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_12 = 0;
    auStack_13._8_8_ = pDStack_11;
    pOStack_14 = (Object *)0x0;
    pHStack_6 = pHVar4;
    auStack_13._0_8_ = pHVar4;
code_?:
    while (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_13,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar16 = pOStack_14, bVar15 != 0) {
      ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar17 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      pOVar18 = pOVar16[1].klass;
      if (pOVar18 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar19 = (**(code **)&(pOVar18->_0).image[4].typeCount)(pOVar18,this_01), cVar19 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
      uStack_23 = 2;
      uStack_24 = 0;
      uStack_25 = 0;
      DStack_2._version = (undefined4)uStack_22;
      DStack_2._index = uStack_22._4_4_;
      DStack_2._current.key = 0;
      DStack_2._current._4_4_ = 0;
      DStack_2._current.value = (Object *)0x0;
      DStack_2._getEnumeratorRetType = 2;
      DStack_2._36_4_ = 0;
      pHStack_6 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_11 = &DStack_2;
      pDStack_21 = pDVar20;
      DStack_2._dictionary = pDVar20;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar15 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_22 = 0;
        uStack_24 = 0;
        pDStack_21 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_3._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_2._current.value + 0x10))->_freeList;
        uStack_22 = CONCAT44(0xffffffff,QStack_3._version);
        uStack_24 = 0;
        QStack_3._q = (Queue_1_System_Object_ *)DStack_2._current.value;
        QStack_3._index = 0xffffffff;
        QStack_3._currentElement = (Object *)0x0;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_3,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar16 = QStack_3._currentElement, bVar15 != 0) {
          ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_3._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar16,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar16;
        }
        QStack_3._index = 0xfffffffe;
        QStack_3._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar17,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar7 = func_?((((AsyncWWWManager__Class *)ppAVar17)->_0).byval_arg.data.dummy);
  uVar26 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(&QStack_3,uVar26);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar16[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar18 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar18 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar18 == (Object__Class *)0x0)) goto code_?;
    pOVar16[1].klass = pOVar18;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  goto code_?;
}


/* Single GetMaxDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMaxDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Single GetMinDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMinDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Initialize
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSoundEmitter__UpdateSound__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundLoader__UpdateSoundCallback);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AmbientAudio_Nature_kgm_amb_fore);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,(MethodInfo *)0x0);
  value = (List_1_System_Object_ *)0x0;
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                      ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                       (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pSVar8 = (this->fields).soundEmitterObject;
  if ((pSVar8 != (SoundEmitterObject *)0x0) &&
     (pSVar9 = (pSVar8->fields).soundCheck, pSVar9 != (SoundEmitterActiveCheck *)0x0)) {
    (pSVar9->fields).soundEmitter = this;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(pSVar9->fields).soundEmitter >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    (pSVar9->fields).initialized = 1;
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pSVar8 = (this->fields).soundEmitterObject;
    if ((pSVar8 != (SoundEmitterObject *)0x0) &&
       (pSVar10 = (this->fields).soundLoader, pSVar10 != (SoundLoader *)0x0)) {
      bVar6 = iRam_? != 0;
      (pSVar10->fields).audioSource = (pSVar8->fields).audioSource;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(pSVar10->fields).audioSource >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pSVar10 = (this->fields).soundLoader;
      this_02 = (SoundLoader_UpdateSoundCallback *)
                FUN_?(TypeInfo__SoundLoader__UpdateSoundCallback);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)this,
                 MethodInfo__MVSoundEmitter__UpdateSound__,(MethodInfo *)0x0);
      if (pSVar10 != (SoundLoader *)0x0) {
        bVar6 = iRam_? != 0;
        (pSVar10->fields).callback = this_02;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)&(pSVar10->fields).callback >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pSVar8 = (this->fields).soundEmitterObject;
        if (pSVar8 != (SoundEmitterObject *)0x0) {
          MVLogicObject::MVLogicObject_SetupCulling
                    ((MVLogicObject *)this,(pSVar8->fields).visualObject,
                     TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(this->fields)._._._.data;
          if (this_00 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_00,(Object *)StringLiteral_url,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (iVar11 < 0) {
              pSVar10 = (this->fields).soundLoader;
              if (pSVar10 == (SoundLoader *)0x0) goto code_?;
              bVar6 = iRam_? != 0;
              (pSVar10->fields).url = StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
              if (bVar6) {
                uVar2 = (uint)((ulonglong)&(pSVar10->fields).url >> 0xc);
                uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                do {
                  uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                  puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                  LOCK();
                  bVar6 = uVar4 == *puVar5;
                  if (bVar6) {
                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
              }
            }
            else {
              pDVar12 = (this->fields)._._._.data;
              if ((pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                 (pLVar13 = (List_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      (pDVar12,(Object *)StringLiteral_url,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      ), pLVar13 == (List_1_System_Object_ *)0x0))
              goto code_?;
              pLVar14 = value;
              if (pLVar13->klass == pLRam0000000182dc50c0) {
                pLVar14 = pLVar13;
              }
              if (pLVar14 == (List_1_System_Object_ *)0x0) {
                FUN_?(pLVar13);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pLVar14 = value;
              if (pLVar13->klass == pLRam0000000182dc50c0) {
                pLVar14 = pLVar13;
              }
              if (*(int *)&(pLVar14->fields)._items < 1) {
                return;
              }
              pDVar12 = (this->fields)._._._.data;
              pSVar10 = (this->fields).soundLoader;
              if ((pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
                 (method_00 = 
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 , pLVar13 = (List_1_System_Object_ *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar12,(Object *)StringLiteral_url,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pSVar10 == (SoundLoader *)0x0)) goto code_?;
              if (pLVar13 != (List_1_System_Object_ *)0x0) {
                if (pLVar13->klass == pLRam0000000182dc50c0) {
                  value = pLVar13;
                }
                if (value == (List_1_System_Object_ *)0x0) {
                  FUN_?(pLVar13);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
              }
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
              UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
                        ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)pSVar10,
                         value,method_00);
            }
            pSVar10 = (this->fields).soundLoader;
            if (pSVar10 != (SoundLoader *)0x0) {
              SoundLoader::SoundLoader_LoadSound(pSVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_InputStateUpdateCallback
               (MVSoundEmitter *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((logicInputState != LogicInputState__Enum_Cold) &&
     (logicInputState != LogicInputState__Enum_Hot)) {
    pSVar1 = (this->fields).soundEmitterObject;
    if (pSVar1 == (SoundEmitterObject *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (pSVar1->fields).audioSource;
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
    if (pAVar3 != (AudioSource *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pAVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
        bVar4 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar1 = (this->fields).soundEmitterObject;
          if ((pSVar1 == (SoundEmitterObject *)0x0) ||
             (pAVar3 = (pSVar1->fields).audioSource, pAVar3 == (AudioSource *)0x0))
          goto code_?;
          bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (pAVar3,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
          }
        }
        bVar4 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          pSVar1 = (this->fields).soundEmitterObject;
          if ((pSVar1 == (SoundEmitterObject *)0x0) ||
             (pAVar3 = (pSVar1->fields).audioSource, pAVar3 == (AudioSource *)0x0))
          goto code_?;
          bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (pAVar3,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_OnDataUpdate
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_url);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (iVar1,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    pSVar2 = (this->fields).soundLoader;
    if (pSVar2 == (SoundLoader *)0x0) goto code_?;
    bVar3 = iRam_? != 0;
    (pSVar2->fields).url = StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pSVar2->fields).url >> 0xc);
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
  else {
    pDVar8 = (this->fields)._._._.data;
    if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pLVar9 = (List_1_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_url,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pLVar9 == (List_1_System_Object_ *)0x0)) goto code_?;
    value = (List_1_System_Object_ *)0x0;
    pLVar10 = value;
    if (pLVar9->klass == pLRam0000000182dc50c0) {
      pLVar10 = pLVar9;
    }
    if (pLVar10 == (List_1_System_Object_ *)0x0) {
      FUN_?(pLVar9);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pLVar10 = (List_1_System_Object_ *)0x0;
    if (pLVar9->klass == pLRam0000000182dc50c0) {
      pLVar10 = pLVar9;
    }
    pDVar8 = (this->fields)._._._.data;
    if (*(int *)&(pLVar10->fields)._items < 1) {
      if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar8,(Object *)StringLiteral_url,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar12 == (Object *)0x0)) goto code_?;
      pOVar13 = (Object *)0x0;
      if ((List_1_System_Object___Class *)pOVar12->klass == pLRam0000000182dc50c0) {
        pOVar13 = pOVar12;
      }
      if (pOVar13 == (Object *)0x0) {
        FUN_?(pOVar12);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pOVar13 = (Object *)0x0;
      if ((List_1_System_Object___Class *)pOVar12->klass == pLRam0000000182dc50c0) {
        pOVar13 = pOVar12;
      }
      if (0 < *(int *)&pOVar13[1].klass) {
        return;
      }
      pDVar8 = (this->fields)._._._.data;
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar8,(Object *)StringLiteral_url,
                 (Object *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore,
                 CONCAT31((int3)((uint)in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar8 = (this->fields)._._._.data;
      pSVar2 = (this->fields).soundLoader;
      if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (method_00 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
         , pLVar9 = (List_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar8,(Object *)StringLiteral_url,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
      if (pLVar9 != (List_1_System_Object_ *)0x0) {
        if (pLVar9->klass == pLRam0000000182dc50c0) {
          value = pLVar9;
        }
        if (value == (List_1_System_Object_ *)0x0) {
          FUN_?(pLVar9);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
    else {
      pSVar2 = (this->fields).soundLoader;
      if ((pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (method_00 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
         , pLVar9 = (List_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar8,(Object *)StringLiteral_url,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pSVar2 == (SoundLoader *)0x0)) goto code_?;
      if (pLVar9 != (List_1_System_Object_ *)0x0) {
        if (pLVar9->klass == pLRam0000000182dc50c0) {
          value = pLVar9;
        }
        if (value == (List_1_System_Object_ *)0x0) {
          FUN_?(pLVar9);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
    UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
              ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)pSVar2,value,
               method_00);
  }
  pSVar2 = (this->fields).soundLoader;
  if (pSVar2 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_LoadSound(pSVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean ShouldPlay() */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_ShouldPlay
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_mute);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  apOStackX_8[0] = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)StringLiteral_mute,apOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar1 != 0) {
      if (apOStackX_8[0] == (Object *)0x0) goto code_?;
      if ((apOStackX_8[0]->klass->_0).element_class !=
          *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(apOStackX_8[0]);
        pcVar2 = (code *)swi(3);
        bVar1 = (*pcVar2)();
        return bVar1;
      }
      if (*(char *)&apOStackX_8[0][1].klass != '\0') {
        return 0;
      }
    }
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      bVar1 = FUN_?(1,TypeInfo__IInputSignalReceiver);
      return bVar1;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_UpdateSound
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_soundEmitterObject_is_null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_audioSource_for_soundEmitterObje);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_loop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).soundEmitterObject;
  pOStackX_8 = (Object *)0x0;
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
  if (pSVar1 != (SoundEmitterObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = (this->fields).soundEmitterObject;
      if (pSVar1 == (SoundEmitterObject *)0x0) goto code_?;
      this_00 = (pSVar1->fields).audioSource;
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
      if (this_00 != (AudioSource *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pDVar2 = (this->fields)._._._.data;
          if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar2,(Object *)StringLiteral_volume,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar3 != (Object *)0x0)) {
            if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar3,lRam_?);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                      (this_00,*(float *)&pOVar3[1].klass,(MethodInfo *)0x0);
            pDVar2 = (this->fields)._._._.data;
            if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
               (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar2,(Object *)StringLiteral_pitch,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pOVar3 != (Object *)0x0)) {
              if ((pOVar3->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar3,lRam_?);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                        (this_00,*(float *)&pOVar3[1].klass,(MethodInfo *)0x0);
              pDVar2 = (this->fields)._._._.data;
              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::
                        Dictionary_2_System_Object_System_Object__TryGetValue
                                  (pDVar2,(Object *)StringLiteral_loop,&pOStackX_8,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if (bVar5 != 0) {
                  if (pOStackX_8 == (Object *)0x0) goto code_?;
                  if ((pOStackX_8->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOStackX_8);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                            (this_00,*(bool *)&pOStackX_8[1].klass,(MethodInfo *)0x0);
                }
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_rolloffMode
                          (this_00,AudioRolloffMode__Enum_Custom,(MethodInfo *)0x0);
                pDVar2 = (this->fields)._._._.data;
                if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                   (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar2,(Object *)StringLiteral_range,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pOVar3 != (Object *)0x0)) {
                  if ((pOVar3->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar3,lRam_?);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar6 = *(int *)&pOVar3[1].klass;
                  fVar7 = _UNK_?;
                  if (((iVar6 != 0) && (fVar7 = _UNK_?, iVar6 != 1)) &&
                     (fVar7 = _UNK_?, iVar6 != 2)) {
                    fVar7 = _UNK_?;
                  }
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                            (this_00,fVar7,(MethodInfo *)0x0);
                  pDVar2 = (this->fields)._._._.data;
                  if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (pDVar2,(Object *)StringLiteral_range,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         ), pOVar3 != (Object *)0x0)) {
                    if ((pOVar3->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar3,lRam_?);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar6 = *(int *)&pOVar3[1].klass;
                    fVar7 = _UNK_?;
                    if (((iVar6 != 0) && (fVar7 = _UNK_?, iVar6 != 1)) &&
                       (fVar7 = _UNK_?, iVar6 != 2)) {
                      fVar7 = _UNK_?;
                    }
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                    AudioSource_set_maxDistance(this_00,fVar7,(MethodInfo *)0x0);
                    bVar5 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                    bVar8 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                            AudioSource_get_isPlaying(this_00,(MethodInfo *)0x0);
                    if (bVar5 != bVar8) {
                      bVar5 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                      if (bVar5 != 0) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                                  (this_00,(MethodInfo *)0x0);
                        return;
                      }
                      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                                (this_00,(MethodInfo *)0x0);
                    }
                    return;
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_audioSource_for_soundEmitterObje,(MethodInfo *)0x0);
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_soundEmitterObject_is_null,(MethodInfo *)0x0);
  return;
}


/* MVSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter__ctor
               (MVSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SoundEmitterObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SoundLoader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (SoundLoader *)FUN_?(TypeInfo__SoundLoader);
  SoundLoader::SoundLoader__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).soundLoader = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).soundLoader >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar6->fields).mvSoundEmitterPrefab,
             worldObjects,(MethodInfo *)0x0);
  piVar8 = &(this->fields)._._.interactionFlags;
  *piVar8 = *piVar8 | 0x1008000;
  pSVar9 = (SoundEmitterObject *)(this->fields)._._.component;
  if (pSVar9 == (SoundEmitterObject *)0x0) {
    (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
  }
  else {
    bVar10 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar9->klass)->_1).naturalAligment < bVar10) ||
       ((((ObjectPrefab__Class *)pSVar9->klass)->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      FUN_?(pSVar9);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->fields).soundEmitterObject = pSVar9;
    bVar10 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSVar9->klass)->_1).naturalAligment < bVar10) ||
       ((((ObjectPrefab__Class *)pSVar9->klass)->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      FUN_?(pSVar9);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).soundEmitterObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
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

