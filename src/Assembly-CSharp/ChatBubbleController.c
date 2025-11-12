
/* Void ShowChatBubble(String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_ShowChatBubble
               (ChatBubbleController *this,String *text,int32_t anchorId,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
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
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).chatBubbleList;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,anchorId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar6 == (PrefabPool *)0x0) goto code_?;
        pCVar7 = (pPVar6->fields).chatBubble;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar9 = 
        ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
        ;
        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pCVar7,pTVar8,1,
                            ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                           );
        pDVar11 = (this->fields).chatBubbleList;
        if (pDVar11 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,anchorId,pOVar10,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                   ->klass->rgctx_data[0x22].method);
        pDVar11 = (this->fields).chatBubbleList;
        if ((pDVar11 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
           (pCVar7 = (ChatBubble *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,anchorId,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                               ), chatBubbleAnchor == (ChatAnchor *)0x0)) goto code_?;
        ChatAnchor::ChatAnchor_BindAttachedBubble(chatBubbleAnchor,pCVar7,(MethodInfo *)0x0);
      }
      pDVar11 = (this->fields).chatBubbleList;
      if ((pDVar11 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
         (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,anchorId,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                             ), pOVar10 != (Object *)0x0)) {
        if (*(char *)&pOVar10[6].monitor != '\0') {
          pDVar11 = (this->fields).chatBubbleList;
          if ((pDVar11 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
             (pCVar7 = (ChatBubble *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,anchorId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                 ), pCVar7 == (ChatBubble *)0x0)) goto code_?;
          ChatBubble::ChatBubble_BindMessageValue(pCVar7,text,(MethodInfo *)0x0);
        }
        pDVar11 = (this->fields).chatBubbleList;
        if (((pDVar11 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
            (pCVar7 = (ChatBubble *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,anchorId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                ), pCVar7 != (ChatBubble *)0x0)) &&
           (pTVar8 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar7,(MethodInfo *)0x0)
           , pTVar8 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_Start
               (ChatBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatBubbleManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
  this_00 = (Action_3_Object_Int32_Object_ *)
            FUN_?(TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
  mscorlib.dll::System::Action`3[Object,Int32,Object]::Action_3_Object_Int32_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<System::String,_int,_ChatAnchor>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble =
         (Action_3_String_Int32_ChatAnchor_ *)0x0;
  }
  else {
    pAVar1 = (Action_3_String_Int32_ChatAnchor_ *)
             FUN_?(pDVar2,TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
    if (pAVar1 == (Action_3_String_Int32_ChatAnchor_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble = pAVar1;
    pAVar3 = TypeInfo__System__Action<System::String,_int,_ChatAnchor>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__ChatBubbleManager->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__);
  bVar9 = iRam_? != 0;
  (this->fields).chatBubbleList = (Dictionary_2_System_Int32_ChatBubble_ *)this_01;
  if (bVar9) {
    uVar6 = (uint)((ulonglong)&(this->fields).chatBubbleList >> 0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}

