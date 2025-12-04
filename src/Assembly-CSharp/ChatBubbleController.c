
/* Void ShowChatBubble(String, String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_ShowChatBubble
               (ChatBubbleController *this,String *text,String *senderName,int32_t anchorId,
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
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
  if (pGVar1 == (GameObject *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((pGVar1->fields)._.m_CachedPtr == (void *)0x0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).chatBubbleList;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,anchorId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        lVar4 = FUN_?();
        if (lVar4 == 0) goto DAT_?;
        pOVar5 = *(Object **)(lVar4 + 0x500);
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar7 = 
        ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
        ;
        this_01 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            (pOVar5,pTVar6,1,
                             ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                            );
        if (this_01 == (Component *)0x0) goto DAT_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pTVar6 == (Transform *)0x0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uStack_10._0_4_ = (pVVar8->oneVector).x;
        uStack_10._4_4_ = (pVVar8->oneVector).y;
        fStack_11 = (pVVar8->oneVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar12 = (pTVar6->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar12,&uStack_10);
        if (senderName == (String *)0x0) goto code_?;
        uVar14 = (*(senderName->klass->vtable).GetHashCode.methodPtr)
                          (senderName,(senderName->klass->vtable).GetHashCode.method);
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(uVar14);
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        H = (float)(*pcRam_?)(0,_UNK_?);
        pMVar15 = this_01[1].monitor;
        pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_HSVToRGB_1
                            (&CStack_17,H,_UNK_?,_UNK_?,1,(MethodInfo *)0x0);
        if (pMVar15 == (MonitorData *)0x0) goto code_?;
        CStack_17.r = pCVar16->r;
        CStack_17.g = pCVar16->g;
        CStack_17.b = pCVar16->b;
        CStack_17.a = pCVar16->a;
        (**(code **)(*(longlong *)pMVar15 + 0x2a8))
                  (pMVar15,&CStack_17,*(undefined8 *)(*(longlong *)pMVar15 + 0x2b0));
        plVar18 = this_01[1].fields._.m_CachedPtr;
        if (plVar18 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar18 + 0x558))(plVar18,senderName,*(undefined8 *)(*plVar18 + 0x560));
        pDVar19 = (this->fields).chatBubbleList;
        if (pDVar19 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,anchorId,(Object *)this_01,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar7 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                   ->klass->rgctx_data[0x22].method);
        pDVar19 = (this->fields).chatBubbleList;
        if ((pDVar19 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
           (pCVar20 = (ChatBubble *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,anchorId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                ), chatBubbleAnchor == (ChatAnchor *)0x0))
        goto code_?;
        ChatAnchor::ChatAnchor_BindAttachedBubble
                  (chatBubbleAnchor,pCVar20,senderName,(MethodInfo *)0x0);
      }
      pDVar19 = (this->fields).chatBubbleList;
      if ((pDVar19 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,anchorId,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                              ), pOVar5 != (Object *)0x0)) {
        if (*(char *)&pOVar5[8].monitor != '\0') {
          pDVar19 = (this->fields).chatBubbleList;
          if ((pDVar19 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
             (pCVar20 = (ChatBubble *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,anchorId,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                  ), pCVar20 == (ChatBubble *)0x0)) goto DAT_?;
          ChatBubble::ChatBubble_BindMessageValue(pCVar20,text,(MethodInfo *)0x0);
        }
        pDVar19 = (this->fields).chatBubbleList;
        if (((pDVar19 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
            (pCVar20 = (ChatBubble *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,anchorId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                 ), pCVar20 != (ChatBubble *)0x0)) &&
           (pTVar6 = (Transform *)
                      ChatBubble::ChatBubble_get_RectTransform(pCVar20,(MethodInfo *)0x0),
           pTVar6 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_Start
               (ChatBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatBubbleController__ShowChatBubble_System__String__System__String__int__ChatAnchor_
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
  this_00 = (Action_4_Object_Object_Int32_Object_ *)
            FUN_?(TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>)
  ;
  mscorlib.dll::System::Action`4[Object,Object,Int32,Object]::
  Action_4_Object_Object_Int32_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatBubbleController__ShowChatBubble_System__String__System__String__int__ChatAnchor_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble =
         (Action_4_String_String_Int32_ChatAnchor_ *)0x0;
  }
  else {
    pAVar1 = (Action_4_String_String_Int32_ChatAnchor_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>
                          );
    if (pAVar1 == (Action_4_String_String_Int32_ChatAnchor_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble = pAVar1;
    pAVar3 = TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<System::String,_System::String,_int,_ChatAnchor>)
    ;
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

