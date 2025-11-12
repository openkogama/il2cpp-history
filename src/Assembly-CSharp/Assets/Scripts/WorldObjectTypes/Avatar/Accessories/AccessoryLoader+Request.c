
/* Void Callback(AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+Request::AccessoryLoader_Request_Callback
               (AccessoryLoader_Request *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryCreatedCallback;
  if (pAVar1 != (Action_1_AvatarAccessory_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,avatarAccessory,(pAVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+Request::AccessoryLoader_Request_Destroy
               (AccessoryLoader_Request *this,MethodInfo *method)

{
  object = (this->fields).accessoryLoaderRequest;
  if (object == (AccessoryLoader_AccessoryLoaderRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (object->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(object->fields).accessoryCreatedCallback >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)object,
             MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
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
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current._4_4_ = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._36_4_ = 0;
  QStack_8._q = (Queue_1_System_Object_ *)0x0;
  QStack_8._version = 0;
  QStack_8._index = 0;
  QStack_8._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar9 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar9 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pHStack_10 >> 0xc);
      lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar4 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar2 = uVar6 == *puVar4;
        if (bVar2) {
          *puVar4 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar9->fields)._version << 0x20);
    uStack_13 = 0;
    auStack_14._8_8_ = pDStack_12;
    pOStack_15 = (Object *)0x0;
    pHStack_10 = pHVar9;
    auStack_14._0_8_ = pHVar9;
code_?:
    while (bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_14,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar17 = pOStack_15, bVar16 != 0) {
      ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar18 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar17 == (Object *)0x0) goto code_?;
      pOVar19 = pOVar17[1].klass;
      if (pOVar19 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar20 = (**(code **)&(pOVar19->_0).image[4].typeCount)(pOVar19,this_01), cVar20 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar21 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar21 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pDStack_22 >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar4 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar2 = uVar6 == *puVar4;
          if (bVar2) {
            *puVar4 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      uStack_23 = (ulonglong)(uint)(pDVar21->fields)._version;
      uStack_24 = 2;
      uStack_25 = 0;
      uStack_26 = 0;
      DStack_7._version = (undefined4)uStack_23;
      DStack_7._index = uStack_23._4_4_;
      DStack_7._current.key = 0;
      DStack_7._current._4_4_ = 0;
      DStack_7._current.value = (Object *)0x0;
      DStack_7._getEnumeratorRetType = 2;
      DStack_7._36_4_ = 0;
      pHStack_10 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_12 = &DStack_7;
      pDStack_22 = pDVar21;
      DStack_7._dictionary = pDVar21;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_7,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar16 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_7._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_23 = 0;
        uStack_25 = 0;
        pDStack_22 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_7._current.value;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&pDStack_22 >> 0xc);
          lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar4 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar2 = uVar6 == *puVar4;
            if (bVar2) {
              *puVar4 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_7._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_8._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_7._current.value + 0x10))->_freeList;
        uStack_23 = CONCAT44(0xffffffff,QStack_8._version);
        uStack_25 = 0;
        QStack_8._q = (Queue_1_System_Object_ *)DStack_7._current.value;
        QStack_8._index = 0xffffffff;
        QStack_8._currentElement = (Object *)0x0;
        while (bVar16 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_8,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar17 = QStack_8._currentElement, bVar16 != 0) {
          ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_8._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar17,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar17;
        }
        QStack_8._index = 0xfffffffe;
        QStack_8._currentElement = (Object *)0x0;
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
  ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar18,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar11 = func_?((((AsyncWWWManager__Class *)ppAVar18)->_0).byval_arg.data.dummy);
  uVar27 = func_?(*(undefined8 *)(lVar11 + 0xc0),4);
  FUN_?(&QStack_8,uVar27);
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
                          ((Delegate *)pOVar17[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar19 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar19 = (Object__Class *)
                  FUN_?(unaff_RDI,
                                TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar18 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar19 == (Object__Class *)0x0)) goto code_?;
    pOVar17[1].klass = pOVar19;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(pOVar17 + 1) >> 0xc);
      lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar4 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar2 = uVar6 == *puVar4;
        if (bVar2) {
          *puVar4 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  goto code_?;
}

