
/* Void AccessoryCreatedInternalCallback(Int32, AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AccessoryCreatedInternalCallback
               (AccessoryLoader *this,int32_t doneId,AvatarAccessory *avatarAccessory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).requests;
  if (pDVar1 != (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,doneId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Item_int_
                       );
    pDVar1 = (this->fields).requests;
    if (pDVar1 != (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,doneId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Remove_int_
                );
      if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[1].klass, pOVar3 != (Object__Class *)0x0)) {
        uVar4._0_2_ = (pOVar3->_0).byval_arg.attrs;
        uVar4._2_1_ = (pOVar3->_0).byval_arg.type;
        uVar4._3_5_ = *(undefined5 *)&(pOVar3->_0).byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pOVar3->_0).namespaze)((pOVar3->_0).element_class,avatarAccessory,uVar4);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddRequest(AccessoryLoader+AccessoryLoaderRequest, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AddRequest
               (AccessoryLoader *this,AccessoryLoader_AccessoryLoaderRequest *accessoryLoaderRequest
               ,Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).requests;
  key = (this->fields).id;
  value = (Object *)
          FUN_?(
                       TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                       );
  iVar1 = iRam_?;
  value[1].klass = (Object__Class *)accessoryCreatedExternalCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
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
  value[1].monitor = (MonitorData *)accessoryLoaderRequest;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&value[1].monitor >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (!bVar6);
  }
  if ((this_00 !=
       (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
        *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                 ->klass->rgctx_data[0x22].method),
     accessoryLoaderRequest != (AccessoryLoader_AccessoryLoaderRequest *)0x0)) {
    AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
              (accessoryLoaderRequest,(MethodInfo *)0x0);
    (this->fields).id = (this->fields).id + 1;
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_Destroy(AccessoryLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).requests;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    uStack_8 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    DStack_12._version = (undefined4)uStack_8;
    DStack_12._index = uStack_8._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_12._dictionary = pDVar1;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                             ), bVar13 != 0) {
      if (DStack_12._current.value == (Object *)0x0) goto code_?;
      object = (Object *)DStack_12._current.value[1].monitor;
      if (object == (Object *)0x0) goto code_?;
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
      object[1].monitor = (MonitorData *)0x0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).requests;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                );
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void LoadAccessory(String, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_LoadAccessory
               (AccessoryLoader *this,String *url,
               Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_AvatarAccessory>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).requests;
  if (pDVar1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
    lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = 0;
  DStack_13._version = (undefined4)uStack_9;
  DStack_13._index = uStack_9._4_4_;
  DStack_13._current.key = 0;
  DStack_13._current._4_4_ = 0;
  DStack_13._current.value = (Object *)0x0;
  DStack_13._getEnumeratorRetType = 2;
  DStack_13._36_4_ = 0;
  pDStack_4 = pDVar1;
  DStack_13._dictionary = pDVar1;
code_?:
  bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (&DStack_13,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                    );
  if (bVar14 == 0) {
    iVar15 = (this->fields).id;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<int,_AvatarAccessory>);
    uVar6 = 0;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
               ,(MethodInfo *)0x0);
    this_02 = (AccessoryLoader_AccessoryLoaderRequest *)
              FUN_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
                           );
    (this_02->fields).id = iVar15;
    (this_02->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this_02->fields).accessoryCreatedCallback >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar16 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar16 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar16 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar17 = iRam_?;
    (this_02->fields).subUrl = url;
    if (iVar17 != 0) {
      uVar3 = (uint)((ulonglong)&(this_02->fields).subUrl >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar16 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar16 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar16 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields).requests;
    iVar15 = (this->fields).id;
    value = (Object *)
            FUN_?(
                         TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                         );
    value[1].klass = (Object__Class *)accessoryCreatedExternalCallback;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(value + 1) >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar16 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar16 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar16 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar17 = iRam_?;
    value[1].monitor = (MonitorData *)this_02;
    if (iVar17 != 0) {
      uVar3 = (uint)((ulonglong)&value[1].monitor >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      uVar6 = (ulonglong)(uVar3 & 0x3f);
      do {
        uVar16 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar16 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar16 | 1L << uVar6;
        }
        UNLOCK();
      } while (!bVar8);
    }
    if (this_00 !=
        (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar15,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar6 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                 ->klass->rgctx_data[0x22].method);
      AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                (this_02,(MethodInfo *)0x0);
      (this->fields).id = (this->fields).id + 1;
      return;
    }
    goto code_?;
  }
  if (DStack_13._current.value != (Object *)0x0) {
    if (DStack_13._current.value[1].monitor != (MonitorData *)0x0) goto code_?;
    goto code_?;
  }
  goto code_?;
code_?:
  pSVar18 = *(String **)(DStack_13._current.value[1].monitor + 0x20);
  if (pSVar18 == url) {
    return;
  }
  if ((((pSVar18 != (String *)0x0) && (url != (String *)0x0)) &&
      ((pSVar18->fields)._stringLength == (url->fields)._stringLength)) &&
     (bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar18->fields)._firstChar,
                         (uint8_t *)&(url->fields)._firstChar,
                         (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0), bVar14 != 0
     )) {
    return;
  }
  goto code_?;
}


/* AccessoryLoader() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader__ctor(AccessoryLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).requests =
       (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).requests >> 0xc);
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
  return;
}

