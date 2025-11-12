
/* Void Handle() */

void Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys_Handle(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__KeyCode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NicklasHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Successfully_invoked_hot_key_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_invocation_of_hot_key_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__NicklasHotkeys->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__NicklasHotkeys);
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__NicklasHotkeys->static_fields->keyBindings;
  if (EStack_1.klass == (Enum__Class *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&EStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  EStack_1.monitor =
       (MonitorData *)(ulonglong)*(uint *)&((EStack_1.klass)->_0).byval_arg.field_0xc;
  uStack_9 = 2;
  auStack_10._8_8_ = EStack_1.monitor;
  uStack_11 = 0;
  pOStack_12 = (Object *)0x0;
  uStack_13._0_4_ = 2;
  uStack_13._4_4_ = 0;
  uStack_14 = 0;
  puStack_15 = auStack_10;
  auStack_10._0_8_ = EStack_1.klass;
  while( true ) {
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                       auStack_10,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__MoveNext__
                      );
    pOVar17 = pOStack_12;
    uVar8 = uStack_11;
    if (bVar16 == 0) {
      return;
    }
    uVar18 = (undefined4)uStack_11;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) break;
    pcRam_? = pcVar2;
    cVar19 = (*pcRam_?)(uVar8 & 0xffffffff);
    if (cVar19 != '\0') {
      if (pOVar17 != (Object *)0x0) {
        cVar19 = (*(code *)pOVar17[1].monitor)(pOVar17[4].klass);
        EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
        uStack_3 = CONCAT44(uStack_3._4_4_,uVar18);
        EStack_1.klass = (Enum__Class *)TypeInfo__UnityEngine__KeyCode;
        if (cVar19 == '\0') {
          pSVar20 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Failed_invocation_of_hot_key_,pSVar20,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar20,(MethodInfo *)0x0);
        }
        else {
          pSVar20 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Successfully_invoked_hot_key_,pSVar20,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar20,(MethodInfo *)0x0);
        }
        return;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar21 = func_?(&UNK_?);
  FUN_?(uVar21,0);
  goto code_?;
}


/* Boolean PushNotification(NotificationType, Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys_PushNotification
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
  if (this != (NotificationsManager *)0x0) {
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this,type,data,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* NicklasHotkeys() */

void Assembly-CSharp.dll::NicklasHotkeys::NicklasHotkeys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Add_UnityEngine__KeyCode__System__Func<UnityEngine::KeyCode,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<UnityEngine::KeyCode,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NicklasHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__NicklasHotkeys____c____cctor_b__3_0_UnityEngine__KeyCode_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NicklasHotkeys____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Dictionary__
            );
  if (*(int *)&(TypeInfo__NicklasHotkeys____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  pNVar1 = TypeInfo__NicklasHotkeys____c->static_fields->__9;
  value = (Object *)FUN_?(TypeInfo__System__Func<UnityEngine::KeyCode,_bool>);
  pMVar2 = MethodInfo__NicklasHotkeys____c____cctor_b__3_0_UnityEngine__KeyCode_;
  bVar3 = iRam_? != 0;
  value[1].klass =
       (Object__Class *)
       MethodInfo__NicklasHotkeys____c____cctor_b__3_0_UnityEngine__KeyCode_->virtualMethodPointer;
  value[2].monitor = (MonitorData *)pMVar2;
  value[2].klass = (Object__Class *)pNVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(value + 2) >> 0xc);
    in_R9 = (ulonglong)(uVar4 & 0x3f);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << in_R9;
      }
      UNLOCK();
    } while (!bVar3);
  }
  uVar8 = pMVar2->parameters_count;
  value[4].klass = (Object__Class *)value;
  if ((pMVar2->flags & 0x10) == 0) {
    if (pNVar1 == (NicklasHotkeys_c *)0x0) {
      uVar9 = func_?();
      FUN_?(uVar9,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else if (uVar8 == 1) {
    pMVar11 = (MonitorData *)&UNK_?;
    goto code_?;
  }
  value[4].klass = value[2].klass;
  pMVar11 = (MonitorData *)value[1].klass;
code_?:
  value[1].monitor = pMVar11;
  value[3].monitor = (MonitorData *)FUN_?;
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2c,value,
             (InsertionBehavior__Enum)CONCAT71((int7)(in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::KeyCode,_System::Func<UnityEngine::KeyCode,_bool>_>__Add_UnityEngine__KeyCode__System__Func<UnityEngine::KeyCode,_bool>_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__NicklasHotkeys->static_fields->keyBindings =
       (Dictionary_2_UnityEngine_KeyCode_System_Func_2_UnityEngine_KeyCode_Boolean_ *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__NicklasHotkeys->static_fields >> 0xc);
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
  return;
}

